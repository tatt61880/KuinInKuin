#include "file.h"

typedef struct SReader
{
	SClass Class;
	void* Handle;
	void* Delimiters;
	S64 FileSize;
} SReader;

typedef struct SWriter
{
	SClass Class;
	FILE* Handle;
} SWriter;

static void* OpenFileStream(const Char* path);
static void CloseFileStream(void* handle);
static size_t ReadFileStream(void* handle, size_t size, void* buf);
static Bool SeekFileStream(void* handle, S64 offset, S64 origin);
static S64 TellFileStream(void* handle);
static Char ReadUtf8(SReader* me_, Bool replace_delimiter, int* char_cnt);
static void WriteUtf8(SWriter* me_, Char data);
static Bool ForEachDirRecursion(const Char* path, Bool recursion, void* callback, void* data);

EXPORT void _readerFin(SClass* me_)
{
	SReader* me2 = (SReader*)me_;
	if (me2->Handle == NULL)
		return;
	CloseFileStream(me2->Handle);
	me2->Handle = NULL;
}

EXPORT S64 _readerGetPos(SClass* me_)
{
	SReader* me2 = (SReader*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	return TellFileStream(me2->Handle);
}

EXPORT void* _readerRead(SClass* me_, S64 size)
{
	SReader* me2 = (SReader*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	U8* result = (U8*)AllocMem(0x10 + (size_t)size);
	size_t size2;
	((S64*)result)[0] = DefaultRefCntFunc;
	((S64*)result)[1] = size;
	size2 = ReadFileStream(me2->Handle, (size_t)size, result + 0x10);
	if (size2 != (size_t)size)
	{
		FreeMem(result);
		THROW(EXCPT_INVALID_DATA_FMT);
		return NULL;
	}
	return result;
}

EXPORT Char _readerReadLetter(SClass* me_)
{
	Char result = ReadUtf8((SReader*)me_, False, NULL);
	if (result == WEOF)
		THROW(EXCPT_INVALID_DATA_FMT);
	return result;
}

EXPORT void _readerSetPos(SClass* me_, S64 origin, S64 pos)
{
	THROWDBG(origin < 0 || 2 < origin, EXCPT_DBG_ARG_OUT_DOMAIN);
	SReader* me2 = (SReader*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	if (!SeekFileStream(me2->Handle, pos, origin))
		THROW(EXCPT_INVALID_DATA_FMT);
}

EXPORT Bool _readerTerm(SClass* me_)
{
	SReader* me2 = (SReader*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	U8 buf;
	Bool result = ReadFileStream(me2->Handle, 1, &buf) == 0;
	if (!result)
		SeekFileStream(me2->Handle, -1, SEEK_CUR);
	return result;
}

EXPORT void _writerFin(SClass* me_)
{
	SWriter* me2 = (SWriter*)me_;
	if (me2->Handle == NULL)
		return;
	fclose(me2->Handle);
	me2->Handle = NULL;
}

EXPORT S64 _writerGetPos(SClass* me_)
{
	SWriter* me2 = (SWriter*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	return _ftelli64(me2->Handle);
}

EXPORT void _writerSetPos(SClass* me_, S64 origin, S64 pos)
{
	THROWDBG(origin < 0 || 2 < origin, EXCPT_DBG_ARG_OUT_DOMAIN);
	SWriter* me2 = (SWriter*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	if (_fseeki64(me2->Handle, pos, (int)origin))
		THROW(EXCPT_INVALID_DATA_FMT);
}

EXPORT void _writerWrite(SClass* me_, void* bin)
{
	SWriter* me2 = (SWriter*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	THROWDBG(bin == NULL, EXCPT_ACCESS_VIOLATION);
	U8* bin2 = (U8*)bin;
	fwrite(bin2 + 0x10, 1, (size_t) * (S64*)(bin2 + 0x08), me2->Handle);
}

EXPORT void _writerWriteChar(SClass* me_, Char n)
{
	SWriter* me2 = (SWriter*)me_;
	THROWDBG(me2->Handle == NULL, EXCPT_DBG_INOPERABLE_STATE);
	WriteUtf8(me2, n);
}

EXPORT Bool _existPath(const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	return PathFileExists((const Char*)(path + 0x10)) != 0;
}

EXPORT Bool _forEachDir(const U8* path, Bool recursion, void* callback, void* data)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	THROWDBG(callback == NULL, EXCPT_ACCESS_VIOLATION);
	return ForEachDirRecursion((const Char*)(path + 0x10), recursion, callback, data);
}

EXPORT SClass* _makeReader(SClass* me_, const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	SReader* me2 = (SReader*)me_;
	me2->Handle = OpenFileStream((Char*)(path + 0x10));
	if (me2->Handle == NULL)
		return NULL;
	{
		SeekFileStream(me2->Handle, 0, SEEK_END);
		me2->FileSize = TellFileStream(me2->Handle);
		SeekFileStream(me2->Handle, 0, SEEK_SET);
	}
	return me_;
}

EXPORT SClass* _makeWriter(SClass* me_, const U8* path, Bool append)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	SWriter* me2 = (SWriter*)me_;
	FILE* file_ptr = _wfopen((Char*)(path + 0x10), append ? L"ab" : L"wb");
	if (file_ptr == NULL)
		return NULL;
	me2->Handle = file_ptr;
	return me_;
}

static void* OpenFileStream(const Char* path)
{
	// TODO:
}

static void CloseFileStream(void* handle)
{
	// TODO:
}

static size_t ReadFileStream(void* handle, size_t size, void* buf)
{
	// TODO:
}

static Bool SeekFileStream(void* handle, S64 offset, S64 origin)
{
	// TODO:
}

static S64 TellFileStream(void* handle)
{
	// TODO:
}

static Char ReadUtf8(SReader* me_, Bool replace_delimiter, int* char_cnt)
{
	// TODO:
}

static void WriteUtf8(SWriter* me_, Char data)
{
	// TODO:
}

static Bool ForEachDirRecursion(const Char* path, Bool recursion, void* callback, void* data)
{
	// TODO:
}
