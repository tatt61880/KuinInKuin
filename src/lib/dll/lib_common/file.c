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

typedef struct SFile
{
	Bool Pack;
	FILE* Handle;
	S64 Pos;
	S64 Size;
	S64 Cur;
	U64 Key;
} SFile;

static const U8 Newline[2] = { 0x0d, 0x0a };

static void* OpenFileStream(const Char* path);
static void CloseFileStream(void* handle);
static size_t ReadFileStream(void* handle, size_t size, void* buf);
static Bool SeekFileStream(void* handle, S64 offset, S64 origin);
static S64 TellFileStream(void* handle);
static Char ReadUtf8(SReader* me_, Bool replace_delimiter, int* char_cnt);
static void WriteUtf8(SWriter* me_, Char data);
static Bool ForEachDirRecursion(const Char* path, Bool recursion, void* callback, void* data);
#if !defined(DBG)
static SFile* OpenPackFile(const Char* path);
#endif
static U8 GetKey(U64 key, U8 data, U64 pos);

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
#if !defined(DBG)
	if (path[0] == L'r' && path[1] == L'e' && path[2] == L's' && path[3] == L'/')
	{
		SFile* handle = OpenPackFile(path + 4);
		if (handle == NULL)
			return NULL;
		return handle;
	}
	else
#endif
	{
#if defined(DBG)
		FILE* file_ptr;
		if (path[0] == L'r' && path[1] == L'e' && path[2] == L's' && path[3] == L'/')
		{
			Char path2[KUIN_MAX_PATH * 2 + 1];
			wcscpy(path2, EnvVars.ResRoot);
			wcscat(path2, path);
			file_ptr = _wfopen(path2, L"rb");
		}
		else
			file_ptr = _wfopen(path, L"rb");
#else
		FILE* file_ptr = _wfopen(path, L"rb");
#endif
		if (file_ptr == NULL)
			return NULL;
		SFile* result = (SFile*)AllocMem(sizeof(SFile));
		result->Pack = False;
		result->Handle = file_ptr;
		result->Pos = 0;
		result->Size = 0;
		result->Cur = 0;
		result->Key = 0;
		return result;
	}
}

static void CloseFileStream(void* handle)
{
	SFile* handle2 = (SFile*)handle;
	ASSERT(handle2 != NULL && handle2->Handle != NULL);
	fclose(handle2->Handle);
	FreeMem(handle2);
}

static size_t ReadFileStream(void* handle, size_t size, void* buf)
{
	SFile* handle2 = (SFile*)handle;
	ASSERT(handle2 != NULL);
	if (handle2->Pack)
	{
		S64 size2 = (S64)size;
		S64 rest = handle2->Pos + handle2->Size - handle2->Cur;
		if (size2 > rest)
			size2 = rest;
		ASSERT(size2 >= 0);
		size_t size3 = fread(buf, 1, (size_t)size2, handle2->Handle);
		S64 i;
		U8* ptr = (U8*)buf;
		U64 pos = (U64)(handle2->Cur - sizeof(U64) * 3);
		for (i = 0; i < (S64)size3; i++)
		{
			ptr[i] = GetKey(handle2->Key, ptr[i], pos);
			pos++;
		}
		handle2->Cur += (S64)size3;
		return size3;
	}
	else
		return fread(buf, 1, size, handle2->Handle);
}

static Bool SeekFileStream(void* handle, S64 offset, S64 origin)
{
	SFile* handle2 = (SFile*)handle;
	ASSERT(handle2 != NULL);
	if (handle2->Pack)
	{
		S64 pos = 0;
		switch (origin)
		{
			case SEEK_SET:
				pos = handle2->Pos;
				break;
			case SEEK_CUR:
				pos = handle2->Cur;
				break;
			case SEEK_END:
				pos = handle2->Pos + handle2->Size;
				break;
			default:
				ASSERT(False);
				break;
		}
		pos += offset;
		if (pos < handle2->Pos || handle2->Pos + handle2->Size < pos)
			return False;
		handle2->Cur = pos;
		int result = _fseeki64(handle2->Handle, pos, SEEK_SET);
		ASSERT(result == 0);
		UNUSED(result);
		return True;
	}
	else
		return _fseeki64(handle2->Handle, offset, (int)origin) == 0;
}

static S64 TellFileStream(void* handle)
{
	SFile* handle2 = (SFile*)handle;
	ASSERT(handle2 != NULL);
	if (handle2->Pack)
		return handle2->Cur - handle2->Pos;
	else
		return _ftelli64(handle2->Handle);
}

static Char ReadUtf8(SReader* me_, Bool replace_delimiter, int* char_cnt)
{
	U8 c;
	int len;
	U64 u;
	Char u2;
	for (; ; )
	{
		if (ReadFileStream(me_->Handle, 1, &c) == 0)
		{
			if (char_cnt != NULL)
				*char_cnt = 0;
			return WEOF;
		}
		if ((c & 0xc0) == 0x80)
			continue;
		if ((c & 0x80) == 0x00)
			len = 0;
		else if ((c & 0xe0) == 0xc0)
		{
			len = 1;
			c &= 0x1f;
		}
		else if ((c & 0xf0) == 0xe0)
		{
			len = 2;
			c &= 0x0f;
		}
		else if ((c & 0xf8) == 0xf0)
		{
			len = 3;
			c &= 0x07;
		}
		else if ((c & 0xfc) == 0xf8)
		{
			len = 4;
			c &= 0x03;
		}
		else if ((c & 0xfe) == 0xfc)
		{
			len = 5;
			c &= 0x01;
		}
		else
			continue; // TODO:
		break;
	}
	u = (U64)c;
	{
		int i;
		for (i = 0; i < len; i++)
		{
			if (ReadFileStream(me_->Handle, 1, &c) == 0 || (c & 0xc0) != 0x80)
				THROW(EXCPT_INVALID_DATA_FMT);
			u = (u << 6) | (c & 0x3f);
		}
	}
	if (char_cnt != NULL)
		*char_cnt = 1 + len;
	if (0x00010000 <= u && u <= 0x0010ffff)
		u = 0x20;
	u2 = (Char)u;
	if (!replace_delimiter)
		return u2;
	if (u2 == L'\0')
		return L'\0';
	{
		S64 delimiter_num = *(S64*)((U8*)me_->Delimiters + 0x08);
		const Char* delimiters = (Char*)((U8*)me_->Delimiters + 0x10);
		S64 i;
		for (i = 0; i < delimiter_num; i++)
		{
			if (u2 == delimiters[i] || u2 == L'\r' && delimiters[i] == L'\n')
				return L'\0';
		}
	}
	return u2;
}

static void WriteUtf8(SWriter* me_, Char data)
{
	U64 u;
	size_t size;
	if ((data >> 7) == 0)
	{
		u = data;
		size = 1;
	}
	else
	{
		u = (0x80 | (data & 0x3f)) << 8;
		data >>= 6;
		if ((data >> 5) == 0)
		{
			u |= 0xc0 | data;
			size = 2;
		}
		else
		{
			u = (u | 0x80 | (data & 0x3f)) << 8;
			data >>= 6;
			if ((data >> 4) == 0)
			{
				u |= 0xe0 | data;
				size = 3;
			}
			else
			{
				u = (u | 0x80 | (data & 0x3f)) << 8;
				data >>= 6;
				if ((data >> 3) == 0)
				{
					u |= 0xf0 | data;
					size = 4;
				}
				else
				{
					u = (u | 0x80 | (data & 0x3f)) << 8;
					data >>= 6;
					if ((data >> 2) == 0)
					{
						u |= 0xf8 | data;
						size = 5;
					}
					else
					{
						u = (u | 0x80 | (data & 0x3f)) << 8;
						data >>= 6;
						if ((data >> 1) == 0)
						{
							u |= 0xfc | data;
							size = 6;
						}
						else
							return; // TODO:
					}
				}
			}
		}
	}
	if (size == 1 && u == 0x0a)
		fwrite(&Newline, 1, sizeof(Newline), me_->Handle);
	else
		fwrite(&u, 1, size, me_->Handle);
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

#if !defined(DBG)
static SFile* OpenPackFile(const Char* path)
{
	FILE* file_ptr;
	{
		Char path2[KUIN_MAX_PATH + 1];
		wcscpy(path2, EnvVars.ResRoot);
		wcscat(path2, L"res.knd");
		file_ptr = _wfopen(path2, L"rb");
		if (file_ptr == NULL)
			return NULL;
	}
	SFile* handle = (SFile*)AllocMem(sizeof(SFile));
	handle->Pack = True;
	handle->Handle = file_ptr;
	handle->Pos = -1;
	handle->Size = 0;
	handle->Cur = 0;
	U64 key;
	U64 len;
	{
		fread(&key, sizeof(U64), 1, file_ptr);
		key ^= (U64)EnvVars.AppCode * 0x9271ac8394027acb + 0x35718394ca72849e;
		handle->Key = key;
	}
	{
		U64 signature;
		fread(&signature, sizeof(U64), 1, file_ptr);
		signature ^= key;
		if (signature != 0x83261772fa0c01a7)
		{
			FreeMem(handle);
			fclose(file_ptr);
			return NULL;
		}
	}
	{
		fread(&len, sizeof(U64), 1, file_ptr);
		len ^= 0x9c4cab83ce74a67e ^ key;
		if (len > 65535)
		{
			FreeMem(handle);
			fclose(file_ptr);
			return NULL;
		}
	}
	{
		U64 pos = 0;
		U64 i;
		U64 j;
		Char path2[KUIN_MAX_PATH + 1];
		for (i = 0; i < len; i++)
		{
			U64 size;
			U64 path_len;
			{
				fread(&size, sizeof(U64), 1, file_ptr);
				U8* ptr = (U8*)&size;
				for (j = 0; j < 8; j++)
				{
					ptr[j] = GetKey(key, ptr[j], pos);
					pos++;
				}
			}
			{
				fread(&path_len, sizeof(U64), 1, file_ptr);
				U8* ptr = (U8*)&path_len;
				for (j = 0; j < 8; j++)
				{
					ptr[j] = GetKey(key, ptr[j], pos);
					pos++;
				}
				if (path_len > KUIN_MAX_PATH)
				{
					FreeMem(handle);
					fclose(file_ptr);
					return NULL;
				}
			}
			{
				fread(path2, sizeof(Char), (size_t)path_len, file_ptr);
				U8* ptr = (U8*)path2;
				for (j = 0; j < path_len * 2; j++)
				{
					ptr[j] = GetKey(key, ptr[j], pos);
					pos++;
				}
				path2[path_len] = L'\0';
				if (wcscmp(path2, path) == 0)
				{
					handle->Pos = (S64)((U64)sizeof(U64) * 3 + pos);
					handle->Size = (S64)size;
					handle->Cur = handle->Pos;
					return handle;
				}
				_fseeki64(file_ptr, (S64)size, SEEK_CUR);
				pos += size;
			}
		}
	}
	FreeMem(handle);
	fclose(file_ptr);
	return NULL;
}
#endif

static U8 GetKey(U64 key, U8 data, U64 pos)
{
	U64 rnd = ((pos ^ key) * 0x351cd819923acae7) >> 32;
	return (U8)(data ^ rnd);
}
