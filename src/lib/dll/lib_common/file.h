#pragma once

#include "..\common.h"

// 'file'
EXPORT void _readerFin(SClass* me_);
EXPORT S64 _readerGetPos(SClass* me_);
EXPORT void* _readerRead(SClass* me_, S64 size);
EXPORT Char _readerReadLetter(SClass* me_);
EXPORT void _readerSetPos(SClass* me_, S64 origin, S64 pos);
EXPORT Bool _readerTerm(SClass* me_);
EXPORT void _writerFin(SClass* me_);
EXPORT S64 _writerGetPos(SClass* me_);
EXPORT void _writerSetPos(SClass* me_, S64 origin, S64 pos);
EXPORT void _writerWrite(SClass* me_, void* bin);
EXPORT void _writerWriteChar(SClass* me_, Char n);
EXPORT Bool _existPath(const U8* path);
EXPORT Bool _forEachDir(const U8* path, Bool recursion, void* callback, void* data);
EXPORT SClass* _makeReader(SClass* me_, const U8* path);
EXPORT SClass* _makeWriter(SClass* me_, const U8* path, Bool append);
