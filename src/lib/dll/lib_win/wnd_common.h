#pragma once

#include "..\common.h"

#include <commctrl.h>

enum ECtrlFlag
{
	CtrlFlag_AnchorLeft = 0x01,
	CtrlFlag_AnchorTop = 0x02,
	CtrlFlag_AnchorRight = 0x04,
	CtrlFlag_AnchorBottom = 0x08,
};

enum EWndKind
{
	WndKind_WndNormal = 0x00,
	WndKind_WndFix,
	WndKind_WndAspect,
	WndKind_WndPopup,
	WndKind_WndDialog,
	WndKind_WndMdi,
	WndKind_WndMdiChild,
	WndKind_WndDock,
	WndKind_WndDockChild,
	WndKind_Draw = 0x80,
	WndKind_Btn,
	WndKind_Chk,
	WndKind_Radio,
	WndKind_Edit,
	WndKind_EditMulti,
	WndKind_List,
	WndKind_Combo,
	WndKind_Label,
	WndKind_Group,
	WndKind_Calendar,
	WndKind_Progress,
	WndKind_Rebar,
	WndKind_Status,
	WndKind_Toolbar,
	WndKind_Trackbar,
	WndKind_LabelLink,
	WndKind_ListView,
	WndKind_Pager,
	WndKind_Tab,
	WndKind_Tree,
	WndKind_SplitX,
	WndKind_SplitY,
	WndKind_ScrollX,
	WndKind_ScrollY,
	WndKind_WndLayered = 0x10000,
	WndKind_WndNoMinimize = 0x20000,
};

struct SWndBase
{
	SClass Class;
	U8* Name;
	EWndKind Kind;
	HWND WndHandle;
	WNDPROC DefaultWndProc;
	U64 CtrlFlag;
	U16 DefaultX;
	U16 DefaultY;
	U16 DefaultWidth;
	U16 DefaultHeight;
	Bool RedrawEnabled;
	void* Children;
};

struct SWnd
{
	SWndBase WndBase;
	U16 MinWidth;
	U16 MinHeight;
	U16 MaxWidth;
	U16 MaxHeight;
	void* OnClose;
	void* OnActivate;
	void* OnPushMenu;
	void* OnDropFiles;
	void* OnResize;
	Bool ModalLock;
};

struct SBtn
{
	SWndBase WndBase;
	void* OnPush;
};

struct SChk
{
	SWndBase WndBase;
	void* OnPush;
};

struct SRadio
{
	SWndBase WndBase;
	void* OnPush;
};

struct SEditBase
{
	SWndBase WndBase;
	void* OnChange;
	void* OnFocus;
};

struct SEdit
{
	SEditBase EditBase;
};

struct SEditMulti
{
	SEditBase EditBase;
};

struct SList
{
	SWndBase WndBase;
	void* OnSel;
	void* OnMouseDoubleClick;
};

struct SCombo
{
	SWndBase WndBase;
};

struct SComboList
{
	SWndBase WndBase;
};

struct SLabel
{
	SWndBase WndBase;
};

struct SGroup
{
	SWndBase WndBase;
};

struct SCalendar
{
	SWndBase WndBase;
};

struct SProgress
{
	SWndBase WndBase;
};

struct SRebar
{
	SWndBase WndBase;
};

struct SStatus
{
	SWndBase WndBase;
};

struct SToolbar
{
	SWndBase WndBase;
};

struct STrackbar
{
	SWndBase WndBase;
};

struct SLabelLink
{
	SWndBase WndBase;
};

struct SListView
{
	SWndBase WndBase;
	void* OnSel;
	void* OnMouseDoubleClick;
	void* OnMouseClick;
	void* OnMoveNode;
	Bool Draggable;
	Bool Dragging;
	HIMAGELIST DraggingImage;
};

struct SPager
{
	SWndBase WndBase;
};

struct STab
{
	SWndBase WndBase;
	void* OnSel;
};

struct STree
{
	SWndBase WndBase;
	Bool Draggable;
	Bool AllowDraggingToRoot;
	HTREEITEM DraggingItem;
	void* OnSel;
	void* OnMoveNode;
};

struct STreeNode
{
	SClass Class;
	HWND WndHandle;
	HTREEITEM Item;
};

struct SSplitX
{
	SWndBase WndBase;
};

struct SSplitY
{
	SWndBase WndBase;
};

struct SScroll
{
	SWndBase WndBase;
};

struct SMenu
{
	SClass Class;
	HMENU MenuHandle;
	void* Children;
};

struct STabOrder
{
	SClass Class;
	void* Ctrls;
};

SClass* IncWndRef(SClass* wnd);
void CommandAndNotify(HWND wnd, UINT msg, WPARAM w_param, LPARAM l_param);
SWndBase* ToWnd(HWND wnd);
BOOL CALLBACK ResizeCallback(HWND wnd, LPARAM l_param);
const U8* NToRN(const Char* str);
const U8* RNToN(const Char* str);

// TODO:
/*
EXPORT_CPP void _setOnKeyPress(void* onKeyPressFunc);
EXPORT_CPP void* _getOnKeyPress();
EXPORT_CPP S64 _msgBox(SClass* parent, const U8* text, const U8* title, S64 icon, S64 btn);
EXPORT_CPP void* _openFileDialog(SClass* parent, const U8* filter, S64 defaultFilter);
EXPORT_CPP void* _openFileDialogMulti(SClass* parent, const U8* filter, S64 defaultFilter);
EXPORT_CPP void* _saveFileDialog(SClass* parent, const U8* filter, S64 defaultFilter, const U8* defaultExt);
EXPORT_CPP void _fileDialogDir(const U8* defaultDir);
EXPORT_CPP S64 _colorDialog(SClass* parent, S64 default_color);
EXPORT_CPP void _setClipboardStr(const U8* str);
EXPORT_CPP void* _getClipboardStr();
EXPORT_CPP void _getCaretPos(S64* x, S64* y);
EXPORT_CPP void _screenSize(S64* width, S64* height);
EXPORT_CPP void _target(SClass* draw_ctrl);
EXPORT_CPP Bool _key(S64 key);
EXPORT_CPP SClass* _makeDraw(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool equalMagnification);
EXPORT_CPP SClass* _makeDrawReduced(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool equalMagnification, S64 split);
EXPORT_CPP SClass* _makeDrawEditable(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height);
EXPORT_CPP void _drawDtor(SClass* me_);
EXPORT_CPP void _drawPaint(SClass* me_);
EXPORT_CPP void _drawShowCaret(SClass* me_, S64 height, SClass* font);
EXPORT_CPP void _drawHideCaret(SClass* me_);
EXPORT_CPP void _drawMoveCaret(SClass* me_, S64 x, S64 y);
EXPORT_CPP void _drawMouseCapture(SClass* me_, Bool enabled);
EXPORT_CPP SClass* _makeBtn(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP void _btnSetChk(SClass* me_, Bool chk);
EXPORT_CPP Bool _btnGetChk(SClass* me_);
EXPORT_CPP SClass* _makeChk(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeRadio(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeEdit(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _editReadonly(SClass* me_, Bool enabled);
EXPORT_CPP void _editRightAligned(SClass* me_, Bool enabled);
EXPORT_CPP void _editSetSel(SClass* me_, S64 start, S64 len);
EXPORT_CPP SClass* _makeEditMulti(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _editMultiAddText(SClass* me_, const U8* text);
EXPORT_CPP SClass* _makeList(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _listClear(SClass* me_);
EXPORT_CPP void _listAdd(SClass* me_, const U8* text);
EXPORT_CPP void _listIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _listDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listLen(SClass* me_);
EXPORT_CPP void _listSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listGetSel(SClass* me_);
EXPORT_CPP void _listSetText(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void* _listGetText(SClass* me_, S64 idx);
EXPORT_CPP SClass* _makeCombo(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _comboClear(SClass* me_);
EXPORT_CPP void _comboAdd(SClass* me_, const U8* text);
EXPORT_CPP void _comboIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _comboDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _comboLen(SClass* me_);
EXPORT_CPP void _comboSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _comboGetSel(SClass* me_);
EXPORT_CPP void _comboSetText(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void* _comboGetText(SClass* me_, S64 idx);
EXPORT_CPP SClass* _makeLabel(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeGroup(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeCalendar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeProgress(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeRebar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeStatus(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeToolbar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTrackbar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeLabelLink(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeListView(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool multi_sel, const void* small_imgs, const void* large_imgs);
EXPORT_CPP void _listViewClear(SClass* me_);
EXPORT_CPP void _listViewAdd(SClass* me_, const U8* text, S64 img);
EXPORT_CPP void _listViewIns(SClass* me_, S64 idx, const U8* text, S64 img);
EXPORT_CPP void _listViewDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listViewLen(SClass* me_);
EXPORT_CPP void _listViewAddColumn(SClass* me_, const U8* text);
EXPORT_CPP void _listViewInsColumn(SClass* me_, S64 column, const U8* text);
EXPORT_CPP void _listViewDelColumn(SClass* me_, S64 column);
EXPORT_CPP S64 _listViewLenColumn(SClass* me_);
EXPORT_CPP void _listViewClearAll(SClass* me_);
EXPORT_CPP void _listViewSetText(SClass* me_, S64 idx, S64 column, const U8* text, S64 img);
EXPORT_CPP void* _listViewGetText(SClass* me_, S64* img, S64 idx, S64 column);
EXPORT_CPP void _listViewAdjustWidth(SClass* me_);
EXPORT_CPP void _listViewSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listViewGetSel(SClass* me_);
EXPORT_CPP void _listViewSetSelMulti(SClass* me_, S64 idx, Bool value);
EXPORT_CPP Bool _listViewGetSelMulti(SClass* me_, S64 idx);
EXPORT_CPP void _listViewStyle(SClass* me_, S64 list_view_style);
EXPORT_CPP void _listViewDraggable(SClass* me_, bool enabled);
EXPORT_CPP void _listViewSetChk(SClass* me_, S64 idx, bool value);
EXPORT_CPP Bool _listViewGetChk(SClass* me_, S64 idx);
EXPORT_CPP SClass* _makePager(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTab(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _tabAdd(SClass* me_, const U8* text);
EXPORT_CPP S64 _tabLen(SClass* me_);
EXPORT_CPP void _tabSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _tabGetSel(SClass* me_);
EXPORT_CPP void _tabGetPosInner(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP SClass* _makeTree(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _treeClear(SClass* me_);
EXPORT_CPP void _treeExpand(SClass* me_, Bool expand);
EXPORT_CPP SClass* _treeRoot(SClass* me_, SClass* me2);
EXPORT_CPP void _treeDraggable(SClass* me_, Bool enabled);
EXPORT_CPP void _treeAllowDraggingToRoot(SClass* me_, Bool enabled);
EXPORT_CPP void _treeSetSel(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeGetSel(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodeAddChild(SClass* me_, SClass* me2, const U8* name);
EXPORT_CPP SClass* _treeNodeInsChild(SClass* me_, SClass* me2, SClass* node, const U8* name);
EXPORT_CPP void _treeNodeDelChild(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeNodeFirstChild(SClass* me_, SClass* me2);
EXPORT_CPP void* _treeNodeGetName(SClass* me_);
EXPORT_CPP SClass* _treeNodeNext(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodePrev(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodeParent(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _makeSplitX(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeSplitY(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeScrollX(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeScrollY(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _scrollSetState(SClass* me_, S64 min, S64 max, S64 page, S64 pos);
EXPORT_CPP void _scrollSetScrollPos(SClass* me_, S64 pos);

EXPORT_CPP SClass* _makeMenu(SClass* me_);
EXPORT_CPP void _menuDtor(SClass* me_);
EXPORT_CPP void _menuAdd(SClass* me_, S64 id, const U8* text);
EXPORT_CPP void _menuAddLine(SClass* me_);
EXPORT_CPP void _menuAddPopup(SClass* me_, const U8* text, const U8* popup);
EXPORT_CPP void _menuIns(SClass* me_, S64 targetId, S64 id, const U8* text);
EXPORT_CPP void _menuInsPopup(SClass* me_, const U8* target, const U8* text, const U8* popup);
EXPORT_CPP void _menuDel(SClass* me_, S64 id);
EXPORT_CPP void _menuDelPopup(SClass* me_, const U8* popup);
EXPORT_CPP SClass* _makePopup(SClass* me_);

EXPORT_CPP SClass* _makeTabOrder(SClass* me_, U8* ctrls);
EXPORT_CPP Bool _tabOrderChk(SClass* me_, S64 key, S64 shiftCtrl);
*/
