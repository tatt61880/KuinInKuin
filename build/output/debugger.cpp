#include "kuin_interpreter.h"

#include <DbgHelp.h> // 'StackWalk64'

#pragma comment(lib, "DbgHelp.lib")

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

static uint64_t DbgStartAddr;
static int64_t BreakPointNum;
static SPos* BreakPointPoses;
static int BreakPointAddrNum = 0;
static SBreakPointAddr* BreakPointAddrs = NULL;

static void SetBreakPointOpes(HANDLE process_handle);
static void UnsetBreakPointOpes(HANDLE process_handle);

void InitDebugger()
{
	BreakPointNum = 0;
	BreakPointPoses = nullptr;
	BreakPointAddrNum = 0;
	BreakPointAddrs = nullptr;
}

bool RunDbgImpl(const uint8_t* path, const uint8_t* cmd_line, void* idle_func, void* event_func, void* break_points_func, void* break_func, void* dbg_func)
{
	const wchar_t* path2 = (const wchar_t*)(path + 0x10);
	wchar_t cur_dir[512 + 1];
	wchar_t* cmd_line_buf = NULL;
	PROCESS_INFORMATION process_info;
	{
		wchar_t* ptr;
		memcpy(cur_dir, path2, sizeof(wchar_t) * static_cast<size_t>(*reinterpret_cast<const int64_t*>(path + 0x08) + 1));
		ptr = cur_dir + wcslen(cur_dir);
		while (ptr != cur_dir && *ptr != L'/' && *ptr != L'\\')
			ptr--;
		if (ptr != NULL)
			*(ptr + 1) = L'\0';
	}
	if (cmd_line != NULL)
	{
		size_t len = wcslen((const wchar_t*)(cmd_line + 0x10));
		cmd_line_buf = (wchar_t*)malloc(sizeof(wchar_t) * (len + 1));
		memcpy(cmd_line_buf, (const wchar_t*)(cmd_line + 0x10), sizeof(wchar_t) * static_cast<size_t>(*reinterpret_cast<const int64_t*>(cmd_line + 0x08) + 1));
	}
	{
		STARTUPINFO startup_info = { 0 };
		startup_info.cb = sizeof(STARTUPINFO);
		if (!CreateProcess(path2, cmd_line_buf, NULL, NULL, FALSE, CREATE_SUSPENDED | NORMAL_PRIORITY_CLASS | DEBUG_ONLY_THIS_PROCESS, NULL, cur_dir, &startup_info, &process_info))
		{
			if (cmd_line_buf != NULL)
				free(cmd_line_buf);
			return false;
		}
	}
	if (cmd_line_buf != NULL)
		free(cmd_line_buf);

	{
		DEBUG_EVENT debug_event = { 0 };
		bool end = false;
		DbgStartAddr = 0;
		ResumeThread(process_info.hThread);
		while (!end)
		{
			DWORD continue_status = DBG_EXCEPTION_NOT_HANDLED;
			Call0Asm(idle_func);
			Sleep(1);
			for (; ; )
			{
				WaitForDebugEvent(&debug_event, 0);
				if (debug_event.dwProcessId != process_info.dwProcessId)
				{
					ContinueDebugEvent(debug_event.dwProcessId, debug_event.dwThreadId, DBG_EXCEPTION_NOT_HANDLED);
					continue;
				}
				break;
			}
			switch (debug_event.dwDebugEventCode)
			{
				case CREATE_PROCESS_DEBUG_EVENT:
					DbgStartAddr = (uint64_t)debug_event.u.CreateProcessInfo.lpBaseOfImage;
					if (debug_event.u.CreateProcessInfo.hFile != 0)
						CloseHandle(debug_event.u.CreateProcessInfo.hFile);
					Call0Asm(break_points_func);
					SetBreakPointOpes(process_info.hProcess);
					break;
				case LOAD_DLL_DEBUG_EVENT:
					if (debug_event.u.LoadDll.hFile != 0)
					{
						__try
						{
							CloseHandle(debug_event.u.LoadDll.hFile);
						}
						__except (EXCEPTION_EXECUTE_HANDLER)
						{
							// Do nothing.
						}
					}
					break;
				case EXIT_PROCESS_DEBUG_EVENT:
					end = true;
					break;
				case EXCEPTION_DEBUG_EVENT:
					{
						const DWORD excpt_code = debug_event.u.Exception.ExceptionRecord.ExceptionCode;
						if (excpt_code == EXCEPTION_SINGLE_STEP)
						{
							CONTEXT context;
							context.ContextFlags = CONTEXT_CONTROL;
							GetThreadContext(process_info.hThread, &context);
							Call0Asm(break_points_func);
							SetBreakPointOpes(process_info.hProcess);
							context.EFlags &= ~0x00000100;
							SetThreadContext(process_info.hThread, &context);
							continue_status = DBG_CONTINUE;
							break;
						}
						int break_point_idx = -1;
						if (excpt_code == EXCEPTION_BREAKPOINT)
						{
							if (BreakPointAddrs != NULL)
							{
								int i;
								for (i = 0; i < BreakPointAddrNum; i++)
								{
									if (BreakPointAddrs[i].Addr != 0 && BreakPointAddrs[i].Addr == (uint64_t)debug_event.u.Exception.ExceptionRecord.ExceptionAddress)
									{
										break_point_idx = i;
										break;
									}
								}
							}
						}
						if (break_point_idx == -1 && (excpt_code & 0xffff0000) != 0xc0000000 && (excpt_code & 0xffff0000) != 0xe9170000)
							break;
						Call3Asm((void*)0, NULL, NULL, dbg_func);
						{
							// TODO:
							/*
							wchar_t str_buf[0x08 + EXCPT_MSG_MAX + 1];
							wchar_t* str = str_buf + 0x08;
							*/
							CONTEXT context;
							CONTEXT context2;
							STACKFRAME64 stack;
							IMAGEHLP_SYMBOL64 symbol;
							memset(&context, 0, sizeof(context));
							context.ContextFlags = CONTEXT_FULL;
							if (!GetThreadContext(process_info.hThread, &context))
								break;
							context2 = context;
							memset(&stack, 0, sizeof(stack));
							stack.AddrPC.Offset = context2.Rip;
							stack.AddrPC.Mode = AddrModeFlat;
							stack.AddrStack.Offset = context2.Rsp;
							stack.AddrStack.Mode = AddrModeFlat;
							stack.AddrFrame.Offset = context2.Rbp;
							stack.AddrFrame.Mode = AddrModeFlat;
							SymInitialize(process_info.hProcess, NULL, TRUE);
							// TODO:
							/*
							{
								const wchar_t* text = ExcptMsgs[0].Msg;
								if (excpt_code <= 0x0000ffff)
									text = ExcptMsgs[1].Msg;
								else
								{
									int min = 0;
									int max = MSG_NUM - 1;
									int found = -1;
									while (min <= max)
									{
										int mid = (min + max) / 2;
										if ((int64_t)excpt_code < ExcptMsgs[mid].Code)
											max = mid - 1;
										else if ((int64_t)excpt_code > ExcptMsgs[mid].Code)
											min = mid + 1;
										else
										{
											found = mid;
											break;
										}
									}
									if (found != -1)
										text = ExcptMsgs[found].Msg;
								}
								swprintf(str, EXCPT_MSG_MAX, L"%s\nAn exception '0x%08X' occurred.", text, excpt_code);
							}

							SPos* excpt_pos = NULL;
							for (; ; )
							{
								if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, process_info.hProcess, process_info.hThread, &stack, &context2, NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL))
									break;
								symbol.SizeOfStruct = sizeof(IMAGEHLP_SYMBOL64);
								symbol.MaxNameLength = 255;
								DWORD64 displacement;
								if (SymGetSymFromAddr64(process_info.hProcess, (DWORD64)stack.AddrPC.Offset, &displacement, &symbol))
								{
									// char name[1024];
									// UnDecorateSymbolName(symbol.Name, (PSTR)name, 1024, UNDNAME_COMPLETE);
								}
								else
								{
									wchar_t name[256];
									SPos* pos = AddrToPos((uint64_t)context2.Rip, name);
									if (excpt_pos == NULL)
									{
										if (wcschr(name, L'@') == NULL)
											break;
										else
											excpt_pos = pos;
									}
									if (pos != NULL)
									{
										wchar_t buf[0x08 + 1024];
										swprintf(buf + 0x08, 1024, L"%s (%s: %d, %d)", name, pos->SrcName, pos->Row, pos->Col);
										((int64_t*)buf)[0] = 2;
										((int64_t*)buf)[1] = (int64_t)wcslen(buf + 0x08);
										Call3Asm((void*)2, buf, NULL, dbg_func);
									}
								}
								if (stack.AddrPC.Offset == 0)
									break;
							}
							if (excpt_pos != NULL)
							{
								GetDbgVars(KeywordListNum, KeywordList, excpt_pos->SrcName, excpt_pos->Row, process_info.hProcess, DbgStartAddr, &context, dbg_func);
								{
									void* pos_ptr = NULL;
									wchar_t pos_name[0x08 + 256];
									uint8_t pos_buf[0x28];
									{
										size_t pos_name_len = wcslen(excpt_pos->SrcName);
										((int64_t*)pos_name)[0] = 1;
										((int64_t*)pos_name)[1] = (int64_t)pos_name_len;
										memcpy((uint8_t*)pos_name + 0x10, excpt_pos->SrcName, sizeof(wchar_t) * (pos_name_len + 1));

										((int64_t*)pos_buf)[0] = 2;
										((int64_t*)pos_buf)[1] = 0;
										((void**)pos_buf)[2] = pos_name;
										((int64_t*)pos_buf)[3] = excpt_pos->Row;
										((int64_t*)pos_buf)[4] = excpt_pos->Col;
										pos_ptr = pos_buf;
									}
									((int64_t*)str_buf)[0] = 2;
									((int64_t*)str_buf)[1] = wcslen(str);
									Call3Asm((void*)(uint64_t)excpt_code, pos_ptr, str_buf, break_func);
								}
								UnsetBreakPointOpes(process_info.hProcess);
							}
							*/
							if (break_point_idx != -1)
							{
								context.Rip--;
								context.EFlags |= 0x00000100;
								SetThreadContext(process_info.hThread, &context);
								continue_status = DBG_CONTINUE;
							}
							else
							{
								Call0Asm(break_points_func);
								SetBreakPointOpes(process_info.hProcess);
							}
						}
					}
					break;
				case OUTPUT_DEBUG_STRING_EVENT:
					{
						void* buf = NULL;
						if (debug_event.u.DebugString.fUnicode == 0)
						{
							char* buf2 = (char*)malloc((size_t)debug_event.u.DebugString.nDebugStringLength);
							SIZE_T size = 0;
							if (!ReadProcessMemory(process_info.hProcess, debug_event.u.DebugString.lpDebugStringData, buf2, debug_event.u.DebugString.nDebugStringLength, &size) || size == 0)
							{
								free(buf2);
								break;
							}
							int size2 = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, buf2, (int)size, NULL, 0);
							buf = malloc(0x10 + sizeof(wchar_t) * (size_t)size2);
							MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, buf2, (int)size, (wchar_t*)((uint8_t*)buf + 0x10), size2);
							((int64_t*)buf)[1] = (int64_t)size2 - 1;
							free(buf2);
						}
						else
						{
							buf = malloc(0x10 + sizeof(wchar_t) * (size_t)debug_event.u.DebugString.nDebugStringLength);
							SIZE_T size = 0;
							if (!ReadProcessMemory(process_info.hProcess, debug_event.u.DebugString.lpDebugStringData, (wchar_t*)((uint8_t*)buf + 0x10), debug_event.u.DebugString.nDebugStringLength, &size) || size == 0)
							{
								free(buf);
								break;
							}
							((int64_t*)buf)[1] = (int64_t)debug_event.u.DebugString.nDebugStringLength - 1;
						}
						*((int64_t*)buf) = 2;
						if (((int64_t*)buf)[1] >= 4)
						{
							const wchar_t* ptr = (const wchar_t*)((uint8_t*)buf + 0x10);
							if (ptr[0] == L'd' && ptr[1] == L'b' && ptr[2] == L'g' && ptr[3] == L'!')
								Call2Asm(0, buf, event_func);
						}
						free(buf);
					}
					continue_status = DBG_CONTINUE;
					break;
			}
			ContinueDebugEvent(debug_event.dwProcessId, debug_event.dwThreadId, continue_status);
		}
	}
	{
		DWORD exit_code;
		while (GetExitCodeThread(process_info.hThread, &exit_code) == STILL_ACTIVE)
			Call0Asm(idle_func);
	}

	if (process_info.hThread != NULL)
		CloseHandle(process_info.hThread);
	if (process_info.hProcess != NULL)
		CloseHandle(process_info.hProcess);
	return true;
}

static void SetBreakPointOpes(HANDLE process_handle)
{
	// TODO:
	/*
	BreakPointAddrNum = (int)BreakPointNum;
	BreakPointAddrs = newPrimArray_(BreakPointNum, SBreakPointAddr);
	for (int64_t i = 0; i < BreakPointNum; i++)
	{
		uint64_t addr = PosToAddr(&BreakPointPoses[i]);
		if (addr == 0)
		{
			BreakPointAddrs[i].Addr = 0;
			BreakPointAddrs[i].Ope = 0;
			continue;
		}
		uint8_t old_code;
		uint8_t int3_code = 0xcc;
		ReadProcessMemory(process_handle, (LPVOID)addr, &old_code, 1, NULL);
		WriteProcessMemory(process_handle, (LPVOID)addr, &int3_code, 1, NULL);
		BreakPointAddrs[i].Addr = addr;
		BreakPointAddrs[i].Ope = old_code;
	}
	*/
	FlushInstructionCache(process_handle, NULL, 0);
}

static void UnsetBreakPointOpes(HANDLE process_handle)
{
	if (BreakPointAddrs == NULL)
		return;
	for (int64_t i = BreakPointNum - 1; i >= 0; i--)
	{
		if (BreakPointAddrs[i].Addr == 0)
			continue;
		uint8_t new_code = BreakPointAddrs[i].Ope;
		WriteProcessMemory(process_handle, (LPVOID)BreakPointAddrs[i].Addr, &new_code, 1, NULL);
	}
	FlushInstructionCache(process_handle, NULL, 0);
}
