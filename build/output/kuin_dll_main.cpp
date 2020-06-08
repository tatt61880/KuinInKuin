#define STRICT
#define _WIN32_DCOM
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCKAPI_
#include <Windows.h>

#include <cstdint>

#define UNUSED(var) (void)(var)
#define EXPORT_CPP extern "C" _declspec(dllexport)

// TODO: void resetMem_();

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
	// TODO:
}

EXPORT_CPP void FinCompiler()
{
	// TODO:
}

EXPORT_CPP bool BuildMem(const uint8_t* path, const void* (*func_get_src)(const uint8_t*), const uint8_t* sys_dir, const uint8_t* output, const uint8_t* icon, const void* related_files, bool rls, const uint8_t* env, void(*func_log)(const void* args, int64_t row, int64_t col), int64_t lang, int64_t app_code)
{
	// TODO:
	return false;
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
	// TODO: resetMem_();
	// TODO:
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
