#pragma once

#include "..\common.h"

// 'file'
EXPORT Bool _existPath(const U8* path);
EXPORT Bool _forEachDir(const U8* path, Bool recursion, void* callback, void* data);
EXPORT void* _openAsReadingImpl(const U8* path, Bool pack, Bool* success);
EXPORT void _readerClose(void* handle);
EXPORT void _readerSeekImpl(void* handle, S64 origin, S64 pos);
EXPORT S64 _readerTellImpl(void* handle);
EXPORT Bool _readerReadImpl(void* handle, void* buf, S64 start, S64 size);
EXPORT void* _openAsWritingImpl(const U8* path, Bool append, Bool* success);
EXPORT void _writerCloseImpl(void* handle);
EXPORT void _writerFlushImpl(void* handle);
EXPORT void _writerSeekImpl(void* handle, S64 origin, S64 pos);
EXPORT S64 _writerTellImpl(void* handle);
EXPORT void _writerWriteImpl(void* handle, void* data, S64 start, S64 size);
EXPORT S64 _writerWriteNewLineImpl(void* handle);
