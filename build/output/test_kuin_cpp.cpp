#include <cstdint>
static int64_t classTable_[58];
#include "common.h"
namespace {
// Class
class _lj : public Class_{
public:
_lj();
};
// A
class _li : public _lj{
public:
_li();
};
// B
class _lw : public _lj{
public:
_lw();
};
// A
class _mc : public _lj{
public:
_mc();
int64_t _xj; // a
};
// B
class _mk : public _mc{
public:
_mk();
};
// C
class _tz : public _lj{
public:
_tz();
int64_t _uf; // n
};
// C
class _ul : public _lj{
public:
_ul();
int64_t _uq; // i
Array_<char16_t>* _ur; // s
};
static void _a();
static void _e();
static void _f();
static void _g();
typedef void(*_o)();
typedef void(*_ak)();
static void _i();
static void _j();
static void _l(int64_t _al /*excpt*/);
static void _p();
static void _q();
static void _r();
static void _s();
static void _t();
static void _u();
static void _v();
typedef int64_t(*_mj)(_mc*);
typedef int64_t(*_mq)(_mk*);
typedef int64_t(*_mt)(_mc*);
typedef int64_t(*_mu)(_mc*);
static void _w();
static void _x();
static void _y();
static void _z();
static void _aa();
typedef Array_<char16_t>*(*_ut)(int64_t, int64_t*, double, double*, char16_t*);
static void _ab();
static void _ac();
static void _ai(Array_<char16_t>* _vv /*str*/);
template<typename T_> static Array_<char16_t>* _aj(T_ _vw /*me_*/, Array_<int64_t>* _vx /*type*/);
static int64_t _ed(int64_t _vy /*me_*/);
static double _ee(double _vz /*me_*/);
static int64_t _fs(int64_t _wa /*n*/);
static Array_<Array_<char16_t>*>* _fw(Array_<Array_<char16_t>*>* _wb /*n*/, Array_<Array_<char16_t>*>* _wc /*m*/);
static void _lk(_lj* _wd /*me*/);
static void _ll(_lj* _we /*me*/);
static int64_t _lm(_lj* _wf /*me*/, _lj* _wg /*t*/);
static _lj* _ln(_lj* _wh /*me*/);
static Array_<uint8_t>* _lo(_lj* _wj /*me*/);
static _lj* _lp(_lj* _wl /*me*/, Array_<uint8_t>* _wm /*bin*/, int64_t* _wn /*idx*/);
static Array_<char16_t>* _lq(_lj* _wp /*me*/);
static void _lr(_li* _wq);
static _li* _ls(_li* _wr);
static Array_<uint8_t>* _lt(_li* _wt);
static _li* _lu(_li* _wv, Array_<uint8_t>* _ww, int64_t* _wx);
static void _lx(_lw* _wz);
static _lw* _ly(_lw* _xa);
static Array_<uint8_t>* _lz(_lw* _xc);
static _lw* _ma(_lw* _xe, Array_<uint8_t>* _xf, int64_t* _xg);
static void _md(_mc* _xi /*me*/);
static int64_t _me(_mc* _xk /*me*/);
static void _mf(_mc* _xl);
static _mc* _mg(_mc* _xm);
static Array_<uint8_t>* _mh(_mc* _xo);
static _mc* _mi(_mc* _xr, Array_<uint8_t>* _xs, int64_t* _xt);
static int64_t _ml(_mk* _xv /*me*/);
static void _mm(_mk* _xw);
static _mk* _mn(_mk* _xx);
static Array_<uint8_t>* _mo(_mk* _xz);
static _mk* _mp(_mk* _yc, Array_<uint8_t>* _yd, int64_t* _ye);
template<typename T_, typename C_> static void _mx(T_ _yg /*me_*/, Array_<int64_t>* _yh /*type*/, C_ _yi /*item*/);
template<typename T_> static void _my(T_ _yj /*me_*/, Array_<int64_t>* _yk /*type*/);
template<typename T_, typename C_> static void _mz(T_ _yl /*me_*/, Array_<int64_t>* _ym /*type*/, C_ _yn /*item*/);
template<typename T_> static void _na(T_ _yo /*me_*/, Array_<int64_t>* _yp /*type*/);
template<typename T_> static bool _nc(T_ _yq /*me_*/, Array_<int64_t>* _yr /*type*/);
template<typename T_, typename R_> static R_ _nd(T_ _ys /*me_*/, Array_<int64_t>* _yt /*type*/);
template<typename T_> static void _ne(T_ _yu /*me_*/, Array_<int64_t>* _yv /*type*/);
template<typename T_> static void _nf(T_ _yw /*me_*/, Array_<int64_t>* _yx /*type*/);
template<typename T_> static void _nj(T_ _yy /*me_*/, Array_<int64_t>* _yz /*type*/);
template<typename T_, typename C_> static void _nn(T_ _za /*me_*/, Array_<int64_t>* _zb /*type*/, C_ _zc /*item*/);
template<typename T_, typename R_> static R_ _no(T_ _zd /*me_*/, Array_<int64_t>* _ze /*type*/);
template<typename T_, typename R_> static R_ _nq(T_ _zf /*me_*/, Array_<int64_t>* _zg /*type*/);
template<typename T_, typename C_> static void _nw(T_ _zh /*me_*/, Array_<int64_t>* _zi /*type*/, C_ _zj /*item*/);
template<typename T_, typename R_> static R_ _nx(T_ _zk /*me_*/, Array_<int64_t>* _zl /*type*/);
template<typename T_, typename R_> static R_ _nz(T_ _zm /*me_*/, Array_<int64_t>* _zn /*type*/);
template<typename T_, typename K_, typename V_> static void _of(T_ _zo /*me_*/, Array_<int64_t>* _zp /*type*/, K_ _zq /*key*/, V_ _zr /*item*/);
template<typename T_, typename C_, typename R_> static R_ _om(T_ _zs /*me_*/, Array_<int64_t>* _zt /*type*/, C_ _zu /*key*/, bool* _zv /*existed*/);
template<typename T_> static T_ _qy(T_ _zw /*me_*/, Array_<int64_t>* _zx /*type*/, T_ _zy /*n*/);
template<typename T_> static T_ _qz(T_ _zz /*me_*/, Array_<int64_t>* _aaa /*type*/, T_ _aab /*n*/);
template<typename T_> static T_ _ra(T_ _aac /*me_*/, Array_<int64_t>* _aad /*type*/, T_ _aae /*n*/);
template<typename T_> static T_ _rb(T_ _aaf /*me_*/, Array_<int64_t>* _aag /*type*/);
template<typename T_> static T_ _rc(T_ _aah /*me_*/, Array_<int64_t>* _aai /*type*/, int64_t _aaj /*n*/);
template<typename T_> static T_ _rd(T_ _aak /*me_*/, Array_<int64_t>* _aal /*type*/, int64_t _aam /*n*/);
template<typename T_> static T_ _re(T_ _aan /*me_*/, Array_<int64_t>* _aao /*type*/, int64_t _aap /*n*/);
template<typename T_, typename C_> static int64_t _rp(T_ _aaq /*me_*/, Array_<int64_t>* _aar /*type*/, C_ _aas /*item*/, int64_t _aat /*start*/);
template<typename T_, typename C_> static int64_t _rq(T_ _aau /*me_*/, Array_<int64_t>* _aav /*type*/, C_ _aaw /*item*/, int64_t _aax /*start*/);
template<typename T_> static T_ _rr(T_ _aay /*me_*/, Array_<int64_t>* _aaz /*type*/, int64_t _aba /*start*/, int64_t _abb /*len*/);
template<typename T_> static void _rv(T_ _abc /*me_*/, Array_<int64_t>* _abd /*type*/);
template<typename T_> static void _rz(T_ _abe /*me_*/, Array_<int64_t>* _abf /*type*/);
static double _se(double _abg /*x*/);
static double _sf(double _abh /*x*/);
static double _sg(double _abi /*x*/);
static double _sh(double _abj /*x*/);
static double _si(double _abk /*x*/);
static double _sj(double _abl /*x*/);
static double _sk(double _abm /*base*/, double _abn /*x*/);
static void _so(double* _abo /*x*/, double* _abp /*y*/, double _abq /*centerX*/, double _abr /*centerY*/, double _abs /*angle*/);
static double _sp(double _abz /*x*/, double _aca /*y*/, double _acb /*centerX*/, double _acc /*centerY*/);
static double _sq(double _acd /*x*/, double _ace /*y*/, double _acf /*centerX*/, double _acg /*centerY*/);
static bool _su(double* _ach /*x*/, double _aci /*target*/, double _acj /*vel*/);
static double _sz(double _acv /*x*/);
static double _ta(double _acw /*x*/);
static double _tb(double _acx /*x*/, int64_t _acy /*precision*/);
static Array_<char16_t>* _td(Array_<char16_t>* _add /*me_*/);
static Array_<char16_t>* _te(Array_<char16_t>* _adn /*me_*/);
static Array_<char16_t>* _tf(Array_<char16_t>* _adx /*me_*/);
static Array_<char16_t>* _tg(Array_<char16_t>* _aey /*me_*/);
static Array_<char16_t>* _th(Array_<char16_t>* _afq /*me_*/);
static Array_<char16_t>* _tk(int64_t _agi /*a*/, int64_t* _agj /*b*/, double _agk /*c*/, double* _agl /*d*/, char16_t* _agm /*e*/);
static bool _tu(double _agn /*n1*/, double _ago /*n2*/);
static char16_t _tw(char16_t _agu /*me_*/, int64_t _agv /*n*/);
static int64_t _ua(_tz* _agw /*me*/, _lj* _agx /*t*/);
static void _ub(_tz* _agy);
static _tz* _uc(_tz* _agz);
static Array_<uint8_t>* _ud(_tz* _ahb);
static _tz* _ue(_tz* _ahe, Array_<uint8_t>* _ahf, int64_t* _ahg);
static void _um(_ul* _ahi);
static _ul* _un(_ul* _ahj);
static Array_<uint8_t>* _uo(_ul* _ahl);
static _ul* _up(_ul* _ahp, Array_<uint8_t>* _ahq, int64_t* _ahr);
template<typename T_, typename C_> static Array_<C_>* _vh(T_ _aht /*me_*/, Array_<int64_t>* _ahu /*type*/);
static Array_<Array_<char16_t>*>* _vo(Array_<char16_t>* _ahv /*me_*/, Array_<char16_t>* _ahw /*delimiter*/);
static int64_t _aib(Array_<char16_t>* _aie /*me_*/, Array_<char16_t>* _aif /*pattern*/, int64_t _aig /*start*/);
static int64_t argc_;
static char** argv_;
static Array_<char16_t>* _m;
_lj::_lj(): Class_(){
Y = 0;
_lk(this);
}
_li::_li(): _lj(){
Y = 8;
}
_lw::_lw(): _lj(){
Y = 16;
}
_mc::_mc(): _lj(), _xj(){
Y = 24;
_md(this);
}
_mk::_mk(): _mc(){
Y = 33;
}
_tz::_tz(): _lj(), _uf(){
Y = 42;
}
_ul::_ul(): _lj(), _uq(), _ur(){
Y = 50;
}
// $
static void _a(){
int64_t _c; // $
try{
try{
(_e)();
(_f)();
(_g)();
(_i)();
(_j)();
}catch(int64_t _c){
if((0LL) <= _c && _c <= (4294967295LL)){
(_l)((_c));
}
else{
throw;
}
}
}
catch(...){
(_i)();
(_j)();
throw;
}
}
// _init
static void _e(){
}
// _initVars
static void _f(){
(_m) = (new Array_<char16_t>(6, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0066'));
}
// main
static void _g(){
Array_<_ak>* _n; // funcs
int64_t _ag;
int64_t _ah;
(_n) = (new Array_<_o>(14, (_p), (_q), (_r), (_s), (_t), (_u), (_v), (_w), (_x), (_y), (_z), (_aa), (_ab), (_ac)));
for(_ag = (0LL), _ah = (((_n)->Len()) - (1LL)); _ag <= _ah; _ag += (1LL)){
(_ai)((((new Array_<char16_t>(8, u'\u002D', u'\u002D', u'\u0020', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0020'))->Cat(_aj<int64_t>(((_ag) + (1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(4, u'\u0020', u'\u002D', u'\u002D', u'\u000A'))));
((_n)->At(_ag))();
}
}
// _finVars
static void _i(){
(_m) = (nullptr);
}
// _fin
static void _j(){
}
// _err
static void _l(int64_t _al /*excpt*/){
}
// test1
static void _p(){
int64_t _an; // a
int64_t _ao; // n
int64_t _ap; // b
int64_t _aq; // c
double _as; // a
double _at; // n
double _au; // b
double _av; // c
uint8_t _ax; // a
uint8_t _ay; // n
uint8_t _az; // b
uint8_t _ba; // c1
uint8_t _bb; // c2
uint8_t _bc; // d1
uint8_t _bd; // d2
uint16_t _bg; // a
uint16_t _bh; // n
uint16_t _bi; // b
uint16_t _bj; // c1
uint16_t _bk; // c2
uint16_t _bl; // d1
uint16_t _bm; // d2
uint32_t _bp; // a
uint32_t _bq; // n
uint32_t _br; // b
uint32_t _bs; // c1
uint32_t _bt; // c2
uint32_t _bu; // d1
uint32_t _bv; // d2
uint64_t _by; // a
uint64_t _bz; // n
uint64_t _ca; // b
uint64_t _cb; // c1
uint64_t _cc; // c2
uint64_t _cd; // d1
uint64_t _ce; // d2
(_ai)((new Array_<char16_t>(18, u'\u004B', u'\u0075', u'\u0069', u'\u006E', u'\u0020', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0020', u'\u0050', u'\u0072', u'\u006F', u'\u0067', u'\u0072', u'\u0061', u'\u006D', u'\u000A')));
(_an) = (23LL);
(_ai)(((((((_aj<int64_t>((_an), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((2LL), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((7LL), (7LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ao) = (7LL);
(_ap) = ((((((((((((((((_ao) + (_ao)) / (_ao)) - ((_ao) * (_ao))) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (_ao)) + (-(_ao)));
(_ai)(((((((_aj<int64_t>((_ap), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_ap) % (_ao)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_ao), (_ao))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_aq) = (-2LL);
(_ai)(((((((((((((_aj<int64_t>((powI_((_aq), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_aq), (1LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_aq), (2LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_aq), (3LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_aq), (4LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((_aq), (5LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_as) = (23.0);
(_ai)(((((((_aj<double>((_as), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((2.0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((powI_((7LL), (7LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_at) = (7.0);
(_au) = ((((((((((((((((_at) + (_at)) / (_at)) - ((_at) * (_at))) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (_at)) + (-(_at)));
(_ai)(((((((_aj<double>((_au), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((fmod((_au), (_at))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_at), (_at))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_av) = (-2.0);
(_ai)(((((((((((((_aj<double>((pow((_av), (0.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_av), (1.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_av), (2.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_av), (3.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_av), (4.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((pow((_av), (5.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ax) = (static_cast<uint8_t>(0x17U));
(_ai)(((((_aj<uint8_t>((_ax), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint8_t>((static_cast<uint8_t>(0x02U)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ay) = (static_cast<uint8_t>(0x07U));
(_az) = ((((((((((((((((_ay) + (_ay)) / (_ay)) - ((_ay) * (_ay))) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + (_ay)) + ((static_cast<uint8_t>(0x00U)) - (_ay)));
(_ai)(((((_aj<uint8_t>((_az), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint8_t>(((_az) % (_ay)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ba) = (static_cast<uint8_t>(0x01U));
(_bb) = (static_cast<uint8_t>(0xFFU));
(_bc) = (static_cast<uint8_t>(0xFFU));
(_bd) = (static_cast<uint8_t>(0x01U));
(_bc) = ((_bc) + (static_cast<uint8_t>(0x02U)));
(_bd) = ((static_cast<uint8_t>(0x00U)) - (_bd));
(_ai)(((((((((_aj<uint8_t>((_ba), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint8_t>((_bc), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint8_t>((_bb), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint8_t>((_bd), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bg) = (static_cast<uint16_t>(0x0017U));
(_ai)(((((_aj<uint16_t>((_bg), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint16_t>((static_cast<uint16_t>(0x0002U)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bh) = (static_cast<uint16_t>(0x0007U));
(_bi) = ((((((((((((((((_bh) + (_bh)) / (_bh)) - ((_bh) * (_bh))) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + (_bh)) + ((static_cast<uint16_t>(0x0000U)) - (_bh)));
(_ai)(((((_aj<uint16_t>((_bi), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint16_t>(((_bi) % (_bh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bj) = (static_cast<uint16_t>(0x0001U));
(_bk) = (static_cast<uint16_t>(0xFFFFU));
(_bl) = (static_cast<uint16_t>(0xFFFFU));
(_bm) = (static_cast<uint16_t>(0x0001U));
(_bl) = ((_bl) + (static_cast<uint16_t>(0x0002U)));
(_bm) = ((static_cast<uint16_t>(0x0000U)) - (_bm));
(_ai)(((((((((_aj<uint16_t>((_bj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint16_t>((_bl), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint16_t>((_bk), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint16_t>((_bm), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bp) = (0x00000017U);
(_ai)(((((_aj<uint32_t>((_bp), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint32_t>((0x00000002U), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bq) = (0x00000007U);
(_br) = ((((((((((((((((_bq) + (_bq)) / (_bq)) - ((_bq) * (_bq))) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + (_bq)) + ((0x00000000U) - (_bq)));
(_ai)(((((_aj<uint32_t>((_br), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint32_t>(((_br) % (_bq)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bs) = (0x00000001U);
(_bt) = (0xFFFFFFFFU);
(_bu) = (0xFFFFFFFFU);
(_bv) = (0x00000001U);
(_bu) = ((_bu) + (0x00000002U));
(_bv) = ((0x00000000U) - (_bv));
(_ai)(((((((((_aj<uint32_t>((_bs), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint32_t>((_bu), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint32_t>((_bt), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint32_t>((_bv), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_by) = (0x0000000000000017ULL);
(_ai)(((((_aj<uint64_t>((_by), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint64_t>((0x0000000000000002ULL), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_bz) = (0x0000000000000007ULL);
(_ca) = ((((((((((((((((_bz) + (_bz)) / (_bz)) - ((_bz) * (_bz))) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + (_bz)) + ((0x0000000000000000ULL) - (_bz)));
(_ai)(((((_aj<uint64_t>((_ca), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint64_t>(((_ca) % (_bz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cb) = (0x0000000000000001ULL);
(_cc) = (0xFFFFFFFFFFFFFFFFULL);
(_cd) = (0xFFFFFFFFFFFFFFFFULL);
(_ce) = (0x0000000000000001ULL);
(_cd) = ((_cd) + (0x0000000000000002ULL));
(_ce) = ((0x0000000000000000ULL) - (_ce));
(_ai)(((((((((_aj<uint64_t>((_cb), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint64_t>((_cd), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint64_t>((_cc), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<uint64_t>((_ce), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test2
static void _q(){
int64_t _ch; // a
int64_t _ci; // b
int64_t _cj; // c
int64_t _ck; // d
double _cm; // a
double _cn; // b
double _co; // c
double _cp; // d
uint8_t _cr; // a
uint8_t _cs; // b
uint8_t _ct; // c
uint8_t _cu; // d
uint16_t _cw; // a
uint16_t _cx; // b
uint16_t _cy; // c
uint16_t _cz; // d
uint32_t _db; // a
uint32_t _dc; // b
uint32_t _dd; // c
uint32_t _de; // d
uint64_t _dg; // a
uint64_t _dh; // b
uint64_t _di; // c
uint64_t _dj; // d
Array_<char16_t>* _dl; // a
Array_<char16_t>* _dm; // b
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ch) = (-3LL);
(_ci) = (5LL);
(_ai)(((((((((((((_aj<bool>(((_ch) == (_ci)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ch) != (_ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ch) < (_ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ch) <= (_ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ch) > (_ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ch) >= (_ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cj) = (4LL);
(_ck) = (4LL);
(_ai)(((((((((((((_aj<bool>(((_cj) == (_ck)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cj) != (_ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cj) < (_ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cj) <= (_ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cj) > (_ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cj) >= (_ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cm) = (-3.0);
(_cn) = (5.0);
(_ai)(((((((((((((_aj<bool>(((_cm) == (_cn)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cm) != (_cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cm) < (_cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cm) <= (_cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cm) > (_cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cm) >= (_cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_co) = (4.0);
(_cp) = (4.0);
(_ai)(((((((((((((_aj<bool>(((_co) == (_cp)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_co) != (_cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_co) < (_cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_co) <= (_cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_co) > (_cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_co) >= (_cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cr) = (static_cast<uint8_t>(0x79U));
(_cs) = (static_cast<uint8_t>(0x81U));
(_ai)(((((((((((((_aj<bool>(((_cr) == (_cs)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cr) != (_cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cr) < (_cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cr) <= (_cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cr) > (_cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cr) >= (_cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ct) = (static_cast<uint8_t>(0x80U));
(_cu) = (static_cast<uint8_t>(0x80U));
(_ai)(((((((((((((_aj<bool>(((_ct) == (_cu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ct) != (_cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ct) < (_cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ct) <= (_cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ct) > (_cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_ct) >= (_cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cw) = (static_cast<uint16_t>(0x7900U));
(_cx) = (static_cast<uint16_t>(0x8100U));
(_ai)(((((((((((((_aj<bool>(((_cw) == (_cx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cw) != (_cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cw) < (_cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cw) <= (_cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cw) > (_cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cw) >= (_cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_cy) = (static_cast<uint16_t>(0x8000U));
(_cz) = (static_cast<uint16_t>(0x8000U));
(_ai)(((((((((((((_aj<bool>(((_cy) == (_cz)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cy) != (_cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cy) < (_cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cy) <= (_cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cy) > (_cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_cy) >= (_cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_db) = (0x79000000U);
(_dc) = (0x81000000U);
(_ai)(((((((((((((_aj<bool>(((_db) == (_dc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_db) != (_dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_db) < (_dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_db) <= (_dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_db) > (_dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_db) >= (_dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_dd) = (0x80000000U);
(_de) = (0x80000000U);
(_ai)(((((((((((((_aj<bool>(((_dd) == (_de)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dd) != (_de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dd) < (_de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dd) <= (_de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dd) > (_de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dd) >= (_de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_dg) = (0x7900000000000000ULL);
(_dh) = (0x8100000000000000ULL);
(_ai)(((((((((((((_aj<bool>(((_dg) == (_dh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dg) != (_dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dg) < (_dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dg) <= (_dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dg) > (_dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dg) >= (_dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_di) = (0x8000000000000000ULL);
(_dj) = (0x8000000000000000ULL);
(_ai)(((((((((((((_aj<bool>(((_di) == (_dj)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_di) != (_dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_di) < (_dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_di) <= (_dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_di) > (_dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_di) >= (_dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_dl) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(_dm) = (new Array_<char16_t>(2, u'\u0061', u'\u0063'));
(_ai)(((((((((((((_aj<bool>((cmp_((_dl), (_dm)) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (_dm)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (_dm)) < 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (_dm)) <= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (_dm)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (_dm)) >= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) < 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) <= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) >= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test3
static void _r(){
Array_<char16_t>* _do; // a
Array_<char16_t>* _dp; // b
Array_<char16_t>* _dq; // c
Array_<char16_t>* _dr; // d
Array_<char16_t>* _ds; // e
bool _du; // a
bool _dv; // b
bool _dw; // c
bool _dx; // d
Array_<char16_t>* _dz; // a
Array_<char16_t>* _ea; // b
(_do) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(_dp) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(_dq) = (_do);
(_dr) = (nullptr);
(_ds) = (nullptr);
(_ai)(((((_aj<bool>((eqAddr_((_do), (_dp))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_do), (_dp))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((_do), (_dq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_do), (_dq))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((_dp), (_dq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_dp), (_dq))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((_do), (_dr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_do), (_dr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((_dr), (_ds))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_dr), (_ds))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((_dr), (nullptr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((_dr), (nullptr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((new Array_<char16_t>(2, u'\u0054', u'\u000A')));
(_ai)((new Array_<char16_t>(2, u'\u0046', u'\u000A')));
(_ai)((new Array_<char16_t>(2, u'\u0046', u'\u000A')));
(_ai)((new Array_<char16_t>(2, u'\u0054', u'\u000A')));
(_du) = (eqAddr_((nullptr), (nullptr)));
(_dv) = (!eqAddr_((nullptr), (nullptr)));
(_dw) = (eqAddr_((nullptr), (nullptr)));
(_dx) = (!eqAddr_((nullptr), (nullptr)));
(_ai)(((((_aj<bool>(((_du) && (_dw)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_du) || (_dw)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>(((_du) && (_dx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_du) || (_dx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>(((_dv) && (_dw)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dv) || (_dw)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>(((_dv) && (_dx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_dv) || (_dx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_du) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_dv) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((!(_du)) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((!(_dv)) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_dz) = (_aj<bool>((eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))));
(_ea) = (_aj<bool>((!eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))));
(_dz) = ((_dz)->Cat((new Array_<char16_t>(2, u'\u002C', u'\u0020'))->Cat(_ea)));
(_ai)(((_dz)->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test4
static void _s(){
int64_t _eg; // a
int64_t _eh; // b
Array_<char16_t>* _ej; // c
Array_<char16_t>* _ek; // d
int64_t _en; // n
double _ep; // n
char16_t _er; // n
bool _et; // n
bool _eu; // m
uint8_t _ew; // n
uint8_t _ex; // m
uint8_t _ey; // f
uint8_t _ez; // t
uint16_t _fb; // n
uint16_t _fc; // m
uint16_t _fd; // f
uint16_t _fe; // t
uint32_t _fg; // n
uint32_t _fh; // m
uint32_t _fi; // f
uint32_t _fj; // t
uint64_t _fl; // n
uint64_t _fm; // m
uint64_t _fn; // f
uint64_t _fo; // t
int64_t _ei;
Array_<char16_t>* _el;
(_ai)(((_aj<int64_t>(((new Array_<char16_t>(6, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0066'))->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>(((_ed)((5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>(((_ed)((-5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ee)((5.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ee)((-5.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_eg) = (3LL);
(_eh) = (5LL);
_ei = (_eg), (_eg) = (_eh), (_eh) = (_ei);
(_ai)(((((_aj<int64_t>((_eg), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_eh), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ej) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(_ek) = (new Array_<char16_t>(3, u'\u0064', u'\u0065', u'\u0066'));
_el = (_ej), (_ej) = (_ek), (_ek) = (_el);
(_ai)(((((_ej)->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_ek))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((65537LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((65537.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x00010001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x0000000000010001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_en) = (65537LL);
(_ai)(((_aj<int64_t>((_en), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((static_cast<double>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_en) = (33LL);
(_ai)(((_aj<char16_t>((static_cast<char16_t>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_en) = (0LL);
(_ai)(((_aj<bool>((static_cast<bool>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_en) = (5LL);
(_ai)(((_aj<bool>((static_cast<bool>(_en)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((65537LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((65537.5), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x00010001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x0000000000010001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ep) = (65537.5);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_ep)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((_ep), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_ep)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_ep)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_ep)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_ep)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((65LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0041'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0x41U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x0041U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x00000041U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x0000000000000041ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_er) = (u'\u0041');
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_er)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((_er), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_er)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_er)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_er)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_er)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((0LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0x00U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x0000U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x00000000U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x0000000000000000ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x00000001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x0000000000000001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_et) = (false);
(_eu) = (true);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_et)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((_et), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_et)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_et)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_et)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_et)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((_eu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ew) = (static_cast<uint8_t>(0xFFU));
(_ex) = (static_cast<uint8_t>(0x21U));
(_ey) = (static_cast<uint8_t>(0x00U));
(_ez) = (static_cast<uint8_t>(0x05U));
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_ew)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((static_cast<double>(_ew)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((static_cast<char16_t>(_ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_ey)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_ez)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_ew), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_ew)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_ew)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_ew)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_fb) = (static_cast<uint16_t>(0x00FFU));
(_fc) = (static_cast<uint16_t>(0x0021U));
(_fd) = (static_cast<uint16_t>(0x0000U));
(_fe) = (static_cast<uint16_t>(0x0005U));
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_fb)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((static_cast<double>(_fb)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((static_cast<char16_t>(_fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fd)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fe)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_fb)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_fb), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_fb)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_fb)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_fg) = (0x000000FFU);
(_fh) = (0x00000021U);
(_fi) = (0x00000000U);
(_fj) = (0x00000005U);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_fg)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((static_cast<double>(_fg)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((static_cast<char16_t>(_fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fi)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fj)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_fg)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_fg)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_fg), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((static_cast<uint64_t>(_fg)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_fl) = (0x00000000000000FFULL);
(_fm) = (0x0000000000000021ULL);
(_fn) = (0x0000000000000000ULL);
(_fo) = (0x0000000000000005ULL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_fl)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>((static_cast<double>(_fl)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>((static_cast<char16_t>(_fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fn)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<bool>((static_cast<bool>(_fo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(_fl)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(_fl)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((static_cast<uint32_t>(_fl)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_fl), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test5
static void _t(){
Array_<Array_<char16_t>*>* _fq; // a
Array_<Array_<char16_t>*>* _ft; // s
Array_<Array_<char16_t>*>* _fu; // t
Array_<Array_<char16_t>*>* _fv; // u
int64_t _ga;
int64_t _gf;
int64_t _gi; // i
int64_t _gk; // j
int64_t _gp; // i
int64_t _gv;
int64_t _hf;
int64_t _hj;
int64_t _hq;
double _hu;
int64_t _ib;
uint8_t _if;
int64_t _im;
uint16_t _iq;
int64_t _ix;
uint32_t _jb;
int64_t _ji;
uint64_t _jm;
int64_t _jt;
char16_t _jx;
int64_t _ke;
Array_<char16_t>* _ki;
int64_t _gb;
int64_t _gg;
int64_t _gw;
int64_t _hg;
int64_t _hr;
int64_t _ic;
int64_t _in;
int64_t _iy;
int64_t _jj;
int64_t _ju;
int64_t _kf;
(_ai)(((_m)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_fq) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0061', u'\u0062')), (new Array_<char16_t>(2, u'\u0063', u'\u0064')), (new Array_<char16_t>(2, u'\u0065', u'\u0066'))));
(_ai)((((((((_fq)->At(0LL))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_fq)->At(1LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_fq)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>(((_fs)((5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ft) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(2, u'\u0061', u'\u0062')), (new Array_<char16_t>(2, u'\u0063', u'\u0064'))));
(_fu) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(2, u'\u0065', u'\u0066')), (new Array_<char16_t>(2, u'\u0067', u'\u0068'))));
(_fv) = ((_fw)((_ft), (_fu)));
(_ai)(((((((_aj<int64_t>(((_fv)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_fv)->At(0LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_fv)->At(1LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_ga = (1LL), _gb = (5LL); _ga <= _gb; _ga += (2LL)){
for(_gf = (_ga), _gg = (1LL); _gf >= _gg; _gf += (-2LL)){
(_ai)(((((_aj<int64_t>((_ga), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_gf), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
(_gi) = (1LL);
while((_gi) <= (5LL)){
(_gk) = (_gi);
while((_gk) >= (1LL)){
(_ai)(((((_aj<int64_t>((_gi), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_gk), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_gk) = ((_gk) - (2LL));
}
(_gi) = ((_gi) + (2LL));
}
(_gp) = (1LL);
do{
(_ai)(((_aj<int64_t>((_gp), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_gp) = ((_gp) + (1LL));
}while(((_gp) % (2LL)) == (0LL));
for(_gv = (1LL), _gw = (15LL); _gv <= _gw; _gv += (1LL)){
if((((_gv) % (3LL)) == (0LL)) && (((_gv) % (5LL)) == (0LL))){
(_ai)((new Array_<char16_t>(9, u'\u0046', u'\u0069', u'\u007A', u'\u007A', u'\u0042', u'\u0075', u'\u007A', u'\u007A', u'\u000A')));
}
else if(((_gv) % (3LL)) == (0LL)){
(_ai)((new Array_<char16_t>(5, u'\u0046', u'\u0069', u'\u007A', u'\u007A', u'\u000A')));
}
else if(((_gv) % (5LL)) == (0LL)){
(_ai)((new Array_<char16_t>(5, u'\u0042', u'\u0075', u'\u007A', u'\u007A', u'\u000A')));
}
else{
(_ai)(((_aj<int64_t>((_gv), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_hf = (1LL), _hg = (10LL); _hf <= _hg; _hf += (1LL)){
_hj = _hf;
if(_hj == (2LL) || (6LL) <= _hj && _hj <= (7LL)){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((4LL) <= _hj && _hj <= (6LL) || _hj == (9LL)){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<int64_t>((_hj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_hq = (1LL), _hr = (10LL); _hq <= _hr; _hq += (1LL)){
_hu = static_cast<double>(_hq);
if(_hu == (2.0) || (6.0) <= _hu && _hu <= (7.0)){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((4.0) <= _hu && _hu <= (6.0) || _hu == (9.0)){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<double>((_hu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_ib = (1LL), _ic = (10LL); _ib <= _ic; _ib += (1LL)){
_if = static_cast<uint8_t>(_ib);
if(_if == (static_cast<uint8_t>(0x02U)) || (static_cast<uint8_t>(0x06U)) <= _if && _if <= (static_cast<uint8_t>(0x07U))){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((static_cast<uint8_t>(0x04U)) <= _if && _if <= (static_cast<uint8_t>(0x06U)) || _if == (static_cast<uint8_t>(0x09U))){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<uint8_t>((_if), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_im = (1LL), _in = (10LL); _im <= _in; _im += (1LL)){
_iq = static_cast<uint16_t>(_im);
if(_iq == (static_cast<uint16_t>(0x0002U)) || (static_cast<uint16_t>(0x0006U)) <= _iq && _iq <= (static_cast<uint16_t>(0x0007U))){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((static_cast<uint16_t>(0x0004U)) <= _iq && _iq <= (static_cast<uint16_t>(0x0006U)) || _iq == (static_cast<uint16_t>(0x0009U))){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<uint16_t>((_iq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_ix = (1LL), _iy = (10LL); _ix <= _iy; _ix += (1LL)){
_jb = static_cast<uint32_t>(_ix);
if(_jb == (0x00000002U) || (0x00000006U) <= _jb && _jb <= (0x00000007U)){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((0x00000004U) <= _jb && _jb <= (0x00000006U) || _jb == (0x00000009U)){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<uint32_t>((_jb), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_ji = (1LL), _jj = (10LL); _ji <= _jj; _ji += (1LL)){
_jm = static_cast<uint64_t>(_ji);
if(_jm == (0x0000000000000002ULL) || (0x0000000000000006ULL) <= _jm && _jm <= (0x0000000000000007ULL)){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((0x0000000000000004ULL) <= _jm && _jm <= (0x0000000000000006ULL) || _jm == (0x0000000000000009ULL)){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<uint64_t>((_jm), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_jt = (1LL), _ju = (10LL); _jt <= _ju; _jt += (1LL)){
_jx = static_cast<char16_t>((65LL) + (_jt));
if(_jx == (u'\u0043') || (u'\u0045') <= _jx && _jx <= (u'\u0046')){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((u'\u0046') <= _jx && _jx <= (u'\u0048') || _jx == (u'\u004A')){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_aj<char16_t>((_jx), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(_ke = (1LL), _kf = (10LL); _ke <= _kf; _ke += (1LL)){
_ki = _aj<int64_t>((_ke), (new Array_<int64_t>(1, (0LL))));
if(cmp_(_ki, (new Array_<char16_t>(1, u'\u0032'))) == 0 || cmp_(_ki, (new Array_<char16_t>(1, u'\u0036'))) >= 0 && cmp_(_ki, (new Array_<char16_t>(1, u'\u0037'))) <= 0){
(_ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if(cmp_(_ki, (new Array_<char16_t>(1, u'\u0034'))) >= 0 && cmp_(_ki, (new Array_<char16_t>(1, u'\u0036'))) <= 0 || cmp_(_ki, (new Array_<char16_t>(1, u'\u0039'))) == 0){
(_ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(_ai)(((_ki)->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
}
// test6
static void _u(){
int64_t _kq;
int64_t _kv;
int64_t _lf; // n
int64_t _kr;
int64_t _kw;
for(_kq = (1LL), _kr = (10LL); _kq <= _kr; _kq += (1LL)){
for(_kv = (1LL), _kw = (10LL); _kv <= _kw; _kv += (1LL)){
if((_kq) == (2LL)){
goto _kp;
}
else if((_kq) == (4LL)){
goto _ko;
}
else if((_kv) == (3LL)){
continue;
}
else if((_kv) == (5LL)){
break;
}
(_ai)(((((_aj<int64_t>((_kq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_kv), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
_kp:;
}
_ko:;
(_ai)(((_aj<int64_t>((5LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((0LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((5LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((6LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((-2LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((-1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((static_cast<uint8_t>(0xFEU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((static_cast<uint16_t>(0xFFFEU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((0xFFFFFFFEU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((0xFFFFFFFFFFFFFFFEULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (0LL);
(_lf) = (-1LL);
(_ai)(((((((((((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_lf) == (-1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_lf) != (-1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_lf) < (-2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_lf) > (-2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (1234LL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (255LL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (255LL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (255LL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_lf) = (255LL);
(_ai)(((_aj<int64_t>((static_cast<int64_t>(_lf)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test7
static void _v(){
_li* _lh; // a
_lw* _lv; // b
_mc* _mr; // a
_mc* _ms; // b
List_<int64_t>* _mw; // ns
List_<Array_<char16_t>*>* _nh; // ss
(_lh) = (new _li());
(_lv) = (new _lw());
(_ai)(((((((((((((_aj<bool>((is_(classTable_, (_lh), 0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((is_(classTable_, (_lv), 0)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((is_(classTable_, (_lh), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((is_(classTable_, (_lv), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((is_(classTable_, (_lh), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((is_(classTable_, (_lv), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((((((_aj<bool>((!is_(classTable_, (_lh), 0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!is_(classTable_, (_lv), 0)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!is_(classTable_, (_lh), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!is_(classTable_, (_lv), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!is_(classTable_, (_lh), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((!is_(classTable_, (_lv), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<int64_t>(((reinterpret_cast<_mj>(classTable_[(new _mc())->Y + 8]))((new _mc()))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((reinterpret_cast<_mq>(classTable_[(new _mk())->Y + 8]))((new _mk()))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_mr) = (new _mc());
(_ms) = (new _mk());
(_ai)(((((_aj<int64_t>(((reinterpret_cast<_mt>(classTable_[(_mr)->Y + 8]))((_mr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((reinterpret_cast<_mu>(classTable_[(_ms)->Y + 8]))((_ms))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_mw) = (new List_<int64_t>());
_mx<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (1LL));
_mx<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (2LL));
_mx<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (3LL));
_my<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
_mz<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (4LL));
_mz<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (5LL));
_na<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
_mz<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (6LL));
_mz<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))), (7LL));
_my<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
while(!(_nc<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL)))))){
(_ai)(((_aj<int64_t>((_nd<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
_ne<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
}
_my<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
_nf<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
_na<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
_nf<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_aj<int64_t>(((_mw)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
_my<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
while(!(_nc<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL)))))){
(_ai)(((_aj<int64_t>((_nd<List_<int64_t>*, int64_t>((_mw), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
_ne<List_<int64_t>*>((_mw), (new Array_<int64_t>(1, (0LL))));
}
(_nh) = (new List_<Array_<char16_t>*>());
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0061', u'\u0062')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0063', u'\u0064')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0065', u'\u0066')));
_my<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
_mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0067', u'\u0068')));
_mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0069', u'\u006A')));
_na<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
_mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u006B', u'\u006C')));
_mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u006D', u'\u006E')));
_na<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
while(!(_nc<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL)))))){
(_ai)(((_nd<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
_nj<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
}
_my<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
_nf<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
_na<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
_nf<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_aj<int64_t>(((_nh)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(!(_nc<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL)))))){
(_ai)(((_nd<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_nh), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
_nj<List_<Array_<char16_t>*>*>((_nh), (new Array_<int64_t>(1, (0LL))));
}
}
// test8
static void _w(){
Stack_<int64_t>* _nm; // ns
Stack_<Array_<char16_t>*>* _ns; // ns
Queue_<int64_t>* _nv; // ns
Queue_<Array_<char16_t>*>* _ob; // ns
(_nm) = (new Stack_<int64_t>());
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (1LL));
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (2LL));
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (3LL));
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (4LL));
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (5LL));
(_ai)(((_aj<int64_t>((_no<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((_nm)->Len()) != (0LL)){
(_ai)(((_aj<int64_t>((_nq<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
_nn<Stack_<int64_t>*, int64_t>((_nm), (new Array_<int64_t>(1, (0LL))), (0LL));
(_ns) = (new Stack_<Array_<char16_t>*>());
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')));
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')));
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')));
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')));
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0065')));
(_ai)(((_no<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((_ns)->Len()) != (0LL)){
(_ai)(((_nq<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
_nn<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((_ns), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')));
(_nv) = (new Queue_<int64_t>());
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (1LL));
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (2LL));
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (3LL));
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (4LL));
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (5LL));
(_ai)(((_aj<int64_t>((_nx<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((_nv)->Len()) != (0LL)){
(_ai)(((_aj<int64_t>((_nz<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
_nw<Queue_<int64_t>*, int64_t>((_nv), (new Array_<int64_t>(1, (0LL))), (0LL));
(_ob) = (new Queue_<Array_<char16_t>*>());
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')));
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')));
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')));
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')));
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0065')));
(_ai)(((_nx<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((_ob)->Len()) != (0LL)){
(_ai)(((_nz<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
_nw<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((_ob), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')));
}
// test9
static void _x(){
Dict_<int64_t, int64_t>* _oe; // n
int64_t _oj;
bool _ol; // existed
Dict_<int64_t, Array_<char16_t>*>* _oq; // n
int64_t _ou;
bool _ow; // existed
Dict_<Array_<char16_t>*, int64_t>* _pa; // n
int64_t _pe;
bool _pg; // existed
Dict_<Array_<char16_t>*, Array_<char16_t>*>* _pk; // n
int64_t _po;
bool _pq; // existed
int64_t _ok;
int64_t _ov;
int64_t _pf;
int64_t _pp;
(_oe) = (new Dict_<int64_t, int64_t>());
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (6LL), (16LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (8LL), (18LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (10LL), (20LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (4LL), (14LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (2LL), (12LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (3LL), (13LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (7LL), (17LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (1LL), (11LL));
_of<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (9LL), (19LL));
(_ai)(((_aj<int64_t>(((_oe)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_oj = (0LL), _ok = (11LL); _oj <= _ok; _oj += (1LL)){
(_ol) = (false);
(_ai)(((_aj<int64_t>((_om<Dict_<int64_t, int64_t>*, int64_t, int64_t>((_oe), (new Array_<int64_t>(1, (0LL))), (_oj), (&_ol))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
if(!(_ol)){
(_ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(_oq) = (new Dict_<int64_t, Array_<char16_t>*>());
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (6LL), (new Array_<char16_t>(1, u'\u0066')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (8LL), (new Array_<char16_t>(1, u'\u0068')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (10LL), (new Array_<char16_t>(1, u'\u006A')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (4LL), (new Array_<char16_t>(1, u'\u0064')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (2LL), (new Array_<char16_t>(1, u'\u0062')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (3LL), (new Array_<char16_t>(1, u'\u0063')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (7LL), (new Array_<char16_t>(1, u'\u0067')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (1LL), (new Array_<char16_t>(1, u'\u0061')));
_of<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (9LL), (new Array_<char16_t>(1, u'\u0069')));
(_ai)(((_aj<int64_t>(((_oq)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_ou = (0LL), _ov = (11LL); _ou <= _ov; _ou += (1LL)){
(_ow) = (false);
(_ai)((_om<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((_oq), (new Array_<int64_t>(1, (0LL))), (_ou), (&_ow))));
(_ai)((new Array_<char16_t>(1, u'\u000A')));
if(!(_ow)){
(_ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(_pa) = (new Dict_<Array_<char16_t>*, int64_t>());
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')), (6LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0068')), (8LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u006A')), (10LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')), (4LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (2LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (3LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0067')), (7LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (1LL));
_of<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0069')), (9LL));
(_ai)(((_aj<int64_t>(((_pa)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_pe = (0LL), _pf = (11LL); _pe <= _pf; _pe += (1LL)){
(_pg) = (false);
(_ai)(((_aj<int64_t>((_om<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((_pa), (new Array_<int64_t>(1, (0LL))), (_aj<char16_t>((static_cast<char16_t>(((97LL) + (_pe)) - (1LL))), (new Array_<int64_t>(1, (0LL))))), (&_pg))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
if(!(_pg)){
(_ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(_pk) = (new Dict_<Array_<char16_t>*, Array_<char16_t>*>());
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')), (new Array_<char16_t>(1, u'\u0046')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0068')), (new Array_<char16_t>(1, u'\u0048')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u006A')), (new Array_<char16_t>(1, u'\u004A')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')), (new Array_<char16_t>(1, u'\u0044')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0042')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (new Array_<char16_t>(1, u'\u0043')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0067')), (new Array_<char16_t>(1, u'\u0047')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0041')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0069')), (new Array_<char16_t>(1, u'\u0049')));
(_ai)(((_aj<int64_t>(((_pk)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_po = (0LL), _pp = (11LL); _po <= _pp; _po += (1LL)){
(_pq) = (false);
(_ai)((_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_pk), (new Array_<int64_t>(1, (0LL))), (_aj<char16_t>((static_cast<char16_t>(((97LL) + (_po)) - (1LL))), (new Array_<int64_t>(1, (0LL))))), (&_pq))));
(_ai)((new Array_<char16_t>(1, u'\u000A')));
if(!(_pq)){
(_ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
}
// test10
static void _y(){
Array_<Array_<char16_t>*>* _pu; // n
Array_<Array_<char16_t>*>* _pv; // m
List_<List_<int64_t>*>* _px; // n
List_<int64_t>* _py; // n2
List_<List_<int64_t>*>* _pz; // m
Stack_<Stack_<int64_t>*>* _qb; // n
Stack_<int64_t>* _qc; // n2
Stack_<Stack_<int64_t>*>* _qd; // m
Queue_<Queue_<int64_t>*>* _qf; // n
Queue_<int64_t>* _qg; // n2
Queue_<Queue_<int64_t>*>* _qh; // m
Dict_<Array_<char16_t>*, Array_<char16_t>*>* _qj; // n
Dict_<Array_<char16_t>*, Array_<char16_t>*>* _qk; // m
uint8_t _qw; // n
uint8_t _qx; // m
uint16_t _rg; // n
uint16_t _rh; // m
uint32_t _rj; // n
uint32_t _rk; // m
uint64_t _rm; // n
uint64_t _rn; // m
bool _ql;
bool _qm;
bool _qn;
bool _qo;
bool _qp;
bool _qq;
bool _qr;
bool _qs;
bool _qt;
bool _qu;
(_pu) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063')), (new Array_<char16_t>(3, u'\u0064', u'\u0065', u'\u0066'))));
(_pv) = (copy_(_pu));
(_ai)(((((_aj<bool>((cmp_(((_pu)->At(0LL)), ((_pv)->At(0LL))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((eqAddr_(((_pu)->At(0LL)), ((_pv)->At(0LL)))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_px) = (new List_<List_<int64_t>*>());
(_py) = (new List_<int64_t>());
_mx<List_<int64_t>*, int64_t>((_py), (new Array_<int64_t>(1, (0LL))), (3LL));
_mx<List_<int64_t>*, int64_t>((_py), (new Array_<int64_t>(1, (0LL))), (5LL));
_mx<List_<List_<int64_t>*>*, List_<int64_t>*>((_px), (new Array_<int64_t>(1, (0LL))), (_py));
(_pz) = (copy_(_px));
_my<List_<List_<int64_t>*>*>((_px), (new Array_<int64_t>(1, (0LL))));
_my<List_<int64_t>*>((_nd<List_<List_<int64_t>*>*, List_<int64_t>*>((_px), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))));
_my<List_<List_<int64_t>*>*>((_pz), (new Array_<int64_t>(1, (0LL))));
_my<List_<int64_t>*>((_nd<List_<List_<int64_t>*>*, List_<int64_t>*>((_pz), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))));
(_ai)(((((_aj<int64_t>((_nd<List_<int64_t>*, int64_t>((_nd<List_<List_<int64_t>*>*, List_<int64_t>*>((_px), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_nd<List_<int64_t>*, int64_t>((_nd<List_<List_<int64_t>*>*, List_<int64_t>*>((_pz), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_qb) = (new Stack_<Stack_<int64_t>*>());
(_qc) = (new Stack_<int64_t>());
_nn<Stack_<int64_t>*, int64_t>((_qc), (new Array_<int64_t>(1, (0LL))), (3LL));
_nn<Stack_<int64_t>*, int64_t>((_qc), (new Array_<int64_t>(1, (0LL))), (5LL));
_nn<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((_qb), (new Array_<int64_t>(1, (0LL))), (_qc));
(_qd) = (copy_(_qb));
(_ai)(((((_aj<int64_t>((_nq<Stack_<int64_t>*, int64_t>((_no<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((_qb), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_nq<Stack_<int64_t>*, int64_t>((_no<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((_qd), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<int64_t>((_nq<Stack_<int64_t>*, int64_t>((_nq<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((_qb), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_nq<Stack_<int64_t>*, int64_t>((_nq<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((_qd), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_qf) = (new Queue_<Queue_<int64_t>*>());
(_qg) = (new Queue_<int64_t>());
_nw<Queue_<int64_t>*, int64_t>((_qg), (new Array_<int64_t>(1, (0LL))), (3LL));
_nw<Queue_<int64_t>*, int64_t>((_qg), (new Array_<int64_t>(1, (0LL))), (5LL));
_nw<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((_qf), (new Array_<int64_t>(1, (0LL))), (_qg));
(_qh) = (copy_(_qf));
(_ai)(((((_aj<int64_t>((_nz<Queue_<int64_t>*, int64_t>((_nx<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((_qf), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_nz<Queue_<int64_t>*, int64_t>((_nx<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((_qh), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<int64_t>((_nz<Queue_<int64_t>*, int64_t>((_nz<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((_qf), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_nz<Queue_<int64_t>*, int64_t>((_nz<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((_qh), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_qj) = (new Dict_<Array_<char16_t>*, Array_<char16_t>*>());
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0041')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (new Array_<char16_t>(1, u'\u0043')));
_of<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0042')));
(_qk) = (copy_(_qj));
(_ai)(((((_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_ql, 0, sizeof(bool)), &_ql)))->Cat(_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (std::memset(&_qm, 0, sizeof(bool)), &_qm))))->Cat(_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (std::memset(&_qn, 0, sizeof(bool)), &_qn))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_qo, 0, sizeof(bool)), &_qo)))->Cat(_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (std::memset(&_qp, 0, sizeof(bool)), &_qp))))->Cat(_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (std::memset(&_qq, 0, sizeof(bool)), &_qq))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((_aj<bool>((cmp_((_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_qr, 0, sizeof(bool)), &_qr))), (_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_qs, 0, sizeof(bool)), &_qs)))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((eqAddr_((_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_qt, 0, sizeof(bool)), &_qt))), (_om<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((_qk), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&_qu, 0, sizeof(bool)), &_qu))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_qw) = (static_cast<uint8_t>(0xF6U));
(_qx) = (static_cast<uint8_t>(0x0AU));
(_ai)(((_aj<uint8_t>((_qy<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (_qx))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_qz<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (_qx))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_ra<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (_qx))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_rb<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_rc<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_rd<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint8_t>((_re<uint8_t>((_qw), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_rg) = (static_cast<uint16_t>(0xF6F6U));
(_rh) = (static_cast<uint16_t>(0x0A0AU));
(_ai)(((_aj<uint16_t>((_qy<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (_rh))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_qz<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (_rh))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_ra<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (_rh))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_rb<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_rc<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_rd<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint16_t>((_re<uint16_t>((_rg), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_rj) = (0xF6F6F6F6U);
(_rk) = (0x0A0A0A0AU);
(_ai)(((_aj<uint32_t>((_qy<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (_rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_qz<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (_rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_ra<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (_rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_rb<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_rc<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_rd<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint32_t>((_re<uint32_t>((_rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_rm) = (0xF6F6F6F6F6F6F6F6ULL);
(_rn) = (0x0A0A0A0A0A0A0A0AULL);
(_ai)(((_aj<uint64_t>((_qy<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (_rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_qz<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (_rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_ra<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (_rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_rb<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_rc<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_rd<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<uint64_t>((_re<uint64_t>((_rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test11
static void _z(){
Array_<char16_t>* _rt; // n
Array_<Array_<char16_t>*>* _ru; // m
Array_<char16_t>* _rx; // n
Array_<Array_<char16_t>*>* _ry; // m
Array_<char16_t>* _sb; // n
Array_<Array_<char16_t>*>* _sc; // m
double _sm; // x
double _sn; // y
double _ss; // x
double _sw; // x
(_ai)(((_aj<int64_t>((_rp<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0064'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((_rp<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0066'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((_rq<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0064'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<int64_t>((_rq<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0066'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_rr<Array_<char16_t>*>((new Array_<char16_t>(5, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (1LL), (3LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_rr<Array_<char16_t>*>((new Array_<char16_t>(5, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (1LL), (-1LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_rr<Array_<Array_<char16_t>*>*>((new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0063')))), (new Array_<int64_t>(1, (0LL))), (1LL), (1LL)))->At(0LL))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_rr<Array_<Array_<char16_t>*>*>((new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0063')))), (new Array_<int64_t>(1, (0LL))), (1LL), (-1LL)))->At(1LL))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_rt) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(_ru) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
_rv<Array_<char16_t>*>((_rt), (new Array_<int64_t>(1, (0LL))));
_rv<Array_<Array_<char16_t>*>*>((_ru), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_rt)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((((_ru)->At(0LL))->Cat((_ru)->At(1LL)))->Cat((_ru)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_rx) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(_ry) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
_rz<Array_<char16_t>*>((_rx), (new Array_<int64_t>(1, (0LL))));
_rz<Array_<Array_<char16_t>*>*>((_ry), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_rx)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((((_ry)->At(0LL))->Cat((_ry)->At(1LL)))->Cat((_ry)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_sb) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(_sc) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
_rz<Array_<char16_t>*>((_sb), (new Array_<int64_t>(1, (0LL))));
_rv<Array_<char16_t>*>((_sb), (new Array_<int64_t>(1, (0LL))));
_rz<Array_<Array_<char16_t>*>*>((_sc), (new Array_<int64_t>(1, (0LL))));
_rv<Array_<Array_<char16_t>*>*>((_sc), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_sb)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((((_sc)->At(0LL))->Cat((_sc)->At(1LL)))->Cat((_sc)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_se)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sf)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sg)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sh)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_si)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sj)((2.71828))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sk)((2.0), (8.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_sm) = (10.0);
(_sn) = (1.0);
(_so)((&_sm), (&_sn), (5.0), (1.0), (1.5708));
(_ai)(((((_aj<double>((_sm), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((_sn), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sp)((_sm), (_sn), (5.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sq)((4.0), (5.0), (1.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ss) = (5.0);
while(!((_su)((&_ss), (10.0), (2.0)))){
(_ai)(((_aj<double>((_ss), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<double>((_ss), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_sw) = (15.0);
while(!((_su)((&_sw), (10.0), (2.0)))){
(_ai)(((_aj<double>((_sw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<double>((_sw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sz)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sz)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ta)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ta)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((-5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((-5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((-5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test12
static void _aa(){
_ut _tj; // x
int64_t _tl; // a
double _tm; // b
char16_t _tn; // c
double _tp; // n
int64_t _tr;
_tz* _ty; // a
_tz* _ug; // b
_tz* _uh; // c
Array_<_tz*>* _ui; // d
_ul* _uk; // a
_ul* _us; // b
int64_t _ts;
(_ai)((((_td)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_te)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_tf)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_tg)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_th)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_tj) = (_tk);
(_tl) = (0LL);
(_tm) = (0.0);
(_tn) = (u'\u0000');
(_ai)((((((((((_tj)((_tl), (&_tl), (_tm), (&_tm), (&_tn)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_tl), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((_tm), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<char16_t>((_tn), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_tp) = (0.0);
for(_tr = (1LL), _ts = (10LL); _tr <= _ts; _tr += (1LL)){
(_tp) = ((_tp) + (0.1));
}
(_ai)(((((_aj<bool>(((_tp) == (1.0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_tu)((_tp), (1.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>(((_tw)((u'\u0063'), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>(((_tw)((u'\u0063'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ty) = (new _tz());
((_ty)->_uf) = (3LL);
(_ug) = (new _tz());
((_ug)->_uf) = (5LL);
(_uh) = (new _tz());
((_uh)->_uf) = (3LL);
(_ai)(((((((((_aj<bool>((cmp_((_ty), (_ug)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_ug)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_ug)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_ug)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((_aj<bool>((cmp_((_ty), (_uh)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_uh)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_uh)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_ty), (_uh)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ui) = (new Array_<_tz*>(4, (new _tz()), (new _tz()), (new _tz()), (new _tz())));
(((_ui)->At(0LL))->_uf) = (7LL);
(((_ui)->At(1LL))->_uf) = (3LL);
(((_ui)->At(2LL))->_uf) = (5LL);
(((_ui)->At(3LL))->_uf) = (4LL);
_rz<Array_<_tz*>*>((_ui), (new Array_<int64_t>(1, (0LL))));
(_ai)(((((((((_aj<int64_t>((((_ui)->At(0LL))->_uf), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_ui)->At(1LL))->_uf), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_ui)->At(2LL))->_uf), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_ui)->At(3LL))->_uf), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_uk) = (new _ul());
((_uk)->_uq) = (5LL);
((_uk)->_ur) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(_us) = (copy_(_uk));
(_ai)(((((((_aj<int64_t>(((_us)->_uq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_(((_uk)->_ur), ((_us)->_ur)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((eqAddr_(((_uk)->_ur), ((_us)->_ur))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test13
static void _ab(){
}
// test14
static void _ac(){
Array_<int64_t>* _uw; // a
Array_<Array_<Array_<char16_t>*>*>* _uy; // a
double _va; // x
int64_t _vc; // a
Array_<char16_t>* _vd; // b
List_<int64_t>* _vf; // n
Array_<int64_t>* _vg; // m
List_<Array_<char16_t>*>* _vj; // n
Array_<Array_<char16_t>*>* _vk; // m
Array_<char16_t>* _vm; // s
Array_<Array_<char16_t>*>* _vn; // ts
int64_t _vs;
int64_t _vt;
(_ai)((new Array_<char16_t>(15, u'\u004C', u'\u0069', u'\u006E', u'\u0065', u'\u0020', u'\u0062', u'\u0072', u'\u0065', u'\u0061', u'\u006B', u'\u0069', u'\u006E', u'\u0067', u'\u002E', u'\u000A')));
(_ai)((new Array_<char16_t>(17, u'\u0043', u'\u006F', u'\u006D', u'\u006D', u'\u0065', u'\u006E', u'\u0074', u'\u0020', u'\u0074', u'\u0065', u'\u0073', u'\u0074', u'\u0020', u'\u0023', u'\u0031', u'\u002E', u'\u000A')));
(_uw) = (newArray_<int64_t, Array_<int64_t>*>(1, (3LL)));
((_uw)->At(0LL)) = (1LL);
((_uw)->At(1LL)) = (2LL);
((_uw)->At(2LL)) = (3LL);
(_ai)(((((((((_aj<int64_t>(((_uw)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_uw)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_uw)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_uw)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_uy) = (newArray_<char16_t, Array_<Array_<Array_<char16_t>*>*>*>(3, (3LL), (2LL), (4LL)));
(_ai)(((((((_aj<int64_t>(((_uy)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_uy)->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((((_uy)->At(0LL))->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_va) = (3.14159);
(_ai)(((_aj<double>((_va), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_vc) = (0LL);
(_vd) = (nullptr);
(_vc) = (5LL);
(_vd) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(_ai)(((_aj<int64_t>((_vc), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_vd)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_vf) = (new List_<int64_t>());
_mx<List_<int64_t>*, int64_t>((_vf), (new Array_<int64_t>(1, (0LL))), (3LL));
_mx<List_<int64_t>*, int64_t>((_vf), (new Array_<int64_t>(1, (0LL))), (4LL));
_mx<List_<int64_t>*, int64_t>((_vf), (new Array_<int64_t>(1, (0LL))), (5LL));
(_vg) = (_vh<List_<int64_t>*, int64_t>((_vf), (new Array_<int64_t>(1, (0LL)))));
(_ai)(((((((((_aj<int64_t>(((_vg)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_vg)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_vg)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_vg)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_vj) = (new List_<Array_<char16_t>*>());
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_vj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0061', u'\u0062')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_vj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0063', u'\u0064')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_vj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0065', u'\u0066')));
(_vk) = (_vh<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_vj), (new Array_<int64_t>(1, (0LL)))));
(_ai)(((((((((_aj<int64_t>(((_vk)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vk)->At(0LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vk)->At(1LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vk)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_vm) = (new Array_<char16_t>(15, u'\u0061', u'\u0062', u'\u0078', u'\u0078', u'\u0063', u'\u0064', u'\u0065', u'\u0078', u'\u0078', u'\u0066', u'\u0078', u'\u0078', u'\u0078', u'\u0078', u'\u0067'));
(_vn) = ((_vo)((_vm), (new Array_<char16_t>(2, u'\u0078', u'\u0078'))));
(_ai)(((_aj<int64_t>(((_vn)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_vs = (0LL), _vt = (((_vn)->Len()) - (1LL)); _vs <= _vt; _vs += (1LL)){
(_ai)((((_vn)->At(_vs))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<char16_t>((u'\u006E'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((new Array_<char16_t>(9, u'\u0030', u'\u0030', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0030', u'\u0030', u'\u000A')));
}
// print
static void _ai(Array_<char16_t>* _vv /*str*/){
if(_vv == nullptr){
std::cout << "(null)";
return;
}
std::u16string s_ = _vv->B;
const std::string& t_ = utf16ToUtf8_(s_);
std::cout << t_ << std::flush;
}
// _toStr
template<typename T_> static Array_<char16_t>* _aj(T_ _vw /*me_*/, Array_<int64_t>* _vx /*type*/){
return toStr_(_vw);
}
// _absInt
static int64_t _ed(int64_t _vy /*me_*/){
return ((_vy) >= (0LL)) ? (_vy) : (-(_vy));
}
// _absFloat
static double _ee(double _vz /*me_*/){
return ((_vz) >= (0.0)) ? (_vz) : (-(_vz));
}
// f
static int64_t _fs(int64_t _wa /*n*/){
return ((_wa) == (0LL)) ? (1LL) : ((_wa) * ((_fs)(((_wa) - (1LL)))));
}
// g
static Array_<Array_<char16_t>*>* _fw(Array_<Array_<char16_t>*>* _wb /*n*/, Array_<Array_<char16_t>*>* _wc /*m*/){
return new Array_<Array_<char16_t>*>(2, ((_wb)->At(0LL)), ((_wc)->At(0LL)));
}
// ctor
static void _lk(_lj* _wd /*me*/){
}
// _dtor
static void _ll(_lj* _we /*me*/){
}
// cmp
static int64_t _lm(_lj* _wf /*me*/, _lj* _wg /*t*/){
throw 3910598660LL;
}
// _copy
static _lj* _ln(_lj* _wh /*me*/){
_lj* _wi;
(_wi) = (new _lj());
return as_<_lj>(classTable_, (_wi), 0);
}
// _toBin
static Array_<uint8_t>* _lo(_lj* _wj /*me*/){
Array_<uint8_t>* _wk;
(_wk) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _wk;
}
// _fromBin
static _lj* _lp(_lj* _wl /*me*/, Array_<uint8_t>* _wm /*bin*/, int64_t* _wn /*idx*/){
_lj* _wo;
(_wo) = (new _lj());
return _wo;
}
// toStr
static Array_<char16_t>* _lq(_lj* _wp /*me*/){
return new Array_<char16_t>(0);
}
// _dtor
static void _lr(_li* _wq){
}
// _copy
static _li* _ls(_li* _wr){
_li* _ws;
(_ws) = (new _li());
return as_<_li>(classTable_, (_ws), 8);
}
// _toBin
static Array_<uint8_t>* _lt(_li* _wt){
Array_<uint8_t>* _wu;
(_wu) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _wu;
}
// _fromBin
static _li* _lu(_li* _wv, Array_<uint8_t>* _ww, int64_t* _wx){
_li* _wy;
(_wy) = (new _li());
return _wy;
}
// _dtor
static void _lx(_lw* _wz){
}
// _copy
static _lw* _ly(_lw* _xa){
_lw* _xb;
(_xb) = (new _lw());
return as_<_lw>(classTable_, (_xb), 16);
}
// _toBin
static Array_<uint8_t>* _lz(_lw* _xc){
Array_<uint8_t>* _xd;
(_xd) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _xd;
}
// _fromBin
static _lw* _ma(_lw* _xe, Array_<uint8_t>* _xf, int64_t* _xg){
_lw* _xh;
(_xh) = (new _lw());
return _xh;
}
// ctor
static void _md(_mc* _xi /*me*/){
((_xi)->_xj) = (5LL);
}
// f
static int64_t _me(_mc* _xk /*me*/){
return (_xk)->_xj;
}
// _dtor
static void _mf(_mc* _xl){
}
// _copy
static _mc* _mg(_mc* _xm){
_mc* _xn;
(_xn) = (new _mc());
((_xn)->_xj) = ((_xm)->_xj);
return as_<_mc>(classTable_, (_xn), 24);
}
// _toBin
static Array_<uint8_t>* _mh(_mc* _xo){
Array_<uint8_t>* _xp;
(_xp) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_xp) = ((_xp)->Cat(toBin_((_xo)->_xj)));
return _xp;
}
// _fromBin
static _mc* _mi(_mc* _xr, Array_<uint8_t>* _xs, int64_t* _xt){
_mc* _xu;
(_xu) = (new _mc());
((_xu)->_xj) = (fromBin_<int64_t>((_xs), (*_xt)));
return _xu;
}
// f
static int64_t _ml(_mk* _xv /*me*/){
return 1234LL;
}
// _dtor
static void _mm(_mk* _xw){
}
// _copy
static _mk* _mn(_mk* _xx){
_mk* _xy;
(_xy) = (new _mk());
((_xy)->_xj) = ((_xx)->_xj);
return as_<_mk>(classTable_, (_xy), 33);
}
// _toBin
static Array_<uint8_t>* _mo(_mk* _xz){
Array_<uint8_t>* _ya;
(_ya) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_ya) = ((_ya)->Cat(toBin_((_xz)->_xj)));
return _ya;
}
// _fromBin
static _mk* _mp(_mk* _yc, Array_<uint8_t>* _yd, int64_t* _ye){
_mk* _yf;
(_yf) = (new _mk());
((_yf)->_xj) = (fromBin_<int64_t>((_yd), (*_ye)));
return _yf;
}
// _addList
template<typename T_, typename C_> static void _mx(T_ _yg /*me_*/, Array_<int64_t>* _yh /*type*/, C_ _yi /*item*/){
_yg->B.push_back(_yi);
}
// _head
template<typename T_> static void _my(T_ _yj /*me_*/, Array_<int64_t>* _yk /*type*/){
_yj->I = _yj->B.begin();
}
// _ins
template<typename T_, typename C_> static void _mz(T_ _yl /*me_*/, Array_<int64_t>* _ym /*type*/, C_ _yn /*item*/){
_yl->B.insert(_yl->I, _yn);
}
// _tail
template<typename T_> static void _na(T_ _yo /*me_*/, Array_<int64_t>* _yp /*type*/){
_yo->I = _yo->B.end();
--_yo->I;
}
// _term
template<typename T_> static bool _nc(T_ _yq /*me_*/, Array_<int64_t>* _yr /*type*/){
return _yq->I == _yq->B.end();
}
// _getList
template<typename T_, typename R_> static R_ _nd(T_ _ys /*me_*/, Array_<int64_t>* _yt /*type*/){
return *_ys->I;
}
// _next
template<typename T_> static void _ne(T_ _yu /*me_*/, Array_<int64_t>* _yv /*type*/){
++_yu->I;
}
// _del
template<typename T_> static void _nf(T_ _yw /*me_*/, Array_<int64_t>* _yx /*type*/){
auto& i_ = _yw->I++;
_yw->B.erase(i_);
}
// _prev
template<typename T_> static void _nj(T_ _yy /*me_*/, Array_<int64_t>* _yz /*type*/){
if(_yy->I == _yy->B.begin())
_yy->I = _yy->B.end();
else
--_yy->I;
}
// _addStack
template<typename T_, typename C_> static void _nn(T_ _za /*me_*/, Array_<int64_t>* _zb /*type*/, C_ _zc /*item*/){
_za->B.push(_zc);
}
// _peekStack
template<typename T_, typename R_> static R_ _no(T_ _zd /*me_*/, Array_<int64_t>* _ze /*type*/){
return _zd->B.top();
}
// _getStack
template<typename T_, typename R_> static R_ _nq(T_ _zf /*me_*/, Array_<int64_t>* _zg /*type*/){
R_ r_ = _zf->B.top();
_zf->B.pop();
return r_;
}
// _addQueue
template<typename T_, typename C_> static void _nw(T_ _zh /*me_*/, Array_<int64_t>* _zi /*type*/, C_ _zj /*item*/){
_zh->B.push(_zj);
}
// _peekQueue
template<typename T_, typename R_> static R_ _nx(T_ _zk /*me_*/, Array_<int64_t>* _zl /*type*/){
return _zk->B.front();
}
// _getQueue
template<typename T_, typename R_> static R_ _nz(T_ _zm /*me_*/, Array_<int64_t>* _zn /*type*/){
R_ r_ = _zm->B.front();
_zm->B.pop();
return r_;
}
// _addDict
template<typename T_, typename K_, typename V_> static void _of(T_ _zo /*me_*/, Array_<int64_t>* _zp /*type*/, K_ _zq /*key*/, V_ _zr /*item*/){
_zo->Add(_zq, _zr);
}
// _getDict
template<typename T_, typename C_, typename R_> static R_ _om(T_ _zs /*me_*/, Array_<int64_t>* _zt /*type*/, C_ _zu /*key*/, bool* _zv /*existed*/){
return dictSearch_(_zs->B, _zu, _zv);
}
// _or
template<typename T_> static T_ _qy(T_ _zw /*me_*/, Array_<int64_t>* _zx /*type*/, T_ _zy /*n*/){
return _zw | _zy;
}
// _and
template<typename T_> static T_ _qz(T_ _zz /*me_*/, Array_<int64_t>* _aaa /*type*/, T_ _aab /*n*/){
return _zz & _aab;
}
// _xor
template<typename T_> static T_ _ra(T_ _aac /*me_*/, Array_<int64_t>* _aad /*type*/, T_ _aae /*n*/){
return _aac ^ _aae;
}
// _not
template<typename T_> static T_ _rb(T_ _aaf /*me_*/, Array_<int64_t>* _aag /*type*/){
return ~_aaf;
}
// _shl
template<typename T_> static T_ _rc(T_ _aah /*me_*/, Array_<int64_t>* _aai /*type*/, int64_t _aaj /*n*/){
return _aah << _aaj;
}
// _shr
template<typename T_> static T_ _rd(T_ _aak /*me_*/, Array_<int64_t>* _aal /*type*/, int64_t _aam /*n*/){
return _aak >> _aam;
}
// _sar
template<typename T_> static T_ _re(T_ _aan /*me_*/, Array_<int64_t>* _aao /*type*/, int64_t _aap /*n*/){
return sar_(_aan, _aap);
}
// _findArray
template<typename T_, typename C_> static int64_t _rp(T_ _aaq /*me_*/, Array_<int64_t>* _aar /*type*/, C_ _aas /*item*/, int64_t _aat /*start*/){
if(_aat == -1) _aat = 0;
if(_aat < 0) return -1;
for(int64_t i_ = _aat; i_ < _aaq->L; i_++){
if(_aaq->B[i_] == _aas) return i_;
}
return -1;
}
// _findLastArray
template<typename T_, typename C_> static int64_t _rq(T_ _aau /*me_*/, Array_<int64_t>* _aav /*type*/, C_ _aaw /*item*/, int64_t _aax /*start*/){
if(_aax == -1) _aax = _aau->L - 1;
if(_aax >= _aau->L) return -1;
for(int64_t i_ = _aax; i_ >= 0; i_--){
if(_aau->B[i_] == _aaw) return i_;
}
return -1;
}
// _sub
template<typename T_> static T_ _rr(T_ _aay /*me_*/, Array_<int64_t>* _aaz /*type*/, int64_t _aba /*start*/, int64_t _abb /*len*/){
return sub_(_aay, _aba, _abb);
}
// _reverse
template<typename T_> static void _rv(T_ _abc /*me_*/, Array_<int64_t>* _abd /*type*/){
reverse_(_abc);
}
// _sortArray
template<typename T_> static void _rz(T_ _abe /*me_*/, Array_<int64_t>* _abf /*type*/){
sort_(_abe);
}
// cos
static double _se(double _abg /*x*/){
return std::cos(_abg);
}
// sin
static double _sf(double _abh /*x*/){
return std::sin(_abh);
}
// tan
static double _sg(double _abi /*x*/){
return std::tan(_abi);
}
// sqrt
static double _sh(double _abj /*x*/){
return std::sqrt(_abj);
}
// exp
static double _si(double _abk /*x*/){
return std::exp(_abk);
}
// ln
static double _sj(double _abl /*x*/){
return std::log(_abl);
}
// log
static double _sk(double _abm /*base*/, double _abn /*x*/){
return ((_sj)((_abn))) / ((_sj)((_abm)));
}
// rot
static void _so(double* _abo /*x*/, double* _abp /*y*/, double _abq /*centerX*/, double _abr /*centerY*/, double _abs /*angle*/){
double _abt; // x2
double _abu; // y2
double _abv; // cosTheta
double _abw; // sinTheta
double _abx; // x3
double _aby; // y3
(_abt) = ((*_abo) - (_abq));
(_abu) = ((*_abp) - (_abr));
(_abv) = ((_se)((_abs)));
(_abw) = ((_sf)((_abs)));
(_abx) = (((_abt) * (_abv)) - ((_abu) * (_abw)));
(_aby) = (((_abt) * (_abw)) + ((_abu) * (_abv)));
(*_abo) = ((_abx) + (_abq));
(*_abp) = ((_aby) + (_abr));
}
// invRot
static double _sp(double _abz /*x*/, double _aca /*y*/, double _acb /*centerX*/, double _acc /*centerY*/){
double r_ = std::atan2(_aca - _acc, _abz - _acb);
return r_ < 0.0 ? r_ + 2.0 * 3.14159265358979323846 : r_;
}
// dist
static double _sq(double _acd /*x*/, double _ace /*y*/, double _acf /*centerX*/, double _acg /*centerY*/){
return std::hypot(_acd - _acf, _ace - _acg);
}
// chase
static bool _su(double* _ach /*x*/, double _aci /*target*/, double _acj /*vel*/){
if((*_ach) == (_aci)){
return true;
}
if((*_ach) < (_aci)){
(*_ach) = ((*_ach) + (_acj));
if((*_ach) >= (_aci)){
(*_ach) = (_aci);
return true;
}
}
else{
(*_ach) = ((*_ach) - (_acj));
if((*_ach) <= (_aci)){
(*_ach) = (_aci);
return true;
}
}
return false;
}
// floor
static double _sz(double _acv /*x*/){
return std::floor(_acv);
}
// ceil
static double _ta(double _acw /*x*/){
return std::ceil(_acw);
}
// round
static double _tb(double _acx /*x*/, int64_t _acy /*precision*/){
double _adc; // p
if((_acy) == (0LL)){
return ((_acx) >= (0.0)) ? ((_sz)(((_acx) + (0.5)))) : (-((_sz)(((-(_acx)) + (0.5)))));
}
else{
(_adc) = (pow((10.0), (static_cast<double>(_acy))));
return ((_acx) >= (0.0)) ? (((_sz)((((_acx) * (_adc)) + (0.5)))) / (_adc)) : ((-((_sz)((((-(_acx)) * (_adc)) + (0.5))))) / (_adc));
}
}
// _lower
static Array_<char16_t>* _td(Array_<char16_t>* _add /*me_*/){
Array_<char16_t>* _ade; // s
int64_t _adi;
int64_t _adj;
if(!(!eqAddr_((_add), (nullptr)))){
throw 0xE9170000U;
}
(_ade) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_add)->Len())));
for(_adi = (0LL), _adj = (((_add)->Len()) - (1LL)); _adi <= _adj; _adi += (1LL)){
if(((u'\u0041') <= ((_add)->At(_adi))) && (((_add)->At(_adi)) <= (u'\u005A'))){
((_ade)->At(_adi)) = (static_cast<char16_t>(((static_cast<uint64_t>((_add)->At(_adi))) - (0x0000000000000041ULL)) + (0x0000000000000061ULL)));
}
else{
((_ade)->At(_adi)) = ((_add)->At(_adi));
}
}
return _ade;
}
// _upper
static Array_<char16_t>* _te(Array_<char16_t>* _adn /*me_*/){
Array_<char16_t>* _ado; // s
int64_t _ads;
int64_t _adt;
if(!(!eqAddr_((_adn), (nullptr)))){
throw 0xE9170000U;
}
(_ado) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_adn)->Len())));
for(_ads = (0LL), _adt = (((_adn)->Len()) - (1LL)); _ads <= _adt; _ads += (1LL)){
if(((u'\u0061') <= ((_adn)->At(_ads))) && (((_adn)->At(_ads)) <= (u'\u007A'))){
((_ado)->At(_ads)) = (static_cast<char16_t>(((static_cast<uint64_t>((_adn)->At(_ads))) - (0x0000000000000061ULL)) + (0x0000000000000041ULL)));
}
else{
((_ado)->At(_ads)) = ((_adn)->At(_ads));
}
}
return _ado;
}
// _trim
static Array_<char16_t>* _tf(Array_<char16_t>* _adx /*me_*/){
int64_t _ady; // f
int64_t _aec;
uint64_t _aee; // c
int64_t _aej; // l
int64_t _aen;
uint64_t _aep; // c
Array_<char16_t>* _aes; // r
int64_t _aew;
int64_t _aed;
int64_t _aeo;
int64_t _aex;
if(!(!eqAddr_((_adx), (nullptr)))){
throw 0xE9170000U;
}
(_ady) = (-1LL);
for(_aec = (0LL), _aed = (((_adx)->Len()) - (1LL)); _aec <= _aed; _aec += (1LL)){
(_aee) = (static_cast<uint64_t>((_adx)->At(_aec)));
if(!(((((0x0000000000000009ULL) <= (_aee)) && ((_aee) <= (0x000000000000000DULL))) || ((_aee) == (0x0000000000000020ULL))) || ((_aee) == (0x00000000000000A0ULL)))){
(_ady) = (_aec);
break;
}
}
if((_ady) == (-1LL)){
return _adx;
}
(_aej) = (-1LL);
for(_aen = (((_adx)->Len()) - (1LL)), _aeo = (0LL); _aen >= _aeo; _aen += (-1LL)){
(_aep) = (static_cast<uint64_t>((_adx)->At(_aen)));
if(!(((((0x0000000000000009ULL) <= (_aep)) && ((_aep) <= (0x000000000000000DULL))) || ((_aep) == (0x0000000000000020ULL))) || ((_aep) == (0x00000000000000A0ULL)))){
(_aej) = (_aen);
break;
}
}
(_aes) = (newArray_<char16_t, Array_<char16_t>*>(1, (((_aej) - (_ady)) + (1LL))));
for(_aew = (0LL), _aex = ((_aej) - (_ady)); _aew <= _aex; _aew += (1LL)){
((_aes)->At(_aew)) = ((_adx)->At((_ady) + (_aew)));
}
return _aes;
}
// _trimLeft
static Array_<char16_t>* _tg(Array_<char16_t>* _aey /*me_*/){
int64_t _aez; // f
int64_t _afd;
uint64_t _aff; // c
Array_<char16_t>* _afk; // r
int64_t _afo;
int64_t _afe;
int64_t _afp;
if(!(!eqAddr_((_aey), (nullptr)))){
throw 0xE9170000U;
}
(_aez) = (-1LL);
for(_afd = (0LL), _afe = (((_aey)->Len()) - (1LL)); _afd <= _afe; _afd += (1LL)){
(_aff) = (static_cast<uint64_t>((_aey)->At(_afd)));
if(!(((((0x0000000000000009ULL) <= (_aff)) && ((_aff) <= (0x000000000000000DULL))) || ((_aff) == (0x0000000000000020ULL))) || ((_aff) == (0x00000000000000A0ULL)))){
(_aez) = (_afd);
break;
}
}
if((_aez) == (-1LL)){
return _aey;
}
(_afk) = (newArray_<char16_t, Array_<char16_t>*>(1, (((_aey)->Len()) - (_aez))));
for(_afo = (0LL), _afp = ((((_aey)->Len()) - (_aez)) - (1LL)); _afo <= _afp; _afo += (1LL)){
((_afk)->At(_afo)) = ((_aey)->At((_aez) + (_afo)));
}
return _afk;
}
// _trimRight
static Array_<char16_t>* _th(Array_<char16_t>* _afq /*me_*/){
int64_t _afr; // l
int64_t _afv;
uint64_t _afx; // c
Array_<char16_t>* _agc; // r
int64_t _agg;
int64_t _afw;
int64_t _agh;
(_afr) = (-1LL);
for(_afv = (((_afq)->Len()) - (1LL)), _afw = (0LL); _afv >= _afw; _afv += (-1LL)){
(_afx) = (static_cast<uint64_t>((_afq)->At(_afv)));
if(!(((((0x0000000000000009ULL) <= (_afx)) && ((_afx) <= (0x000000000000000DULL))) || ((_afx) == (0x0000000000000020ULL))) || ((_afx) == (0x00000000000000A0ULL)))){
(_afr) = (_afv);
break;
}
}
if((_afr) == (-1LL)){
return _afq;
}
(_agc) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_afr) + (1LL))));
for(_agg = (0LL), _agh = (_afr); _agg <= _agh; _agg += (1LL)){
((_agc)->At(_agg)) = ((_afq)->At(_agg));
}
return _agc;
}
// f
static Array_<char16_t>* _tk(int64_t _agi /*a*/, int64_t* _agj /*b*/, double _agk /*c*/, double* _agl /*d*/, char16_t* _agm /*e*/){
(*_agj) = (5LL);
(*_agl) = (3.5);
(*_agm) = (u'\u005A');
return new Array_<char16_t>(1, u'\u0041');
}
// same
static bool _tu(double _agn /*n1*/, double _ago /*n2*/){
double _agp; // max
(_agp) = (1.0);
if((_agp) < (_agn)){
(_agp) = (_agn);
}
if((_agp) < (_ago)){
(_agp) = (_ago);
}
return ((_ee)(((_agn) - (_ago)))) <= ((2.22045e-16) * (_agp));
}
// _offset
static char16_t _tw(char16_t _agu /*me_*/, int64_t _agv /*n*/){
return static_cast<char16_t>((static_cast<uint64_t>(_agu)) + (static_cast<uint64_t>(_agv)));
}
// cmp
static int64_t _ua(_tz* _agw /*me*/, _lj* _agx /*t*/){
return ((_agw)->_uf) - ((as_<_tz>(classTable_, (_agx), 42))->_uf);
}
// _dtor
static void _ub(_tz* _agy){
}
// _copy
static _tz* _uc(_tz* _agz){
_tz* _aha;
(_aha) = (new _tz());
((_aha)->_uf) = ((_agz)->_uf);
return as_<_tz>(classTable_, (_aha), 42);
}
// _toBin
static Array_<uint8_t>* _ud(_tz* _ahb){
Array_<uint8_t>* _ahc;
(_ahc) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_ahc) = ((_ahc)->Cat(toBin_((_ahb)->_uf)));
return _ahc;
}
// _fromBin
static _tz* _ue(_tz* _ahe, Array_<uint8_t>* _ahf, int64_t* _ahg){
_tz* _ahh;
(_ahh) = (new _tz());
((_ahh)->_uf) = (fromBin_<int64_t>((_ahf), (*_ahg)));
return _ahh;
}
// _dtor
static void _um(_ul* _ahi){
((_ahi)->_ur) = (nullptr);
}
// _copy
static _ul* _un(_ul* _ahj){
_ul* _ahk;
(_ahk) = (new _ul());
((_ahk)->_uq) = ((_ahj)->_uq);
((_ahk)->_ur) = (copy_((_ahj)->_ur));
return as_<_ul>(classTable_, (_ahk), 50);
}
// _toBin
static Array_<uint8_t>* _uo(_ul* _ahl){
Array_<uint8_t>* _ahm;
(_ahm) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_ahm) = ((_ahm)->Cat(toBin_((_ahl)->_uq)));
(_ahm) = ((_ahm)->Cat(toBin_((_ahl)->_ur)));
return _ahm;
}
// _fromBin
static _ul* _up(_ul* _ahp, Array_<uint8_t>* _ahq, int64_t* _ahr){
_ul* _ahs;
(_ahs) = (new _ul());
((_ahs)->_uq) = (fromBin_<int64_t>((_ahq), (*_ahr)));
((_ahs)->_ur) = (fromBin_<Array_<char16_t>*>((_ahq), (*_ahr)));
return _ahs;
}
// _toArray
template<typename T_, typename C_> static Array_<C_>* _vh(T_ _aht /*me_*/, Array_<int64_t>* _ahu /*type*/){
return toArray_<C_>(_aht);}
// _split
static Array_<Array_<char16_t>*>* _vo(Array_<char16_t>* _ahv /*me_*/, Array_<char16_t>* _ahw /*delimiter*/){
List_<Array_<char16_t>*>* _ahx; // result
int64_t _ahy; // p
int64_t _aia; // p2
(_ahx) = (new List_<Array_<char16_t>*>());
(_ahy) = (0LL);
while(true){
(_aia) = ((_aib)((_ahv), (_ahw), (_ahy)));
if((_aia) == (-1LL)){
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahx), (new Array_<int64_t>(1, (0LL))), (_rr<Array_<char16_t>*>((_ahv), (new Array_<int64_t>(1, (0LL))), (_ahy), (-1LL))));
return _vh<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahx), (new Array_<int64_t>(1, (0LL))));
}
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahx), (new Array_<int64_t>(1, (0LL))), (_rr<Array_<char16_t>*>((_ahv), (new Array_<int64_t>(1, (0LL))), (_ahy), ((_aia) - (_ahy)))));
(_ahy) = ((_aia) + ((_ahw)->Len()));
}
}
// _findStr
static int64_t _aib(Array_<char16_t>* _aie /*me_*/, Array_<char16_t>* _aif /*pattern*/, int64_t _aig /*start*/){
int64_t _aik;
int64_t _aip;
int64_t _ail;
int64_t _aiq;
for(_aik = (0LL), _ail = (((_aie)->Len()) - ((_aif)->Len())); _aik <= _ail; _aik += (1LL)){
for(_aip = (0LL), _aiq = ((_aif)->Len()); _aip <= _aiq; _aip += (1LL)){
if(((_aie)->At((_aik) + (_aip))) != ((_aif)->At(_aip))){
goto _aij;
}
}
return _aik;
_aij:;
}
return -1LL;
}
}
int main(int c_, char** v_){
argc_ = static_cast<int64_t>(c_) - 1;
argv_ = v_ + 1;
classTable_[0] = 0;
classTable_[1] = reinterpret_cast<int64_t>(_lk);
classTable_[2] = reinterpret_cast<int64_t>(_ll);
classTable_[3] = reinterpret_cast<int64_t>(_lm);
classTable_[4] = reinterpret_cast<int64_t>(_ln);
classTable_[5] = reinterpret_cast<int64_t>(_lo);
classTable_[6] = reinterpret_cast<int64_t>(_lp);
classTable_[7] = reinterpret_cast<int64_t>(_lq);
classTable_[8] = 0;
classTable_[9] = reinterpret_cast<int64_t>(_lk);
classTable_[10] = reinterpret_cast<int64_t>(_lr);
classTable_[11] = reinterpret_cast<int64_t>(_lm);
classTable_[12] = reinterpret_cast<int64_t>(_ls);
classTable_[13] = reinterpret_cast<int64_t>(_lt);
classTable_[14] = reinterpret_cast<int64_t>(_lu);
classTable_[15] = reinterpret_cast<int64_t>(_lq);
classTable_[16] = 0;
classTable_[17] = reinterpret_cast<int64_t>(_lk);
classTable_[18] = reinterpret_cast<int64_t>(_lx);
classTable_[19] = reinterpret_cast<int64_t>(_lm);
classTable_[20] = reinterpret_cast<int64_t>(_ly);
classTable_[21] = reinterpret_cast<int64_t>(_lz);
classTable_[22] = reinterpret_cast<int64_t>(_ma);
classTable_[23] = reinterpret_cast<int64_t>(_lq);
classTable_[24] = 0;
classTable_[25] = reinterpret_cast<int64_t>(_md);
classTable_[26] = reinterpret_cast<int64_t>(_mf);
classTable_[27] = reinterpret_cast<int64_t>(_lm);
classTable_[28] = reinterpret_cast<int64_t>(_mg);
classTable_[29] = reinterpret_cast<int64_t>(_mh);
classTable_[30] = reinterpret_cast<int64_t>(_mi);
classTable_[31] = reinterpret_cast<int64_t>(_lq);
classTable_[32] = reinterpret_cast<int64_t>(_me);
classTable_[33] = 24;
classTable_[34] = reinterpret_cast<int64_t>(_md);
classTable_[35] = reinterpret_cast<int64_t>(_mm);
classTable_[36] = reinterpret_cast<int64_t>(_lm);
classTable_[37] = reinterpret_cast<int64_t>(_mn);
classTable_[38] = reinterpret_cast<int64_t>(_mo);
classTable_[39] = reinterpret_cast<int64_t>(_mp);
classTable_[40] = reinterpret_cast<int64_t>(_lq);
classTable_[41] = reinterpret_cast<int64_t>(_ml);
classTable_[42] = 0;
classTable_[43] = reinterpret_cast<int64_t>(_lk);
classTable_[44] = reinterpret_cast<int64_t>(_ub);
classTable_[45] = reinterpret_cast<int64_t>(_ua);
classTable_[46] = reinterpret_cast<int64_t>(_uc);
classTable_[47] = reinterpret_cast<int64_t>(_ud);
classTable_[48] = reinterpret_cast<int64_t>(_ue);
classTable_[49] = reinterpret_cast<int64_t>(_lq);
classTable_[50] = 0;
classTable_[51] = reinterpret_cast<int64_t>(_lk);
classTable_[52] = reinterpret_cast<int64_t>(_um);
classTable_[53] = reinterpret_cast<int64_t>(_lm);
classTable_[54] = reinterpret_cast<int64_t>(_un);
classTable_[55] = reinterpret_cast<int64_t>(_uo);
classTable_[56] = reinterpret_cast<int64_t>(_up);
classTable_[57] = reinterpret_cast<int64_t>(_lq);
init_();
_a();
return 0;
}
