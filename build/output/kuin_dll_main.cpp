#define _CRT_SECURE_NO_WARNINGS
#define STRICT
#define _WIN32_DCOM
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCKAPI_
#include <Windows.h>

#include <cstddef>
#include <cstdint>
static int64_t* classTable_;
#define new_(...) newImpl_<__VA_ARGS__>
#define type_(...) __VA_ARGS__*
#define newPrim_(...) newImpl_<__VA_ARGS__>
#define delPrim_(x)
#define newPrimArray_(x, ...) newArrayImpl_<__VA_ARGS__>(x)
#define delPrimArray_(x)
#define dcast_(...) reinterpret_cast<__VA_ARGS__*>
#define addr_(...) reinterpret_cast<uint64_t>(__VA_ARGS__)
template<typename T> T* newArrayImpl_(std::size_t n);
template<typename T, typename... A> T* newImpl_(A... a);
#include "common.h"

#include "kuin_interpreter.h"

#define UNUSED(var) (void)(var)
#define EXPORT_CPP extern "C" _declspec(dllexport)

void initLib();
void finLib();
bool acquireOption(Array_<Array_<char16_t>*>* args);
bool build();
void setLogFunc(void(*)(int64_t, Array_<char16_t>*, Array_<char16_t>*, int64_t, int64_t));

static const void* (*FuncGetSrc)(const uint8_t*);
static void(*FuncLog)(const void*, int64_t, int64_t);

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved)
{
	UNUSED(hinst);
	UNUSED(reason);
	UNUSED(reserved);
	return TRUE;
}

EXPORT_CPP void InitCompiler(int64_t lang)
{
	UNUSED(lang); // TODO: Remove this.
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
	UNUSED(lang); // TODO: Remove this.
	UNUSED(related_files); // TODO: Remove this.
	bool result;
	FuncGetSrc = func_get_src;
	FuncLog = func_log;

	int len = 2;
	if (sys_dir != nullptr)
		len += 2;
	if (output != nullptr)
		len += 2;
	if (icon != nullptr)
		len += 2;
	if (rls)
		len++;
	if (env != nullptr)
		len += 2;
	auto* args = new_(Array_<Array_<char16_t>*>)();
	args->L = static_cast<int64_t>(len);
	args->B = newPrimArray_(static_cast<size_t>(len), Array_<char16_t>*);
	int idx = 0;
	args->B[idx]->L = 2;
	args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
	memcpy(args->B[idx]->B, L"-i", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
	idx++;
	args->B[idx]->L = *reinterpret_cast<const int64_t*>(path + 0x08);
	args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
	memcpy(args->B[idx]->B, path + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
	idx++;
	if (sys_dir != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-s", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(sys_dir + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, sys_dir + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (output != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-o", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(output + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, output + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (icon != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-c", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(icon + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, icon + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (rls)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-r", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (env != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-e", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(env + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, env + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	acquireOption(args);

	result = build();
	FuncGetSrc = NULL;
	FuncLog = NULL;
	// TODO:
	/*
	DecSrc();
	Src = NULL;
	SrcLine = NULL;
	SrcChar = NULL;
	*/
	return result;
}

EXPORT_CPP void Interpret1(void* src, int64_t line, void* me, void* replace_func, int64_t cursor_x, int64_t cursor_y, int64_t* new_cursor_x, int64_t old_line, int64_t new_line)
{
	// TODO:
}

EXPORT_CPP bool Interpret2(const uint8_t* path, const void* (*func_get_src)(const uint8_t*), const uint8_t* sys_dir, const uint8_t* env, void(*func_log)(const void* args, int64_t row, int64_t col), int64_t lang)
{
	// TODO:
	return false;
}

EXPORT_CPP void Version(int64_t* major, int64_t* minor, int64_t* micro)
{
	// TODO:
}

EXPORT_CPP void ResetMemAllocator()
{
	finLib();
	initLib();
	// TODO:
	/*
	KeywordListNum = 0;
	KeywordList = NULL;
	*/
}

EXPORT_CPP void* GetKeywords(void* src, const uint8_t* src_name, int64_t x, int64_t y, void* callback)
{
	// TODO:
	return nullptr;
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
