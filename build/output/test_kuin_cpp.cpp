#include "common.h"
namespace {
// Class
class ll : public Class_{
public:
ll();
virtual int64_t cmp_(Class_* t) override;
virtual Class_* copy_(Class_* t) override;
};
// A
class lk : public ll{
public:
lk();
virtual Class_* copy_(Class_* t) override;
};
// B
class ly : public ll{
public:
ly();
virtual Class_* copy_(Class_* t) override;
};
// A
class me : public ll{
public:
me();
virtual Class_* copy_(Class_* t) override;
int64_t xd; // a
};
// B
class mm : public me{
public:
mm();
virtual Class_* copy_(Class_* t) override;
};
// C
class ud : public ll{
public:
ud();
virtual int64_t cmp_(Class_* t) override;
virtual Class_* copy_(Class_* t) override;
int64_t uj; // n
};
static void a();
static void e();
static void f();
static void g();
typedef void(*o)();
typedef void(*ak)();
static void i();
static void j();
static void l(int64_t al /*excpt*/);
static void p();
static void q();
static void r();
static void s();
static void t();
static void u();
static void v();
typedef int64_t(*ml)(me*);
typedef int64_t(*ms)(mm*);
typedef int64_t(*mv)(me*);
typedef int64_t(*mw)(me*);
static void w();
static void x();
static void y();
static void z();
static void aa();
typedef Array_<char16_t>*(*un)(int64_t, int64_t*, double, double*, char16_t*);
static void ab();
static void ac();
static void ai(Array_<char16_t>* vp /*str*/);
template<typename T_> static Array_<char16_t>* aj(T_ vq /*me_*/, Array_<int64_t>* vr /*type*/);
static int64_t ee(int64_t vs /*me_*/);
static double ef(double vt /*me_*/);
static int64_t ft(int64_t vu /*n*/);
static Array_<Array_<char16_t>*>* fx(Array_<Array_<char16_t>*>* vv /*n*/, Array_<Array_<char16_t>*>* vw /*m*/);
static void lm(ll* vx /*me*/);
static void ln(ll* vy /*me*/);
static int64_t lo(ll* vz /*me*/, ll* wa /*t*/);
static ll* lp(ll* wb /*me*/);
static Array_<uint8_t>* lq(ll* wd /*me*/);
static ll* lr(ll* wf /*me*/, Array_<uint8_t>* wg /*bin*/, int64_t* wh /*idx*/);
static Array_<char16_t>* ls(ll* wj /*me*/);
static void lt(lk* wk);
static lk* lu(lk* wl);
static Array_<uint8_t>* lv(lk* wn);
static lk* lw(lk* wp, Array_<uint8_t>* wq, int64_t* wr);
static void lz(ly* wt);
static ly* ma(ly* wu);
static Array_<uint8_t>* mb(ly* ww);
static ly* mc(ly* wy, Array_<uint8_t>* wz, int64_t* xa);
static void mf(me* xc /*me*/);
static int64_t mg(me* xe /*me*/);
static void mh(me* xf);
static me* mi(me* xg);
static Array_<uint8_t>* mj(me* xi);
static me* mk(me* xl, Array_<uint8_t>* xm, int64_t* xn);
static int64_t mn(mm* xp /*me*/);
static void mo(mm* xq);
static mm* mp(mm* xr);
static Array_<uint8_t>* mq(mm* xt);
static mm* mr(mm* xw, Array_<uint8_t>* xx, int64_t* xy);
template<typename T_, typename C_> static void mz(T_ ya /*me_*/, Array_<int64_t>* yb /*type*/, C_ yc /*item*/);
template<typename T_> static void na(T_ yd /*me_*/, Array_<int64_t>* ye /*type*/);
template<typename T_, typename C_> static void nb(T_ yf /*me_*/, Array_<int64_t>* yg /*type*/, C_ yh /*item*/);
template<typename T_> static void nc(T_ yi /*me_*/, Array_<int64_t>* yj /*type*/);
template<typename T_> static bool ne(T_ yk /*me_*/, Array_<int64_t>* yl /*type*/);
template<typename T_, typename R_> static R_ nf(T_ ym /*me_*/, Array_<int64_t>* yn /*type*/);
template<typename T_> static void ng(T_ yo /*me_*/, Array_<int64_t>* yp /*type*/);
template<typename T_> static void nh(T_ yq /*me_*/, Array_<int64_t>* yr /*type*/);
template<typename T_> static void nl(T_ ys /*me_*/, Array_<int64_t>* yt /*type*/);
template<typename T_, typename C_> static void np(T_ yu /*me_*/, Array_<int64_t>* yv /*type*/, C_ yw /*item*/);
template<typename T_, typename R_> static R_ nq(T_ yx /*me_*/, Array_<int64_t>* yy /*type*/);
template<typename T_, typename R_> static R_ ns(T_ yz /*me_*/, Array_<int64_t>* za /*type*/);
template<typename T_, typename C_> static void ny(T_ zb /*me_*/, Array_<int64_t>* zc /*type*/, C_ zd /*item*/);
template<typename T_, typename R_> static R_ nz(T_ ze /*me_*/, Array_<int64_t>* zf /*type*/);
template<typename T_, typename R_> static R_ ob(T_ zg /*me_*/, Array_<int64_t>* zh /*type*/);
template<typename T_, typename K_, typename V_> static void oh(T_ zi /*me_*/, Array_<int64_t>* zj /*type*/, K_ zk /*key*/, V_ zl /*item*/);
template<typename T_, typename C_, typename R_> static R_ oo(T_ zm /*me_*/, Array_<int64_t>* zn /*type*/, C_ zo /*key*/, bool* zp /*existed*/);
template<typename T_> static T_ rb(T_ zq /*me_*/, Array_<int64_t>* zr /*type*/, T_ zs /*n*/);
template<typename T_> static T_ rc(T_ zt /*me_*/, Array_<int64_t>* zu /*type*/, T_ zv /*n*/);
template<typename T_> static T_ rd(T_ zw /*me_*/, Array_<int64_t>* zx /*type*/, T_ zy /*n*/);
template<typename T_> static T_ re(T_ zz /*me_*/, Array_<int64_t>* aaa /*type*/);
template<typename T_> static T_ rf(T_ aab /*me_*/, Array_<int64_t>* aac /*type*/, int64_t aad /*n*/);
template<typename T_> static T_ rg(T_ aae /*me_*/, Array_<int64_t>* aaf /*type*/, int64_t aag /*n*/);
template<typename T_> static T_ rh(T_ aah /*me_*/, Array_<int64_t>* aai /*type*/, int64_t aaj /*n*/);
template<typename T_, typename C_> static int64_t rs(T_ aak /*me_*/, Array_<int64_t>* aal /*type*/, C_ aam /*item*/, int64_t aan /*start*/);
template<typename T_, typename C_> static int64_t rt(T_ aao /*me_*/, Array_<int64_t>* aap /*type*/, C_ aaq /*item*/, int64_t aar /*start*/);
template<typename T_> static T_ ru(T_ aas /*me_*/, Array_<int64_t>* aat /*type*/, int64_t aau /*start*/, int64_t aav /*len*/);
template<typename T_> static void ry(T_ aaw /*me_*/, Array_<int64_t>* aax /*type*/);
template<typename T_> static void sc(T_ aay /*me_*/, Array_<int64_t>* aaz /*type*/);
template<typename T_> static void sg(T_ aba /*me_*/, Array_<int64_t>* abb /*type*/);
static double si(double abc /*x*/);
static double sj(double abd /*x*/);
static double sk(double abe /*x*/);
static double sl(double abf /*x*/);
static double sm(double abg /*x*/);
static double sn(double abh /*x*/);
static double so(double abi /*base*/, double abj /*x*/);
static void ss(double* abk /*x*/, double* abl /*y*/, double abm /*centerX*/, double abn /*centerY*/, double abo /*angle*/);
static double st(double abv /*x*/, double abw /*y*/, double abx /*centerX*/, double aby /*centerY*/);
static double su(double abz /*x*/, double aca /*y*/, double acb /*centerX*/, double acc /*centerY*/);
static bool sy(double* acd /*x*/, double ace /*target*/, double acf /*vel*/);
static double td(double acr /*x*/);
static double te(double acs /*x*/);
static double tf(double act /*x*/, int64_t acu /*precision*/);
static Array_<char16_t>* th(Array_<char16_t>* acz /*me_*/);
static Array_<char16_t>* ti(Array_<char16_t>* adj /*me_*/);
static Array_<char16_t>* tj(Array_<char16_t>* adt /*me_*/);
static Array_<char16_t>* tk(Array_<char16_t>* aeu /*me_*/);
static Array_<char16_t>* tl(Array_<char16_t>* afm /*me_*/);
static Array_<char16_t>* to(int64_t age /*a*/, int64_t* agf /*b*/, double agg /*c*/, double* agh /*d*/, char16_t* agi /*e*/);
static bool ty(double agj /*n1*/, double agk /*n2*/);
static char16_t ua(char16_t agq /*me_*/, int64_t agr /*n*/);
static int64_t ue(ud* ags /*me*/, ll* agt /*t*/);
static void uf(ud* agu);
static ud* ug(ud* agv);
static Array_<uint8_t>* uh(ud* agx);
static ud* ui(ud* aha, Array_<uint8_t>* ahb, int64_t* ahc);
template<typename T_, typename C_> static Array_<C_>* vb(T_ ahe /*me_*/, Array_<int64_t>* ahf /*type*/);
static Array_<Array_<char16_t>*>* vi(Array_<char16_t>* ahg /*me_*/, Array_<char16_t>* ahh /*delimiter*/);
static int64_t ahm(Array_<char16_t>* ahp /*me_*/, Array_<char16_t>* ahq /*pattern*/, int64_t ahr /*start*/);
static int64_t classTable_[50];
static int64_t argc_;
static char** argv_;
static Array_<char16_t>* m;
ll::ll(): Class_(){
Y = 0;
lm(this);
}
int64_t ll::cmp_(Class_* t){
ll* u = reinterpret_cast<ll*>(t);
return lo(this, u);
}
Class_* ll::copy_(Class_* t){
return lp(this);
}
lk::lk(): ll(){
Y = 8;
}
Class_* lk::copy_(Class_* t){
return lu(this);
}
ly::ly(): ll(){
Y = 16;
}
Class_* ly::copy_(Class_* t){
return ma(this);
}
me::me(): ll(), xd(){
Y = 24;
mf(this);
}
Class_* me::copy_(Class_* t){
return mi(this);
}
mm::mm(): me(){
Y = 33;
}
Class_* mm::copy_(Class_* t){
return mp(this);
}
ud::ud(): ll(), uj(){
Y = 42;
}
int64_t ud::cmp_(Class_* t){
ud* u = reinterpret_cast<ud*>(t);
return ue(this, u);
}
Class_* ud::copy_(Class_* t){
return ug(this);
}
// $
static void a(){
int64_t c; // $
try{
try{
(e)();
(f)();
(g)();
(i)();
(j)();
}catch(int64_t c){
if((0LL) <= c && c <= (4294967295LL)){
(l)((c));
}
else{
throw;
}
}
}
catch(...){
(i)();
(j)();
throw;
}
}
// _init
static void e(){
}
// _initVars
static void f(){
(m) = (new Array_<char16_t>(6, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0066'));
}
// main
static void g(){
Array_<ak>* n; // funcs
int64_t ag;
int64_t ah;
(n) = (new Array_<o>(14, (p), (q), (r), (s), (t), (u), (v), (w), (x), (y), (z), (aa), (ab), (ac)));
for(ag = (0LL), ah = (((n)->Len()) - (1LL)); ag <= ah; ag += (1LL)){
(ai)((((new Array_<char16_t>(8, u'\u002D', u'\u002D', u'\u0020', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0020'))->Cat(aj<int64_t>(((ag) + (1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(4, u'\u0020', u'\u002D', u'\u002D', u'\u000A'))));
((n)->At(ag))();
}
}
// _finVars
static void i(){
(m) = (nullptr);
}
// _fin
static void j(){
}
// _err
static void l(int64_t al /*excpt*/){
}
// test1
static void p(){
int64_t an; // a
int64_t ao; // n
int64_t ap; // b
int64_t aq; // c
double as; // a
double at; // n
double au; // b
double av; // c
uint8_t ax; // a
uint8_t ay; // n
uint8_t az; // b
uint8_t ba; // c1
uint8_t bb; // c2
uint8_t bc; // d1
uint8_t bd; // d2
uint16_t bg; // a
uint16_t bh; // n
uint16_t bi; // b
uint16_t bj; // c1
uint16_t bk; // c2
uint16_t bl; // d1
uint16_t bm; // d2
uint32_t bp; // a
uint32_t bq; // n
uint32_t br; // b
uint32_t bs; // c1
uint32_t bt; // c2
uint32_t bu; // d1
uint32_t bv; // d2
uint64_t by; // a
uint64_t bz; // n
uint64_t ca; // b
uint64_t cb; // c1
uint64_t cc; // c2
uint64_t cd; // d1
uint64_t ce; // d2
(ai)((new Array_<char16_t>(18, u'\u004B', u'\u0075', u'\u0069', u'\u006E', u'\u0020', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0020', u'\u0050', u'\u0072', u'\u006F', u'\u0067', u'\u0072', u'\u0061', u'\u006D', u'\u000A')));
(an) = (23LL);
(ai)(((((((aj<int64_t>((an), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((2LL), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((7LL), (7LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ao) = (7LL);
(ap) = ((((((((((((((((ao) + (ao)) / (ao)) - ((ao) * (ao))) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (ao)) + (-(ao)));
(ai)(((((((aj<int64_t>((ap), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((ap) % (ao)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((ao), (ao))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(aq) = (-2LL);
(ai)(((((((((((((aj<int64_t>((powI_((aq), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((aq), (1LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((aq), (2LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((aq), (3LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((aq), (4LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((aq), (5LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(as) = (23.0);
(ai)(((((((aj<double>((as), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((2.0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((powI_((7LL), (7LL))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(at) = (7.0);
(au) = ((((((((((((((((at) + (at)) / (at)) - ((at) * (at))) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (at)) + (-(at)));
(ai)(((((((aj<double>((au), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((fmod((au), (at))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((at), (at))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(av) = (-2.0);
(ai)(((((((((((((aj<double>((pow((av), (0.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((av), (1.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((av), (2.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((av), (3.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((av), (4.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((pow((av), (5.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ax) = (static_cast<uint8_t>(0x17U));
(ai)(((((aj<uint8_t>((ax), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint8_t>((static_cast<uint8_t>(0x02U)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ay) = (static_cast<uint8_t>(0x07U));
(az) = ((((((((((((((((ay) + (ay)) / (ay)) - ((ay) * (ay))) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + (ay)) + ((static_cast<uint8_t>(0x00U)) - (ay)));
(ai)(((((aj<uint8_t>((az), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint8_t>(((az) % (ay)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ba) = (static_cast<uint8_t>(0x01U));
(bb) = (static_cast<uint8_t>(0xFFU));
(bc) = (static_cast<uint8_t>(0xFFU));
(bd) = (static_cast<uint8_t>(0x01U));
(bc) = ((bc) + (static_cast<uint8_t>(0x02U)));
(bd) = ((static_cast<uint8_t>(0x00U)) - (bd));
(ai)(((((((((aj<uint8_t>((ba), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint8_t>((bc), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint8_t>((bb), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint8_t>((bd), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bg) = (static_cast<uint16_t>(0x0017U));
(ai)(((((aj<uint16_t>((bg), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint16_t>((static_cast<uint16_t>(0x0002U)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bh) = (static_cast<uint16_t>(0x0007U));
(bi) = ((((((((((((((((bh) + (bh)) / (bh)) - ((bh) * (bh))) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + (bh)) + ((static_cast<uint16_t>(0x0000U)) - (bh)));
(ai)(((((aj<uint16_t>((bi), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint16_t>(((bi) % (bh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bj) = (static_cast<uint16_t>(0x0001U));
(bk) = (static_cast<uint16_t>(0xFFFFU));
(bl) = (static_cast<uint16_t>(0xFFFFU));
(bm) = (static_cast<uint16_t>(0x0001U));
(bl) = ((bl) + (static_cast<uint16_t>(0x0002U)));
(bm) = ((static_cast<uint16_t>(0x0000U)) - (bm));
(ai)(((((((((aj<uint16_t>((bj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint16_t>((bl), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint16_t>((bk), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint16_t>((bm), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bp) = (0x00000017U);
(ai)(((((aj<uint32_t>((bp), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint32_t>((0x00000002U), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bq) = (0x00000007U);
(br) = ((((((((((((((((bq) + (bq)) / (bq)) - ((bq) * (bq))) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + (bq)) + ((0x00000000U) - (bq)));
(ai)(((((aj<uint32_t>((br), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint32_t>(((br) % (bq)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bs) = (0x00000001U);
(bt) = (0xFFFFFFFFU);
(bu) = (0xFFFFFFFFU);
(bv) = (0x00000001U);
(bu) = ((bu) + (0x00000002U));
(bv) = ((0x00000000U) - (bv));
(ai)(((((((((aj<uint32_t>((bs), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint32_t>((bu), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint32_t>((bt), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint32_t>((bv), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(by) = (0x0000000000000017ULL);
(ai)(((((aj<uint64_t>((by), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint64_t>((0x0000000000000002ULL), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(bz) = (0x0000000000000007ULL);
(ca) = ((((((((((((((((bz) + (bz)) / (bz)) - ((bz) * (bz))) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + (bz)) + ((0x0000000000000000ULL) - (bz)));
(ai)(((((aj<uint64_t>((ca), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint64_t>(((ca) % (bz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cb) = (0x0000000000000001ULL);
(cc) = (0xFFFFFFFFFFFFFFFFULL);
(cd) = (0xFFFFFFFFFFFFFFFFULL);
(ce) = (0x0000000000000001ULL);
(cd) = ((cd) + (0x0000000000000002ULL));
(ce) = ((0x0000000000000000ULL) - (ce));
(ai)(((((((((aj<uint64_t>((cb), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint64_t>((cd), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint64_t>((cc), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<uint64_t>((ce), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test2
static void q(){
int64_t ch; // a
int64_t ci; // b
int64_t cj; // c
int64_t ck; // d
double cm; // a
double cn; // b
double co; // c
double cp; // d
uint8_t cr; // a
uint8_t cs; // b
uint8_t ct; // c
uint8_t cu; // d
uint16_t cw; // a
uint16_t cx; // b
uint16_t cy; // c
uint16_t cz; // d
uint32_t db; // a
uint32_t dc; // b
uint32_t dd; // c
uint32_t de; // d
uint64_t dg; // a
uint64_t dh; // b
uint64_t di; // c
uint64_t dj; // d
Array_<char16_t>* dl; // a
Array_<char16_t>* dm; // b
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ch) = (-3LL);
(ci) = (5LL);
(ai)(((((((((((((aj<bool>(((ch) == (ci)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ch) != (ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ch) < (ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ch) <= (ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ch) > (ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ch) >= (ci)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cj) = (4LL);
(ck) = (4LL);
(ai)(((((((((((((aj<bool>(((cj) == (ck)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cj) != (ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cj) < (ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cj) <= (ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cj) > (ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cj) >= (ck)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cm) = (-3.0);
(cn) = (5.0);
(ai)(((((((((((((aj<bool>(((cm) == (cn)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cm) != (cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cm) < (cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cm) <= (cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cm) > (cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cm) >= (cn)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(co) = (4.0);
(cp) = (4.0);
(ai)(((((((((((((aj<bool>(((co) == (cp)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((co) != (cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((co) < (cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((co) <= (cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((co) > (cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((co) >= (cp)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cr) = (static_cast<uint8_t>(0x79U));
(cs) = (static_cast<uint8_t>(0x81U));
(ai)(((((((((((((aj<bool>(((cr) == (cs)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cr) != (cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cr) < (cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cr) <= (cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cr) > (cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cr) >= (cs)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ct) = (static_cast<uint8_t>(0x80U));
(cu) = (static_cast<uint8_t>(0x80U));
(ai)(((((((((((((aj<bool>(((ct) == (cu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ct) != (cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ct) < (cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ct) <= (cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ct) > (cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ct) >= (cu)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cw) = (static_cast<uint16_t>(0x7900U));
(cx) = (static_cast<uint16_t>(0x8100U));
(ai)(((((((((((((aj<bool>(((cw) == (cx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cw) != (cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cw) < (cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cw) <= (cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cw) > (cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cw) >= (cx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(cy) = (static_cast<uint16_t>(0x8000U));
(cz) = (static_cast<uint16_t>(0x8000U));
(ai)(((((((((((((aj<bool>(((cy) == (cz)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cy) != (cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cy) < (cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cy) <= (cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cy) > (cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((cy) >= (cz)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(db) = (0x79000000U);
(dc) = (0x81000000U);
(ai)(((((((((((((aj<bool>(((db) == (dc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((db) != (dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((db) < (dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((db) <= (dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((db) > (dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((db) >= (dc)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(dd) = (0x80000000U);
(de) = (0x80000000U);
(ai)(((((((((((((aj<bool>(((dd) == (de)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dd) != (de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dd) < (de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dd) <= (de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dd) > (de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dd) >= (de)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(dg) = (0x7900000000000000ULL);
(dh) = (0x8100000000000000ULL);
(ai)(((((((((((((aj<bool>(((dg) == (dh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dg) != (dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dg) < (dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dg) <= (dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dg) > (dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dg) >= (dh)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(di) = (0x8000000000000000ULL);
(dj) = (0x8000000000000000ULL);
(ai)(((((((((((((aj<bool>(((di) == (dj)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((di) != (dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((di) < (dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((di) <= (dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((di) > (dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((di) >= (dj)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(dl) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(dm) = (new Array_<char16_t>(2, u'\u0061', u'\u0063'));
(ai)(((((((((((((aj<bool>((cmp_((dl), (dm)) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (dm)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (dm)) < 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (dm)) <= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (dm)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (dm)) >= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) < 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) <= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((dl), (new Array_<char16_t>(2, u'\u0061', u'\u0062'))) >= 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test3
static void r(){
Array_<char16_t>* dp; // a
Array_<char16_t>* dq; // b
Array_<char16_t>* dr; // c
Array_<char16_t>* ds; // d
Array_<char16_t>* dt; // e
bool dv; // a
bool dw; // b
bool dx; // c
bool dy; // d
Array_<char16_t>* ea; // a
Array_<char16_t>* eb; // b
(dp) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(dq) = (new Array_<char16_t>(2, u'\u0061', u'\u0062'));
(dr) = (dp);
(ds) = (nullptr);
(dt) = (nullptr);
(ai)(((((aj<bool>((eqAddr_((dp), (dq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((dp), (dq))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((dp), (dr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((dp), (dr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((dq), (dr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((dq), (dr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((dp), (ds))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((dp), (ds))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((ds), (dt))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((ds), (dt))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((ds), (nullptr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((ds), (nullptr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((true), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((false), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((new Array_<char16_t>(2, u'\u0054', u'\u000A')));
(ai)((new Array_<char16_t>(2, u'\u0046', u'\u000A')));
(ai)((new Array_<char16_t>(2, u'\u0046', u'\u000A')));
(ai)((new Array_<char16_t>(2, u'\u0054', u'\u000A')));
(dv) = (eqAddr_((nullptr), (nullptr)));
(dw) = (!eqAddr_((nullptr), (nullptr)));
(dx) = (eqAddr_((nullptr), (nullptr)));
(dy) = (!eqAddr_((nullptr), (nullptr)));
(ai)(((((aj<bool>(((dv) && (dx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dv) || (dx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>(((dv) && (dy)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dv) || (dy)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>(((dw) && (dx)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dw) || (dx)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>(((dw) && (dy)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((dw) || (dy)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((dv) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((dw) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((!(dv)) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((!(dw)) ? (new Array_<char16_t>(1, u'\u0054')) : (new Array_<char16_t>(1, u'\u0046')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ea) = (aj<bool>((eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))));
(eb) = (aj<bool>((!eqAddr_((nullptr), (nullptr))), (new Array_<int64_t>(1, (0LL)))));
(ea) = ((ea)->Cat((new Array_<char16_t>(2, u'\u002C', u'\u0020'))->Cat(eb)));
(ai)(((ea)->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test4
static void s(){
int64_t eh; // a
int64_t ei; // b
Array_<char16_t>* ek; // c
Array_<char16_t>* el; // d
int64_t eo; // n
double eq; // n
char16_t es; // n
bool eu; // n
bool ev; // m
uint8_t ex; // n
uint8_t ey; // m
uint8_t ez; // f
uint8_t fa; // t
uint16_t fc; // n
uint16_t fd; // m
uint16_t fe; // f
uint16_t ff; // t
uint32_t fh; // n
uint32_t fi; // m
uint32_t fj; // f
uint32_t fk; // t
uint64_t fm; // n
uint64_t fn; // m
uint64_t fo; // f
uint64_t fp; // t
int64_t ej;
Array_<char16_t>* em;
(ai)(((aj<int64_t>(((new Array_<char16_t>(6, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0066'))->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>(((ee)((5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>(((ee)((-5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((ef)((5.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((ef)((-5.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eh) = (3LL);
(ei) = (5LL);
ej = (eh), (eh) = (ei), (ei) = (ej);
(ai)(((((aj<int64_t>((eh), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((ei), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ek) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(el) = (new Array_<char16_t>(3, u'\u0064', u'\u0065', u'\u0066'));
em = (ek), (ek) = (el), (el) = (em);
(ai)(((((ek)->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(el))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((65537LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((65537.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x00010001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x0000000000010001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eo) = (65537LL);
(ai)(((aj<int64_t>((eo), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((static_cast<double>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eo) = (33LL);
(ai)(((aj<char16_t>((static_cast<char16_t>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eo) = (0LL);
(ai)(((aj<bool>((static_cast<bool>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eo) = (5LL);
(ai)(((aj<bool>((static_cast<bool>(eo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((65537LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((65537.5), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x00010001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x0000000000010001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eq) = (65537.5);
(ai)(((aj<int64_t>((static_cast<int64_t>(eq)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((eq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(eq)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(eq)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(eq)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(eq)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((65LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0041'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0x41U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x0041U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x00000041U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x0000000000000041ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(es) = (u'\u0041');
(ai)(((aj<int64_t>((static_cast<int64_t>(es)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((es), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(es)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(es)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(es)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(es)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((0LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0x00U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x0000U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x00000000U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x0000000000000000ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0x01U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x0001U)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x00000001U), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x0000000000000001ULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(eu) = (false);
(ev) = (true);
(ai)(((aj<int64_t>((static_cast<int64_t>(eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((eu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(eu)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((static_cast<int64_t>(ev)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((ev), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(ev)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(ev)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(ev)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(ev)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ex) = (static_cast<uint8_t>(0xFFU));
(ey) = (static_cast<uint8_t>(0x21U));
(ez) = (static_cast<uint8_t>(0x00U));
(fa) = (static_cast<uint8_t>(0x05U));
(ai)(((aj<int64_t>((static_cast<int64_t>(ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((static_cast<double>(ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((static_cast<char16_t>(ey)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(ez)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fa)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((ex), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(ex)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(fc) = (static_cast<uint16_t>(0x00FFU));
(fd) = (static_cast<uint16_t>(0x0021U));
(fe) = (static_cast<uint16_t>(0x0000U));
(ff) = (static_cast<uint16_t>(0x0005U));
(ai)(((aj<int64_t>((static_cast<int64_t>(fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((static_cast<double>(fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((static_cast<char16_t>(fd)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fe)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(ff)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((fc), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(fc)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(fh) = (0x000000FFU);
(fi) = (0x00000021U);
(fj) = (0x00000000U);
(fk) = (0x00000005U);
(ai)(((aj<int64_t>((static_cast<int64_t>(fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((static_cast<double>(fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((static_cast<char16_t>(fi)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fj)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fk)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((fh), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((static_cast<uint64_t>(fh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((255LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((255.0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((u'\u0021'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((false), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((true), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0xFFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0x00FFU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0x000000FFU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0x00000000000000FFULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(fm) = (0x00000000000000FFULL);
(fn) = (0x0000000000000021ULL);
(fo) = (0x0000000000000000ULL);
(fp) = (0x0000000000000005ULL);
(ai)(((aj<int64_t>((static_cast<int64_t>(fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>((static_cast<double>(fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>((static_cast<char16_t>(fn)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fo)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<bool>((static_cast<bool>(fp)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((static_cast<uint32_t>(fm)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((fm), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test5
static void t(){
Array_<Array_<char16_t>*>* fr; // a
Array_<Array_<char16_t>*>* fu; // s
Array_<Array_<char16_t>*>* fv; // t
Array_<Array_<char16_t>*>* fw; // u
int64_t gb;
int64_t gg;
int64_t gj; // i
int64_t gl; // j
int64_t gq; // i
int64_t gw;
int64_t hg;
int64_t hk;
int64_t hr;
double hv;
int64_t ic;
uint8_t ih;
int64_t io;
uint16_t is;
int64_t iz;
uint32_t jd;
int64_t jk;
uint64_t jo;
int64_t jv;
char16_t jz;
int64_t kg;
Array_<char16_t>* kk;
int64_t gc;
int64_t gh;
int64_t gx;
int64_t hh;
int64_t hs;
int64_t id;
int64_t ip;
int64_t ja;
int64_t jl;
int64_t jw;
int64_t kh;
(ai)(((m)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(fr) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0061', u'\u0062')), (new Array_<char16_t>(2, u'\u0063', u'\u0064')), (new Array_<char16_t>(2, u'\u0065', u'\u0066'))));
(ai)((((((((fr)->At(0LL))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((fr)->At(1LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((fr)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>(((ft)((5LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(fu) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(2, u'\u0061', u'\u0062')), (new Array_<char16_t>(2, u'\u0063', u'\u0064'))));
(fv) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(2, u'\u0065', u'\u0066')), (new Array_<char16_t>(2, u'\u0067', u'\u0068'))));
(fw) = ((fx)((fu), (fv)));
(ai)(((((((aj<int64_t>(((fw)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((fw)->At(0LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((fw)->At(1LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(gb = (1LL), gc = (5LL); gb <= gc; gb += (2LL)){
for(gg = (gb), gh = (1LL); gg >= gh; gg += (-2LL)){
(ai)(((((aj<int64_t>((gb), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((gg), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
(gj) = (1LL);
while((gj) <= (5LL)){
(gl) = (gj);
while((gl) >= (1LL)){
(ai)(((((aj<int64_t>((gj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((gl), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(gl) = ((gl) - (2LL));
}
(gj) = ((gj) + (2LL));
}
(gq) = (1LL);
do{
(ai)(((aj<int64_t>((gq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(gq) = ((gq) + (1LL));
}while(((gq) % (2LL)) == (0LL));
for(gw = (1LL), gx = (15LL); gw <= gx; gw += (1LL)){
if((((gw) % (3LL)) == (0LL)) && (((gw) % (5LL)) == (0LL))){
(ai)((new Array_<char16_t>(9, u'\u0046', u'\u0069', u'\u007A', u'\u007A', u'\u0042', u'\u0075', u'\u007A', u'\u007A', u'\u000A')));
}
else if(((gw) % (3LL)) == (0LL)){
(ai)((new Array_<char16_t>(5, u'\u0046', u'\u0069', u'\u007A', u'\u007A', u'\u000A')));
}
else if(((gw) % (5LL)) == (0LL)){
(ai)((new Array_<char16_t>(5, u'\u0042', u'\u0075', u'\u007A', u'\u007A', u'\u000A')));
}
else{
(ai)(((aj<int64_t>((gw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(hg = (1LL), hh = (10LL); hg <= hh; hg += (1LL)){
hk = hg;
if(hk == (2LL) || (6LL) <= hk && hk <= (7LL)){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((4LL) <= hk && hk <= (6LL) || hk == (9LL)){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<int64_t>((hk), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(hr = (1LL), hs = (10LL); hr <= hs; hr += (1LL)){
hv = static_cast<double>(hr);
if(hv == (2.0) || (6.0) <= hv && hv <= (7.0)){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((4.0) <= hv && hv <= (6.0) || hv == (9.0)){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<double>((hv), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(ic = (1LL), id = (10LL); ic <= id; ic += (1LL)){
ih = static_cast<uint8_t>(ic);
if(ih == (static_cast<uint8_t>(0x02U)) || (static_cast<uint8_t>(0x06U)) <= ih && ih <= (static_cast<uint8_t>(0x07U))){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((static_cast<uint8_t>(0x04U)) <= ih && ih <= (static_cast<uint8_t>(0x06U)) || ih == (static_cast<uint8_t>(0x09U))){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<uint8_t>((ih), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(io = (1LL), ip = (10LL); io <= ip; io += (1LL)){
is = static_cast<uint16_t>(io);
if(is == (static_cast<uint16_t>(0x0002U)) || (static_cast<uint16_t>(0x0006U)) <= is && is <= (static_cast<uint16_t>(0x0007U))){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((static_cast<uint16_t>(0x0004U)) <= is && is <= (static_cast<uint16_t>(0x0006U)) || is == (static_cast<uint16_t>(0x0009U))){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<uint16_t>((is), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(iz = (1LL), ja = (10LL); iz <= ja; iz += (1LL)){
jd = static_cast<uint32_t>(iz);
if(jd == (0x00000002U) || (0x00000006U) <= jd && jd <= (0x00000007U)){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((0x00000004U) <= jd && jd <= (0x00000006U) || jd == (0x00000009U)){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<uint32_t>((jd), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(jk = (1LL), jl = (10LL); jk <= jl; jk += (1LL)){
jo = static_cast<uint64_t>(jk);
if(jo == (0x0000000000000002ULL) || (0x0000000000000006ULL) <= jo && jo <= (0x0000000000000007ULL)){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((0x0000000000000004ULL) <= jo && jo <= (0x0000000000000006ULL) || jo == (0x0000000000000009ULL)){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<uint64_t>((jo), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(jv = (1LL), jw = (10LL); jv <= jw; jv += (1LL)){
jz = static_cast<char16_t>((65LL) + (jv));
if(jz == (u'\u0043') || (u'\u0045') <= jz && jz <= (u'\u0046')){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if((u'\u0046') <= jz && jz <= (u'\u0048') || jz == (u'\u004A')){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((aj<char16_t>((jz), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
for(kg = (1LL), kh = (10LL); kg <= kh; kg += (1LL)){
kk = aj<int64_t>((kg), (new Array_<int64_t>(1, (0LL))));
if(cmp_(kk, (new Array_<char16_t>(1, u'\u0032'))) == 0 || cmp_(kk, (new Array_<char16_t>(1, u'\u0036'))) >= 0 && cmp_(kk, (new Array_<char16_t>(1, u'\u0037'))) <= 0){
(ai)((new Array_<char16_t>(4, u'\u0061', u'\u0062', u'\u0063', u'\u000A')));
}
else if(cmp_(kk, (new Array_<char16_t>(1, u'\u0034'))) >= 0 && cmp_(kk, (new Array_<char16_t>(1, u'\u0036'))) <= 0 || cmp_(kk, (new Array_<char16_t>(1, u'\u0039'))) == 0){
(ai)((new Array_<char16_t>(4, u'\u0064', u'\u0065', u'\u0066', u'\u000A')));
}
else{(ai)(((kk)->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
}
}
// test6
static void u(){
int64_t ks;
int64_t kx;
int64_t lh; // n
int64_t kt;
int64_t ky;
for(ks = (1LL), kt = (10LL); ks <= kt; ks += (1LL)){
for(kx = (1LL), ky = (10LL); kx <= ky; kx += (1LL)){
if((ks) == (2LL)){
goto kr;
}
else if((ks) == (4LL)){
goto kq;
}
else if((kx) == (3LL)){
continue;
}
else if((kx) == (5LL)){
break;
}
(ai)(((((aj<int64_t>((ks), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((kx), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
kr:;
}
kq:;
(ai)(((aj<int64_t>((5LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((0LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((5LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((6LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((-2LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((-1LL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((static_cast<uint8_t>(0xFEU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((static_cast<uint16_t>(0xFFFEU)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((0xFFFFFFFEU), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((0xFFFFFFFFFFFFFFFEULL), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (0LL);
(lh) = (-1LL);
(ai)(((((((((((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((lh) == (-1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((lh) != (-1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((lh) < (-2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((lh) > (-2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (1234LL);
(ai)(((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (255LL);
(ai)(((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (255LL);
(ai)(((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (255LL);
(ai)(((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(lh) = (255LL);
(ai)(((aj<int64_t>((static_cast<int64_t>(lh)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test7
static void v(){
lk* lj; // a
ly* lx; // b
me* mt; // a
me* mu; // b
List_<int64_t>* my; // ns
List_<Array_<char16_t>*>* nj; // ss
(lj) = (new lk());
(lx) = (new ly());
(ai)(((((((((((((aj<bool>((is_(classTable_, (lj), 0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((is_(classTable_, (lx), 0)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((is_(classTable_, (lj), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((is_(classTable_, (lx), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((is_(classTable_, (lj), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((is_(classTable_, (lx), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((((((aj<bool>((!is_(classTable_, (lj), 0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!is_(classTable_, (lx), 0)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!is_(classTable_, (lj), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!is_(classTable_, (lx), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!is_(classTable_, (lj), 16)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((!is_(classTable_, (lx), 8)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<int64_t>(((reinterpret_cast<ml>(classTable_[(new me())->Y + 8]))((new me()))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((reinterpret_cast<ms>(classTable_[(new mm())->Y + 8]))((new mm()))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(mt) = (new me());
(mu) = (new mm());
(ai)(((((aj<int64_t>(((reinterpret_cast<mv>(classTable_[(mt)->Y + 8]))((mt))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((reinterpret_cast<mw>(classTable_[(mu)->Y + 8]))((mu))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(my) = (new List_<int64_t>());
mz<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (1LL));
mz<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (2LL));
mz<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (3LL));
na<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
nb<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (4LL));
nb<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (5LL));
nc<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
nb<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (6LL));
nb<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))), (7LL));
na<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
while(!(ne<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL)))))){
(ai)(((aj<int64_t>((nf<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
ng<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
}
na<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
nh<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
nc<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
nh<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
(ai)(((aj<int64_t>(((my)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
na<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
while(!(ne<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL)))))){
(ai)(((aj<int64_t>((nf<List_<int64_t>*, int64_t>((my), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
ng<List_<int64_t>*>((my), (new Array_<int64_t>(1, (0LL))));
}
(nj) = (new List_<Array_<char16_t>*>());
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0061', u'\u0062')));
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0063', u'\u0064')));
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0065', u'\u0066')));
na<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
nb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0067', u'\u0068')));
nb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0069', u'\u006A')));
nc<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
nb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u006B', u'\u006C')));
nb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u006D', u'\u006E')));
nc<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
while(!(ne<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL)))))){
(ai)(((nf<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
nl<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
}
na<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
nh<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
nc<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
nh<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
(ai)(((aj<int64_t>(((nj)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(!(ne<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL)))))){
(ai)(((nf<List_<Array_<char16_t>*>*, Array_<char16_t>*>((nj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
nl<List_<Array_<char16_t>*>*>((nj), (new Array_<int64_t>(1, (0LL))));
}
}
// test8
static void w(){
Stack_<int64_t>* no; // ns
Stack_<Array_<char16_t>*>* nu; // ns
Queue_<int64_t>* nx; // ns
Queue_<Array_<char16_t>*>* od; // ns
(no) = (new Stack_<int64_t>());
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (1LL));
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (2LL));
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (3LL));
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (4LL));
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (5LL));
(ai)(((aj<int64_t>((nq<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((no)->Len()) != (0LL)){
(ai)(((aj<int64_t>((ns<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
np<Stack_<int64_t>*, int64_t>((no), (new Array_<int64_t>(1, (0LL))), (0LL));
(nu) = (new Stack_<Array_<char16_t>*>());
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')));
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')));
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')));
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')));
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0065')));
(ai)(((nq<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((nu)->Len()) != (0LL)){
(ai)(((ns<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
np<Stack_<Array_<char16_t>*>*, Array_<char16_t>*>((nu), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')));
(nx) = (new Queue_<int64_t>());
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (1LL));
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (2LL));
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (3LL));
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (4LL));
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (5LL));
(ai)(((aj<int64_t>((nz<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((nx)->Len()) != (0LL)){
(ai)(((aj<int64_t>((ob<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
ny<Queue_<int64_t>*, int64_t>((nx), (new Array_<int64_t>(1, (0LL))), (0LL));
(od) = (new Queue_<Array_<char16_t>*>());
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')));
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')));
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')));
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')));
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0065')));
(ai)(((nz<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
while(((od)->Len()) != (0LL)){
(ai)(((ob<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
ny<Queue_<Array_<char16_t>*>*, Array_<char16_t>*>((od), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')));
}
// test9
static void x(){
Dict_<int64_t, int64_t>* og; // n
int64_t ol;
bool on; // existed
Dict_<int64_t, Array_<char16_t>*>* ot; // n
int64_t ox;
bool oz; // existed
Dict_<Array_<char16_t>*, int64_t>* pd; // n
int64_t ph;
bool pj; // existed
Dict_<Array_<char16_t>*, Array_<char16_t>*>* pn; // n
int64_t pr;
bool pt; // existed
int64_t om;
int64_t oy;
int64_t pi;
int64_t ps;
(og) = (new Dict_<int64_t, int64_t>());
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (6LL), (16LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (8LL), (18LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (10LL), (20LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (4LL), (14LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (2LL), (12LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (3LL), (13LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (7LL), (17LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (1LL), (11LL));
oh<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (9LL), (19LL));
(ai)(((aj<int64_t>(((og)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(ol = (0LL), om = (11LL); ol <= om; ol += (1LL)){
(on) = (false);
(ai)(((aj<int64_t>((oo<Dict_<int64_t, int64_t>*, int64_t, int64_t>((og), (new Array_<int64_t>(1, (0LL))), (ol), (&on))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
if(!(on)){
(ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(ot) = (new Dict_<int64_t, Array_<char16_t>*>());
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (6LL), (new Array_<char16_t>(1, u'\u0066')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (8LL), (new Array_<char16_t>(1, u'\u0068')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (10LL), (new Array_<char16_t>(1, u'\u006A')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (4LL), (new Array_<char16_t>(1, u'\u0064')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (2LL), (new Array_<char16_t>(1, u'\u0062')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (3LL), (new Array_<char16_t>(1, u'\u0063')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (7LL), (new Array_<char16_t>(1, u'\u0067')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (1LL), (new Array_<char16_t>(1, u'\u0061')));
oh<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (9LL), (new Array_<char16_t>(1, u'\u0069')));
(ai)(((aj<int64_t>(((ot)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(ox = (0LL), oy = (11LL); ox <= oy; ox += (1LL)){
(oz) = (false);
(ai)((oo<Dict_<int64_t, Array_<char16_t>*>*, int64_t, Array_<char16_t>*>((ot), (new Array_<int64_t>(1, (0LL))), (ox), (&oz))));
(ai)((new Array_<char16_t>(1, u'\u000A')));
if(!(oz)){
(ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(pd) = (new Dict_<Array_<char16_t>*, int64_t>());
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')), (6LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0068')), (8LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u006A')), (10LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')), (4LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (2LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (3LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0067')), (7LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (1LL));
oh<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0069')), (9LL));
(ai)(((aj<int64_t>(((pd)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(ph = (0LL), pi = (11LL); ph <= pi; ph += (1LL)){
(pj) = (false);
(ai)(((aj<int64_t>((oo<Dict_<Array_<char16_t>*, int64_t>*, Array_<char16_t>*, int64_t>((pd), (new Array_<int64_t>(1, (0LL))), (aj<char16_t>((static_cast<char16_t>(((97LL) + (ph)) - (1LL))), (new Array_<int64_t>(1, (0LL))))), (&pj))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
if(!(pj)){
(ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
(pn) = (new Dict_<Array_<char16_t>*, Array_<char16_t>*>());
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0066')), (new Array_<char16_t>(1, u'\u0046')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0068')), (new Array_<char16_t>(1, u'\u0048')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u006A')), (new Array_<char16_t>(1, u'\u004A')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0064')), (new Array_<char16_t>(1, u'\u0044')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0042')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (new Array_<char16_t>(1, u'\u0043')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0067')), (new Array_<char16_t>(1, u'\u0047')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0041')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0069')), (new Array_<char16_t>(1, u'\u0049')));
(ai)(((aj<int64_t>(((pn)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(pr = (0LL), ps = (11LL); pr <= ps; pr += (1LL)){
(pt) = (false);
(ai)((oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((pn), (new Array_<int64_t>(1, (0LL))), (aj<char16_t>((static_cast<char16_t>(((97LL) + (pr)) - (1LL))), (new Array_<int64_t>(1, (0LL))))), (&pt))));
(ai)((new Array_<char16_t>(1, u'\u000A')));
if(!(pt)){
(ai)((new Array_<char16_t>(13, u'\u004E', u'\u006F', u'\u0074', u'\u0020', u'\u0065', u'\u0078', u'\u0069', u'\u0073', u'\u0074', u'\u0065', u'\u0064', u'\u002E', u'\u000A')));
}
}
}
// test10
static void y(){
Array_<Array_<char16_t>*>* px; // n
Array_<Array_<char16_t>*>* py; // m
List_<List_<int64_t>*>* qa; // n
List_<int64_t>* qb; // n2
List_<List_<int64_t>*>* qc; // m
Stack_<Stack_<int64_t>*>* qe; // n
Stack_<int64_t>* qf; // n2
Stack_<Stack_<int64_t>*>* qg; // m
Queue_<Queue_<int64_t>*>* qi; // n
Queue_<int64_t>* qj; // n2
Queue_<Queue_<int64_t>*>* qk; // m
Dict_<Array_<char16_t>*, Array_<char16_t>*>* qm; // n
Dict_<Array_<char16_t>*, Array_<char16_t>*>* qn; // m
uint8_t qz; // n
uint8_t ra; // m
uint16_t rj; // n
uint16_t rk; // m
uint32_t rm; // n
uint32_t rn; // m
uint64_t rp; // n
uint64_t rq; // m
bool qo;
bool qp;
bool qq;
bool qr;
bool qs;
bool qt;
bool qu;
bool qv;
bool qw;
bool qx;
(px) = (new Array_<Array_<char16_t>*>(2, (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063')), (new Array_<char16_t>(3, u'\u0064', u'\u0065', u'\u0066'))));
(py) = (copy_(px));
(ai)(((((aj<bool>((cmp_(((px)->At(0LL)), ((py)->At(0LL))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((eqAddr_(((px)->At(0LL)), ((py)->At(0LL)))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(qa) = (new List_<List_<int64_t>*>());
(qb) = (new List_<int64_t>());
mz<List_<int64_t>*, int64_t>((qb), (new Array_<int64_t>(1, (0LL))), (3LL));
mz<List_<int64_t>*, int64_t>((qb), (new Array_<int64_t>(1, (0LL))), (5LL));
mz<List_<List_<int64_t>*>*, List_<int64_t>*>((qa), (new Array_<int64_t>(1, (0LL))), (qb));
(qc) = (copy_(qa));
na<List_<List_<int64_t>*>*>((qa), (new Array_<int64_t>(1, (0LL))));
na<List_<int64_t>*>((nf<List_<List_<int64_t>*>*, List_<int64_t>*>((qa), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))));
na<List_<List_<int64_t>*>*>((qc), (new Array_<int64_t>(1, (0LL))));
na<List_<int64_t>*>((nf<List_<List_<int64_t>*>*, List_<int64_t>*>((qc), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))));
(ai)(((((aj<int64_t>((nf<List_<int64_t>*, int64_t>((nf<List_<List_<int64_t>*>*, List_<int64_t>*>((qa), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((nf<List_<int64_t>*, int64_t>((nf<List_<List_<int64_t>*>*, List_<int64_t>*>((qc), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(qe) = (new Stack_<Stack_<int64_t>*>());
(qf) = (new Stack_<int64_t>());
np<Stack_<int64_t>*, int64_t>((qf), (new Array_<int64_t>(1, (0LL))), (3LL));
np<Stack_<int64_t>*, int64_t>((qf), (new Array_<int64_t>(1, (0LL))), (5LL));
np<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((qe), (new Array_<int64_t>(1, (0LL))), (qf));
(qg) = (copy_(qe));
(ai)(((((aj<int64_t>((ns<Stack_<int64_t>*, int64_t>((nq<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((qe), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((ns<Stack_<int64_t>*, int64_t>((nq<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((qg), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<int64_t>((ns<Stack_<int64_t>*, int64_t>((ns<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((qe), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((ns<Stack_<int64_t>*, int64_t>((ns<Stack_<Stack_<int64_t>*>*, Stack_<int64_t>*>((qg), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(qi) = (new Queue_<Queue_<int64_t>*>());
(qj) = (new Queue_<int64_t>());
ny<Queue_<int64_t>*, int64_t>((qj), (new Array_<int64_t>(1, (0LL))), (3LL));
ny<Queue_<int64_t>*, int64_t>((qj), (new Array_<int64_t>(1, (0LL))), (5LL));
ny<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((qi), (new Array_<int64_t>(1, (0LL))), (qj));
(qk) = (copy_(qi));
(ai)(((((aj<int64_t>((ob<Queue_<int64_t>*, int64_t>((nz<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((qi), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((ob<Queue_<int64_t>*, int64_t>((nz<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((qk), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<int64_t>((ob<Queue_<int64_t>*, int64_t>((ob<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((qi), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((ob<Queue_<int64_t>*, int64_t>((ob<Queue_<Queue_<int64_t>*>*, Queue_<int64_t>*>((qk), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(qm) = (new Dict_<Array_<char16_t>*, Array_<char16_t>*>());
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0041')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (new Array_<char16_t>(1, u'\u0043')));
oh<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0042')));
(qn) = (copy_(qm));
(ai)(((((oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qo, 0, sizeof(bool)), &qo)))->Cat(oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (std::memset(&qp, 0, sizeof(bool)), &qp))))->Cat(oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (std::memset(&qq, 0, sizeof(bool)), &qq))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qr, 0, sizeof(bool)), &qr)))->Cat(oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0062')), (std::memset(&qs, 0, sizeof(bool)), &qs))))->Cat(oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0063')), (std::memset(&qt, 0, sizeof(bool)), &qt))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((aj<bool>((cmp_((oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qu, 0, sizeof(bool)), &qu))), (oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qv, 0, sizeof(bool)), &qv)))) == 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((eqAddr_((oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qm), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qw, 0, sizeof(bool)), &qw))), (oo<Dict_<Array_<char16_t>*, Array_<char16_t>*>*, Array_<char16_t>*, Array_<char16_t>*>((qn), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(1, u'\u0061')), (std::memset(&qx, 0, sizeof(bool)), &qx))))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(qz) = (static_cast<uint8_t>(0xF6U));
(ra) = (static_cast<uint8_t>(0x0AU));
(ai)(((aj<uint8_t>((rb<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (ra))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((rc<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (ra))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((rd<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (ra))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((re<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((rf<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((rg<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint8_t>((rh<uint8_t>((qz), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(rj) = (static_cast<uint16_t>(0xF6F6U));
(rk) = (static_cast<uint16_t>(0x0A0AU));
(ai)(((aj<uint16_t>((rb<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((rc<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((rd<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (rk))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((re<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((rf<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((rg<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint16_t>((rh<uint16_t>((rj), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(rm) = (0xF6F6F6F6U);
(rn) = (0x0A0A0A0AU);
(ai)(((aj<uint32_t>((rb<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((rc<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((rd<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (rn))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((re<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((rf<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((rg<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint32_t>((rh<uint32_t>((rm), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(rp) = (0xF6F6F6F6F6F6F6F6ULL);
(rq) = (0x0A0A0A0A0A0A0A0AULL);
(ai)(((aj<uint64_t>((rb<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (rq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((rc<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (rq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((rd<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (rq))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((re<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((rf<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((rg<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<uint64_t>((rh<uint64_t>((rp), (new Array_<int64_t>(1, (0LL))), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test11
static void z(){
Array_<char16_t>* rw; // n
Array_<Array_<char16_t>*>* rx; // m
Array_<char16_t>* sa; // n
Array_<Array_<char16_t>*>* sb; // m
Array_<char16_t>* se; // n
Array_<Array_<char16_t>*>* sf; // m
double sq; // x
double sr; // y
double sw; // x
double ta; // x
(ai)(((aj<int64_t>((rs<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0064'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((rs<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0066'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((rt<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0064'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<int64_t>((rt<Array_<char16_t>*, char16_t>((new Array_<char16_t>(10, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065', u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (u'\u0066'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((ru<Array_<char16_t>*>((new Array_<char16_t>(5, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (1LL), (3LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((ru<Array_<char16_t>*>((new Array_<char16_t>(5, u'\u0061', u'\u0062', u'\u0063', u'\u0064', u'\u0065')), (new Array_<int64_t>(1, (0LL))), (1LL), (-1LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((ru<Array_<Array_<char16_t>*>*>((new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0063')))), (new Array_<int64_t>(1, (0LL))), (1LL), (1LL)))->At(0LL))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((ru<Array_<Array_<char16_t>*>*>((new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(1, u'\u0061')), (new Array_<char16_t>(1, u'\u0062')), (new Array_<char16_t>(1, u'\u0063')))), (new Array_<int64_t>(1, (0LL))), (1LL), (-1LL)))->At(1LL))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(rw) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(rx) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
ry<Array_<char16_t>*>((rw), (new Array_<int64_t>(1, (0LL))));
ry<Array_<Array_<char16_t>*>*>((rx), (new Array_<int64_t>(1, (0LL))));
(ai)(((rw)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((((rx)->At(0LL))->Cat((rx)->At(1LL)))->Cat((rx)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(sa) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(sb) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
sc<Array_<char16_t>*>((sa), (new Array_<int64_t>(1, (0LL))));
sc<Array_<Array_<char16_t>*>*>((sb), (new Array_<int64_t>(1, (0LL))));
(ai)(((sa)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((((sb)->At(0LL))->Cat((sb)->At(1LL)))->Cat((sb)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(se) = (new Array_<char16_t>(23, u'\u0054', u'\u0068', u'\u0069', u'\u0073', u'\u0020', u'\u0069', u'\u0073', u'\u0020', u'\u0061', u'\u0020', u'\u0073', u'\u0074', u'\u0072', u'\u0069', u'\u006E', u'\u0067', u'\u0020', u'\u0076', u'\u0061', u'\u006C', u'\u0075', u'\u0065', u'\u002E'));
(sf) = (new Array_<Array_<char16_t>*>(3, (new Array_<char16_t>(2, u'\u0041', u'\u0042')), (new Array_<char16_t>(2, u'\u0043', u'\u0044')), (new Array_<char16_t>(2, u'\u0045', u'\u0046'))));
sg<Array_<char16_t>*>((se), (new Array_<int64_t>(1, (0LL))));
sg<Array_<Array_<char16_t>*>*>((sf), (new Array_<int64_t>(1, (0LL))));
(ai)(((se)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((((sf)->At(0LL))->Cat((sf)->At(1LL)))->Cat((sf)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((si)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((sj)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((sk)((0.523599))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((sl)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((sm)((2.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((sn)((2.71828))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((so)((2.0), (8.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(sq) = (10.0);
(sr) = (1.0);
(ss)((&sq), (&sr), (5.0), (1.0), (1.5708));
(ai)(((((aj<double>((sq), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((sr), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((st)((sq), (sr), (5.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((su)((4.0), (5.0), (1.0), (1.0))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(sw) = (5.0);
while(!((sy)((&sw), (10.0), (2.0)))){
(ai)(((aj<double>((sw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(ai)(((aj<double>((sw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ta) = (15.0);
while(!((sy)((&ta), (10.0), (2.0)))){
(ai)(((aj<double>((ta), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(ai)(((aj<double>((ta), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((td)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((td)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((te)((2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((te)((-2.5))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((-5555.56), (0LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((-5555.56), (2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<double>(((tf)((-5555.56), (-2LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test12
static void aa(){
un tn; // x
int64_t tp; // a
double tq; // b
char16_t tr; // c
double tt; // n
int64_t tv;
ud* uc; // a
ud* uk; // b
ud* ul; // c
Array_<ud*>* um; // d
int64_t tw;
(ai)((((th)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((((ti)((new Array_<char16_t>(6, u'\u0061', u'\u0042', u'\u0063', u'\u0044', u'\u0065', u'\u0046'))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((tj)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((tk)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((new Array_<char16_t>(1, u'\u0061'))->Cat((tl)((new Array_<char16_t>(7, u'\u0020', u'\u0020', u'\u0062', u'\u0063', u'\u0064', u'\u0020', u'\u0020')))))->Cat(new Array_<char16_t>(1, u'\u0065')))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(tn) = (to);
(tp) = (0LL);
(tq) = (0.0);
(tr) = (u'\u0000');
(ai)((((((((((tn)((tp), (&tp), (tq), (&tq), (&tr)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((tp), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<double>((tq), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<char16_t>((tr), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(tt) = (0.0);
for(tv = (1LL), tw = (10LL); tv <= tw; tv += (1LL)){
(tt) = ((tt) + (0.1));
}
(ai)(((((aj<bool>(((tt) == (1.0)), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>(((ty)((tt), (1.0))), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>(((ua)((u'\u0063'), (1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((aj<char16_t>(((ua)((u'\u0063'), (-1LL))), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(uc) = (new ud());
((uc)->uj) = (3LL);
(uk) = (new ud());
((uk)->uj) = (5LL);
(ul) = (new ud());
((ul)->uj) = (3LL);
(ai)(((((((((aj<bool>((cmp_((uc), (uk)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (uk)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (uk)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (uk)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((((((((aj<bool>((cmp_((uc), (ul)) < 0), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (ul)) > 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (ul)) == 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<bool>((cmp_((uc), (ul)) != 0), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(um) = (new Array_<ud*>(4, (new ud()), (new ud()), (new ud()), (new ud())));
(((um)->At(0LL))->uj) = (7LL);
(((um)->At(1LL))->uj) = (3LL);
(((um)->At(2LL))->uj) = (5LL);
(((um)->At(3LL))->uj) = (4LL);
sc<Array_<ud*>*>((um), (new Array_<int64_t>(1, (0LL))));
(ai)(((((((((aj<int64_t>((((um)->At(0LL))->uj), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((((um)->At(1LL))->uj), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((((um)->At(2LL))->uj), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((((um)->At(3LL))->uj), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
// test13
static void ab(){
}
// test14
static void ac(){
Array_<int64_t>* uq; // a
Array_<Array_<Array_<char16_t>*>*>* us; // a
double uu; // x
int64_t uw; // a
Array_<char16_t>* ux; // b
List_<int64_t>* uz; // n
Array_<int64_t>* va; // m
List_<Array_<char16_t>*>* vd; // n
Array_<Array_<char16_t>*>* ve; // m
Array_<char16_t>* vg; // s
Array_<Array_<char16_t>*>* vh; // ts
int64_t vm;
int64_t vn;
(ai)((new Array_<char16_t>(15, u'\u004C', u'\u0069', u'\u006E', u'\u0065', u'\u0020', u'\u0062', u'\u0072', u'\u0065', u'\u0061', u'\u006B', u'\u0069', u'\u006E', u'\u0067', u'\u002E', u'\u000A')));
(ai)((new Array_<char16_t>(17, u'\u0043', u'\u006F', u'\u006D', u'\u006D', u'\u0065', u'\u006E', u'\u0074', u'\u0020', u'\u0074', u'\u0065', u'\u0073', u'\u0074', u'\u0020', u'\u0023', u'\u0031', u'\u002E', u'\u000A')));
(uq) = (newArray_<int64_t, Array_<int64_t>*>(1, (3LL)));
((uq)->At(0LL)) = (1LL);
((uq)->At(1LL)) = (2LL);
((uq)->At(2LL)) = (3LL);
(ai)(((((((((aj<int64_t>(((uq)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((uq)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((uq)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((uq)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(us) = (newArray_<char16_t, Array_<Array_<Array_<char16_t>*>*>*>(3, (3LL), (2LL), (4LL)));
(ai)(((((((aj<int64_t>(((us)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>((((us)->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((((us)->At(0LL))->At(0LL))->Len()), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(uu) = (3.14159);
(ai)(((aj<double>((uu), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(uw) = (0LL);
(ux) = (nullptr);
(uw) = (5LL);
(ux) = (new Array_<char16_t>(3, u'\u0061', u'\u0062', u'\u0063'));
(ai)(((aj<int64_t>((uw), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)(((ux)->Cat(new Array_<char16_t>(1, u'\u000A'))));
(uz) = (new List_<int64_t>());
mz<List_<int64_t>*, int64_t>((uz), (new Array_<int64_t>(1, (0LL))), (3LL));
mz<List_<int64_t>*, int64_t>((uz), (new Array_<int64_t>(1, (0LL))), (4LL));
mz<List_<int64_t>*, int64_t>((uz), (new Array_<int64_t>(1, (0LL))), (5LL));
(va) = (vb<List_<int64_t>*, int64_t>((uz), (new Array_<int64_t>(1, (0LL)))));
(ai)(((((((((aj<int64_t>(((va)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((va)->At(0LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((va)->At(1LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat(aj<int64_t>(((va)->At(2LL)), (new Array_<int64_t>(1, (0LL))))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(vd) = (new List_<Array_<char16_t>*>());
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((vd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0061', u'\u0062')));
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((vd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0063', u'\u0064')));
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((vd), (new Array_<int64_t>(1, (0LL))), (new Array_<char16_t>(2, u'\u0065', u'\u0066')));
(ve) = (vb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((vd), (new Array_<int64_t>(1, (0LL)))));
(ai)(((((((((aj<int64_t>(((ve)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((ve)->At(0LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((ve)->At(1LL)))->Cat(new Array_<char16_t>(2, u'\u002C', u'\u0020')))->Cat((ve)->At(2LL)))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(vg) = (new Array_<char16_t>(15, u'\u0061', u'\u0062', u'\u0078', u'\u0078', u'\u0063', u'\u0064', u'\u0065', u'\u0078', u'\u0078', u'\u0066', u'\u0078', u'\u0078', u'\u0078', u'\u0078', u'\u0067'));
(vh) = ((vi)((vg), (new Array_<char16_t>(2, u'\u0078', u'\u0078'))));
(ai)(((aj<int64_t>(((vh)->Len()), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
for(vm = (0LL), vn = (((vh)->Len()) - (1LL)); vm <= vn; vm += (1LL)){
(ai)((((vh)->At(vm))->Cat(new Array_<char16_t>(1, u'\u000A'))));
}
(ai)(((aj<char16_t>((u'\u006E'), (new Array_<int64_t>(1, (0LL)))))->Cat(new Array_<char16_t>(1, u'\u000A'))));
(ai)((new Array_<char16_t>(9, u'\u0030', u'\u0030', u'\u0054', u'\u0065', u'\u0073', u'\u0074', u'\u0030', u'\u0030', u'\u000A')));
}
// print
static void ai(Array_<char16_t>* vp /*str*/){
if(vp == nullptr){
std::cout << "(null)";
return;
}
std::u16string s_ = vp->B;
const std::string& t_ = utf16ToUtf8_(s_);
std::cout << t_ << std::flush;
}
// _toStr
template<typename T_> static Array_<char16_t>* aj(T_ vq /*me_*/, Array_<int64_t>* vr /*type*/){
return toStr_(vq);
}
// _absInt
static int64_t ee(int64_t vs /*me_*/){
return ((vs) >= (0LL)) ? (vs) : (-(vs));
}
// _absFloat
static double ef(double vt /*me_*/){
return ((vt) >= (0.0)) ? (vt) : (-(vt));
}
// f
static int64_t ft(int64_t vu /*n*/){
return ((vu) == (0LL)) ? (1LL) : ((vu) * ((ft)(((vu) - (1LL)))));
}
// g
static Array_<Array_<char16_t>*>* fx(Array_<Array_<char16_t>*>* vv /*n*/, Array_<Array_<char16_t>*>* vw /*m*/){
return new Array_<Array_<char16_t>*>(2, ((vv)->At(0LL)), ((vw)->At(0LL)));
}
// ctor
static void lm(ll* vx /*me*/){
}
// _dtor
static void ln(ll* vy /*me*/){
}
// cmp
static int64_t lo(ll* vz /*me*/, ll* wa /*t*/){
throw 3910598660LL;
}
// _copy
static ll* lp(ll* wb /*me*/){
ll* wc;
(wc) = (new ll());
return as_<ll>(classTable_, (wc), 0);
}
// _toBin
static Array_<uint8_t>* lq(ll* wd /*me*/){
Array_<uint8_t>* we;
(we) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return we;
}
// _fromBin
static ll* lr(ll* wf /*me*/, Array_<uint8_t>* wg /*bin*/, int64_t* wh /*idx*/){
ll* wi;
(wi) = (new ll());
return wi;
}
// toStr
static Array_<char16_t>* ls(ll* wj /*me*/){
return new Array_<char16_t>(0);
}
// _dtor
static void lt(lk* wk){
}
// _copy
static lk* lu(lk* wl){
lk* wm;
(wm) = (new lk());
return as_<lk>(classTable_, (wm), 8);
}
// _toBin
static Array_<uint8_t>* lv(lk* wn){
Array_<uint8_t>* wo;
(wo) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return wo;
}
// _fromBin
static lk* lw(lk* wp, Array_<uint8_t>* wq, int64_t* wr){
lk* ws;
(ws) = (new lk());
return ws;
}
// _dtor
static void lz(ly* wt){
}
// _copy
static ly* ma(ly* wu){
ly* wv;
(wv) = (new ly());
return as_<ly>(classTable_, (wv), 16);
}
// _toBin
static Array_<uint8_t>* mb(ly* ww){
Array_<uint8_t>* wx;
(wx) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
return wx;
}
// _fromBin
static ly* mc(ly* wy, Array_<uint8_t>* wz, int64_t* xa){
ly* xb;
(xb) = (new ly());
return xb;
}
// ctor
static void mf(me* xc /*me*/){
((xc)->xd) = (5LL);
}
// f
static int64_t mg(me* xe /*me*/){
return (xe)->xd;
}
// _dtor
static void mh(me* xf){
}
// _copy
static me* mi(me* xg){
me* xh;
(xh) = (new me());
((xh)->xd) = ((xg)->xd);
return as_<me>(classTable_, (xh), 24);
}
// _toBin
static Array_<uint8_t>* mj(me* xi){
Array_<uint8_t>* xj;
(xj) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(xj) = ((xj)->Cat(toBin_((xi)->xd)));
return xj;
}
// _fromBin
static me* mk(me* xl, Array_<uint8_t>* xm, int64_t* xn){
me* xo;
(xo) = (new me());
((xo)->xd) = (fromBin_<int64_t>((xm), (*xn)));
return xo;
}
// f
static int64_t mn(mm* xp /*me*/){
return 1234LL;
}
// _dtor
static void mo(mm* xq){
}
// _copy
static mm* mp(mm* xr){
mm* xs;
(xs) = (new mm());
((xs)->xd) = ((xr)->xd);
return as_<mm>(classTable_, (xs), 33);
}
// _toBin
static Array_<uint8_t>* mq(mm* xt){
Array_<uint8_t>* xu;
(xu) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(xu) = ((xu)->Cat(toBin_((xt)->xd)));
return xu;
}
// _fromBin
static mm* mr(mm* xw, Array_<uint8_t>* xx, int64_t* xy){
mm* xz;
(xz) = (new mm());
((xz)->xd) = (fromBin_<int64_t>((xx), (*xy)));
return xz;
}
// _addList
template<typename T_, typename C_> static void mz(T_ ya /*me_*/, Array_<int64_t>* yb /*type*/, C_ yc /*item*/){
ya->B.push_back(yc);
}
// _head
template<typename T_> static void na(T_ yd /*me_*/, Array_<int64_t>* ye /*type*/){
yd->I = yd->B.begin();
}
// _ins
template<typename T_, typename C_> static void nb(T_ yf /*me_*/, Array_<int64_t>* yg /*type*/, C_ yh /*item*/){
yf->B.insert(yf->I, yh);
}
// _tail
template<typename T_> static void nc(T_ yi /*me_*/, Array_<int64_t>* yj /*type*/){
yi->I = yi->B.end();
--yi->I;
}
// _term
template<typename T_> static bool ne(T_ yk /*me_*/, Array_<int64_t>* yl /*type*/){
return yk->I == yk->B.end();
}
// _getList
template<typename T_, typename R_> static R_ nf(T_ ym /*me_*/, Array_<int64_t>* yn /*type*/){
return *ym->I;
}
// _next
template<typename T_> static void ng(T_ yo /*me_*/, Array_<int64_t>* yp /*type*/){
++yo->I;
}
// _del
template<typename T_> static void nh(T_ yq /*me_*/, Array_<int64_t>* yr /*type*/){
auto& i_ = yq->I++;
yq->B.erase(i_);
}
// _prev
template<typename T_> static void nl(T_ ys /*me_*/, Array_<int64_t>* yt /*type*/){
if(ys->I == ys->B.begin())
ys->I = ys->B.end();
else
--ys->I;
}
// _addStack
template<typename T_, typename C_> static void np(T_ yu /*me_*/, Array_<int64_t>* yv /*type*/, C_ yw /*item*/){
yu->B.push(yw);
}
// _peekStack
template<typename T_, typename R_> static R_ nq(T_ yx /*me_*/, Array_<int64_t>* yy /*type*/){
return yx->B.top();
}
// _getStack
template<typename T_, typename R_> static R_ ns(T_ yz /*me_*/, Array_<int64_t>* za /*type*/){
R_ r_ = yz->B.top();
yz->B.pop();
return r_;
}
// _addQueue
template<typename T_, typename C_> static void ny(T_ zb /*me_*/, Array_<int64_t>* zc /*type*/, C_ zd /*item*/){
zb->B.push(zd);
}
// _peekQueue
template<typename T_, typename R_> static R_ nz(T_ ze /*me_*/, Array_<int64_t>* zf /*type*/){
return ze->B.front();
}
// _getQueue
template<typename T_, typename R_> static R_ ob(T_ zg /*me_*/, Array_<int64_t>* zh /*type*/){
R_ r_ = zg->B.front();
zg->B.pop();
return r_;
}
// _addDict
template<typename T_, typename K_, typename V_> static void oh(T_ zi /*me_*/, Array_<int64_t>* zj /*type*/, K_ zk /*key*/, V_ zl /*item*/){
zi->Add(zk, zl);
}
// _getDict
template<typename T_, typename C_, typename R_> static R_ oo(T_ zm /*me_*/, Array_<int64_t>* zn /*type*/, C_ zo /*key*/, bool* zp /*existed*/){
return dictSearch_(zm->B, zo, zp);
}
// _or
template<typename T_> static T_ rb(T_ zq /*me_*/, Array_<int64_t>* zr /*type*/, T_ zs /*n*/){
return zq | zs;
}
// _and
template<typename T_> static T_ rc(T_ zt /*me_*/, Array_<int64_t>* zu /*type*/, T_ zv /*n*/){
return zt & zv;
}
// _xor
template<typename T_> static T_ rd(T_ zw /*me_*/, Array_<int64_t>* zx /*type*/, T_ zy /*n*/){
return zw ^ zy;
}
// _not
template<typename T_> static T_ re(T_ zz /*me_*/, Array_<int64_t>* aaa /*type*/){
return ~zz;
}
// _shl
template<typename T_> static T_ rf(T_ aab /*me_*/, Array_<int64_t>* aac /*type*/, int64_t aad /*n*/){
return aab << aad;
}
// _shr
template<typename T_> static T_ rg(T_ aae /*me_*/, Array_<int64_t>* aaf /*type*/, int64_t aag /*n*/){
return aae >> aag;
}
// _sar
template<typename T_> static T_ rh(T_ aah /*me_*/, Array_<int64_t>* aai /*type*/, int64_t aaj /*n*/){
return sar_(aah, aaj);
}
// _findArray
template<typename T_, typename C_> static int64_t rs(T_ aak /*me_*/, Array_<int64_t>* aal /*type*/, C_ aam /*item*/, int64_t aan /*start*/){
if(aan == -1) aan = 0;
if(aan < 0) return -1;
for(int64_t i_ = aan; i_ < aak->L; i_++){
if(aak->B[i_] == aam) return i_;
}
return -1;
}
// _findLastArray
template<typename T_, typename C_> static int64_t rt(T_ aao /*me_*/, Array_<int64_t>* aap /*type*/, C_ aaq /*item*/, int64_t aar /*start*/){
if(aar == -1) aar = aao->L - 1;
if(aar >= aao->L) return -1;
for(int64_t i_ = aar; i_ >= 0; i_--){
if(aao->B[i_] == aaq) return i_;
}
return -1;
}
// _sub
template<typename T_> static T_ ru(T_ aas /*me_*/, Array_<int64_t>* aat /*type*/, int64_t aau /*start*/, int64_t aav /*len*/){
return sub_(aas, aau, aav);
}
// _reverse
template<typename T_> static void ry(T_ aaw /*me_*/, Array_<int64_t>* aax /*type*/){
}
// _sortArray
template<typename T_> static void sc(T_ aay /*me_*/, Array_<int64_t>* aaz /*type*/){
}
// _sortDescArray
template<typename T_> static void sg(T_ aba /*me_*/, Array_<int64_t>* abb /*type*/){
}
// cos
static double si(double abc /*x*/){
return std::cos(abc);
}
// sin
static double sj(double abd /*x*/){
return std::sin(abd);
}
// tan
static double sk(double abe /*x*/){
return std::tan(abe);
}
// sqrt
static double sl(double abf /*x*/){
return std::sqrt(abf);
}
// exp
static double sm(double abg /*x*/){
return std::exp(abg);
}
// ln
static double sn(double abh /*x*/){
return std::log(abh);
}
// log
static double so(double abi /*base*/, double abj /*x*/){
return ((sn)((abj))) / ((sn)((abi)));
}
// rot
static void ss(double* abk /*x*/, double* abl /*y*/, double abm /*centerX*/, double abn /*centerY*/, double abo /*angle*/){
double abp; // x2
double abq; // y2
double abr; // cosTheta
double abs; // sinTheta
double abt; // x3
double abu; // y3
(abp) = ((*abk) - (abm));
(abq) = ((*abl) - (abn));
(abr) = ((si)((abo)));
(abs) = ((sj)((abo)));
(abt) = (((abp) * (abr)) - ((abq) * (abs)));
(abu) = (((abp) * (abs)) + ((abq) * (abr)));
(*abk) = ((abt) + (abm));
(*abl) = ((abu) + (abn));
}
// invRot
static double st(double abv /*x*/, double abw /*y*/, double abx /*centerX*/, double aby /*centerY*/){
double r_ = std::atan2(abw - aby, abv - abx);
return r_ < 0.0 ? r_ + 2.0 * 3.14159265358979323846 : r_;
}
// dist
static double su(double abz /*x*/, double aca /*y*/, double acb /*centerX*/, double acc /*centerY*/){
return std::hypot(abz - acb, aca - acc);
}
// chase
static bool sy(double* acd /*x*/, double ace /*target*/, double acf /*vel*/){
if((*acd) == (ace)){
return true;
}
if((*acd) < (ace)){
(*acd) = ((*acd) + (acf));
if((*acd) >= (ace)){
(*acd) = (ace);
return true;
}
}
else{
(*acd) = ((*acd) - (acf));
if((*acd) <= (ace)){
(*acd) = (ace);
return true;
}
}
return false;
}
// floor
static double td(double acr /*x*/){
return std::floor(acr);
}
// ceil
static double te(double acs /*x*/){
return std::ceil(acs);
}
// round
static double tf(double act /*x*/, int64_t acu /*precision*/){
double acy; // p
if((acu) == (0LL)){
return ((act) >= (0.0)) ? ((td)(((act) + (0.5)))) : (-((td)(((-(act)) + (0.5)))));
}
else{
(acy) = (pow((10.0), (static_cast<double>(acu))));
return ((act) >= (0.0)) ? (((td)((((act) * (acy)) + (0.5)))) / (acy)) : ((-((td)((((-(act)) * (acy)) + (0.5))))) / (acy));
}
}
// _lower
static Array_<char16_t>* th(Array_<char16_t>* acz /*me_*/){
Array_<char16_t>* ada; // s
int64_t ade;
int64_t adf;
if(!(!eqAddr_((acz), (nullptr)))){
throw 0xE9170000U;
}
(ada) = (newArray_<char16_t, Array_<char16_t>*>(1, ((acz)->Len())));
for(ade = (0LL), adf = (((acz)->Len()) - (1LL)); ade <= adf; ade += (1LL)){
if(((u'\u0041') <= ((acz)->At(ade))) && (((acz)->At(ade)) <= (u'\u005A'))){
((ada)->At(ade)) = (static_cast<char16_t>(((static_cast<uint64_t>((acz)->At(ade))) - (0x0000000000000041ULL)) + (0x0000000000000061ULL)));
}
else{
((ada)->At(ade)) = ((acz)->At(ade));
}
}
return ada;
}
// _upper
static Array_<char16_t>* ti(Array_<char16_t>* adj /*me_*/){
Array_<char16_t>* adk; // s
int64_t ado;
int64_t adp;
if(!(!eqAddr_((adj), (nullptr)))){
throw 0xE9170000U;
}
(adk) = (newArray_<char16_t, Array_<char16_t>*>(1, ((adj)->Len())));
for(ado = (0LL), adp = (((adj)->Len()) - (1LL)); ado <= adp; ado += (1LL)){
if(((u'\u0061') <= ((adj)->At(ado))) && (((adj)->At(ado)) <= (u'\u007A'))){
((adk)->At(ado)) = (static_cast<char16_t>(((static_cast<uint64_t>((adj)->At(ado))) - (0x0000000000000061ULL)) + (0x0000000000000041ULL)));
}
else{
((adk)->At(ado)) = ((adj)->At(ado));
}
}
return adk;
}
// _trim
static Array_<char16_t>* tj(Array_<char16_t>* adt /*me_*/){
int64_t adu; // f
int64_t ady;
uint64_t aea; // c
int64_t aef; // l
int64_t aej;
uint64_t ael; // c
Array_<char16_t>* aeo; // r
int64_t aes;
int64_t adz;
int64_t aek;
int64_t aet;
if(!(!eqAddr_((adt), (nullptr)))){
throw 0xE9170000U;
}
(adu) = (-1LL);
for(ady = (0LL), adz = (((adt)->Len()) - (1LL)); ady <= adz; ady += (1LL)){
(aea) = (static_cast<uint64_t>((adt)->At(ady)));
if(!(((((0x0000000000000009ULL) <= (aea)) && ((aea) <= (0x000000000000000DULL))) || ((aea) == (0x0000000000000020ULL))) || ((aea) == (0x00000000000000A0ULL)))){
(adu) = (ady);
break;
}
}
if((adu) == (-1LL)){
return adt;
}
(aef) = (-1LL);
for(aej = (((adt)->Len()) - (1LL)), aek = (0LL); aej >= aek; aej += (-1LL)){
(ael) = (static_cast<uint64_t>((adt)->At(aej)));
if(!(((((0x0000000000000009ULL) <= (ael)) && ((ael) <= (0x000000000000000DULL))) || ((ael) == (0x0000000000000020ULL))) || ((ael) == (0x00000000000000A0ULL)))){
(aef) = (aej);
break;
}
}
(aeo) = (newArray_<char16_t, Array_<char16_t>*>(1, (((aef) - (adu)) + (1LL))));
for(aes = (0LL), aet = ((aef) - (adu)); aes <= aet; aes += (1LL)){
((aeo)->At(aes)) = ((adt)->At((adu) + (aes)));
}
return aeo;
}
// _trimLeft
static Array_<char16_t>* tk(Array_<char16_t>* aeu /*me_*/){
int64_t aev; // f
int64_t aez;
uint64_t afb; // c
Array_<char16_t>* afg; // r
int64_t afk;
int64_t afa;
int64_t afl;
if(!(!eqAddr_((aeu), (nullptr)))){
throw 0xE9170000U;
}
(aev) = (-1LL);
for(aez = (0LL), afa = (((aeu)->Len()) - (1LL)); aez <= afa; aez += (1LL)){
(afb) = (static_cast<uint64_t>((aeu)->At(aez)));
if(!(((((0x0000000000000009ULL) <= (afb)) && ((afb) <= (0x000000000000000DULL))) || ((afb) == (0x0000000000000020ULL))) || ((afb) == (0x00000000000000A0ULL)))){
(aev) = (aez);
break;
}
}
if((aev) == (-1LL)){
return aeu;
}
(afg) = (newArray_<char16_t, Array_<char16_t>*>(1, (((aeu)->Len()) - (aev))));
for(afk = (0LL), afl = ((((aeu)->Len()) - (aev)) - (1LL)); afk <= afl; afk += (1LL)){
((afg)->At(afk)) = ((aeu)->At((aev) + (afk)));
}
return afg;
}
// _trimRight
static Array_<char16_t>* tl(Array_<char16_t>* afm /*me_*/){
int64_t afn; // l
int64_t afr;
uint64_t aft; // c
Array_<char16_t>* afy; // r
int64_t agc;
int64_t afs;
int64_t agd;
(afn) = (-1LL);
for(afr = (((afm)->Len()) - (1LL)), afs = (0LL); afr >= afs; afr += (-1LL)){
(aft) = (static_cast<uint64_t>((afm)->At(afr)));
if(!(((((0x0000000000000009ULL) <= (aft)) && ((aft) <= (0x000000000000000DULL))) || ((aft) == (0x0000000000000020ULL))) || ((aft) == (0x00000000000000A0ULL)))){
(afn) = (afr);
break;
}
}
if((afn) == (-1LL)){
return afm;
}
(afy) = (newArray_<char16_t, Array_<char16_t>*>(1, ((afn) + (1LL))));
for(agc = (0LL), agd = (afn); agc <= agd; agc += (1LL)){
((afy)->At(agc)) = ((afm)->At(agc));
}
return afy;
}
// f
static Array_<char16_t>* to(int64_t age /*a*/, int64_t* agf /*b*/, double agg /*c*/, double* agh /*d*/, char16_t* agi /*e*/){
(*agf) = (5LL);
(*agh) = (3.5);
(*agi) = (u'\u005A');
return new Array_<char16_t>(1, u'\u0041');
}
// same
static bool ty(double agj /*n1*/, double agk /*n2*/){
double agl; // max
(agl) = (1.0);
if((agl) < (agj)){
(agl) = (agj);
}
if((agl) < (agk)){
(agl) = (agk);
}
return ((ef)(((agj) - (agk)))) <= ((2.22045e-16) * (agl));
}
// _offset
static char16_t ua(char16_t agq /*me_*/, int64_t agr /*n*/){
return static_cast<char16_t>((static_cast<uint64_t>(agq)) + (static_cast<uint64_t>(agr)));
}
// cmp
static int64_t ue(ud* ags /*me*/, ll* agt /*t*/){
return ((ags)->uj) - ((as_<ud>(classTable_, (agt), 42))->uj);
}
// _dtor
static void uf(ud* agu){
}
// _copy
static ud* ug(ud* agv){
ud* agw;
(agw) = (new ud());
((agw)->uj) = ((agv)->uj);
return as_<ud>(classTable_, (agw), 42);
}
// _toBin
static Array_<uint8_t>* uh(ud* agx){
Array_<uint8_t>* agy;
(agy) = (newArray_<uint8_t, Array_<uint8_t>*>(1, (8LL)));
(agy) = ((agy)->Cat(toBin_((agx)->uj)));
return agy;
}
// _fromBin
static ud* ui(ud* aha, Array_<uint8_t>* ahb, int64_t* ahc){
ud* ahd;
(ahd) = (new ud());
((ahd)->uj) = (fromBin_<int64_t>((ahb), (*ahc)));
return ahd;
}
// _toArray
template<typename T_, typename C_> static Array_<C_>* vb(T_ ahe /*me_*/, Array_<int64_t>* ahf /*type*/){
return toArray_<C_>(ahe);}
// _split
static Array_<Array_<char16_t>*>* vi(Array_<char16_t>* ahg /*me_*/, Array_<char16_t>* ahh /*delimiter*/){
List_<Array_<char16_t>*>* ahi; // result
int64_t ahj; // p
int64_t ahl; // p2
(ahi) = (new List_<Array_<char16_t>*>());
(ahj) = (0LL);
while(true){
(ahl) = ((ahm)((ahg), (ahh), (ahj)));
if((ahl) == (-1LL)){
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((ahi), (new Array_<int64_t>(1, (0LL))), (ru<Array_<char16_t>*>((ahg), (new Array_<int64_t>(1, (0LL))), (ahj), (-1LL))));
return vb<List_<Array_<char16_t>*>*, Array_<char16_t>*>((ahi), (new Array_<int64_t>(1, (0LL))));
}
mz<List_<Array_<char16_t>*>*, Array_<char16_t>*>((ahi), (new Array_<int64_t>(1, (0LL))), (ru<Array_<char16_t>*>((ahg), (new Array_<int64_t>(1, (0LL))), (ahj), ((ahl) - (ahj)))));
(ahj) = ((ahl) + ((ahh)->Len()));
}
}
// _findStr
static int64_t ahm(Array_<char16_t>* ahp /*me_*/, Array_<char16_t>* ahq /*pattern*/, int64_t ahr /*start*/){
int64_t ahv;
int64_t aia;
int64_t ahw;
int64_t aib;
for(ahv = (0LL), ahw = (((ahp)->Len()) - ((ahq)->Len())); ahv <= ahw; ahv += (1LL)){
for(aia = (0LL), aib = ((ahq)->Len()); aia <= aib; aia += (1LL)){
if(((ahp)->At((ahv) + (aia))) != ((ahq)->At(aia))){
goto ahu;
}
}
return ahv;
ahu:;
}
return -1LL;
}
}
int main(int c_, char** v_){
argc_ = static_cast<int64_t>(c_) - 1;
argv_ = v_ + 1;
classTable_[0] = 0;
classTable_[1] = reinterpret_cast<int64_t>(static_cast<void(*)(ll*)>(lm));
classTable_[2] = reinterpret_cast<int64_t>(static_cast<void(*)(ll*)>(ln));
classTable_[3] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ll*, ll*)>(lo));
classTable_[4] = reinterpret_cast<int64_t>(static_cast<ll*(*)(ll*)>(lp));
classTable_[5] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(ll*)>(lq));
classTable_[6] = reinterpret_cast<int64_t>(static_cast<ll*(*)(ll*, Array_<uint8_t>*, int64_t*)>(lr));
classTable_[7] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
classTable_[8] = 0;
classTable_[9] = reinterpret_cast<int64_t>(static_cast<void(*)(ll*)>(lm));
classTable_[10] = reinterpret_cast<int64_t>(static_cast<void(*)(lk*)>(lt));
classTable_[11] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ll*, ll*)>(lo));
classTable_[12] = reinterpret_cast<int64_t>(static_cast<lk*(*)(lk*)>(lu));
classTable_[13] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(lk*)>(lv));
classTable_[14] = reinterpret_cast<int64_t>(static_cast<lk*(*)(lk*, Array_<uint8_t>*, int64_t*)>(lw));
classTable_[15] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
classTable_[16] = 0;
classTable_[17] = reinterpret_cast<int64_t>(static_cast<void(*)(ll*)>(lm));
classTable_[18] = reinterpret_cast<int64_t>(static_cast<void(*)(ly*)>(lz));
classTable_[19] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ll*, ll*)>(lo));
classTable_[20] = reinterpret_cast<int64_t>(static_cast<ly*(*)(ly*)>(ma));
classTable_[21] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(ly*)>(mb));
classTable_[22] = reinterpret_cast<int64_t>(static_cast<ly*(*)(ly*, Array_<uint8_t>*, int64_t*)>(mc));
classTable_[23] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
classTable_[24] = 0;
classTable_[25] = reinterpret_cast<int64_t>(static_cast<void(*)(me*)>(mf));
classTable_[26] = reinterpret_cast<int64_t>(static_cast<void(*)(me*)>(mh));
classTable_[27] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ll*, ll*)>(lo));
classTable_[28] = reinterpret_cast<int64_t>(static_cast<me*(*)(me*)>(mi));
classTable_[29] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(me*)>(mj));
classTable_[30] = reinterpret_cast<int64_t>(static_cast<me*(*)(me*, Array_<uint8_t>*, int64_t*)>(mk));
classTable_[31] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
classTable_[32] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(me*)>(mg));
classTable_[33] = 24;
classTable_[34] = reinterpret_cast<int64_t>(static_cast<void(*)(me*)>(mf));
classTable_[35] = reinterpret_cast<int64_t>(static_cast<void(*)(mm*)>(mo));
classTable_[36] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ll*, ll*)>(lo));
classTable_[37] = reinterpret_cast<int64_t>(static_cast<mm*(*)(mm*)>(mp));
classTable_[38] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(mm*)>(mq));
classTable_[39] = reinterpret_cast<int64_t>(static_cast<mm*(*)(mm*, Array_<uint8_t>*, int64_t*)>(mr));
classTable_[40] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
classTable_[41] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(mm*)>(mn));
classTable_[42] = 0;
classTable_[43] = reinterpret_cast<int64_t>(static_cast<void(*)(ll*)>(lm));
classTable_[44] = reinterpret_cast<int64_t>(static_cast<void(*)(ud*)>(uf));
classTable_[45] = reinterpret_cast<int64_t>(static_cast<int64_t(*)(ud*, ll*)>(ue));
classTable_[46] = reinterpret_cast<int64_t>(static_cast<ud*(*)(ud*)>(ug));
classTable_[47] = reinterpret_cast<int64_t>(static_cast<Array_<uint8_t>*(*)(ud*)>(uh));
classTable_[48] = reinterpret_cast<int64_t>(static_cast<ud*(*)(ud*, Array_<uint8_t>*, int64_t*)>(ui));
classTable_[49] = reinterpret_cast<int64_t>(static_cast<Array_<char16_t>*(*)(ll*)>(ls));
init_();
a();
return 0;
}
