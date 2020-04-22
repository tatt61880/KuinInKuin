#include <algorithm>
#include <chrono>
#include <cmath>
#include <codecvt>
#include <cstdarg>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <stack>
#include <sys/stat.h>
#include <type_traits>
#include <vector>

template<typename T> std::size_t bufLen_() { return 0; }
template<> std::size_t bufLen_<char16_t>() { return 1; }
static int64_t exitCode_ = 0;

struct Class_ {
	Class_() : Y(0LL) {}
	virtual ~Class_() {}
	int64_t Y;
};
template<typename T> struct Array_ {
	Array_() : L(), B() {}
	template<typename... A>
	explicit Array_(A... a) {
		L = sizeof...(a);
		B = newPrimArray_(static_cast<std::size_t>(sizeof...(a) + bufLen_<T>()), T);
		BufferCopy(B, std::forward<A>(a)...);
		if (bufLen_<T>() > 0)
			B[sizeof...(a)] = 0;
	}
	~Array_() {
		delPrimArray_(B);
	}
	void BufferCopy(T* b) {}
	template<typename A, typename... B>
	void BufferCopy(T* b, A h, B... t) {
		*b = h;
		BufferCopy(b + 1, std::forward<B>(t)...);
	}
	type_(Array_<T>) Cat(const type_(Array_<T>) t) {
		type_(Array_<T>) r = new_(Array_<T>)();
		r->B = newPrimArray_(static_cast<std::size_t>(L + t->L + bufLen_<T>()), T);
		for (int64_t i = 0; i < L; i++)
			r->B[i] = B[i];
		for (int64_t i = 0; i < static_cast<int64_t>(t->L + bufLen_<T>()); i++)
			r->B[L + i] = t->B[i];
		r->L = L + t->L;
		return r;
	}
	int64_t Len() { return L; }
	T& At(int64_t n) { return B[n]; }
	int64_t L;
	T* B;
};
template<typename T> struct List_ {
	List_() : B(), I(B.end()) {}
	int64_t Len() { return static_cast<int64_t>(B.size()); }
	std::list<T> B;
	typename std::list<T>::iterator I;
};
template<typename T> struct Stack_ {
	Stack_() : B() {}
	int64_t Len() { return static_cast<int64_t>(B.size()); }
	std::stack<T> B;
};
template<typename T> struct Queue_ {
	Queue_() : B() {}
	int64_t Len() { return static_cast<int64_t>(B.size()); }
	std::queue<T> B;
};
template<typename T1, typename T2> struct dictImpl_;
template<typename T1, typename T2> dictImpl_<T1, T2>* dictAdd_(dictImpl_<T1, T2>* r, T1 k, T2 v, bool* a);
template<typename T1, typename T2> dictImpl_<T1, T2>* dictCopyRec_(dictImpl_<T1, T2>* n);
template<typename T1, typename T2> void dictToBinRec_(type_(Array_<uint8_t>) a, dictImpl_<T1, T2>* d);
template<typename T1, typename T2> void dictFreeRec_(dictImpl_<T1, T2>* n);
template<typename T1, typename T2> struct Dict_ {
	Dict_() : L(0LL), B(nullptr) {}
	~Dict_() {
		dictFreeRec_<T1, T2>(B);
	}
	int64_t Len() { return L; }
	void Add(T1 k, T2 v) {
		bool a;
		B = dictAdd_<T1, T2>(B, k, v, &a);
		if (a)
			L++;
	}
	int64_t L;
	dictImpl_<T1, T2>* B;
};
template<typename T1, typename T2> struct dictImpl_ {
	dictImpl_(T1 k, T2 v) : K(k), V(v), CL(nullptr), CR(nullptr), R(true) {}
	T1 K;
	T2 V;
	dictImpl_* CL;
	dictImpl_* CR;
	bool R;
};

#if _MSC_VER >= 1900 && _MSC_VER < 1922
static std::string utf16ToUtf8_(const std::u16string& s) {
	const int16_t* p = reinterpret_cast<const int16_t*>(s.data());
	return std::wstring_convert<std::codecvt_utf8_utf16<int16_t>, int16_t>{}.to_bytes(p, p + s.size());
}
static std::u16string utf8ToUtf16_(const std::string& s) {
	const auto t = std::wstring_convert<std::codecvt_utf8_utf16<int16_t>, int16_t>{}.from_bytes(s);
	return std::u16string(reinterpret_cast<const char16_t*>(t.data()), t.size());
}
#else
static std::string utf16ToUtf8_(const std::u16string& s) {
	return std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(s);
}
static std::u16string utf8ToUtf16_(const std::string& s) {
	return std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.from_bytes(s);
}
#endif

#if defined(_WIN32)

#define STRICT
#define _WIN32_DCOM
#include <Windows.h>
#include <io.h>

const char newLine_[] = { '\r', '\n' };

static bool setCurDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::SetCurrentDirectoryA(t.c_str()) != 0;
}
static bool makeDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::CreateDirectoryA(t.c_str(), 0) != 0;
}
static bool delDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::RemoveDirectoryA(t.c_str()) != 0;
}
static bool delFile_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::DeleteFileA(t.c_str()) != 0;
}
static bool copyDir_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::CreateDirectoryExA(t2.c_str(), t1.c_str(), 0) != 0;
}
static bool copyFile_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::CopyFileA(t2.c_str(), t1.c_str(), false) != 0;
}
static bool moveFile_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::MoveFileExA(t2.c_str(), t1.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_ALLOWED) != 0;
}

#else

#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#define _A_SUBDIR 0x10

const char newLine_[] = { '\n' };

static bool setCurDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::chdir(t.c_str()) == 0;
}
static bool makeDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::mkdir(t.c_str(), S_IRWXU | S_IRWXG | S_IRWXO) == 0;
}
static bool delDir_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::rmdir(t.c_str()) == 0;
}
static bool delFile_(const char16_t* p) {
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::unlink(t.c_str()) == 0;
}
static bool copyDir_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	struct stat f;
	return !(::stat(t2.c_str(), &f) != 0 || ::mkdir(t1.c_str(), f.st_mode) != 0);
}
static bool copyFile_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	int i = ::open(t2.c_str(), O_RDONLY);
	if (i < 0)
		return false;
	struct stat f;
	if (::stat(t2.c_str(), &f) != 0)
	{
		::close(i);
		return false;
	}
	int o = ::open(t1.c_str(), O_CREAT | O_WRONLY | O_TRUNC, f.st_mode);
	if (o < 0)
	{
		::close(i);
		return false;
	}
	ssize_t r = 1;
	char* buf = newPrimArray_(65536, char);
	while (r > 0 && (r = ::read(i, buf, 65536)) > 0)
	{
		ssize_t z, w = 0;
		do
		{
			if ((z = ::write(o, buf + w, r - w)) < 0)
			{
				r = z;
				break;
			}
			w += z;
		} while (w < r);
	}
	if (::close(i) < 0)
		r = -1;
	if (::close(o) < 0)
		r = -1;
	delPrimArray_(buf);
	return r >= 0;
}
static bool moveFile_(const char16_t* d, const char16_t* s) {
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::rename(t2.c_str(), t1.c_str()) == 0;
}

#   define BOOST_COPY_FILE(F,T,FailIfExistsBool)
#   define BOOST_MOVE_FILE(OLD,NEW)()
#endif

static bool fileForEach_(type_(Array_<char16_t>) p, bool r, bool(*f)(type_(Array_<char16_t>), bool, type_(Class_)), type_(Class_) d) {
	if (p->L > 260)
		return false;
#if defined(_WIN32)
	_finddata_t t;
	intptr_t h;
#else
	dirent* t;
	DIR* h;
#endif
	{
		std::u16string s = p->B;
		const std::string& p2 = utf16ToUtf8_(s);
#if defined(_WIN32)
		char p3[262];
		std::size_t l = p2.size();
		memcpy(p3, p2.c_str(), l);
		p3[l] = '*';
		p3[l + 1] = 0;
		h = _findfirst(p3, &t);
		if (h == -1)
			return false;
#else
		h = opendir(p2.c_str());
		if (h == nullptr)
			return false;
#endif
	}
	if (!f(p, true, d))
		return false;
	bool a = true;
#if defined(_WIN32)
	do {
		if ((t.attrib & _A_SUBDIR) == 0) {
			std::string s = t.name;
#else
	while ((t = readdir(h)) != nullptr) {
		if ((t->d_type & _A_SUBDIR) == 0) {
			std::string s = t->d_name;
#endif
			const std::u16string p2 = utf8ToUtf16_(s);
			std::size_t l = p2.size();
			type_(Array_<char16_t>) p3 = new_(Array_<char16_t>)();
			p3->L = p->L + static_cast<int64_t>(l);
			p3->B = newPrimArray_(static_cast<std::size_t>(p->L + l + 1), char16_t);
			memcpy(p3->B, p->B, sizeof(char16_t) * static_cast<std::size_t>(p->L));
			memcpy(p3->B + p->L, p2.c_str(), sizeof(char16_t) * (l + 1));
			if (!f(p3, false, d))
			{
				a = false;
				break;
			}
		}
		else {
#if defined(_WIN32)
			const char* n = t.name;
#else
			const char* n = t->d_name;
#endif
			if (strcmp(n, ".") == 0 || strcmp(n, "..") == 0)
				continue;
			std::string s = n;
			const std::u16string p2 = utf8ToUtf16_(s);
			std::size_t l = p2.size();
			type_(Array_<char16_t>) p3 = new_(Array_<char16_t>)();
			p3->L = p->L + static_cast<int64_t>(l) + 1;
			p3->B = newPrimArray_(static_cast<std::size_t>(p->L + l + 2), char16_t);
			memcpy(p3->B, p->B, sizeof(char16_t) * static_cast<std::size_t>(p->L));
			memcpy(p3->B + p->L, p2.c_str(), sizeof(char16_t) * l);
			p3->B[p->L + l] = '/';
			p3->B[p->L + l + 1] = 0;
			if (!fileForEach_(p3, r, f, d))
			{
				a = false;
				break;
			}
		}
	}
#if defined(_WIN32)
	while (_findnext(h, &t) == 0);
	_findclose(h);
#else
	closedir(h);
#endif
	return a;
}

static bool fileExists_(type_(Array_<char16_t>) p)
{
	struct stat b;
	std::u16string s = p->B;
	const std::string t = utf16ToUtf8_(s);
	return stat(t.c_str(), &b) == 0;
}

template<typename T> struct newArraysRec_{
	T operator()() { throw 0; }
	template<typename A, typename... B> T operator()(A h, B... t) { throw 0; }
};
template<typename T> struct newArraysRec_<type_(Array_<T>)> {
	type_(Array_<T>) operator()() { throw 0; }
	template<typename A, typename... C> type_(Array_<T>) operator()(A h, C... t) {
		type_(Array_<T>) r = new_(Array_<T>)();
		r->L = h;
		r->B = newPrimArray_(static_cast<std::size_t>(h + bufLen_<T>()), T);
		if (sizeof...(t) == 0)
			memset(r->B, 0, sizeof(T) * static_cast<std::size_t>(h + bufLen_<T>()));
		else
		{
			for (int64_t i = 0; i < h; i++)
				r->B[i] = newArraysRec_<T>()(std::forward<C>(t)...);
		}
		return r;
	}
};
template<typename T, typename... A> T newArrays_(A... a) {
	if (sizeof...(a) > 64)
		return nullptr;
	return newArraysRec_<T>()(std::forward<A>(a)...);
}
template<typename T>
type_(Array_<T>) newArrayBin_(int64_t l, const void* d) {
	type_(Array_<T>) r = new_(Array_<T>)();
	r->L = l;
	r->B = newPrimArray_(static_cast<std::size_t>(l) + bufLen_<T>(), T);
	memcpy(r->B, d, sizeof(T) * static_cast<std::size_t>(l));
	if (bufLen_<T>() > 0)
		r->B[l] = 0;
	return r;
}

template<typename T> type_(Array_<T>) toArray_(type_(List_<T>) l) {
	type_(Array_<T>) a = new_(Array_<T>)();
	a->L = l->Len();
	a->B = newPrimArray_(static_cast<std::size_t>(a->L) + bufLen_<T>(), T);
	int64_t i = 0;
	for (auto& e : l->B)
	{
		a->B[i] = e;
		i++;
	}
	if (bufLen_<T>() > 0)
		a->B[a->L] = 0;
	return a;
}

template<typename T> struct copy_ {};
template<typename T> struct copy_<type_(Array_<T>)> { type_(Array_<T>) operator()(type_(Array_<T>) t) {
	if (t == nullptr)
		return nullptr;
	type_(Array_<T>) r = new_(Array_<T>)();
	r->L = t->L;
	r->B = newPrimArray_(static_cast<std::size_t>(t->L) + bufLen_<T>(), T);
	for (int64_t i = 0; i < t->L; i++)
		r->B[i] = copy_<T>()(t->B[i]);
	if (bufLen_<T>() > 0)
		r->B[r->L] = 0;
	return r;
}};
template<typename T> struct copy_<type_(List_<T>)> { type_(List_<T>) operator()(type_(List_<T>) t) {
	if (t == nullptr)
		return nullptr;
	type_(List_<T>) r = new_(List_<T>)();
	for (auto i = t->B.begin(); i != t->B.end(); ++i)
	{
		r->B.push_back(copy_<T>()(*i));
		if (i == t->I)
		{
			auto e = r->B.end();
			--e;
			r->I = e;
		}
	}
	return r;
}};
template<typename T> struct copy_<type_(Stack_<T>)> { type_(Stack_<T>) operator()(type_(Stack_<T>) t) {
	if (t == nullptr)
		return nullptr;
	type_(Stack_<T>) r = new_(Stack_<T>)();
	std::stack<T> b;
	while (!t->B.empty())
	{
		b.push(t->B.top());
		t->B.pop();
	}
	while (!b.empty())
	{
		r->B.push(copy_<T>()(b.top()));
		t->B.push(b.top());
		b.pop();
	}
	return r;
}};
template<typename T> struct copy_<type_(Queue_<T>)> { type_(Queue_<T>) operator()(type_(Queue_<T>) t) {
	if (t == nullptr)
		return nullptr;
	type_(Queue_<T>) r = new_(Queue_<T>)();
	std::queue<T> b;
	while (!t->B.empty())
	{
		b.push(t->B.front());
		t->B.pop();
	}
	while (!b.empty())
	{
		r->B.push(copy_<T>()(b.front()));
		t->B.push(b.front());
		b.pop();
	}
	return r;
}};
template<typename T1, typename T2> struct copy_<type_(Dict_<T1, T2>)> { type_(Dict_<T1, T2>) operator()(type_(Dict_<T1, T2>) t) {
	if (t == nullptr)
		return nullptr;
	type_(Dict_<T1, T2>) r = new_(Dict_<T1, T2>)();
	r->L = t->L;
	r->B = dictCopyRec_<T1, T2>(t->B);
	return r;
}};
template<typename T> struct copy_<type_(T)> { type_(T) operator()(type_(T) t) {
	if (std::is_class<T>::value)
	{
		if (t == nullptr)
			return nullptr;
		return dcast_(T)(reinterpret_cast<type_(Class_)(*)(type_(Class_))>(classTable_[t->Y + 4])(t));
	}
	else
		return t;
}};
template<> struct copy_ <int64_t> { int64_t operator()(int64_t t) { return t; } };
template<> struct copy_ <char16_t> { char16_t operator()(char16_t t) { return t; } };
template<> struct copy_ <bool> { bool operator()(bool t) { return t; } };
template<> struct copy_ <double> { double operator()(double t) { return t; } };
template<> struct copy_ <uint8_t> { uint8_t operator()(uint8_t t) { return t; } };
template<> struct copy_ <uint16_t> { uint16_t operator()(uint16_t t) { return t; } };
template<> struct copy_ <uint32_t> { uint32_t operator()(uint32_t t) { return t; } };
template<> struct copy_ <uint64_t> { uint64_t operator()(uint64_t t) { return t; } };

static type_(Array_<char16_t>) toStr_(int64_t v) {
	std::stringstream s;
	s << v;
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(char16_t v) {
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(1);
	r->B = newPrimArray_(2, char16_t);
	r->B[0] = v;
	r->B[1] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(bool v) {
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	if (v)
	{
		r->L = static_cast<int64_t>(4);
		r->B = newPrimArray_(5, char16_t);
		r->B[0] = 't';
		r->B[1] = 'r';
		r->B[2] = 'u';
		r->B[3] = 'e';
		r->B[4] = 0;
	}
	else
	{
		r->L = static_cast<int64_t>(5);
		r->B = newPrimArray_(6, char16_t);
		r->B[0] = 'f';
		r->B[1] = 'a';
		r->B[2] = 'l';
		r->B[3] = 's';
		r->B[4] = 'e';
		r->B[5] = 0;
	}
	return r;
}
static type_(Array_<char16_t>) toStr_(double v) {
	std::stringstream s;
	s << std::setprecision(16) << v;
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(uint8_t v) {
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << static_cast<uint16_t>(v);
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(uint16_t v) {
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(4) << std::hex << v;
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(uint32_t v) {
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(8) << std::hex << v;
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(uint64_t v) {
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(16) << std::hex << v;
	const std::string& t = s.str();
	type_(Array_<char16_t>) r = new_(Array_<char16_t>)();
	r->L = static_cast<int64_t>(t.size());
	r->B = newPrimArray_(t.size() + 1, char16_t);
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static type_(Array_<char16_t>) toStr_(type_(Array_<char16_t>) v) {
	return v;
}

static int64_t cmp_(type_(Array_<char16_t>) a, type_(Array_<char16_t>) b) {
	int64_t p = 0;
	while (p < a->L && p < b->L)
	{
		if (a->B[p] != b->B[p])
			return a->B[p] > b->B[p] ? 1 : (a->B[p] < b->B[p] ? -1 : 0);
		p++;
	}
	return a->L > b->L ? 1 : (a->L < b->L ? -1 : 0);
}
static int64_t cmp_(type_(Class_) a, type_(Class_) b) { return reinterpret_cast<int64_t(*)(type_(Class_), type_(Class_))>(classTable_[a->Y + 3])(a, b); }
static int64_t cmp_(int64_t a, int64_t b) { return a - b; }
static int64_t cmp_(char16_t a, char16_t b) { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(double a, double b) { return a > b ? 1LL : (a < b ? -1LL : 0LL); }
static int64_t cmp_(uint8_t a, uint8_t b) { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint16_t a, uint16_t b) { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint32_t a, uint32_t b) { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint64_t a, uint64_t b) { return a > b ? 1LL : (a < b ? -1LL : 0LL); }

static type_(Array_<uint8_t>) makeBin_(const void* v, std::size_t s) {
	type_(Array_<uint8_t>) r = new_(Array_<uint8_t>)();
	r->L = s;
	r->B = newPrimArray_(s, uint8_t);
	memcpy(r->B, v, s);
	return r;
}
static void mergeBin_(type_(Array_<uint8_t>) a, const type_(Array_<uint8_t>) b) {
	int64_t l = a->L + b->L;
	uint8_t* d = newPrimArray_(static_cast<std::size_t>(l), uint8_t);
	memcpy(d, a->B, static_cast<std::size_t>(a->L));
	memcpy(d + a->L, b->B, static_cast<std::size_t>(b->L));
	a->L = l;
	a->B = d;
}
template<typename T> struct toBin_ {};
template<typename T> struct toBin_<type_(Array_<T>)> { type_(Array_<uint8_t>) operator()(type_(Array_<T>) v) {
	if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
	type_(Array_<uint8_t>) r = makeBin_(&v->L, sizeof(int64_t));
	for (int64_t i = 0; i < v->L; i++)
		mergeBin_(r, toBin_<T>()(v->B[i]));
	return r;
}};
template<typename T> struct toBin_<type_(List_<T>)> { type_(Array_<uint8_t>) operator()(type_(List_<T>) v) {
	if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
	int64_t s = static_cast<int64_t>(v->B.size());
	type_(Array_<uint8_t>) r = makeBin_(&s, sizeof(int64_t));
	int64_t c = 0, d = -1;
	for (auto i = v->B.begin(); i != v->B.end(); ++i, ++c) if (i == v->I) { d = c; break; }
	mergeBin_(r, makeBin_(&d, sizeof(int64_t)));
	for (auto& n : v->B)
		mergeBin_(r, toBin_<T>()(n));
	return r;
}};
template<typename T> struct toBin_<type_(Stack_<T>)> { type_(Array_<uint8_t>) operator()(type_(Stack_<T>) v) {
	if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
	int64_t s = static_cast<int64_t>(v->B.size());
	std::stack<T> b;
	type_(Array_<uint8_t>) r = makeBin_(&s, sizeof(int64_t));
	while (!v->B.empty())
	{
		b.push(v->B.top());
		v->B.pop();
	}
	while (!b.empty())
	{
		T n = b.top();
		mergeBin_(r, toBin_<T>()(n));
		v->B.push(n);
		b.pop();
	}
	return r;
}};
template<typename T> struct toBin_<type_(Queue_<T>)> { type_(Array_<uint8_t>) operator()(type_(Queue_<T>) v) {
	if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
	int64_t s = static_cast<int64_t>(v->B.size());
	std::queue<T> b;
	type_(Array_<uint8_t>) r = makeBin_(&s, sizeof(int64_t));
	while (!v->B.empty())
	{
		T n = v->B.front();
		b.push(n);
		mergeBin_(r, toBin_<T>()(n));
		v->B.pop();
	}
	while (!b.empty())
	{
		v->B.push(b.front());
		b.pop();
	}
	return r;
}};
template<typename T1, typename T2> struct toBin_<type_(Dict_<T1, T2>)> { type_(Array_<uint8_t>) operator()(type_(Dict_<T1, T2>) v) {
	if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
	type_(Array_<uint8_t>) r = makeBin_(&v->L, sizeof(int64_t));
	dictToBinRec_<T1, T2>(r, v->B);
	return r;
}};
template<typename T> struct toBin_<type_(T)> { type_(Array_<uint8_t>) operator()(type_(T) v) {
	if (std::is_class<T>::value)
	{
		if (v == nullptr) { int64_t p = -1; return makeBin_(&p, sizeof(p)); }
		type_(Array_<uint8_t>) r = makeBin_(&v->Y, sizeof(int64_t));
		mergeBin_(r, reinterpret_cast<type_(Array_<uint8_t>)(*)(type_(Class_))>(classTable_[v->Y + 5])(v));
		return r;
	}
	else
	{
		int64_t p = -1;
		return makeBin_(&p, sizeof(p));
	}
}};
template<> struct toBin_<int64_t> { type_(Array_<uint8_t>) operator()(int64_t v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<double> { type_(Array_<uint8_t>) operator()(double v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<char16_t> { type_(Array_<uint8_t>) operator()(char16_t v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<bool> { type_(Array_<uint8_t>) operator()(bool v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<uint8_t> { type_(Array_<uint8_t>) operator()(uint8_t v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<uint16_t> { type_(Array_<uint8_t>) operator()(uint16_t v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<uint32_t> { type_(Array_<uint8_t>) operator()(uint32_t v) { return makeBin_(&v, sizeof(v)); } };
template<> struct toBin_<uint64_t> { type_(Array_<uint8_t>) operator()(uint64_t v) { return makeBin_(&v, sizeof(v)); } };

template<typename T> struct fromBin_ {};
template<typename T> struct fromBin_<type_(Array_<T>)> { type_(Array_<T>) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	int64_t l = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	if (l == -1) return nullptr;
	type_(Array_<T>) r = new_(Array_<T>)();
	r->L = l;
	r->B = newPrimArray_(static_cast<std::size_t>(l) + bufLen_<T>(), T);
	for (int64_t i = 0; i < l; i++)
		r->B[i] = fromBin_<T>()(b, o);
	if (bufLen_<T>() > 0)
		r->B[l] = 0;
	return r;
}};
template<typename T> struct fromBin_<type_(List_<T>)> { type_(List_<T>) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	int64_t l = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	if (l == -1) return nullptr;
	type_(List_<T>) r = new_(List_<T>)();
	int64_t d = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	for (int64_t i = 0; i < l; i++)
	{
		r->B.push_back(fromBin_<T>()(b, o));
		if (i == d)
		{
			auto e = r->B.end();
			--e;
			r->I = e;
		}
	}
	return r;
}};
template<typename T> struct fromBin_<type_(Stack_<T>)> { type_(Stack_<T>) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	int64_t l = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	if (l == -1) return nullptr;
	type_(Stack_<T>) r = new_(Stack_<T>)();
	for (int64_t i = 0; i < l; i++)
		r->B.push(fromBin_<T>()(b, o));
	return r;
}};
template<typename T> struct fromBin_<type_(Queue_<T>)> { type_(Queue_<T>) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	int64_t l = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	if (l == -1) return nullptr;
	type_(Queue_<T>) r = new_(Queue_<T>)();
	for (int64_t i = 0; i < l; i++)
		r->B.push(fromBin_<T>()(b, o));
	return r;
}};
template<typename T1, typename T2> struct fromBin_<type_(Dict_<T1, T2>)> { type_(Dict_<T1, T2>) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	int64_t l = *reinterpret_cast<int64_t*>(b->B + o);
	o += sizeof(int64_t);
	if (l == -1) return nullptr;
	type_(Dict_<T1, T2>) r = new_(Dict_<T1, T2>)();
	r->L = l;
	for (int64_t i = 0; i < l; i++)
	{
		T1 k = fromBin_<T1>()(b, o);
		T2 v = fromBin_<T2>()(b, o);
		r->Add(k, v);
	}
	return r;
}};
template<typename T> struct fromBin_<type_(T)> { type_(T) operator()(type_(Array_<uint8_t>) b, int64_t& o) {
	if (std::is_class<T>::value)
	{
		int64_t y = *reinterpret_cast<int64_t*>(b->B + o);
		o += sizeof(int64_t);
		if (y == -1) return nullptr;
		return dcast_(T)(reinterpret_cast<type_(Class_)(*)(type_(Class_), type_(Array_<uint8_t>), int64_t*)>(classTable_[y + 6])(nullptr, b, &o));
	}
	else
	{
		o += sizeof(void*);
		return nullptr;
	}
}};
template<> struct fromBin_<int64_t> { int64_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { int64_t r = *reinterpret_cast<int64_t*>(b->B + o); o += sizeof(int64_t); return r; } };
template<> struct fromBin_<double> { double operator()(type_(Array_<uint8_t>) b, int64_t& o) { double r = *reinterpret_cast<double*>(b->B + o); o += sizeof(double); return r; } };
template<> struct fromBin_<char16_t> { char16_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { char16_t r = *reinterpret_cast<char16_t*>(b->B + o); o += sizeof(char16_t); return r; } };
template<> struct fromBin_<bool> { bool operator()(type_(Array_<uint8_t>) b, int64_t& o) { bool r = *reinterpret_cast<bool*>(b->B + o); o += sizeof(bool); return r; } };
template<> struct fromBin_<uint8_t> { uint8_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { uint8_t r = *reinterpret_cast<uint8_t*>(b->B + o); o += sizeof(uint8_t); return r; } };
template<> struct fromBin_<uint16_t> { uint16_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { uint16_t r = *reinterpret_cast<uint16_t*>(b->B + o); o += sizeof(uint16_t); return r; } };
template<> struct fromBin_<uint32_t> { uint32_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { uint32_t r = *reinterpret_cast<uint32_t*>(b->B + o); o += sizeof(uint32_t); return r; } };
template<> struct fromBin_<uint64_t> { uint64_t operator()(type_(Array_<uint8_t>) b, int64_t& o) { uint64_t r = *reinterpret_cast<uint64_t*>(b->B + o); o += sizeof(uint64_t); return r; } };

template<typename T> type_(Array_<T>) sub_(type_(Array_<T>) a, int64_t start, int64_t len) {
	if (len == -1)
		len = a->L - start;
	if (start < 0 || len < 0 || start + len > a->L)
		return nullptr;
	type_(Array_<T>) r = new_(Array_<T>)();
	r->L = len;
	r->B = newPrimArray_(static_cast<std::size_t>(len + bufLen_<T>()), T);
	for (int64_t i = 0; i < len; i++)
		r->B[i] = a->B[start + i];
	if (bufLen_<T>() > 0)
		r->B[len] = 0;
	return r;
}

template<typename T> type_(T) as_(const int64_t* y, type_(Class_) c, int64_t o) {
	if (c == nullptr)
		return nullptr;
	int64_t m = c->Y;
	for (; ; )
	{
		if (m == o)
			return dcast_(T)(c);
		if (m == 0)
			return nullptr;
		m = y[m];
	}
}

static bool is_(const int64_t* y, type_(Class_) c, int64_t o) {
	int64_t m = c->Y;
	for (; ; )
	{
		if (m == o)
			return true;
		if (m == 0)
			return false;
		m = y[m];
	}
}

template<typename T> T min_(type_(Array_<T>) a) {
	if (a->L == 0)
		return (T)0;
	T r = a->B[0];
	for (int64_t i = 0; i < a->L; i++)
	{
		if (cmp_(r, a->B[i]) > 0)
			r = a->B[i];
	}
	return r;
}

template<typename T> T max_(type_(Array_<T>) a) {
	if (a->L == 0)
		return (T)0;
	T r = a->B[0];
	for (int64_t i = 0; i < a->L; i++)
	{
		if (cmp_(r, a->B[i]) < 0)
			r = a->B[i];
	}
	return r;
}

template<typename T> type_(Array_<T>) repeat_(type_(Array_<T>) a, int64_t n) {
	type_(Array_<T>) r = new_(Array_<T>)();
	r->L = a->L * n;
	r->B = newPrimArray_(static_cast<std::size_t>(r->L) + bufLen_<T>(), T);
	for (int64_t i = 0; i < n; i++)
	{
		for (int64_t j = 0; j < a->L; j++)
			r->B[i * a->L + j] = a->B[j];
	}
	if (bufLen_<T>() > 0)
		r->B[r->L] = 0;
	return r;
}

template<typename T1, typename T2> dictImpl_<T1, T2>* dictAddRec_(dictImpl_<T1, T2>* n, T1 k, T2 v, bool* a) {
	if (n == nullptr)
	{
		*a = true;
		return newPrim_(dictImpl_<T1, T2>)(k, v);
	}
	{
		int64_t c = cmp_(k, n->K);
		if (c == 0)
		{
			n->V = v;
			return n;
		}
		if (c < 0)
			n->CL = dictAddRec_<T1, T2>(n->CL, k, v, a);
		else
			n->CR = dictAddRec_<T1, T2>(n->CR, k, v, a);
	}
	if (n->CR != nullptr && n->CR->R)
	{
		dictImpl_<T1, T2>* r = n->CR;
		n->CR = r->CL;
		r->CL = n;
		r->R = n->R;
		n->R = true;
		n = r;
	}
	if (n->CL != nullptr && n->CL->R && n->CL->CL != nullptr && n->CL->CL->R)
	{
		dictImpl_<T1, T2>* l = n->CL;
		n->CL = l->CR;
		l->CR = n;
		l->R = n->R;
		n->R = true;
		n = l;
		n->R = true;
		n->CL->R = false;
		n->CR->R = false;
	}
	return n;
}
template<typename T1, typename T2> dictImpl_<T1, T2>* dictAdd_(dictImpl_<T1, T2>* r, T1 k, T2 v, bool* a) {
	*a = false;
	dictImpl_<T1, T2>* n = dictAddRec_(r, k, v, a);
	n->R = false;
	return n;
}
template<typename T1, typename T2> dictImpl_<T1, T2>* dictCopyRec_(dictImpl_<T1, T2>* n) {
	if (n == nullptr)
		return nullptr;
	dictImpl_<T1, T2>* r = newPrim_(dictImpl_<T1, T2>)(copy_<T1>()(n->K), copy_<T2>()(n->V));
	r->R = n->R;
	r->CL = dictCopyRec_(n->CL);
	r->CR = dictCopyRec_(n->CR);
	return r;
}
template<typename T1, typename T2> void dictToBinRec_(type_(Array_<uint8_t>) a, dictImpl_<T1, T2>* d) {
	if (d->CL != nullptr)
		dictToBinRec_(a, d->CL);
	mergeBin_(a, toBin_<T1>()(d->K));
	mergeBin_(a, toBin_<T2>()(d->V));
	if (d->CR != nullptr)
		dictToBinRec_(a, d->CR);
}
template<typename T1, typename T2> T2 dictSearch_(dictImpl_<T1, T2>* r, T1 k, bool* f) {
	dictImpl_<T1, T2>* n = r;
	while (n != nullptr)
	{
		int64_t c = cmp_(k, n->K);
		if (c == 0)
		{
			*f = true;
			return n->V;
		}
		if (c < 0)
			n = n->CL;
		else
			n = n->CR;
	}
	*f = false;
	return (T2)0;
}
template<typename T1, typename T2> bool dictForEach_(dictImpl_<T1, T2>* r, bool(*f)(T1, T2, type_(Class_)), type_(Class_) p) {
	if (r == nullptr)
		return true;
	if (!dictForEach_<T1, T2>(r->CL, f, p))
		return false;
	if (!f(r->K, r->V, p))
		return false;
	if (!dictForEach_<T1, T2>(r->CR, f, p))
		return false;
	return true;
}
template<typename T1, typename T2> bool dictExist_(dictImpl_<T1, T2>* r, T1 k) {
	dictImpl_<T1, T2>* n = r;
	while (n != nullptr)
	{
		int64_t c = cmp_(k, n->K);
		if (c == 0)
			return true;
		if (c < 0)
			n = n->CL;
		else
			n = n->CR;
	}
	return false;
}
template<typename T1, typename T2> void dictFreeRec_(dictImpl_<T1, T2>* n) {
	if (n == nullptr)
		return;
	dictFreeRec_<T1, T2>(n->CL);
	dictFreeRec_<T1, T2>(n->CR);
	delPrim_(n);
}

static int64_t powI_(int64_t a, int64_t b) {
	switch (b)
	{
	case 0LL:
		return 1LL;
	case 1LL:
		return a;
	case 2LL:
		return a * a;
	}
	if (a == 1LL)
		return 1LL;
	if (a == -1LL)
		return (b & 1LL) == 0LL ? 1LL : -1LL;
	if (b < 0LL)
		return 0LL;
	int64_t r = 1LL;
	for (; ; )
	{
		if ((b & 1LL) == 1LL)
			r *= a;
		b >>= 1LL;
		if (b == 0LL)
			break;
		a *= a;
	}
	return r;
}

template<typename T> void reverse_(type_(Array_<T>) me) { std::reverse<T*>(me->B, me->B + me->L); }
template<typename T> bool sortCmp_(const T& a, const T& b) { return cmp_(a, b) < 0; }
template<typename T> void sort_(type_(Array_<T>) me) { std::sort<T*, bool(*)(const T&, const T&)>(me->B, me->B + me->L, sortCmp_<T>); }
static uint8_t sar_(uint8_t me_, int64_t n) { return static_cast<uint8_t>(static_cast<int8_t>(me_) >> n); }
static uint16_t sar_(uint16_t me_, int64_t n) { return static_cast<uint16_t>(static_cast<int16_t>(me_) >> n); }
static uint32_t sar_(uint32_t me_, int64_t n) { return static_cast<uint32_t>(static_cast<int32_t>(me_) >> n); }
static uint64_t sar_(uint64_t me_, int64_t n) { return static_cast<uint64_t>(static_cast<int64_t>(me_) >> n); }
static uint8_t endian_(uint8_t me_) { return me_; }
static uint16_t endian_(uint16_t me_) { return ((me_ & 0x00ff) << 8) | ((me_ & 0xff00) >> 8); }
static uint32_t endian_(uint32_t me_)
{
	me_ = ((me_ & 0x00ff00ff) << 8) | ((me_ & 0xff00ff00) >> 8);
	return ((me_ & 0x0000ffff) << 16) | ((me_ & 0xffff0000) >> 16);
}
static uint64_t endian_(uint64_t me_)
{
	me_ = ((me_ & 0x00ff00ff00ff00ff) << 8) | ((me_ & 0xff00ff00ff00ff00) >> 8);
	me_ = ((me_ & 0x0000ffff0000ffff) << 16) | ((me_ & 0xffff0000ffff0000) >> 16);
	return ((me_ & 0x00000000ffffffff) << 32) | ((me_ & 0xffffffff00000000) >> 32);
}

struct reader_ {
	reader_() : F(newPrim_(std::ifstream)()) {}
	std::ifstream* F;
};

struct writer_ {
	writer_() : F(newPrim_(std::ofstream)()) {}
	std::ofstream* F;
};

template<typename T>
struct listPtr_ {
	listPtr_<T>() {}
	typename T::iterator I;
};

static char16_t readUtf8_(std::ifstream* f) {
	char c;
	int64_t l;
	uint64_t u;
	if (!f->get(c))
		return 0xffff;
	if ((c & 0xc0) == 0x80)
		return 0xffff;
	if ((c & 0x80) == 0x00)
		l = 0;
	else if ((c & 0xe0) == 0xc0)
		l = 1, c &= 0x1f;
	else if ((c & 0xf0) == 0xe0)
		l = 2, c &= 0x0f;
	else if ((c & 0xf8) == 0xf0)
		l = 3, c &= 0x07;
	else if ((c & 0xfc) == 0xf8)
		l = 4, c &= 0x03;
	else if ((c & 0xfe) == 0xfc)
		l = 5, c &= 0x01;
	else
		return 0xffff;
	u = static_cast<uint64_t>(c);
	for (int64_t i = 0; i < l; i++) {
		if (!f->get(c) || (c & 0xc0) != 0x80)
			return 0xffff;
		u = (u << 6) | static_cast<uint64_t>(c & 0x3f);
	}
	if (0x00010000 <= u && u <= 0x0010ffff)
		u = 0x20;
	return static_cast<char16_t>(u);
}

static void writeUtf8_(std::ofstream* f, char16_t c) {
	uint64_t u;
	std::size_t size;
	if ((c >> 7) == 0)
		u = c, size = 1;
	else {
		u = static_cast<uint64_t>(0x80 | (c & 0x3f)) << 8;
		c >>= 6;
		if ((c >> 5) == 0)
			u |= 0xc0 | c, size = 2;
		else {
			u = (u | 0x80 | (c & 0x3f)) << 8;
			c >>= 6;
			if ((c >> 4) == 0)
				u |= 0xe0 | c, size = 3;
			else {
				u = (u | 0x80 | (c & 0x3f)) << 8;
				c >>= 6;
				if ((c >> 3) == 0)
					u |= 0xf0 | c, size = 4;
				else {
					u = (u | 0x80 | (c & 0x3f)) << 8;
					c >>= 6;
					if ((c >> 2) == 0)
						u |= 0xf8 | c, size = 5;
					else {
						u = (u | 0x80 | (c & 0x3f)) << 8;
						c >>= 6;
						if ((c >> 1) == 0) u |= 0xfc | c, size = 6; else return;
					}
				}
			}
		}
	}
	if (size == 1 && u == 0x0a) f->write(newLine_, static_cast<std::streamsize>(sizeof(newLine_))); else f->write(reinterpret_cast<char*>(&u), static_cast<std::streamsize>(size));
}

static void init_() {
	setlocale(LC_ALL, "");
}
