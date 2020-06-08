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

static int64_t BreakPointNum;
static SPos* BreakPointPoses;
static int BreakPointAddrNum;
static SBreakPointAddr* BreakPointAddrs;

void InitInterpreter()
{
	BreakPointNum = 0;
	BreakPointPoses = nullptr;
	BreakPointAddrNum = 0;
	BreakPointAddrs = nullptr;
}

void FinInterpreter()
{
}
