#include "common.h"
namespace {
// Class
class _lj : public Class_{
public:
_lj();
virtual int64_t cmp_(Class_* t) override;
virtual Class_* copy_(Class_* t) override;
};
// A
class _li : public _lj{
public:
_li();
virtual Class_* copy_(Class_* t) override;
};
// B
class _lw : public _lj{
public:
_lw();
virtual Class_* copy_(Class_* t) override;
};
// A
class _mc : public _lj{
public:
_mc();
virtual Class_* copy_(Class_* t) override;
int64_t _xa; // a
};
// B
class _mk : public _mc{
public:
_mk();
virtual Class_* copy_(Class_* t) override;
};
// C
class _ua : public _lj{
public:
_ua();
virtual int64_t cmp_(Class_* t) override;
virtual Class_* copy_(Class_* t) override;
int64_t _ug; // n
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
typedef Array_<char16_t>*(*_uk)(int64_t, int64_t*, double, double*, char16_t*);
static void _ab();
static void _ac();
static void _ai(Array_<char16_t>* _vm /*str*/);
template<typename T_> static Array_<char16_t>* _aj(T_ _vn /*me_*/, Array_<int64_t>* _vo /*type*/);
static int64_t _ed(int64_t _vp /*me_*/);
static double _ee(double _vq /*me_*/);
static int64_t _fs(int64_t _vr /*n*/);
static Array_<Array_<char16_t>*>* _fw(Array_<Array_<char16_t>*>* _vs /*n*/, Array_<Array_<char16_t>*>* _vt /*m*/);
static void _lk(_lj* _vu /*me*/);
static void _ll(_lj* _vv /*me*/);
static int64_t _lm(_lj* _vw /*me*/, _lj* _vx /*t*/);
static _lj* _ln(_lj* _vy /*me*/);
static Array_<uint8_t>* _lo(_lj* _wa /*me*/);
static _lj* _lp(_lj* _wc /*me*/, Array_<uint8_t>* _wd /*bin*/, int64_t* _we /*idx*/);
static Array_<char16_t>* _lq(_lj* _wg /*me*/);
static void _lr(_li* _wh);
static _li* _ls(_li* _wi);
static Array_<uint8_t>* _lt(_li* _wk);
static _li* _lu(_li* _wm, Array_<uint8_t>* _wn, int64_t* _wo);
static void _lx(_lw* _wq);
static _lw* _ly(_lw* _wr);
static Array_<uint8_t>* _lz(_lw* _wt);
static _lw* _ma(_lw* _wv, Array_<uint8_t>* _ww, int64_t* _wx);
static void _md(_mc* _wz /*me*/);
static int64_t _me(_mc* _xb /*me*/);
static void _mf(_mc* _xc);
static _mc* _mg(_mc* _xd);
static Array_<uint8_t>* _mh(_mc* _xf);
static _mc* _mi(_mc* _xi, Array_<uint8_t>* _xj, int64_t* _xk);
static int64_t _ml(_mk* _xm /*me*/);
static void _mm(_mk* _xn);
static _mk* _mn(_mk* _xo);
static Array_<uint8_t>* _mo(_mk* _xq);
static _mk* _mp(_mk* _xt, Array_<uint8_t>* _xu, int64_t* _xv);
template<typename T_, typename C_> static void _mx(T_ _xx /*me_*/, Array_<int64_t>* _xy /*type*/, C_ _xz /*item*/);
template<typename T_> static void _my(T_ _ya /*me_*/, Array_<int64_t>* _yb /*type*/);
template<typename T_, typename C_> static void _mz(T_ _yc /*me_*/, Array_<int64_t>* _yd /*type*/, C_ _ye /*item*/);
template<typename T_> static void _na(T_ _yf /*me_*/, Array_<int64_t>* _yg /*type*/);
template<typename T_> static bool _nc(T_ _yh /*me_*/, Array_<int64_t>* _yi /*type*/);
template<typename T_, typename R_> static R_ _nd(T_ _yj /*me_*/, Array_<int64_t>* _yk /*type*/);
template<typename T_> static void _ne(T_ _yl /*me_*/, Array_<int64_t>* _ym /*type*/);
template<typename T_> static void _nf(T_ _yn /*me_*/, Array_<int64_t>* _yo /*type*/);
template<typename T_> static void _nj(T_ _yp /*me_*/, Array_<int64_t>* _yq /*type*/);
template<typename T_, typename C_> static void _nn(T_ _yr /*me_*/, Array_<int64_t>* _ys /*type*/, C_ _yt /*item*/);
template<typename T_, typename R_> static R_ _no(T_ _yu /*me_*/, Array_<int64_t>* _yv /*type*/);
template<typename T_, typename R_> static R_ _nq(T_ _yw /*me_*/, Array_<int64_t>* _yx /*type*/);
template<typename T_, typename C_> static void _nw(T_ _yy /*me_*/, Array_<int64_t>* _yz /*type*/, C_ _za /*item*/);
template<typename T_, typename R_> static R_ _nx(T_ _zb /*me_*/, Array_<int64_t>* _zc /*type*/);
template<typename T_, typename R_> static R_ _nz(T_ _zd /*me_*/, Array_<int64_t>* _ze /*type*/);
template<typename T_, typename K_, typename V_> static void _of(T_ _zf /*me_*/, Array_<int64_t>* _zg /*type*/, K_ _zh /*key*/, V_ _zi /*item*/);
template<typename T_, typename C_, typename R_> static R_ _om(T_ _zj /*me_*/, Array_<int64_t>* _zk /*type*/, C_ _zl /*key*/, bool* _zm /*existed*/);
template<typename T_> static T_ _qy(T_ _zn /*me_*/, Array_<int64_t>* _zo /*type*/, T_ _zp /*n*/);
template<typename T_> static T_ _qz(T_ _zq /*me_*/, Array_<int64_t>* _zr /*type*/, T_ _zs /*n*/);
template<typename T_> static T_ _ra(T_ _zt /*me_*/, Array_<int64_t>* _zu /*type*/, T_ _zv /*n*/);
template<typename T_> static T_ _rb(T_ _zw /*me_*/, Array_<int64_t>* _zx /*type*/);
template<typename T_> static T_ _rc(T_ _zy /*me_*/, Array_<int64_t>* _zz /*type*/, int64_t _aaa /*n*/);
template<typename T_> static T_ _rd(T_ _aab /*me_*/, Array_<int64_t>* _aac /*type*/, int64_t _aad /*n*/);
template<typename T_> static T_ _re(T_ _aae /*me_*/, Array_<int64_t>* _aaf /*type*/, int64_t _aag /*n*/);
template<typename T_, typename C_> static int64_t _rp(T_ _aah /*me_*/, Array_<int64_t>* _aai /*type*/, C_ _aaj /*item*/, int64_t _aak /*start*/);
template<typename T_, typename C_> static int64_t _rq(T_ _aal /*me_*/, Array_<int64_t>* _aam /*type*/, C_ _aan /*item*/, int64_t _aao /*start*/);
template<typename T_> static T_ _rr(T_ _aap /*me_*/, Array_<int64_t>* _aaq /*type*/, int64_t _aar /*start*/, int64_t _aas /*len*/);
template<typename T_> static void _rv(T_ _aat /*me_*/, Array_<int64_t>* _aau /*type*/);
template<typename T_> static void _rz(T_ _aav /*me_*/, Array_<int64_t>* _aaw /*type*/);
template<typename T_> static void _sd(T_ _aax /*me_*/, Array_<int64_t>* _aay /*type*/);
static double _sf(double _aaz /*x*/);
static double _sg(double _aba /*x*/);
static double _sh(double _abb /*x*/);
static double _si(double _abc /*x*/);
static double _sj(double _abd /*x*/);
static double _sk(double _abe /*x*/);
static double _sl(double _abf /*base*/, double _abg /*x*/);
static void _sp(double* _abh /*x*/, double* _abi /*y*/, double _abj /*centerX*/, double _abk /*centerY*/, double _abl /*angle*/);
static double _sq(double _abs /*x*/, double _abt /*y*/, double _abu /*centerX*/, double _abv /*centerY*/);
static double _sr(double _abw /*x*/, double _abx /*y*/, double _aby /*centerX*/, double _abz /*centerY*/);
static bool _sv(double* _aca /*x*/, double _acb /*target*/, double _acc /*vel*/);
static double _ta(double _aco /*x*/);
static double _tb(double _acp /*x*/);
static double _tc(double _acq /*x*/, int64_t _acr /*precision*/);
static Array_<char16_t>* _te(Array_<char16_t>* _acw /*me_*/);
static Array_<char16_t>* _tf(Array_<char16_t>* _adg /*me_*/);
static Array_<char16_t>* _tg(Array_<char16_t>* _adq /*me_*/);
static Array_<char16_t>* _th(Array_<char16_t>* _aer /*me_*/);
static Array_<char16_t>* _ti(Array_<char16_t>* _afj /*me_*/);
static Array_<char16_t>* _tl(int64_t _agb /*a*/, int64_t* _agc /*b*/, double _agd /*c*/, double* _age /*d*/, char16_t* _agf /*e*/);
static bool _tv(double _agg /*n1*/, double _agh /*n2*/);
static char16_t _tx(char16_t _agn /*me_*/, int64_t _ago /*n*/);
static int64_t _ub(_ua* _agp /*me*/, _lj* _agq /*t*/);
static void _uc(_ua* _agr);
static _ua* _ud(_ua* _ags);
static Array_<uint8_t>* _ue(_ua* _agu);
static _ua* _uf(_ua* _agx, Array_<uint8_t>* _agy, int64_t* _agz);
template<typename T_, typename C_> static Array_<C_>* _uy(T_ _ahb /*me_*/, Array_<int64_t>* _ahc /*type*/);
static Array_<Array_<char16_t>*>* _vf(Array_<char16_t>* _ahd /*me_*/, Array_<char16_t>* _ahe /*delimiter*/);
static int64_t _ahj(Array_<char16_t>* _ahm /*me_*/, Array_<char16_t>* _ahn /*pattern*/, int64_t _aho /*start*/);
static int64_t classTable_[50];
static int64_t argc_;
static char** argv_;
static Array_<char16_t>* _m;
_lj::_lj(): Class_(){
Y = 0;
_lk(this);
}
int64_t _lj::cmp_(Class_* t){
_lj* u = reinterpret_cast<_lj*>(t);
return _lm(this, u);
}
Class_* _lj::copy_(Class_* t){
return _ln(this);
}
_li::_li(): _lj(){
Y = 8;
}
Class_* _li::copy_(Class_* t){
return _ls(this);
}
_lw::_lw(): _lj(){
Y = 16;
}
Class_* _lw::copy_(Class_* t){
return _ly(this);
}
_mc::_mc(): _lj(), _xa(){
Y = 24;
_md(this);
}
Class_* _mc::copy_(Class_* t){
return _mg(this);
}
_mk::_mk(): _mc(){
Y = 33;
}
Class_* _mk::copy_(Class_* t){
return _mn(this);
}
_ua::_ua(): _lj(), _ug(){
Y = 42;
}
int64_t _ua::cmp_(Class_* t){
_ua* u = reinterpret_cast<_ua*>(t);
return _ub(this, u);
}
Class_* _ua::copy_(Class_* t){
return _ud(this);
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
double _sn; // x
double _so; // y
double _st; // x
double _sx; // x
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
_sd<Array_<char16_t>*>((_sb), (new Array_<int64_t>(1, (0LL))));
_sd<Array_<Array_<char16_t>*>*>((_sc), (new Array_<int64_t>(1, (0LL))));
(_ai)(((_sb)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((((_sc)->At(0LL))->Cat((_sc)->At(1LL)))->Cat((_sc)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sf)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sg)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sh)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_si)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sj)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sk)((2.71828))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sl)((2.0), (8.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_sn) = (10.0);
(_so) = (1.0);
(_sp)((&_sn), (&_so), (5.0), (1.0), (1.5708));
(_ai)(((((_aj<double>((_sn), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((_so), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sq)((_sn), (_so), (5.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_sr)((4.0), (5.0), (1.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_st) = (5.0);
while(!((_sv)((&_st), (10.0), (2.0)))){
(_ai)(((_aj<double>((_st), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<double>((_st), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_sx) = (15.0);
while(!((_sv)((&_sx), (10.0), (2.0)))){
(_ai)(((_aj<double>((_sx), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<double>((_sx), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ta)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_ta)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tb)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((-5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((-5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<double>(((_tc)((-5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test12
static void _aa(){
_uk _tk; // x
int64_t _tm; // a
double _tn; // b
char16_t _to; // c
double _tq; // n
int64_t _ts;
_ua* _tz; // a
_ua* _uh; // b
_ua* _ui; // c
Array_<_ua*>* _uj; // d
int64_t _tt;
(_ai)((((_te)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((((_tf)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_tg)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_th)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((_ti)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_tk) = (_tl);
(_tm) = (0LL);
(_tn) = (0.0);
(_to) = (u'\u0000');
(_ai)((((((((((_tk)((_tm), (&_tm), (_tn), (&_tn), (&_to)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((_tm), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<double>((_tn), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<char16_t>((_to), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_tq) = (0.0);
for(_ts = (1LL), _tt = (10LL); _ts <= _tt; _ts += (1LL)){
(_tq) = ((_tq) + (0.1));
}
(_ai)(((((_aj<bool>(((_tq) == (1.0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>(((_tv)((_tq), (1.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>(((_tx)((u'\u0063'), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_aj<char16_t>(((_tx)((u'\u0063'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_tz) = (new _ua());
((_tz)->_ug) = (3LL);
(_uh) = (new _ua());
((_uh)->_ug) = (5LL);
(_ui) = (new _ua());
((_ui)->_ug) = (3LL);
(_ai)(((((((((_aj<bool>((cmp_((_tz), (_uh)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_uh)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_uh)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_uh)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((((((((_aj<bool>((cmp_((_tz), (_ui)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_ui)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_ui)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<bool>((cmp_((_tz), (_ui)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_uj) = (new Array_<_ua*>(4, (new _ua()), (new _ua()), (new _ua()), (new _ua())));
(((_uj)->At(0LL))->_ug) = (7LL);
(((_uj)->At(1LL))->_ug) = (3LL);
(((_uj)->At(2LL))->_ug) = (5LL);
(((_uj)->At(3LL))->_ug) = (4LL);
_rz<Array_<_ua*>*>((_uj), (new Array_<int64_t>(1, (0LL))));
(_ai)(((((((((_aj<int64_t>((((_uj)->At(0LL))->_ug), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_uj)->At(1LL))->_ug), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_uj)->At(2LL))->_ug), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_uj)->At(3LL))->_ug), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test13
static void _ab(){
}
// test14
static void _ac(){
Array_<int64_t>* _un; // a
Array_<Array_<Array_<char16_t>*>*>* _up; // a
double _ur; // x
int64_t _ut; // a
Array_<char16_t>* _uu; // b
List_<int64_t>* _uw; // n
Array_<int64_t>* _ux; // m
List_<Array_<char16_t>*>* _va; // n
Array_<Array_<char16_t>*>* _vb; // m
Array_<char16_t>* _vd; // s
Array_<Array_<char16_t>*>* _ve; // ts
int64_t _vj;
int64_t _vk;
(_ai)((new Array_<char16_t>(15, u'\u004C', u'\u0069', u'\u006E', u'\u0065', u'\u0020', u'\u0062', u'\u0072', u'\u0065', u'\u0061', u'\u006B', u'\u0069', u'\u006E', u'\u0067', u'\u002E', u'\u000A')));
(_ai)((new Array_<char16_t>(17, u'\u0043', u'\u006F', u'\u006D', u'\u006D', u'\u0065', u'\u006E', u'\u0074', u'\u0020', u'\u0074', u'\u0065', u'\u0073', u'\u0074', u'\u0020', u'\u0023', u'\u0031', u'\u002E', u'\u000A')));
(_un) = (newArray_<int64_t, Array_<int64_t>*>(1, (3LL)));
((_un)->At(0LL)) = (1LL);
((_un)->At(1LL)) = (2LL);
((_un)->At(2LL)) = (3LL);
(_ai)(((((((((_aj<int64_t>(((_un)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_un)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_un)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_un)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_up) = (newArray_<char16_t, Array_<Array_<Array_<char16_t>*>*>*>(3, (3LL), (2LL), (4LL)));
(_ai)(((((((_aj<int64_t>(((_up)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>((((_up)->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((((_up)->At(0LL))->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ur) = (3.14159);
(_ai)(((_aj<double>((_ur), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ut) = (0LL);
(_uu) = (nullptr);
(_ut) = (5LL);
(_uu) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(_ai)(((_aj<int64_t>((_ut), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)(((_uu)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_uw) = (new List_<int64_t>());
_mx<List_<int64_t>*, int64_t>((_uw), (new Array_<int64_t>(1, (0LL))), (3LL));
_mx<List_<int64_t>*, int64_t>((_uw), (new Array_<int64_t>(1, (0LL))), (4LL));
_mx<List_<int64_t>*, int64_t>((_uw), (new Array_<int64_t>(1, (0LL))), (5LL));
(_ux) = (_uy<List_<int64_t>*, int64_t>((_uw), (new Array_<int64_t>(1, (0LL)))));
(_ai)(((((((((_aj<int64_t>(((_ux)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_ux)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_ux)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(_aj<int64_t>(((_ux)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_va) = (new List_<Array_<char16_t>*>());
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_va), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0061', u'\u0062')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_va), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0063', u'\u0064')));
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_va), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0065', u'\u0066')));
(_vb) = (_uy<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_va), (new Array_<int64_t>(1, (0LL)))));
(_ai)(((((((((_aj<int64_t>(((_vb)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vb)->At(0LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vb)->At(1LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((_vb)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_vd) = (new Array_<char16_t>(15, u'\u0061', u'\u0062', u'\u0078', u'\u0078', u'\u0063', u'\u0064', u'\u0065', u'\u0078', u'\u0078', u'\u0066', u'\u0078', u'\u0078', u'\u0078', u'\u0078', u'\u0067'));
(_ve) = ((_vf)((_vd), (new Array_<char16_t>(2, u'\u0078', u'\u0078'))));
(_ai)(((_aj<int64_t>(((_ve)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(_vj = (0LL), _vk = (((_ve)->Len()) - (1LL)); _vj <= _vk; _vj += (1LL)){
(_ai)((((_ve)->At(_vj))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(_ai)(((_aj<char16_t>((u'\u006E'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(_ai)((new Array_<char16_t>(9, u'\u0030', u'\u0030', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0030', u'\u0030', u'\u000A')));
}
// print
static void _ai(Array_<char16_t>* _vm /*str*/){
if(_vm == nullptr){
std::cout << "(null)";
return;
}
std::u16string s_ = _vm->B;
const std::string& t_ = utf16ToUtf8_(s_);
std::cout << t_ << std::flush;
}
// _toStr
template<typename T_> static Array_<char16_t>* _aj(T_ _vn /*me_*/, Array_<int64_t>* _vo /*type*/){
return toStr_(_vn);
}
// _absInt
static int64_t _ed(int64_t _vp /*me_*/){
return ((_vp) >= (0LL)) ? (_vp) : (-(_vp));
}
// _absFloat
static double _ee(double _vq /*me_*/){
return ((_vq) >= (0.0)) ? (_vq) : (-(_vq));
}
// f
static int64_t _fs(int64_t _vr /*n*/){
return ((_vr) == (0LL)) ? (1LL) : ((_vr) * ((_fs)(((_vr) - (1LL)))));
}
// g
static Array_<Array_<char16_t>*>* _fw(Array_<Array_<char16_t>*>* _vs /*n*/, Array_<Array_<char16_t>*>* _vt /*m*/){
return new Array_<Array_<char16_t>*>(2, ((_vs)->At(0LL)), ((_vt)->At(0LL)));
}
// ctor
static void _lk(_lj* _vu /*me*/){
}
// _dtor
static void _ll(_lj* _vv /*me*/){
}
// cmp
static int64_t _lm(_lj* _vw /*me*/, _lj* _vx /*t*/){
throw 3910598660LL;
}
// _copy
static _lj* _ln(_lj* _vy /*me*/){
_lj* _vz;
(_vz) = (new _lj());
return as_<_lj>(classTable_, (_vz), 0);
}
// _toBin
static Array_<uint8_t>* _lo(_lj* _wa /*me*/){
Array_<uint8_t>* _wb;
(_wb) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _wb;
}
// _fromBin
static _lj* _lp(_lj* _wc /*me*/, Array_<uint8_t>* _wd /*bin*/, int64_t* _we /*idx*/){
_lj* _wf;
(_wf) = (new _lj());
return _wf;
}
// toStr
static Array_<char16_t>* _lq(_lj* _wg /*me*/){
return new Array_<char16_t>(0);
}
// _dtor
static void _lr(_li* _wh){
}
// _copy
static _li* _ls(_li* _wi){
_li* _wj;
(_wj) = (new _li());
return as_<_li>(classTable_, (_wj), 8);
}
// _toBin
static Array_<uint8_t>* _lt(_li* _wk){
Array_<uint8_t>* _wl;
(_wl) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _wl;
}
// _fromBin
static _li* _lu(_li* _wm, Array_<uint8_t>* _wn, int64_t* _wo){
_li* _wp;
(_wp) = (new _li());
return _wp;
}
// _dtor
static void _lx(_lw* _wq){
}
// _copy
static _lw* _ly(_lw* _wr){
_lw* _ws;
(_ws) = (new _lw());
return as_<_lw>(classTable_, (_ws), 16);
}
// _toBin
static Array_<uint8_t>* _lz(_lw* _wt){
Array_<uint8_t>* _wu;
(_wu) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return _wu;
}
// _fromBin
static _lw* _ma(_lw* _wv, Array_<uint8_t>* _ww, int64_t* _wx){
_lw* _wy;
(_wy) = (new _lw());
return _wy;
}
// ctor
static void _md(_mc* _wz /*me*/){
((_wz)->_xa) = (5LL);
}
// f
static int64_t _me(_mc* _xb /*me*/){
return (_xb)->_xa;
}
// _dtor
static void _mf(_mc* _xc){
}
// _copy
static _mc* _mg(_mc* _xd){
_mc* _xe;
(_xe) = (new _mc());
((_xe)->_xa) = ((_xd)->_xa);
return as_<_mc>(classTable_, (_xe), 24);
}
// _toBin
static Array_<uint8_t>* _mh(_mc* _xf){
Array_<uint8_t>* _xg;
(_xg) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_xg) = ((_xg)->Cat(toBin_((_xf)->_xa)));
return _xg;
}
// _fromBin
static _mc* _mi(_mc* _xi, Array_<uint8_t>* _xj, int64_t* _xk){
_mc* _xl;
(_xl) = (new _mc());
((_xl)->_xa) = (fromBin_<int64_t>((_xj), (*_xk)));
return _xl;
}
// f
static int64_t _ml(_mk* _xm /*me*/){
return 1234LL;
}
// _dtor
static void _mm(_mk* _xn){
}
// _copy
static _mk* _mn(_mk* _xo){
_mk* _xp;
(_xp) = (new _mk());
((_xp)->_xa) = ((_xo)->_xa);
return as_<_mk>(classTable_, (_xp), 33);
}
// _toBin
static Array_<uint8_t>* _mo(_mk* _xq){
Array_<uint8_t>* _xr;
(_xr) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_xr) = ((_xr)->Cat(toBin_((_xq)->_xa)));
return _xr;
}
// _fromBin
static _mk* _mp(_mk* _xt, Array_<uint8_t>* _xu, int64_t* _xv){
_mk* _xw;
(_xw) = (new _mk());
((_xw)->_xa) = (fromBin_<int64_t>((_xu), (*_xv)));
return _xw;
}
// _addList
template<typename T_, typename C_> static void _mx(T_ _xx /*me_*/, Array_<int64_t>* _xy /*type*/, C_ _xz /*item*/){
_xx->B.push_back(_xz);
}
// _head
template<typename T_> static void _my(T_ _ya /*me_*/, Array_<int64_t>* _yb /*type*/){
_ya->I = _ya->B.begin();
}
// _ins
template<typename T_, typename C_> static void _mz(T_ _yc /*me_*/, Array_<int64_t>* _yd /*type*/, C_ _ye /*item*/){
_yc->B.insert(_yc->I, _ye);
}
// _tail
template<typename T_> static void _na(T_ _yf /*me_*/, Array_<int64_t>* _yg /*type*/){
_yf->I = _yf->B.end();
--_yf->I;
}
// _term
template<typename T_> static bool _nc(T_ _yh /*me_*/, Array_<int64_t>* _yi /*type*/){
return _yh->I == _yh->B.end();
}
// _getList
template<typename T_, typename R_> static R_ _nd(T_ _yj /*me_*/, Array_<int64_t>* _yk /*type*/){
return *_yj->I;
}
// _next
template<typename T_> static void _ne(T_ _yl /*me_*/, Array_<int64_t>* _ym /*type*/){
++_yl->I;
}
// _del
template<typename T_> static void _nf(T_ _yn /*me_*/, Array_<int64_t>* _yo /*type*/){
auto& i_ = _yn->I++;
_yn->B.erase(i_);
}
// _prev
template<typename T_> static void _nj(T_ _yp /*me_*/, Array_<int64_t>* _yq /*type*/){
if(_yp->I == _yp->B.begin())
_yp->I = _yp->B.end();
else
--_yp->I;
}
// _addStack
template<typename T_, typename C_> static void _nn(T_ _yr /*me_*/, Array_<int64_t>* _ys /*type*/, C_ _yt /*item*/){
_yr->B.push(_yt);
}
// _peekStack
template<typename T_, typename R_> static R_ _no(T_ _yu /*me_*/, Array_<int64_t>* _yv /*type*/){
return _yu->B.top();
}
// _getStack
template<typename T_, typename R_> static R_ _nq(T_ _yw /*me_*/, Array_<int64_t>* _yx /*type*/){
R_ r_ = _yw->B.top();
_yw->B.pop();
return r_;
}
// _addQueue
template<typename T_, typename C_> static void _nw(T_ _yy /*me_*/, Array_<int64_t>* _yz /*type*/, C_ _za /*item*/){
_yy->B.push(_za);
}
// _peekQueue
template<typename T_, typename R_> static R_ _nx(T_ _zb /*me_*/, Array_<int64_t>* _zc /*type*/){
return _zb->B.front();
}
// _getQueue
template<typename T_, typename R_> static R_ _nz(T_ _zd /*me_*/, Array_<int64_t>* _ze /*type*/){
R_ r_ = _zd->B.front();
_zd->B.pop();
return r_;
}
// _addDict
template<typename T_, typename K_, typename V_> static void _of(T_ _zf /*me_*/, Array_<int64_t>* _zg /*type*/, K_ _zh /*key*/, V_ _zi /*item*/){
_zf->Add(_zh, _zi);
}
// _getDict
template<typename T_, typename C_, typename R_> static R_ _om(T_ _zj /*me_*/, Array_<int64_t>* _zk /*type*/, C_ _zl /*key*/, bool* _zm /*existed*/){
return dictSearch_(_zj->B, _zl, _zm);
}
// _or
template<typename T_> static T_ _qy(T_ _zn /*me_*/, Array_<int64_t>* _zo /*type*/, T_ _zp /*n*/){
return _zn | _zp;
}
// _and
template<typename T_> static T_ _qz(T_ _zq /*me_*/, Array_<int64_t>* _zr /*type*/, T_ _zs /*n*/){
return _zq & _zs;
}
// _xor
template<typename T_> static T_ _ra(T_ _zt /*me_*/, Array_<int64_t>* _zu /*type*/, T_ _zv /*n*/){
return _zt ^ _zv;
}
// _not
template<typename T_> static T_ _rb(T_ _zw /*me_*/, Array_<int64_t>* _zx /*type*/){
return ~_zw;
}
// _shl
template<typename T_> static T_ _rc(T_ _zy /*me_*/, Array_<int64_t>* _zz /*type*/, int64_t _aaa /*n*/){
return _zy << _aaa;
}
// _shr
template<typename T_> static T_ _rd(T_ _aab /*me_*/, Array_<int64_t>* _aac /*type*/, int64_t _aad /*n*/){
return _aab >> _aad;
}
// _sar
template<typename T_> static T_ _re(T_ _aae /*me_*/, Array_<int64_t>* _aaf /*type*/, int64_t _aag /*n*/){
return sar_(_aae, _aag);
}
// _findArray
template<typename T_, typename C_> static int64_t _rp(T_ _aah /*me_*/, Array_<int64_t>* _aai /*type*/, C_ _aaj /*item*/, int64_t _aak /*start*/){
if(_aak == -1) _aak = 0;
if(_aak < 0) return -1;
for(int64_t i_ = _aak; i_ < _aah->L; i_++){
if(_aah->B[i_] == _aaj) return i_;
}
return -1;
}
// _findLastArray
template<typename T_, typename C_> static int64_t _rq(T_ _aal /*me_*/, Array_<int64_t>* _aam /*type*/, C_ _aan /*item*/, int64_t _aao /*start*/){
if(_aao == -1) _aao = _aal->L - 1;
if(_aao >= _aal->L) return -1;
for(int64_t i_ = _aao; i_ >= 0; i_--){
if(_aal->B[i_] == _aan) return i_;
}
return -1;
}
// _sub
template<typename T_> static T_ _rr(T_ _aap /*me_*/, Array_<int64_t>* _aaq /*type*/, int64_t _aar /*start*/, int64_t _aas /*len*/){
return sub_(_aap, _aar, _aas);
}
// _reverse
template<typename T_> static void _rv(T_ _aat /*me_*/, Array_<int64_t>* _aau /*type*/){
}
// _sortArray
template<typename T_> static void _rz(T_ _aav /*me_*/, Array_<int64_t>* _aaw /*type*/){
}
// _sortDescArray
template<typename T_> static void _sd(T_ _aax /*me_*/, Array_<int64_t>* _aay /*type*/){
}
// cos
static double _sf(double _aaz /*x*/){
return std::cos(_aaz);
}
// sin
static double _sg(double _aba /*x*/){
return std::sin(_aba);
}
// tan
static double _sh(double _abb /*x*/){
return std::tan(_abb);
}
// sqrt
static double _si(double _abc /*x*/){
return std::sqrt(_abc);
}
// exp
static double _sj(double _abd /*x*/){
return std::exp(_abd);
}
// ln
static double _sk(double _abe /*x*/){
return std::log(_abe);
}
// log
static double _sl(double _abf /*base*/, double _abg /*x*/){
return ((_sk)((_abg))) / ((_sk)((_abf)));
}
// rot
static void _sp(double* _abh /*x*/, double* _abi /*y*/, double _abj /*centerX*/, double _abk /*centerY*/, double _abl /*angle*/){
double _abm; // x2
double _abn; // y2
double _abo; // cosTheta
double _abp; // sinTheta
double _abq; // x3
double _abr; // y3
(_abm) = ((*_abh) - (_abj));
(_abn) = ((*_abi) - (_abk));
(_abo) = ((_sf)((_abl)));
(_abp) = ((_sg)((_abl)));
(_abq) = (((_abm) * (_abo)) - ((_abn) * (_abp)));
(_abr) = (((_abm) * (_abp)) + ((_abn) * (_abo)));
(*_abh) = ((_abq) + (_abj));
(*_abi) = ((_abr) + (_abk));
}
// invRot
static double _sq(double _abs /*x*/, double _abt /*y*/, double _abu /*centerX*/, double _abv /*centerY*/){
double r_ = std::atan2(_abt - _abv, _abs - _abu);
return r_ < 0.0 ? r_ + 2.0 * 3.14159265358979323846 : r_;
}
// dist
static double _sr(double _abw /*x*/, double _abx /*y*/, double _aby /*centerX*/, double _abz /*centerY*/){
return std::hypot(_abw - _aby, _abx - _abz);
}
// chase
static bool _sv(double* _aca /*x*/, double _acb /*target*/, double _acc /*vel*/){
if((*_aca) == (_acb)){
return true;
}
if((*_aca) < (_acb)){
(*_aca) = ((*_aca) + (_acc));
if((*_aca) >= (_acb)){
(*_aca) = (_acb);
return true;
}
}
else{
(*_aca) = ((*_aca) - (_acc));
if((*_aca) <= (_acb)){
(*_aca) = (_acb);
return true;
}
}
return false;
}
// floor
static double _ta(double _aco /*x*/){
return std::floor(_aco);
}
// ceil
static double _tb(double _acp /*x*/){
return std::ceil(_acp);
}
// round
static double _tc(double _acq /*x*/, int64_t _acr /*precision*/){
double _acv; // p
if((_acr) == (0LL)){
return ((_acq) >= (0.0)) ? ((_ta)(((_acq) + (0.5)))) : (-((_ta)(((-(_acq)) + (0.5)))));
}
else{
(_acv) = (pow((10.0), (static_cast<double>(_acr))));
return ((_acq) >= (0.0)) ? (((_ta)((((_acq) * (_acv)) + (0.5)))) / (_acv)) : ((-((_ta)((((-(_acq)) * (_acv)) + (0.5))))) / (_acv));
}
}
// _lower
static Array_<char16_t>* _te(Array_<char16_t>* _acw /*me_*/){
Array_<char16_t>* _acx; // s
int64_t _adb;
int64_t _adc;
if(!(!eqAddr_((_acw), (nullptr)))){
throw 0xE9170000U;
}
(_acx) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_acw)->Len())));
for(_adb = (0LL), _adc = (((_acw)->Len()) - (1LL)); _adb <= _adc; _adb += (1LL)){
if(((u'\u0041') <= ((_acw)->At(_adb))) && (((_acw)->At(_adb)) <= (u'\u005A'))){
((_acx)->At(_adb)) = (static_cast<char16_t>(((static_cast<uint64_t>((_acw)->At(_adb))) - (0x0000000000000041ULL)) + (0x0000000000000061ULL)));
}
else{
((_acx)->At(_adb)) = ((_acw)->At(_adb));
}
}
return _acx;
}
// _upper
static Array_<char16_t>* _tf(Array_<char16_t>* _adg /*me_*/){
Array_<char16_t>* _adh; // s
int64_t _adl;
int64_t _adm;
if(!(!eqAddr_((_adg), (nullptr)))){
throw 0xE9170000U;
}
(_adh) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_adg)->Len())));
for(_adl = (0LL), _adm = (((_adg)->Len()) - (1LL)); _adl <= _adm; _adl += (1LL)){
if(((u'\u0061') <= ((_adg)->At(_adl))) && (((_adg)->At(_adl)) <= (u'\u007A'))){
((_adh)->At(_adl)) = (static_cast<char16_t>(((static_cast<uint64_t>((_adg)->At(_adl))) - (0x0000000000000061ULL)) + (0x0000000000000041ULL)));
}
else{
((_adh)->At(_adl)) = ((_adg)->At(_adl));
}
}
return _adh;
}
// _trim
static Array_<char16_t>* _tg(Array_<char16_t>* _adq /*me_*/){
int64_t _adr; // f
int64_t _adv;
uint64_t _adx; // c
int64_t _aec; // l
int64_t _aeg;
uint64_t _aei; // c
Array_<char16_t>* _ael; // r
int64_t _aep;
int64_t _adw;
int64_t _aeh;
int64_t _aeq;
if(!(!eqAddr_((_adq), (nullptr)))){
throw 0xE9170000U;
}
(_adr) = (-1LL);
for(_adv = (0LL), _adw = (((_adq)->Len()) - (1LL)); _adv <= _adw; _adv += (1LL)){
(_adx) = (static_cast<uint64_t>((_adq)->At(_adv)));
if(!(((((0x0000000000000009ULL) <= (_adx)) && ((_adx) <= (0x000000000000000DULL))) || ((_adx) == (0x0000000000000020ULL))) || ((_adx) == (0x00000000000000A0ULL)))){
(_adr) = (_adv);
break;
}
}
if((_adr) == (-1LL)){
return _adq;
}
(_aec) = (-1LL);
for(_aeg = (((_adq)->Len()) - (1LL)), _aeh = (0LL); _aeg >= _aeh; _aeg += (-1LL)){
(_aei) = (static_cast<uint64_t>((_adq)->At(_aeg)));
if(!(((((0x0000000000000009ULL) <= (_aei)) && ((_aei) <= (0x000000000000000DULL))) || ((_aei) == (0x0000000000000020ULL))) || ((_aei) == (0x00000000000000A0ULL)))){
(_aec) = (_aeg);
break;
}
}
(_ael) = (newArray_<char16_t, Array_<char16_t>*>(1, (((_aec) - (_adr)) + (1LL))));
for(_aep = (0LL), _aeq = ((_aec) - (_adr)); _aep <= _aeq; _aep += (1LL)){
((_ael)->At(_aep)) = ((_adq)->At((_adr) + (_aep)));
}
return _ael;
}
// _trimLeft
static Array_<char16_t>* _th(Array_<char16_t>* _aer /*me_*/){
int64_t _aes; // f
int64_t _aew;
uint64_t _aey; // c
Array_<char16_t>* _afd; // r
int64_t _afh;
int64_t _aex;
int64_t _afi;
if(!(!eqAddr_((_aer), (nullptr)))){
throw 0xE9170000U;
}
(_aes) = (-1LL);
for(_aew = (0LL), _aex = (((_aer)->Len()) - (1LL)); _aew <= _aex; _aew += (1LL)){
(_aey) = (static_cast<uint64_t>((_aer)->At(_aew)));
if(!(((((0x0000000000000009ULL) <= (_aey)) && ((_aey) <= (0x000000000000000DULL))) || ((_aey) == (0x0000000000000020ULL))) || ((_aey) == (0x00000000000000A0ULL)))){
(_aes) = (_aew);
break;
}
}
if((_aes) == (-1LL)){
return _aer;
}
(_afd) = (newArray_<char16_t, Array_<char16_t>*>(1, (((_aer)->Len()) - (_aes))));
for(_afh = (0LL), _afi = ((((_aer)->Len()) - (_aes)) - (1LL)); _afh <= _afi; _afh += (1LL)){
((_afd)->At(_afh)) = ((_aer)->At((_aes) + (_afh)));
}
return _afd;
}
// _trimRight
static Array_<char16_t>* _ti(Array_<char16_t>* _afj /*me_*/){
int64_t _afk; // l
int64_t _afo;
uint64_t _afq; // c
Array_<char16_t>* _afv; // r
int64_t _afz;
int64_t _afp;
int64_t _aga;
(_afk) = (-1LL);
for(_afo = (((_afj)->Len()) - (1LL)), _afp = (0LL); _afo >= _afp; _afo += (-1LL)){
(_afq) = (static_cast<uint64_t>((_afj)->At(_afo)));
if(!(((((0x0000000000000009ULL) <= (_afq)) && ((_afq) <= (0x000000000000000DULL))) || ((_afq) == (0x0000000000000020ULL))) || ((_afq) == (0x00000000000000A0ULL)))){
(_afk) = (_afo);
break;
}
}
if((_afk) == (-1LL)){
return _afj;
}
(_afv) = (newArray_<char16_t, Array_<char16_t>*>(1, ((_afk) + (1LL))));
for(_afz = (0LL), _aga = (_afk); _afz <= _aga; _afz += (1LL)){
((_afv)->At(_afz)) = ((_afj)->At(_afz));
}
return _afv;
}
// f
static Array_<char16_t>* _tl(int64_t _agb /*a*/, int64_t* _agc /*b*/, double _agd /*c*/, double* _age /*d*/, char16_t* _agf /*e*/){
(*_agc) = (5LL);
(*_age) = (3.5);
(*_agf) = (u'\u005A');
return new Array_<char16_t>(1, u'\u0041');
}
// same
static bool _tv(double _agg /*n1*/, double _agh /*n2*/){
double _agi; // max
(_agi) = (1.0);
if((_agi) < (_agg)){
(_agi) = (_agg);
}
if((_agi) < (_agh)){
(_agi) = (_agh);
}
return ((_ee)(((_agg) - (_agh)))) <= ((2.22045e-16) * (_agi));
}
// _offset
static char16_t _tx(char16_t _agn /*me_*/, int64_t _ago /*n*/){
return static_cast<char16_t>((static_cast<uint64_t>(_agn)) + (static_cast<uint64_t>(_ago)));
}
// cmp
static int64_t _ub(_ua* _agp /*me*/, _lj* _agq /*t*/){
return ((_agp)->_ug) - ((as_<_ua>(classTable_, (_agq), 42))->_ug);
}
// _dtor
static void _uc(_ua* _agr){
}
// _copy
static _ua* _ud(_ua* _ags){
_ua* _agt;
(_agt) = (new _ua());
((_agt)->_ug) = ((_ags)->_ug);
return as_<_ua>(classTable_, (_agt), 42);
}
// _toBin
static Array_<uint8_t>* _ue(_ua* _agu){
Array_<uint8_t>* _agv;
(_agv) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(_agv) = ((_agv)->Cat(toBin_((_agu)->_ug)));
return _agv;
}
// _fromBin
static _ua* _uf(_ua* _agx, Array_<uint8_t>* _agy, int64_t* _agz){
_ua* _aha;
(_aha) = (new _ua());
((_aha)->_ug) = (fromBin_<int64_t>((_agy), (*_agz)));
return _aha;
}
// _toArray
template<typename T_, typename C_> static Array_<C_>* _uy(T_ _ahb /*me_*/, Array_<int64_t>* _ahc /*type*/){
return toArray_<C_>(_ahb);}
// _split
static Array_<Array_<char16_t>*>* _vf(Array_<char16_t>* _ahd /*me_*/, Array_<char16_t>* _ahe /*delimiter*/){
List_<Array_<char16_t>*>* _ahf; // result
int64_t _ahg; // p
int64_t _ahi; // p2
(_ahf) = (new List_<Array_<char16_t>*>());
(_ahg) = (0LL);
while(true){
(_ahi) = ((_ahj)((_ahd), (_ahe), (_ahg)));
if((_ahi) == (-1LL)){
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahf), (new Array_<int64_t>(1, (0LL))), (_rr<Array_<char16_t>*>((_ahd), (new Array_<int64_t>(1, (0LL))), (_ahg), (-1LL))));
return _uy<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahf), (new Array_<int64_t>(1, (0LL))));
}
_mx<List_<Array_<char16_t>*>*, Array_<char16_t>*>((_ahf), (new Array_<int64_t>(1, (0LL))), (_rr<Array_<char16_t>*>((_ahd), (new Array_<int64_t>(1, (0LL))), (_ahg), ((_ahi) - (_ahg)))));
(_ahg) = ((_ahi) + ((_ahe)->Len()));
}
}
// _findStr
static int64_t _ahj(Array_<char16_t>* _ahm /*me_*/, Array_<char16_t>* _ahn /*pattern*/, int64_t _aho /*start*/){
int64_t _ahs;
int64_t _ahx;
int64_t _aht;
int64_t _ahy;
for(_ahs = (0LL), _aht = (((_ahm)->Len()) - ((_ahn)->Len())); _ahs <= _aht; _ahs += (1LL)){
for(_ahx = (0LL), _ahy = ((_ahn)->Len()); _ahx <= _ahy; _ahx += (1LL)){
if(((_ahm)->At((_ahs) + (_ahx))) != ((_ahn)->At(_ahx))){
goto _ahr;
}
}
return _ahs;
_ahr:;
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
classTable_[44] = reinterpret_cast<int64_t>(_uc);
classTable_[45] = reinterpret_cast<int64_t>(_ub);
classTable_[46] = reinterpret_cast<int64_t>(_ud);
classTable_[47] = reinterpret_cast<int64_t>(_ue);
classTable_[48] = reinterpret_cast<int64_t>(_uf);
classTable_[49] = reinterpret_cast<int64_t>(_lq);
init_();
_a();
return 0;
}
