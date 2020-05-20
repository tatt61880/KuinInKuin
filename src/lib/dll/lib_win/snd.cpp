#include "snd.h"

#include "wav_decoder.h"
#include <dsound.h>

#pragma comment(lib, "dsound.lib")

static const S64 BufSize = 2;

struct SSnd
{
	SClass Class;
	LPDIRECTSOUNDBUFFER8 SndBuf;
	HANDLE Event[2];
	S64 SizePerSec;
	S64 LoopPos;
	double EndPos;
	DWORD Freq;
	Bool Streaming;
	Bool StreamingPlayingFirstBuffer;
	U8 StreamingFinishCnt;
	double Volume;
	void* Handle;
	void(*FuncClose)(void*);
	Bool(*FuncRead)(void*, void*, S64, S64);
	void(*FuncSetPos)(void*, S64);
	S64(*FuncGetPos)(void*);
};

// The main volume controls these.
struct SListSnd
{
	SListSnd* Next;
	SSnd* Snd;
};

static HWND Wnd = nullptr;
static LPDIRECTSOUND8 Device = nullptr;
static SListSnd* ListSndTop = nullptr;
static SListSnd* ListSndBottom = nullptr;
static HMODULE DllOgg = nullptr;
static void* (*LoadOgg)(const Char* path, S64* channel, S64* samples_per_sec, S64* bits_per_sample, S64* total, void(**func_close)(void*), Bool(**func_read)(void*, void*, S64, S64), void(**func_set_pos)(void*, S64), S64(**func_get_pos)(void*)) = nullptr;
static double MainVolume = 1.0;

static LRESULT CALLBACK WndProc(HWND wnd, UINT msg, WPARAM w_param, LPARAM l_param);
static Bool StrCmpIgnoreCase(const Char* a, const Char* b);
static Bool StreamCopy(SSnd* me_, S64 id);

EXPORT_CPP void _sndInit()
{
	const HINSTANCE instance = (HINSTANCE)GetModuleHandle(nullptr);
	{
		WNDCLASSEX wnd_class;
		wnd_class.cbSize = sizeof(WNDCLASSEX);
		wnd_class.style = 0;
		wnd_class.lpfnWndProc = WndProc;
		wnd_class.cbClsExtra = 0;
		wnd_class.cbWndExtra = 0;
		wnd_class.hInstance = instance;
		wnd_class.hIcon = nullptr;
		wnd_class.hCursor = nullptr;
		wnd_class.hbrBackground = nullptr;
		wnd_class.lpszMenuName = nullptr;
		wnd_class.lpszClassName = L"KuinSndClass";
		wnd_class.hIconSm = nullptr;
		RegisterClassEx(&wnd_class);
	}
	Wnd = CreateWindowEx(0, L"KuinSndClass", L"", 0, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, nullptr, nullptr, instance, nullptr);

	if (FAILED(DirectSoundCreate8(nullptr, &Device, nullptr)))
	{
		Device = nullptr;
		return;
	}
	if (FAILED(Device->SetCooperativeLevel(Wnd, DSSCL_PRIORITY)))
	{
		Device = nullptr;
		return;
	}
	ListSndTop = nullptr;
	ListSndBottom = nullptr;
	LoadOgg = nullptr;

	DllOgg = LoadLibrary(L"data/d1000.knd");
	if (DllOgg != nullptr)
	{
		LoadOgg = reinterpret_cast<void* (*)(const Char * path, S64 * channel, S64 * samples_per_sec, S64 * bits_per_sample, S64 * total, void(**func_close)(void*), Bool(**func_read)(void*, void*, S64, S64), void(**func_set_pos)(void*, S64), S64(**func_get_pos)(void*))>(GetProcAddress(DllOgg, "LoadOgg"));
		if (LoadOgg == nullptr)
		{
			FreeLibrary(DllOgg);
			DllOgg = nullptr;
		}
	}
}

EXPORT_CPP void _sndFin()
{
	if (DllOgg != nullptr)
		FreeLibrary(DllOgg);
	ASSERT(ListSndTop == nullptr);
	if (Device != nullptr)
		Device->Release();
	if (Wnd != nullptr)
		SendMessage(Wnd, WM_DESTROY, 0, 0);
}

EXPORT_CPP void _sndUpdate()
{
	SListSnd* ptr = ListSndTop;
	while (ptr != nullptr)
	{
		SSnd* snd = ptr->Snd;
		if (snd->Streaming && snd->StreamingFinishCnt < 2 && _sndPlaying(reinterpret_cast<SClass*>(snd))) // Repeat until the buffer is completely cleared.
		{
			S64 dsize = snd->SizePerSec * BufSize / 2;
			DWORD pos = 0;
			snd->SndBuf->GetCurrentPosition(&pos, nullptr);
			if (snd->StreamingPlayingFirstBuffer)
			{
				if (pos < dsize)
				{
					if (StreamCopy(snd, 1))
						snd->StreamingFinishCnt++;
					snd->StreamingPlayingFirstBuffer = False;
				}
			}
			else
			{
				if (pos >= dsize)
				{
					if (StreamCopy(snd, 0))
						snd->StreamingFinishCnt++;
					snd->StreamingPlayingFirstBuffer = True;
				}
			}
		}
		ptr = ptr->Next;
	}
}

EXPORT_CPP void _sndDtor(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	if (me2->SndBuf != nullptr)
	{
		me2->SndBuf->Stop();
		me2->SndBuf->Release();
	}
	if (me2->Handle != nullptr)
		me2->FuncClose(me2->Handle);
	{
		SListSnd* ptr = ListSndTop;
		SListSnd* ptr2 = nullptr;
		while (ptr != nullptr)
		{
			if (ptr->Snd == me2)
			{
				if (ptr2 == nullptr)
					ListSndTop = ptr->Next;
				else
					ptr2->Next = ptr->Next;
				if (ListSndBottom == ptr)
					ListSndBottom = ptr2;
				FreeMem(ptr);
				break;
			}
			ptr2 = ptr;
			ptr = ptr->Next;
		}
	}
}

EXPORT_CPP void _sndFreq(SClass* me_, double value)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	THROWDBG(value < 0.1 || 2.0 < value, 0xe9170006);
	me2->SndBuf->SetFrequency(static_cast<DWORD>(static_cast<double>(me2->Freq) * value));
}

EXPORT_CPP double _sndGetPos(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	if (me2->Streaming)
	{
		double result;
		DWORD stream_pos = 0;
		S64 dsize = me2->SizePerSec * BufSize / 2;
		me2->SndBuf->GetCurrentPosition(&stream_pos, nullptr);
		S64 offset = (me2->StreamingPlayingFirstBuffer && stream_pos < dsize || !me2->StreamingPlayingFirstBuffer && stream_pos >= dsize) ? dsize : 0;
		result = static_cast<double>(me2->FuncGetPos(me2->Handle) - dsize * 2 + offset + stream_pos % dsize) / static_cast<double>(me2->SizePerSec);
		if (result > me2->EndPos || me2->StreamingFinishCnt > 0)
			result = me2->EndPos;
		return result;
	}
	else
	{
		DWORD pos = 0;
		me2->SndBuf->GetCurrentPosition(&pos, nullptr);
		return static_cast<double>(pos) / static_cast<double>(me2->SizePerSec);
	}
}

EXPORT_CPP double _sndLen(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	return me2->EndPos;
}

EXPORT_CPP void _sndPan(SClass* me_, double value)
{
	THROWDBG(value < -1.0 || 1.0 < value, 0xe9170006);
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	me2->SndBuf->SetPan(static_cast<LONG>(value * 10000.0));
}

EXPORT_CPP void _sndPlay(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	me2->LoopPos = -1;
	me2->SndBuf->Play(0, 0, me2->Streaming ? DSBPLAY_LOOPING : 0);
}

EXPORT_CPP Bool _sndPlaying(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	DWORD status;
	me2->SndBuf->GetStatus(&status);
	return (status & DSBSTATUS_PLAYING) != 0;
}

EXPORT_CPP void _sndPlayLoop(SClass* me_, double loopPos)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	THROWDBG(!me2->Streaming && loopPos != 0.0 || loopPos < 0.0 || me2->EndPos <= loopPos, 0xe9170006);
	me2->LoopPos = static_cast<S64>(loopPos * (double)me2->SizePerSec);
	me2->SndBuf->Play(0, 0, DSBPLAY_LOOPING);
}

EXPORT_CPP void _sndSetPos(SClass* me_, double value)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	THROWDBG(value < 0.0 || me2->EndPos <= value, 0xe9170006);
	if (me2->Streaming)
	{
		me2->FuncSetPos(me2->Handle, static_cast<S64>(value * static_cast<double>(me2->SizePerSec)));
		me2->SndBuf->SetCurrentPosition(0);
		me2->StreamingPlayingFirstBuffer = True;
		me2->StreamingFinishCnt = 0;
		StreamCopy(me2, 0);
	}
	else
		me2->SndBuf->SetCurrentPosition(static_cast<DWORD>(value * static_cast<double>(me2->SizePerSec)));
}

EXPORT_CPP void _sndStop(SClass* me_)
{
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	me2->SndBuf->Stop();
}

EXPORT_CPP void _sndVolume(SClass* me_, double value)
{
	THROWDBG(value < 0.0 || 1.0 < value, 0xe9170006);
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);
	me2->Volume = value;
	value *= MainVolume;
	double v = 1.0 - value;
	me2->SndBuf->SetVolume(static_cast<LONG>(-v * v * 10000.0));
}

EXPORT_CPP double _getMainVolume()
{
	return MainVolume;
}

EXPORT_CPP SClass* _makeSnd(SClass* me_, const U8* path, Bool streaming)
{
	THROWDBG(path == nullptr, EXCPT_ACCESS_VIOLATION);
	if (Device == nullptr)
		THROW(0xe9170009);
	SSnd* me2 = reinterpret_cast<SSnd*>(me_);

	WAVEFORMATEX pcmwf;
	DSBUFFERDESC desc;
	Bool success = False;
	for (; ; )
	{
		{
			S64 channel = 0;
			S64 samples_per_sec = 0;
			S64 bits_per_sample = 0;
			S64 total = 0;
			const Char* path2 = reinterpret_cast<const Char*>(path + 0x10);
			int len = static_cast<int>(wcslen(path2));
			if (StrCmpIgnoreCase(path2 + len - 4, L".wav"))
			{
				me2->Handle = LoadWav(path2, &channel, &samples_per_sec, &bits_per_sample, &total, &me2->FuncClose, &me2->FuncRead, &me2->FuncSetPos, &me2->FuncGetPos);
				if (me2->Handle == nullptr)
					break;
			}
			else if (StrCmpIgnoreCase(path2 + len - 4, L".ogg"))
			{
				if (LoadOgg == nullptr)
					break;
				me2->Handle = LoadOgg(path2, &channel, &samples_per_sec, &bits_per_sample, &total, &me2->FuncClose, &me2->FuncRead, &me2->FuncSetPos, &me2->FuncGetPos);
				if (me2->Handle == nullptr)
					break;
			}
			else
			{
				THROWDBG(True, 0xe9170006);
				break;
			}
			{
				pcmwf.wFormatTag = WAVE_FORMAT_PCM;
				pcmwf.nChannels = static_cast<WORD>(channel);
				pcmwf.nSamplesPerSec = static_cast<DWORD>(samples_per_sec);
				pcmwf.nAvgBytesPerSec = static_cast<DWORD>(samples_per_sec * channel * bits_per_sample / 8);
				pcmwf.nBlockAlign = static_cast<WORD>(channel * bits_per_sample / 8);
				pcmwf.wBitsPerSample = static_cast<WORD>(bits_per_sample);
				pcmwf.cbSize = 0;
				desc.dwSize = sizeof(DSBUFFERDESC);
				desc.dwFlags = DSBCAPS_CTRLPAN | DSBCAPS_CTRLVOLUME | DSBCAPS_CTRLFREQUENCY | DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_GLOBALFOCUS | DSBCAPS_LOCDEFER;
				desc.dwBufferBytes = static_cast<DWORD>(total);
				desc.dwReserved = 0;
				desc.lpwfxFormat = &pcmwf;
				desc.guid3DAlgorithm = DS3DALG_DEFAULT;
			}
			me2->SizePerSec = desc.lpwfxFormat->nAvgBytesPerSec;
			me2->EndPos = static_cast<double>(total) / static_cast<double>(samples_per_sec * channel * bits_per_sample / 8);
		}
		me2->Streaming = streaming;
		if (me2->Streaming)
		{
			THROWDBG(me2->EndPos < 1.0, 0xe9170006);
			desc.dwBufferBytes = static_cast<DWORD>(BufSize * me2->SizePerSec);
		}
		{
			LPDIRECTSOUNDBUFFER pdsb;
			if (FAILED(Device->CreateSoundBuffer(&desc, &pdsb, nullptr)))
				break;
			if (FAILED(pdsb->QueryInterface(IID_IDirectSoundBuffer8, reinterpret_cast<LPVOID*>(&me2->SndBuf))))
				break;
			pdsb->Release();
		}
		{
			DWORD freq;
			me2->SndBuf->GetFrequency(&freq);
			me2->Freq = freq;
		}
		me2->LoopPos = 0;
		me2->Volume = 0.0;
		if (me2->Streaming)
		{
			StreamCopy(me2, 0);
			me2->StreamingPlayingFirstBuffer = True;
			me2->StreamingFinishCnt = 0;
		}
		else
		{
			LPVOID lpvptr;
			DWORD dwbytes;
			if (FAILED(me2->SndBuf->Lock(0, desc.dwBufferBytes, &lpvptr, &dwbytes, nullptr, nullptr, 0)))
				break;
			me2->FuncRead(me2->Handle, lpvptr, static_cast<S64>(dwbytes), -1);
			me2->SndBuf->Unlock(lpvptr, dwbytes, nullptr, 0);
			me2->FuncClose(me2->Handle);
			me2->Handle = nullptr;
		}
		_sndVolume(me_, 1.0);
		{
			SListSnd* node = (SListSnd*)AllocMem(sizeof(SListSnd));
			node->Snd = me2;
			node->Next = nullptr;
			if (ListSndTop == nullptr)
				ListSndTop = node;
			else
				ListSndBottom->Next = node;
			ListSndBottom = node;
		}
		success = True;
		break;
	}
	if (!success)
	{
		THROW(0xe9170009);
		return nullptr;
	}
	return me_;
}

EXPORT_CPP void _setMainVolume(double value)
{
	THROWDBG(value < 0.0 || 1.0 < value, 0xe9170006);
	MainVolume = value;
	SListSnd* ptr = ListSndTop;
	while (ptr != nullptr)
	{
		_sndVolume(reinterpret_cast<SClass*>(ptr->Snd), ptr->Snd->Volume);
		ptr = ptr->Next;
	}
}

static LRESULT CALLBACK WndProc(HWND wnd, UINT msg, WPARAM w_param, LPARAM l_param)
{
	switch (msg)
	{
		case WM_CLOSE:
			SendMessage(wnd, WM_DESTROY, 0, 0);
			return 0;
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
	}
	return DefWindowProc(wnd, msg, w_param, l_param);
}

static Bool StrCmpIgnoreCase(const Char* a, const Char* b)
{
	while (*a != L'\0')
	{
		Char a2 = L'A' <= *a && *a <= L'Z' ? (*a - L'A' + L'a') : *a;
		Char b2 = L'A' <= *b && *b <= L'Z' ? (*b - L'A' + L'a') : *b;
		if (a2 != b2)
			return False;
		a++;
		b++;
	}
	return *b == L'\0';
}

static Bool StreamCopy(SSnd* me_, S64 id)
{
	S64 dsize = me_->SizePerSec * BufSize / 2;
	LPVOID lpvptr0, lpvptr1;
	DWORD dwbytes0, dwbytes1;
	Bool finish = False;
	for (; ; )
	{
		if (FAILED(me_->SndBuf->Lock(static_cast<DWORD>(dsize * id), static_cast<DWORD>(dsize), &lpvptr0, &dwbytes0, &lpvptr1, &dwbytes1, 0)))
		{
			Sleep(1);
			continue;
		}
		break;
	}
	if (dwbytes0 > 0)
	{
		if (me_->FuncRead(me_->Handle, lpvptr0, static_cast<S64>(dwbytes0), me_->LoopPos))
			finish = True;
	}
	if (dwbytes1 > 0)
	{
		if (me_->FuncRead(me_->Handle, lpvptr1, static_cast<S64>(dwbytes1), me_->LoopPos))
			finish = True;
	}
	me_->SndBuf->Unlock(lpvptr0, dwbytes0, lpvptr1, dwbytes1);
	return finish;
}
