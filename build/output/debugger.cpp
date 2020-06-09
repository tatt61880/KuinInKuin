#include "kuin_interpreter.h"

bool acquireOption(Array_<Array_<char16_t>*>* args);

void SetOption(const uint8_t* path, const uint8_t* sys_dir, const uint8_t* output, const uint8_t* icon, bool rls, const uint8_t* env)
{
	int len = 2;
	if (sys_dir != nullptr)
		len += 2;
	if (output != nullptr)
		len += 2;
	if (icon != nullptr)
		len += 2;
	if (rls)
		len++;
	if (env != nullptr)
		len += 2;
	auto* args = new_(Array_<Array_<char16_t>*>)();
	args->L = static_cast<int64_t>(len);
	args->B = newPrimArray_(static_cast<size_t>(len), Array_<char16_t>*);
	int idx = 0;
	args->B[idx]->L = 2;
	args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
	memcpy(args->B[idx]->B, L"-i", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
	idx++;
	args->B[idx]->L = *reinterpret_cast<const int64_t*>(path + 0x08);
	args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
	memcpy(args->B[idx]->B, path + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
	idx++;
	if (sys_dir != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-s", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(sys_dir + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, sys_dir + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (output != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-o", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(output + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, output + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (icon != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-c", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(icon + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, icon + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (rls)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-r", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	if (env != nullptr)
	{
		args->B[idx]->L = 2;
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, L"-e", sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
		args->B[idx]->L = *reinterpret_cast<const int64_t*>(env + 0x08);
		args->B[idx]->B = newPrimArray_(static_cast<size_t>(args->B[idx]->L + 1), char16_t);
		memcpy(args->B[idx]->B, env + 0x10, sizeof(char16_t) * static_cast<size_t>(args->B[idx]->L + 1));
		idx++;
	}
	acquireOption(args);
}
