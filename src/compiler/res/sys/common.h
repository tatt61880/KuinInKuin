#pragma once

#include <chrono>
#include <codecvt>
#include <cstdarg>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <stack>
#include <type_traits>
#include <vector>

class Ref_;
template<typename T> class Array_;
template<typename T> class List_;
template<typename T> class Stack_;
template<typename T> class Queue_;
template<typename T1, typename T2> class dictImpl_;
template<typename T1, typename T2> class Dict_;
class Class_;

#if _MSC_VER >= 1900
static std::string utf16ToUtf8_(const std::u16string& s)
{
	const int16_t* p = reinterpret_cast<const int16_t*>(s.data());
	return std::wstring_convert<std::codecvt_utf8_utf16<int16_t>, int16_t>{}.to_bytes(p, p + s.size());
}
static std::u16string utf8ToUtf16_(const std::string& s)
{
	const auto t = std::wstring_convert<std::codecvt_utf8_utf16<int16_t>, int16_t>{}.from_bytes(s);
	return std::u16string(reinterpret_cast<const char16_t*>(t.data()), t.size());
}
#else
static std::string utf16ToUtf8_(const std::u16string& s)
{
	return std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(s);
}
static std::u16string utf8ToUtf16_(const std::string& s)
{
	return std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.from_bytes(s);
}
#endif

#if defined(_WIN32)

#define STRICT
#define _WIN32_DCOM

#include <Windows.h>

#undef min
#undef far
#undef max
#undef near

const char newLine_[] = { '\r', '\n' };

static bool setCurDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::SetCurrentDirectoryA(t.c_str()) != 0;
}
static bool makeDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::CreateDirectoryA(t.c_str(), 0) != 0;
}
static bool delDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::RemoveDirectoryA(t.c_str()) != 0;
}
static bool delFile_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::DeleteFileA(t.c_str()) != 0;
}
static bool copyDir_(const char16_t* d, const char16_t* s)
{
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::CreateDirectoryExA(t2.c_str(), t1.c_str(), 0) != 0;
}
static bool copyFile_(const char16_t* d, const char16_t* s)
{
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::CopyFileA(t2.c_str(), t1.c_str(), false) != 0;
}
static bool moveFile_(const char16_t* d, const char16_t* s)
{
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::MoveFileExA(t2.c_str(), t1.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_ALLOWED) != 0;
}

#else

const char newLine_[] = { '\n' };

static bool setCurDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::chdir(t.c_str()) == 0;
}
static bool makeDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::mkdir(t.c_str(), S_IRWXU | S_IRWXG | S_IRWXO) == 0;
}
static bool delDir_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::rmdir(t.c_str()) == 0;
}
static bool delFile_(const char16_t* p)
{
	std::u16string s = p;
	const std::string& t = utf16ToUtf8_(s);
	return ::unlink(t.c_str()) == 0;
}
static bool copyDir_(const char16_t* d, const char16_t* s)
{
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	struct stat f;
	return !(::stat(t2.c_str(), &f) != 0 || ::mkdir(t1.c_str(), f.st_mode) != 0);
}
static bool copyFile_(const char16_t* d, const char16_t* s)
{
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
	size_t r = 1;
	char* buf = new char[65536];
	while (r > 0 && (r = ::read(i, buf.get(), 65536)) > 0)
	{
		size_t z, w = 0;
		do
		{
			if ((z = ::write(o, buf.get() + w, r - w)) < 0)
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
	delete[] buf;
	return r >= 0;
}
static bool moveFile_(const char16_t* d, const char16_t* s)
{
	std::u16string s1 = d;
	const std::string& t1 = utf16ToUtf8_(s1);
	std::u16string s2 = s;
	const std::string& t2 = utf16ToUtf8_(s2);
	return ::rename(t2.c_str(), t1.c_str()) == 0;
}

#   define BOOST_COPY_FILE(F,T,FailIfExistsBool)
#   define BOOST_MOVE_FILE(OLD,NEW)()
#endif

template<typename T>
static size_t bufLen_() noexcept { return 0; }
template<>
static size_t bufLen_<char16_t>() noexcept { return 1; }

template<typename T>
static void* newArrayRec_(int64_t n, int64_t x, const int64_t* b) noexcept
{
	if (x == n - 1)
	{
		Array_<T>* r = new Array_<T>();
		r->L = b[x];
		size_t s = static_cast<size_t>(b[x] + bufLen_<T>());
		r->B = new T[s];
		memset(r->B, 0, sizeof(T) * s);
		return r;
	}
	{
		Array_<void*>* r = new Array_<void*>();
		r->L = b[x];
		r->B = reinterpret_cast<void**>(new T[static_cast<size_t>(b[x])]);
		for (int64_t i = 0; i < b[x]; i++)
			r->B[i] = newArrayRec_<T>(n, x + 1, b);
		return r;
	}
}

template<typename T, typename R>
static R newArray_(int64_t n, ...) noexcept
{
	if (n > 64)
		return nullptr;
	int64_t b[64];
	va_list l;
	va_start(l, n);
	for (int64_t i = 0; i < n; i++)
	{
		b[i] = va_arg(l, int64_t);
	}
	va_end(l);
	return static_cast<R>(newArrayRec_<T>(n, 0, b));
}

template<typename T>
static Array_<T>* copy_(Array_<T>* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	Array_<T>* r = new Array_<T>();
	r->L = t->L;
	r->B = new T[static_cast<size_t>(t->L) + bufLen_<T>()];
	for (int64_t i = 0; i < t->L + static_cast<int64_t>(bufLen_<T>()); i++)
		r->B[i] = copy_(t->B[i]);
	return r;
}
template<typename T>
static List_<T>* copy_(List_<T>* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	// TODO:
	return nullptr;
}
template<typename T>
static Stack_<T>* copy_(Stack_<T>* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	// TODO:
	return nullptr;
}
template<typename T>
static Queue_<T>* copy_(Queue_<T>* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	// TODO:
	return nullptr;
}
template<typename T1, typename T2>
static Dict_<T1, T2>* copy_(Dict_<T1, T2>* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	// TODO:
	return nullptr;
}
template<typename T>
static T* copy_(T* t) noexcept
{
	if (t == nullptr)
		return nullptr;
	return static_cast<T*>((new T())->copy_(t));
}
static int64_t copy_(int64_t t) noexcept { return t; }
static char16_t copy_(char16_t t) noexcept { return t; }
static bool copy_(bool t) noexcept { return t; }
static double copy_(double t) noexcept { return t; }
static uint8_t copy_(uint8_t t) noexcept { return t; }
static uint16_t copy_(uint16_t t) noexcept { return t; }
static uint32_t copy_(uint32_t t) noexcept { return t; }
static uint64_t copy_(uint64_t t) noexcept { return t; }

class Ref_
{
public:
	Ref_() noexcept : R(0LL)
	{
	}

	bool EqAddr(const Ref_* t) noexcept
	{
		return this == t;
	}

	int64_t R;
};

template<typename T>
class Array_ : public Ref_
{
public:
	Array_() noexcept : Ref_(), L(), B()
	{
	}

	explicit Array_(int64_t n, ...) noexcept : Ref_()
	{
		L = n;
		B = new T[static_cast<size_t>(n + bufLen_<T>())];
		va_list l;
		va_start(l, n);
		for (int64_t i = 0; i < n; i++)
		{
			B[i] = va_arg(l, T);
		}
		va_end(l);
		if (bufLen_<T>() > 0)
			B[n] = 0;
	}

	Array_<T>* Cat(const Array_<T>* t) noexcept
	{
		Array_<T>* r = new Array_<T>();
		r->B = new T[static_cast<size_t>(L + t->L + bufLen_<T>())];
		memcpy(r->B, B, sizeof(T) * static_cast<size_t>(L));
		memcpy(r->B + L, t->B, sizeof(T) * static_cast<size_t>(t->L + bufLen_<T>()));
		r->L = L + t->L;
		return r;
	}

	int64_t Len() noexcept
	{
		return L;
	}

	T& At(int64_t n) noexcept
	{
		return B[n];
	}

	bool operator<(const Ref_& t) const
	{
		return cmp_<Array_<T>*>(this, &t);
	}

	int64_t L;
	T* B;
};

template<typename T>
class List_ : public Ref_
{
public:
	List_() noexcept : Ref_(), B(), I(B.end())
	{
	}

	int64_t Len() noexcept
	{
		return static_cast<int64_t>(B.size());
	}

	std::list<T> B;
	typename std::list<T>::iterator I;
};

template<typename T>
class Stack_ : public Ref_
{
public:
	Stack_() noexcept : Ref_(), B()
	{
	}

	int64_t Len() noexcept
	{
		return static_cast<int64_t>(B.size());
	}

	std::stack<T> B;
};

template<typename T>
class Queue_ : public Ref_
{
public:
	Queue_() noexcept : Ref_(), B()
	{
	}

	int64_t Len() noexcept
	{
		return static_cast<int64_t>(B.size());
	}

	std::queue<T> B;
};

template<typename T1, typename T2>
class Dict_ : public Ref_
{
public:
	Dict_() noexcept : Ref_(), L(0LL), B(nullptr)
	{
	}

	int64_t Len() noexcept
	{
		return L;
	}

	void Add(T1 k, T2 v) noexcept
	{
		bool a;
		B = dictAdd_<T1, T2>(B, k, v, &a);
		if (a)
			L++;
	}

	int64_t L;
	dictImpl_<T1, T2>* B;
};

class Class_ : public Ref_
{
public:
	Class_() noexcept : Ref_(), Y(0LL)
	{
	}

	virtual int64_t cmp_(Class_* t) = 0;

	virtual Class_* copy_(Class_* t) = 0;

	int64_t Y;
};

static Array_<char16_t>* toStr_(int64_t v)
{
	std::stringstream s;
	s << v;
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(char16_t v)
{
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(1);
	r->B = new char16_t[2];
	r->B[0] = v;
	r->B[1] = 0;
	return r;
}
static Array_<char16_t>* toStr_(bool v)
{
	Array_<char16_t>* r = new Array_<char16_t>();
	if (v)
	{
		r->L = static_cast<int64_t>(4);
		r->B = new char16_t[5];
		r->B[0] = 't';
		r->B[1] = 'r';
		r->B[2] = 'u';
		r->B[3] = 'e';
		r->B[4] = 0;
	}
	else
	{
		r->L = static_cast<int64_t>(5);
		r->B = new char16_t[6];
		r->B[0] = 'f';
		r->B[1] = 'a';
		r->B[2] = 'l';
		r->B[3] = 's';
		r->B[4] = 'e';
		r->B[5] = 0;
	}
	return r;
}
static Array_<char16_t>* toStr_(double v)
{
	std::stringstream s;
	s << v;
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(uint8_t v)
{
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << static_cast<uint16_t>(v);
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(uint16_t v)
{
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(4) << std::hex << v;
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(uint32_t v)
{
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(8) << std::hex << v;
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(uint64_t v)
{
	std::stringstream s;
	s << "0x" << std::uppercase << std::setfill('0') << std::setw(16) << std::hex << v;
	const std::string& t = s.str();
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}
static Array_<char16_t>* toStr_(Array_<char16_t>* v)
{
	std::u16string s = v->B;
	const std::string& t = utf16ToUtf8_(s);
	Array_<char16_t>* r = new Array_<char16_t>();
	r->L = static_cast<int64_t>(t.size());
	r->B = new char16_t[t.size() + 1];
	int64_t p = 0;
	for (char c : t)
		r->B[p++] = c;
	r->B[t.size()] = 0;
	return r;
}

static int64_t cmp_(Array_<char16_t>* a, Array_<char16_t>* b)
{
	int64_t p = 0;
	while (p < a->L && p < b->L)
	{
		if (a->B[p] != b->B[p])
			return a->B[p] > b->B[p] ? 1 : (a->B[p] < b->B[p] ? -1 : 0);
		p++;
	}
	return a->L > b->L ? 1 : (a->L < b->L ? -1 : 0);
}
static int64_t cmp_(Class_* a, Class_* b) noexcept
{
	return a->cmp_(b);
}
static int64_t cmp_(int64_t a, int64_t b) noexcept { return a - b; }
static int64_t cmp_(char16_t a, char16_t b) noexcept { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(double a, double b) noexcept { return a > b ? 1LL : (a < b ? -1LL : 0LL); }
static int64_t cmp_(uint8_t a, uint8_t b) noexcept { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint16_t a, uint16_t b) noexcept { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint32_t a, uint32_t b) noexcept { return static_cast<int64_t>(a) - static_cast<int64_t>(b); }
static int64_t cmp_(uint64_t a, uint64_t b) noexcept { return a > b ? 1LL : (a < b ? -1LL : 0LL); }

template<typename T>
static Array_<uint8_t>* toBin_(T t)
{
	// TODO:
	return nullptr;
}

template<typename T>
static T fromBin_(Array_<uint8_t>* t, int64_t o)
{
	// TODO:
	return (T)0;
}

template<typename T>
static Array_<T>* sub_(Array_<T>* a, int64_t start, int64_t len)
{
	if (len == -1)
		len = a->L - start;
	if (start < 0 || len < 0 || start + len > a->L)
		return nullptr;
	Array_<T>* r = new Array_<T>();
	r->L = len;
	r->B = new T[static_cast<size_t>(len + bufLen_<T>())];
	for (int64_t i = 0; i < len; i++)
		r->B[i] = a->B[start + i];
	if (bufLen_<T>() > 0)
		r->B[len] = 0;
	return r;
}

template<typename T>
static T* as_(const int64_t* y, Class_* c, int64_t o) noexcept
{
	if (c == nullptr)
		return nullptr;
	int64_t m = c->Y;
	for (; ; )
	{
		if (m == o)
			return reinterpret_cast<T*>(c);
		if (m == 0)
			return nullptr;
		m = y[m];
	}
}

static bool is_(const int64_t* y, Class_* c, int64_t o) noexcept
{
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

static bool eqAddr_(const Ref_* a, const Ref_* b) noexcept
{
	return a == b;
}

static uint32_t rX_, rY_, rZ_, rW_;

static uint32_t xs128_() noexcept
{
	uint32_t t = rX_ ^ (rX_ << 11);
	rX_ = rY_;
	rY_ = rZ_;
	rZ_ = rW_;
	return rW_ = (rW_ ^ (rW_ >> 19)) ^ (t ^ (t >> 8));
}

static int64_t rnd_(int64_t a, int64_t b) noexcept
{
	uint64_t n = (uint64_t)(b - a + 1);
	uint64_t m = 0 - ((0 - n) % n);
	uint64_t r;
	if (m == 0)
		r = (static_cast<uint64_t>(xs128_()) << 32) | static_cast<uint64_t>(xs128_());
	else
	{
		do
		{
			r = (static_cast<uint64_t>(xs128_()) << 32) | static_cast<uint64_t>(xs128_());
		} while (m <= r);
	}
	return static_cast<int64_t>(r % n) + a;
}

static double rndFloat_(double a, double b) noexcept
{
	return (double)((static_cast<uint64_t>(xs128_()) << 32) | static_cast<uint64_t>(xs128_())) / 18446744073709551616.0 * (b - a) + a;
}

template<typename T1, typename T2>
class dictImpl_
{
public:
	dictImpl_(T1 k, T2 v) noexcept : K(k), V(v), CL(nullptr), CR(nullptr), R(true)
	{
	}

	T1 K;
	T2 V;
	dictImpl_* CL;
	dictImpl_* CR;
	bool R;
};

template<typename T1, typename T2>
static dictImpl_<T1, T2>* dictAdd_(dictImpl_<T1, T2>* r, T1 k, T2 v, bool* a) noexcept
{
	*a = false;
	dictImpl_<T1, T2>* n = dictAddRec_(r, k, v, a);
	n->R = false;
	return n;
}

template<typename T1, typename T2>
static T2 dictSearch_(dictImpl_<T1, T2>* r, T1 k, bool* f) noexcept
{
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

template<typename T1, typename T2>
static bool dictForEach_(dictImpl_<T1, T2>* r, bool(*f)(T1, T2, Class_*), Class_* p)
{
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

template<typename T1, typename T2>
static dictImpl_<T1, T2>* dictAddRec_(dictImpl_<T1, T2>* n, T1 k, T2 v, bool* a) noexcept
{
	if (n == nullptr)
	{
		*a = true;
		return new dictImpl_<T1, T2>(k, v);
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

static int64_t powI_(int64_t a, int64_t b) noexcept
{
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
		return std::abs(b) % 2LL == 0LL ? 1LL : -1LL;
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

class reader_
{
public:
	reader_() noexcept : F(new std::ifstream())
	{
	}

	std::ifstream* F;
};

class writer_
{
public:
	writer_() noexcept : F(new std::ofstream())
	{
	}

	std::ofstream* F;
};

static char16_t readUtf8_(std::ifstream* f)
{
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
	for (int64_t i = 0; i < l; i++)
	{
		if (!f->get(c) || (c & 0xc0) != 0x80)
			return 0xffff;
		u = (u << 6) | static_cast<uint64_t>(c & 0x3f);
	}
	if (0x00010000 <= u && u <= 0x0010ffff)
		u = 0x20;
	return static_cast<char16_t>(u);
}

static void writeUtf8_(std::ofstream* f, char16_t c)
{
	uint64_t u;
	size_t size;
	if ((c >> 7) == 0)
		u = c, size = 1;
	else
	{
		u = static_cast<uint64_t>(0x80 | (c & 0x3f)) << 8;
		c >>= 6;
		if ((c >> 5) == 0)
			u |= 0xc0 | c, size = 2;
		else
		{
			u = (u | 0x80 | (c & 0x3f)) << 8;
			c >>= 6;
			if ((c >> 4) == 0)
				u |= 0xe0 | c, size = 3;
			else
			{
				u = (u | 0x80 | (c & 0x3f)) << 8;
				c >>= 6;
				if ((c >> 3) == 0)
					u |= 0xf0 | c, size = 4;
				else
				{
					u = (u | 0x80 | (c & 0x3f)) << 8;
					c >>= 6;
					if ((c >> 2) == 0)
						u |= 0xf8 | c, size = 5;
					else
					{
						u = (u | 0x80 | (c & 0x3f)) << 8;
						c >>= 6;
						if ((c >> 1) == 0)
							u |= 0xfc | c, size = 6;
						else
							return;
					}
				}
			}
		}
	}
	if (size == 1 && u == 0x0a)
		f->write(newLine_, static_cast<std::streamsize>(sizeof(newLine_)));
	else
		f->write(reinterpret_cast<char*>(&u), static_cast<std::streamsize>(size));
}

static void init_()
{
	uint32_t t = static_cast<uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
	rX_ = 123456789;
	rY_ = 362436069;
	rZ_ = 521288629 * t;
	rW_ = 88675123 * (rZ_ >> 1);
}
