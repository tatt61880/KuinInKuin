#include "kuin_interpreter.h"

#include <cstdint>

struct SPos
{
	const wchar_t* SrcName;
	int Row;
	int Col;
};

struct SBreakPointAddr
{
	uint64_t Addr;
	uint8_t Ope;
};

struct SKeywordListItem
{
	const wchar_t* Name;
	int* First;
	int* Last;
};

struct SKeywordTypeList
{
	SKeywordTypeList* Next;
	wchar_t* Type;
};

static int64_t BreakPointNum;
static SPos* BreakPointPoses;
static int BreakPointAddrNum;
static SBreakPointAddr* BreakPointAddrs;
static int KeywordListNum;
static const SKeywordListItem** KeywordList;
static SKeywordTypeList* KeywordTypeListTop;
static SKeywordTypeList* KeywordTypeListBottom;

static void* GetKeywordsRoot(const wchar_t** str, const wchar_t* end, const wchar_t* src_name, int x, int y, uint64_t flags, void* callback, int keyword_list_num, const void* keyword_list);

void InitInterpreter()
{
	BreakPointNum = 0;
	BreakPointPoses = nullptr;
	BreakPointAddrNum = 0;
	BreakPointAddrs = nullptr;
	KeywordListNum = 0;
	KeywordList = nullptr;
}

void FinInterpreter()
{
	// Do nothing.
}

void* GetKeywordsImpl(void* src, const uint8_t* src_name, int64_t x, int64_t y, void* callback)
{
	return nullptr;
}
