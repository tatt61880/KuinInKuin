#define _CRT_SECURE_NO_WARNINGS
#define STRICT
#define _WIN32_DCOM
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCKAPI_
#include <Windows.h>

#include "kuin_interpreter.h"

#define UNUSED(var) (void)(var)
#define EXPORT_CPP extern "C" _declspec(dllexport)

void initLib();
void finLib();
bool build();
void setLogFunc(void(*)(int64_t, Array_<char16_t>*, Array_<char16_t>*, int64_t, int64_t));

static const void* (*FuncGetSrc)(const uint8_t*);
static void(*FuncLog)(const void*, int64_t, int64_t);
static void* Src = nullptr;
static const void* SrcLine = nullptr;
static const wchar_t* SrcChar = nullptr;

static void OutputLog(int64_t code, Array_<char16_t>* msg, Array_<char16_t>* src, int64_t row, int64_t col);
static void DecSrc();

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved)
{
	UNUSED(hinst);
	UNUSED(reason);
	UNUSED(reserved);
	return TRUE;
}

EXPORT_CPP void InitCompiler()
{
	initLib();
	InitInterpreter();
}

EXPORT_CPP void FinCompiler()
{
	FinInterpreter();
	finLib();
}

EXPORT_CPP bool BuildMem(const uint8_t* path, const void* (*func_get_src)(const uint8_t*), const uint8_t* sys_dir, const uint8_t* output, const uint8_t* icon, const void* related_files, bool rls, const uint8_t* env, void(*func_log)(const void* args, int64_t row, int64_t col), int64_t lang, int64_t app_code)
{
	UNUSED(related_files); // TODO: Remove this.
	UNUSED(lang); // TODO: Remove this.
	UNUSED(app_code); // TODO: Remove this.
	bool result;
	FuncGetSrc = func_get_src;
	FuncLog = func_log;

	SetOption(path, sys_dir, output, icon, rls, env);
	setLogFunc(OutputLog);
	result = build();
	FuncGetSrc = nullptr;
	FuncLog = nullptr;
	DecSrc();
	Src = nullptr;
	SrcLine = nullptr;
	SrcChar = nullptr;
	return result;
}

EXPORT_CPP void Interpret1(void* src, int64_t line, void* me, void* replace_func, int64_t cursor_x, int64_t cursor_y, int64_t* new_cursor_x, int64_t old_line, int64_t new_line)
{
	for (; ; )
	{
		void* str = *(void**)((uint8_t*)src + 0x10);
		void* color = *(void**)((uint8_t*)src + 0x18);
		void* comment_level = *(void**)((uint8_t*)src + 0x20);
		void* flags = *(void**)((uint8_t*)src + 0x28);
		if (InterpretImpl1(str, color, comment_level, flags, line, me, replace_func, cursor_x, cursor_y, new_cursor_x, old_line, new_line))
			break;
		old_line = -1;
	}
}

EXPORT_CPP bool Interpret2(const uint8_t* path, const void* (*func_get_src)(const uint8_t*), const uint8_t* sys_dir, const uint8_t* env, void(*func_log)(const void* args, int64_t row, int64_t col), int64_t lang)
{
	// TODO:
	return false;
}

EXPORT_CPP void Version(int64_t* major, int64_t* minor, int64_t* micro)
{
	// TODO:
	*major = 2019;
	*minor = 9;
	*micro = 17;
}

EXPORT_CPP void ResetMemAllocator()
{
	finLib();
	initLib();
}

EXPORT_CPP void* GetKeywords(void* src, const uint8_t* src_name, int64_t x, int64_t y, void* callback)
{
	return GetKeywordsImpl(src, src_name, x, y, callback);
}

EXPORT_CPP bool RunDbg(const uint8_t* path, const uint8_t* cmd_line, void* idle_func, void* event_func, void* break_points_func, void* break_func, void* dbg_func)
{
	// TODO:
	return false;
}

EXPORT_CPP void SetBreakPoints(const void* break_points)
{
	// TODO:
}

EXPORT_CPP bool Archive(const uint8_t* dst, const uint8_t* src, int64_t app_code)
{
	// TODO:
	return false;
}

static void OutputLog(int64_t code, Array_<char16_t>* msg, Array_<char16_t>* src, int64_t row, int64_t col)
{
	uint8_t args[0x10 + 0x18];
	*reinterpret_cast<int64_t*>(args + 0x00) = 2;
	*reinterpret_cast<int64_t*>(args + 0x08) = 3;
	uint8_t code2[0x10 + sizeof(wchar_t) * 11];
	{
		*reinterpret_cast<int64_t*>(code2 + 0x00) = 1;
		*reinterpret_cast<int64_t*>(code2 + 0x08) = 10;
		swprintf(reinterpret_cast<wchar_t*>(code2 + 0x10), 11, L"0x%08X", static_cast<uint32_t>(code));
		*reinterpret_cast<void**>(args + 0x10) = code2;
	}
	uint8_t* msg2 = newPrimArray_(0x10 + sizeof(wchar_t) * static_cast<size_t>(msg->L + 1), uint8_t);
	{
		*reinterpret_cast<int64_t*>(msg2 + 0x00) = 1;
		*reinterpret_cast<int64_t*>(msg2 + 0x08) = msg->L;
		memcpy(msg2 + 0x10, msg->B, sizeof(wchar_t) * static_cast<size_t>(msg->L + 1));
		*reinterpret_cast<void**>(args + 0x18) = msg2;
	}
	uint8_t src2[0x10 + sizeof(wchar_t) * 260];
	if (src == nullptr)
		*reinterpret_cast<void**>(args + 0x20) = nullptr;
	else
	{
		*reinterpret_cast<int64_t*>(src2 + 0x00) = 1;
		*reinterpret_cast<int64_t*>(src2 + 0x08) = src->L;
		memcpy(src2 + 0x10, src->B, sizeof(wchar_t) * static_cast<size_t>(src->L + 1));
		*reinterpret_cast<void**>(args + 0x20) = src2;
	}
	Call3Asm(args, reinterpret_cast<void*>(row), reinterpret_cast<void*>(col), FuncLog);
}

static void DecSrc()
{
	// Decrement 'Src', but do not release it here. It will be released in '.kn'.
	if (Src != NULL)
		(*reinterpret_cast<int64_t*>(Src))--;
}
