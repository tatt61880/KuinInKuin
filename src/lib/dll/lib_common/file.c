#include "file.h"

static char* NewLine = "\r\n";

static Bool ForEachDirRecursion(const Char* path, Bool recursion, void* callback, void* data);
static void NormPath(Char* path, Bool dir);

EXPORT Bool _copyDir(const U8* dst, const U8* src)
{
	THROWDBG(dst == NULL, EXCPT_ACCESS_VIOLATION);
	THROWDBG(src == NULL, EXCPT_ACCESS_VIOLATION);
	// TODO:
}

EXPORT Bool _copyFile(const U8* dst, const U8* src)
{
	THROWDBG(dst == NULL, EXCPT_ACCESS_VIOLATION);
	THROWDBG(src == NULL, EXCPT_ACCESS_VIOLATION);
	return CopyFile((const Char*)(src + 0x10), (const Char*)(dst + 0x10), FALSE) != 0;
}

EXPORT Bool _delDir(const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	// TODO:
}

EXPORT Bool _delFile(const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	if (!PathFileExists((const Char*)(path + 0x10)))
		return True;
	return DeleteFile((const Char*)(path + 0x10)) != 0;
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

EXPORT void* _getCurDir(void)
{
	Char path[KUIN_MAX_PATH + 2];
	if (GetCurrentDirectory(KUIN_MAX_PATH + 1, path) == 0)
		return NULL;
	NormPath(path, True);
	size_t len = wcslen(path);
	U8* result = (U8*)AllocMem(0x10 + sizeof(Char) * (len + 1));
	*(S64*)(result + 0x00) = DefaultRefCntFunc;
	*(S64*)(result + 0x08) = (S64)len;
	wcscpy((Char*)(result + 0x10), path);
	return result;
}

EXPORT Bool _makeDir(const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	if (*(S64*)(path + 0x08) > KUIN_MAX_PATH)
		return False;
	if (!DelDirRecursion((const Char*)(path + 0x10)))
		return False;
	Char path2[KUIN_MAX_PATH + 1];
	if (GetFullPathName((const Char*)(path + 0x10), KUIN_MAX_PATH, path2, NULL) == 0)
		return False;
	return SHCreateDirectory(NULL, path2) == ERROR_SUCCESS;
}

EXPORT Bool _moveDir(const U8* dst, const U8* src)
{
	THROWDBG(dst == NULL, EXCPT_ACCESS_VIOLATION);
	THROWDBG(src == NULL, EXCPT_ACCESS_VIOLATION);
	if (MoveFileEx((const Char*)(src + 0x10), (const Char*)(dst + 0x10), MOVEFILE_COPY_ALLOWED | MOVEFILE_WRITE_THROUGH | MOVEFILE_REPLACE_EXISTING) == 0)
	{
		if (CopyDirRecursion((const Char*)(dst + 0x10), (const Char*)(src + 0x10)) == 0)
			return False;
		if (DelDirRecursion((const Char*)(src + 0x10)) == 0)
			return False;
	}
	return True;
}

EXPORT Bool _moveFile(const U8* dst, const U8* src)
{
	THROWDBG(dst == NULL, EXCPT_ACCESS_VIOLATION);
	THROWDBG(src == NULL, EXCPT_ACCESS_VIOLATION);
	return MoveFileEx((const Char*)(src + 0x10), (const Char*)(dst + 0x10), MOVEFILE_COPY_ALLOWED | MOVEFILE_WRITE_THROUGH | MOVEFILE_REPLACE_EXISTING) != 0;
}

EXPORT void _setCurDir(const U8* path)
{
	THROWDBG(path == NULL, EXCPT_ACCESS_VIOLATION);
	SetCurrentDirectory((const Char*)(path + 0x10));
}

EXPORT void* _openAsReadingImpl(const U8* path, Bool pack, Bool* success)
{
	FILE* file_ptr = _wfopen((Char*)(path + 0x10), L"rb");
	if (file_ptr == NULL)
	{
		*success = False;
		return 0;
	}
	*success = True;
	return file_ptr;
}

EXPORT void _readerCloseImpl(void* handle)
{
	fclose((FILE*)handle);
}

EXPORT void _readerSeekImpl(void* handle, S64 origin, S64 pos)
{
#if defined(DBG)
	if (_fseeki64((FILE*)handle, pos, (int)origin) != 0)
		THROW(0xe9170006);
#else
	_fseeki64((FILE*)handle, pos, (int)origin);
#endif
}

EXPORT S64 _readerTellImpl(void* handle)
{
	return _ftelli64((FILE*)handle);
}

EXPORT Bool _readerReadImpl(void* handle, void* buf, S64 start, S64 size)
{
	return fread((U8*)buf + 0x10 + start, 1, (size_t)size, (FILE*)handle) == (size_t)size;
}

EXPORT void* _openAsWritingImpl(const U8* path, Bool append, Bool* success)
{
	FILE* file_ptr = _wfopen((Char*)(path + 0x10), append ? L"ab" : L"wb");
	if (file_ptr == NULL)
	{
		*success = False;
		return 0;
	}
	*success = True;
	return file_ptr;
}

EXPORT void _writerCloseImpl(void* handle)
{
	fclose((FILE*)handle);
}

EXPORT void _writerFlushImpl(void* handle)
{
	fflush((FILE*)handle);
}

EXPORT void _writerSeekImpl(void* handle, S64 origin, S64 pos)
{
#if defined(DBG)
	if (_fseeki64((FILE*)handle, pos, (int)origin) != 0)
		THROW(0xe9170006);
#else
	_fseeki64((FILE*)handle, pos, (int)origin);
#endif
}

EXPORT S64 _writerTellImpl(void* handle)
{
	return _ftelli64((FILE*)handle);
}

EXPORT void _writerWriteImpl(void* handle, void* data, S64 start, S64 size)
{
	fwrite((U8*)data + 0x10 + start, 1, (size_t)size, (FILE*)handle);
}

EXPORT S64 _writerWriteNewLineImpl(void* handle)
{
	fwrite(NewLine, 1, sizeof(NewLine), (FILE*)handle);
	return (S64)sizeof(NewLine);
}

static Bool ForEachDirRecursion(const Char* path, Bool recursion, void* callback, void* data)
{
	Char path2[KUIN_MAX_PATH + 1];
	if (wcslen(path) > KUIN_MAX_PATH)
		return False;
	if (!PathFileExists(path))
		return False;
	{
		size_t len = wcslen(path);
		U8* path3 = (U8*)AllocMem(0x10 + sizeof(Char) * (len + 1));
		((S64*)path3)[0] = 2;
		((S64*)path3)[1] = len;
		memcpy(path3 + 0x10, path, sizeof(Char) * (len + 1));
		if (data != NULL)
			(*(S64*)data)++;
		Bool result = (Bool)(S64)Call3Asm((void*)path3, (void*)(S64)True, data, callback);
		(*(S64*)path3)--;
		if (*(S64*)path3 == 0)
			FreeMem(path3);
		if (!result)
			return False;
	}
	wcscpy(path2, path);
	wcscat(path2, L"*");
	{
		WIN32_FIND_DATA find_data;
		HANDLE handle = FindFirstFile(path2, &find_data);
		if (handle == INVALID_HANDLE_VALUE)
			return False;
		do
		{
			if (wcscmp(find_data.cFileName, L".") == 0 || wcscmp(find_data.cFileName, L"..") == 0)
				continue;
			wcscpy(path2, path);
			wcscat(path2, find_data.cFileName);
			if ((find_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0)
			{
				if (recursion)
				{
					wcscat(path2, L"/");
					if (!ForEachDirRecursion(path2, recursion, callback, data))
					{
						FindClose(handle);
						return False;
					}
				}
			}
			else
			{
				size_t len = wcslen(path2);
				U8* path3 = (U8*)AllocMem(0x10 + sizeof(Char) * (len + 1));
				((S64*)path3)[0] = 2;
				((S64*)path3)[1] = len;
				memcpy(path3 + 0x10, path2, sizeof(Char) * (len + 1));
				if (data != NULL)
					(*(S64*)data)++;
				Bool result = (Bool)(S64)Call3Asm((void*)path3, (void*)(S64)False, data, callback);
				(*(S64*)path3)--;
				if (*(S64*)path3 == 0)
					FreeMem(path3);
				if (!result)
					return False;
			}
		} while (FindNextFile(handle, &find_data));
		FindClose(handle);
	}
	return True;
}

static void NormPath(Char* path, Bool dir)
{
	Char* ptr = path;
	if (*ptr == L'\0')
		return;
	do
	{
		if (*ptr == L'\\')
			*ptr = L'/';
		ptr++;
	} while (*ptr != L'\0');
	if (dir && ptr[-1] != L'/')
	{
		ptr[0] = L'/';
		ptr[1] = L'\0';
	}
}
