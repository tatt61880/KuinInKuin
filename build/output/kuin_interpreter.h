#pragma once

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

extern "C" void* Call0Asm(void* func);
extern "C" void* Call1Asm(void* arg1, void* func);
extern "C" void* Call2Asm(void* arg1, void* arg2, void* func);
extern "C" void* Call3Asm(void* arg1, void* arg2, void* arg3, void* func);

#define AUXILIARY_BUF_SIZE (4096)

// debugger.cpp

// interpret1.cpp
bool InterpretImpl1(void* str, void* color, void* comment_level, void* flags, int64_t line, void* me, void* replace_func, int64_t cursor_x, int64_t cursor_y, int64_t* new_cursor_x, int64_t old_line, int64_t new_line);

// interpret2.cpp
void InitInterpreter();
void FinInterpreter();
void* GetKeywordsImpl(void* src, const uint8_t* src_name, int64_t x, int64_t y, void* callback);
