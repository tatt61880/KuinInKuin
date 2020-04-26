#pragma once

/*
	Uncommitted libraries:
		d0000.knd	common

	Committed additional libraries:
*/

#pragma comment(linker, "/nodefaultlib:msvcrt.lib")
#if defined(_DEBUG)
#pragma comment(linker, "/nodefaultlib:libcmt.lib")
#else
#pragma comment(linker, "/nodefaultlib:libcmtd.lib")
#endif

#pragma comment(lib, "shlwapi.lib")

#define STRICT
#define _WIN32_DCOM
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <crtdbg.h> // '_ASSERTE'
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Shlwapi.h> // 'PathFileExists'
#include <Windows.h>

#define UNUSED(var) (void)(var)
#define EXPORT _declspec(dllexport)
#define EXPORT_CPP extern "C" _declspec(dllexport)
#define KUIN_MAX_PATH (512)

#define EXCPT_ACCESS_VIOLATION (0xc0000005)
// TODO: Remove.
/*
#define EXCPT_DBG_ASSERT_FAILED (0xe9170000)
#define EXCPT_CLASS_CAST_FAILED (0xe9170001)
#define EXCPT_DBG_ARRAY_IDX_OUT_OF_RANGE (0xe9170002)
#define EXCPT_INVALID_CMP (0xe9170004)
#define EXCPT_DBG_ARG_OUT_DOMAIN (0xe9170006)
#define EXCPT_FILE_READ_FAILED (0xe9170007)
#define EXCPT_INVALID_DATA_FMT (0xe9170008)
#define EXCPT_DEVICE_INIT_FAILED (0xe9170009)
#define EXCPT_DBG_INOPERABLE_STATE (0xe917000a)
*/

#if defined(_DEBUG)
#define ASSERT(cond) _ASSERTE((cond))
#define STATIC_ASSERT(cond) static_assert((cond), "Static assertion failed.")
#else
#define ASSERT(cond) {}
#define STATIC_ASSERT(cond)
#endif

#define THROW(code) ThrowImpl(code)
#if defined(DBG)
#define THROWDBG(condition, code) if (condition) ThrowImpl(code)
#else
#define THROWDBG(condition, code)
#endif

typedef unsigned char Bool;
typedef wchar_t Char;
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned long long U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef signed long long S64;

static const Bool False = 0;
static const Bool True = 1;

typedef struct SClass
{
	U64 RefCnt;
	void* ClassTable;
} SClass;

static const S64 DefaultRefCntFunc = 0; // Just before exiting the function, this is incremented for 'GcInstance'.
static const S64 DefaultRefCntOpe = 1; // For 'GcInstance'.

typedef struct SEnvVars
{
	void* Heap;
#if defined(_DEBUG)
	S64* HeapCnt;
#endif
	S64 AppCode;
	const U8* UseResFlags;
	Char ResRoot[KUIN_MAX_PATH];
} SEnvVars;
extern SEnvVars EnvVars;

Bool InitEnvVars(void* heap, S64* heap_cnt, S64 app_code, const U8* use_res_flags);
void* AllocMem(size_t size);
void FreeMem(void* ptr);
void ThrowImpl(U32 code);

// Assembly functions.
void* ToBinClassAsm(const void* me_);
void* FromBinClassAsm(const void* me_, const U8* bin, S64* idx);
int CmpClassAsm(const void* me_, const void* target);
void DtorClassAsm(void* me_);
void* CopyClassAsm(const void* me_);
void* Call0Asm(void* func);
void* Call1Asm(void* arg1, void* func);
void* Call2Asm(void* arg1, void* arg2, void* func);
void* Call3Asm(void* arg1, void* arg2, void* arg3, void* func);
