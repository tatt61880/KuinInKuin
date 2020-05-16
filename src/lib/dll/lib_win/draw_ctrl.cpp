#include "draw_ctrl.h"

static SClass* MakeDrawImpl(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchor_x, S64 anchor_y, Bool equal_magnification, Bool editable, int split);
static LRESULT CALLBACK WndProcDraw(HWND wnd, UINT msg, WPARAM w_param, LPARAM l_param);

EXPORT_CPP void _drawDtor(SClass* me_)
{
	SWndBase* me2 = reinterpret_cast<SWndBase*>(me_);
	SDraw* me3 = reinterpret_cast<SDraw*>(me_);
	if (me3->DrawBuf != NULL)
		Draw::FinDrawBuf(me3->DrawBuf);
	DestroyWindow(me2->WndHandle);
}

EXPORT_CPP void _drawPaint(SClass* me_)
{
	InvalidateRect(reinterpret_cast<SWndBase*>(me_)->WndHandle, NULL, FALSE);
}

EXPORT_CPP void _drawHideCaret(SClass* me_)
{
	UNUSED(me_);
	DestroyCaret();
}

EXPORT_CPP void _drawMouseCapture(SClass* me_, Bool enabled)
{
	if (enabled)
		SetCapture(reinterpret_cast<SWndBase*>(me_)->WndHandle);
	else
		ReleaseCapture();
}

EXPORT_CPP void _drawMoveCaret(SClass* me_, S64 x, S64 y)
{
	HWND wnd_handle = reinterpret_cast<SWndBase*>(me_)->WndHandle;
	if (x == -1 && y == -1)
		SetCaretPos(-9999, -9999); // Hide the caret.
	else
		SetCaretPos(static_cast<int>(x), static_cast<int>(y));
	HIMC imc = ImmGetContext(wnd_handle);
	COMPOSITIONFORM form;
	form.dwStyle = CFS_POINT;
	if (x == -1 && y == -1)
	{
		form.ptCurrentPos.x = 0;
		form.ptCurrentPos.y = 0;
	}
	else
	{
		form.ptCurrentPos.x = static_cast<LONG>(x);
		form.ptCurrentPos.y = static_cast<LONG>(y);
	}
	if (imc)
		ImmSetCompositionWindow(imc, &form);
	ImmReleaseContext(wnd_handle, imc);
}

EXPORT_CPP void _drawShowCaret(SClass* me_, S64 height, SClass* font)
{
	HWND wnd_handle = reinterpret_cast<SWndBase*>(me_)->WndHandle;
	CreateCaret(wnd_handle, NULL, 2, static_cast<int>(height));
	ShowCaret(wnd_handle);
	if (font != NULL)
	{
		LOGFONT log_font;
		HIMC imc = ImmGetContext(wnd_handle);
		GetObject(Draw::ToFontHandle(font), sizeof(LOGFONT), &log_font);
		if (imc)
			ImmSetCompositionFont(imc, &log_font);
		ImmReleaseContext(wnd_handle, imc);
	}
}

EXPORT_CPP SClass* _makeDraw(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool equalMagnification)
{
	return MakeDrawImpl(me_, parent, x, y, width, height, anchorX, anchorY, equalMagnification, False, 1);
}

EXPORT_CPP SClass* _makeDrawEditable(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height)
{
	return MakeDrawImpl(me_, parent, x, y, width, height, 0, 0, False, True, 1);
}

EXPORT_CPP SClass* _makeDrawReduced(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool equalMagnification, S64 split)
{
	return MakeDrawImpl(me_, parent, x, y, width, height, anchorX, anchorY, equalMagnification, False, static_cast<int>(split));
}

static SClass* MakeDrawImpl(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchor_x, S64 anchor_y, Bool equal_magnification, Bool editable, int split)
{
	SWndBase* me2 = reinterpret_cast<SWndBase*>(me_);
	SDraw* me3 = reinterpret_cast<SDraw*>(me_);
	SetCtrlParam(me2, reinterpret_cast<SWndBase*>(parent), WndKind_Draw, WC_STATIC, 0, WS_VISIBLE | WS_CHILD | SS_NOTIFY | WS_CLIPCHILDREN, x, y, width, height, L"", WndProcDraw, anchor_x, anchor_y);
	me3->EqualMagnification = equal_magnification;
	me3->DrawTwice = True;
	me3->Enter = False;
	me3->Editable = editable;
	me3->WheelX = 0;
	me3->WheelY = 0;
	if (equal_magnification)
	{
		RECT rect;
		GetWindowRect(me2->WndHandle, &rect);
		int width2 = static_cast<int>(rect.right - rect.left);
		int height2 = static_cast<int>(rect.bottom - rect.top);
		me3->DrawBuf = Draw::MakeDrawBuf(width2, height2, 1, me2->WndHandle, NULL, editable);
	}
	else
		me3->DrawBuf = Draw::MakeDrawBuf(static_cast<int>(width), static_cast<int>(height), split, me2->WndHandle, NULL, editable);
	me3->OnPaint = NULL;
	me3->OnMouseDownL = NULL;
	me3->OnMouseDownR = NULL;
	me3->OnMouseDownM = NULL;
	me3->OnMouseDoubleClick = NULL;
	me3->OnMouseUpL = NULL;
	me3->OnMouseUpR = NULL;
	me3->OnMouseUpM = NULL;
	me3->OnMouseMove = NULL;
	me3->OnMouseEnter = NULL;
	me3->OnMouseLeave = NULL;
	me3->OnMouseWheelX = NULL;
	me3->OnMouseWheelY = NULL;
	me3->OnFocus = NULL;
	me3->OnKeyDown = NULL;
	me3->OnKeyUp = NULL;
	me3->OnKeyChar = NULL;
	me3->OnScrollX = NULL;
	me3->OnScrollY = NULL;
	me3->OnSetMouseImg = NULL;
	return me_;
}

static LRESULT CALLBACK WndProcDraw(HWND wnd, UINT msg, WPARAM w_param, LPARAM l_param)
{
	SWndBase* wnd2 = ToWnd(wnd);
	SDraw* wnd3 = reinterpret_cast<SDraw*>(wnd2);
	ASSERT(wnd2->Kind == WndKind_Draw);
	switch (msg)
	{
		case WM_PAINT:
			if (wnd3->OnPaint != NULL)
			{
				RECT rect;
				GetClientRect(wnd, &rect);
				PAINTSTRUCT ps;
				BeginPaint(wnd, &ps);
				Draw::ActiveDrawBuf(wnd3->DrawBuf);
				if (wnd3->DrawTwice)
				{
					Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(rect.right - rect.left)), reinterpret_cast<void*>(static_cast<S64>(rect.bottom - rect.top)), wnd3->OnPaint);
					wnd3->DrawTwice = False;
				}
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(rect.right - rect.left)), reinterpret_cast<void*>(static_cast<S64>(rect.bottom - rect.top)), wnd3->OnPaint);
				EndPaint(wnd, &ps);
			}
			else
				ValidateRect(wnd, NULL);
			return 0;
		case WM_LBUTTONDOWN:
			SetFocus(wnd);
			if (wnd3->OnMouseDownL != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseDownL);
			return 0;
		case WM_LBUTTONDBLCLK:
			SetFocus(wnd);
			if (wnd3->OnMouseDownL != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseDownL);
			if (wnd3->OnMouseDoubleClick != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseDoubleClick);
			return 0;
		case WM_LBUTTONUP:
			if (wnd3->OnMouseUpL != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseUpL);
			return 0;
		case WM_RBUTTONDOWN:
		case WM_RBUTTONDBLCLK:
			if (wnd3->OnMouseDownR != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseDownR);
			return 0;
		case WM_RBUTTONUP:
			if (wnd3->OnMouseUpR != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseUpR);
			return 0;
		case WM_MBUTTONDOWN:
		case WM_MBUTTONDBLCLK:
			if (wnd3->OnMouseDownM != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseDownM);
			return 0;
		case WM_MBUTTONUP:
			if (wnd3->OnMouseUpM != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseUpM);
			return 0;
		case WM_MOUSEMOVE:
			if (!wnd3->Enter)
			{
				wnd3->Enter = True;
				if (wnd3->OnMouseEnter != NULL)
					Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseEnter);
			}
			if (wnd3->OnMouseMove != NULL)
				Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(LOWORD(l_param)))), reinterpret_cast<void*>(static_cast<S64>(static_cast<S16>(HIWORD(l_param)))), wnd3->OnMouseMove);
			{
				TRACKMOUSEEVENT track_mouse_event;
				track_mouse_event.cbSize = sizeof(track_mouse_event);
				track_mouse_event.dwFlags = TME_LEAVE;
				track_mouse_event.dwHoverTime = HOVER_DEFAULT;
				track_mouse_event.hwndTrack = wnd;
				TrackMouseEvent(&track_mouse_event);
			}
			return 0;
		case WM_MOUSELEAVE:
			wnd3->Enter = False;
			if (wnd3->OnMouseLeave != NULL)
				Call1Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), wnd3->OnMouseLeave);
			return 0;
		case WM_MOUSEWHEEL:
			if (wnd3->OnMouseWheelY != NULL)
			{
				S64 wheel = 0;
				wnd3->WheelY += static_cast<S16>(HIWORD(w_param));
				while (wnd3->WheelY <= -WHEEL_DELTA)
				{
					wheel--;
					wnd3->WheelY += WHEEL_DELTA;
				}
				while (wnd3->WheelY >= WHEEL_DELTA)
				{
					wheel++;
					wnd3->WheelY -= WHEEL_DELTA;
				}
				if (wheel != 0)
					Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(-wheel), wnd3->OnMouseWheelY);
			}
			return 0;
		case WM_MOUSEHWHEEL:
			if (wnd3->OnMouseWheelX != NULL)
			{
				S64 wheel = 0;
				wnd3->WheelX += static_cast<S16>(HIWORD(w_param));
				while (wnd3->WheelX <= -WHEEL_DELTA)
				{
					wheel--;
					wnd3->WheelX += WHEEL_DELTA;
				}
				while (wnd3->WheelX >= WHEEL_DELTA)
				{
					wheel++;
					wnd3->WheelX -= WHEEL_DELTA;
				}
				if (wheel != 0)
					Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(wheel), wnd3->OnMouseWheelX);
			}
			return 0;
		case WM_SETFOCUS:
			if (wnd3->OnFocus != NULL)
				Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<U64>(True)), wnd3->OnFocus);
			return 0;
		case WM_KILLFOCUS:
			if (wnd3->OnFocus != NULL)
				Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<U64>(False)), wnd3->OnFocus);
			return 0;
		case WM_KEYDOWN:
			{
				U64 shiftCtrl = 0;
				shiftCtrl |= (GetKeyState(VK_SHIFT) & 0x8000) != 0 ? 1 : 0;
				shiftCtrl |= (GetKeyState(VK_CONTROL) & 0x8000) != 0 ? 2 : 0;
				if (wnd3->OnKeyDown != NULL)
					Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<U64>(w_param)), reinterpret_cast<void*>(shiftCtrl), wnd3->OnKeyDown);
			}
			return 0;
		case WM_KEYUP:
			{
				U64 shiftCtrl = 0;
				shiftCtrl |= (GetKeyState(VK_SHIFT) & 0x8000) != 0 ? 1 : 0;
				shiftCtrl |= (GetKeyState(VK_CONTROL) & 0x8000) != 0 ? 2 : 0;
				if (wnd3->OnKeyUp != NULL)
					Call3Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<U64>(w_param)), reinterpret_cast<void*>(shiftCtrl), wnd3->OnKeyUp);
			}
			return 0;
		case WM_CHAR:
			if (wnd3->OnKeyChar != NULL)
				Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<U64>(w_param)), wnd3->OnKeyChar);
			return 0;
		case WM_SIZE:
			if (wnd3->EqualMagnification)
			{
				int width = static_cast<int>(static_cast<S16>(LOWORD(l_param)));
				int height = static_cast<int>(static_cast<S16>(HIWORD(l_param)));
				if (width > 0 && height > 0)
				{
					wnd3->DrawBuf = Draw::MakeDrawBuf(width, height, 1, wnd2->WndHandle, wnd3->DrawBuf, wnd3->Editable);
					wnd3->DrawTwice = True;
				}
			}
			return 0;
		case WM_HSCROLL:
		case WM_VSCROLL:
			{
				HWND scroll = reinterpret_cast<HWND>(l_param);
				SCROLLINFO info;
				info.cbSize = sizeof(SCROLLINFO);
				info.fMask = SIF_RANGE | SIF_PAGE | SIF_POS;
				info.nTrackPos = 0;
				GetScrollInfo(scroll, SB_CTL, &info);
				switch (LOWORD(w_param))
				{
					case SB_LINEUP:
						info.nPos--;
						break;
					case SB_LINEDOWN:
						info.nPos++;
						break;
					case SB_PAGEUP:
						info.nPos -= info.nPage;
						break;
					case SB_PAGEDOWN:
						info.nPos += info.nPage;
						break;
					case SB_TOP:
						info.nPos = info.nMin;
						break;
					case SB_BOTTOM:
						info.nPos = info.nMax;
						break;
					case SB_THUMBPOSITION:
					case SB_THUMBTRACK:
						info.nPos = (int)HIWORD(w_param);
						break;
				}
				if (info.nPos < info.nMin)
					info.nPos = info.nMin;
				if (info.nPos > info.nMax)
					info.nPos = info.nMax;
				SetScrollInfo(scroll, SB_CTL, &info, TRUE);
				if (msg == WM_HSCROLL)
				{
					if (wnd3->OnScrollX != NULL)
						Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(info.nPos)), wnd3->OnScrollX);
				}
				else
				{
					if (wnd3->OnScrollY != NULL)
						Call2Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), reinterpret_cast<void*>(static_cast<S64>(info.nPos)), wnd3->OnScrollY);
				}
			}
			return 0;
		case WM_SETCURSOR:
			if (wnd3->OnSetMouseImg)
			{
				S64 img = (S64)Call1Asm(IncWndRef(reinterpret_cast<SClass*>(wnd2)), wnd3->OnSetMouseImg);
				SetCursor(LoadCursor(NULL, MAKEINTRESOURCE(img)));
				return 1;
			}
			break;
	}
	return CallWindowProc(wnd2->DefaultWndProc, wnd, msg, w_param, l_param);
}
