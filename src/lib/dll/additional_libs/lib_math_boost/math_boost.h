#pragma once

#include "..\..\common.h"

EXPORT_CPP SClass* _makeBigInt(SClass* me_);
EXPORT_CPP void _bigIntDtor(SClass* me_);
EXPORT_CPP S64 _bigIntCmp(SClass* me_, SClass* t);
EXPORT_CPP Bool _bigIntFromStr(SClass* me_, const void* value);
EXPORT_CPP void* _bigIntToStr(SClass* me_);
EXPORT_CPP void _bigIntFromInt(SClass* me_, S64 value);
EXPORT_CPP S64 _bigIntToInt(SClass* me_);
EXPORT_CPP SClass* _bigIntAdd(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntAddInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntSub(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntSubInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntMul(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntMulInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntDiv(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntDivInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntMod(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntModInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntPowInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntAbs(SClass* me_);
EXPORT_CPP SClass* _makeBigFloat(SClass* me_);
EXPORT_CPP void _bigFloatDtor(SClass* me_);
EXPORT_CPP S64 _bigFloatCmp(SClass* me_, SClass* t);
EXPORT_CPP Bool _bigFloatFromStr(SClass* me_, const void* value);
EXPORT_CPP void* _bigFloatToStr(SClass* me_);
EXPORT_CPP void _bigFloatFromFloat(SClass* me_, double value);
EXPORT_CPP double _bigFloatToFloat(SClass* me_);
EXPORT_CPP SClass* _bigFloatAdd(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatAddFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatSub(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatSubFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatMul(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatMulFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatDiv(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatDivFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatMod(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatModFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatPow(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatPowFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatExp(SClass* me_);
EXPORT_CPP SClass* _bigFloatLn(SClass* me_);
EXPORT_CPP SClass* _bigFloatSqrt(SClass* me_);
EXPORT_CPP SClass* _bigFloatFloor(SClass* me_);
EXPORT_CPP SClass* _bigFloatCeil(SClass* me_);
EXPORT_CPP SClass* _bigFloatCos(SClass* me_);
EXPORT_CPP SClass* _bigFloatSin(SClass* me_);
EXPORT_CPP SClass* _bigFloatTan(SClass* me_);
EXPORT_CPP SClass* _bigFloatAcos(SClass* me_);
EXPORT_CPP SClass* _bigFloatAsin(SClass* me_);
EXPORT_CPP SClass* _bigFloatAtan(SClass* me_);
EXPORT_CPP SClass* _bigFloatCosh(SClass* me_);
EXPORT_CPP SClass* _bigFloatSinh(SClass* me_);
EXPORT_CPP SClass* _bigFloatTanh(SClass* me_);
EXPORT_CPP SClass* _bigFloatAcosh(SClass* me_);
EXPORT_CPP SClass* _bigFloatAsinh(SClass* me_);
EXPORT_CPP SClass* _bigFloatAtanh(SClass* me_);
EXPORT_CPP SClass* _bigFloatAbs(SClass* me_);
EXPORT_CPP SClass* _bigFloatPi(SClass* me_);
EXPORT_CPP SClass* _bigFloatE(SClass* me_);
EXPORT_CPP SClass* _makeComplex(SClass* me_);
EXPORT_CPP void _complexDtor(SClass* me_);
EXPORT_CPP void* _complexToStr(SClass* me_);
EXPORT_CPP double _complexRe(SClass* me_);
EXPORT_CPP double _complexIm(SClass* me_);
EXPORT_CPP SClass* _complexSet(SClass* me_, double re, double im);
EXPORT_CPP SClass* _complexAdd(SClass* me_, SClass* value);
EXPORT_CPP SClass* _complexSub(SClass* me_, SClass* value);
EXPORT_CPP SClass* _complexMul(SClass* me_, SClass* value);
EXPORT_CPP SClass* _complexDiv(SClass* me_, SClass* value);
EXPORT_CPP SClass* _complexPow(SClass* me_, SClass* value);
EXPORT_CPP SClass* _complexExp(SClass* me_);
EXPORT_CPP SClass* _complexLn(SClass* me_);
EXPORT_CPP SClass* _complexSqrt(SClass* me_);
EXPORT_CPP SClass* _complexCos(SClass* me_);
EXPORT_CPP SClass* _complexSin(SClass* me_);
EXPORT_CPP SClass* _complexTan(SClass* me_);
EXPORT_CPP SClass* _complexAcos(SClass* me_);
EXPORT_CPP SClass* _complexAsin(SClass* me_);
EXPORT_CPP SClass* _complexAtan(SClass* me_);
EXPORT_CPP SClass* _complexCosh(SClass* me_);
EXPORT_CPP SClass* _complexSinh(SClass* me_);
EXPORT_CPP SClass* _complexTanh(SClass* me_);
EXPORT_CPP SClass* _complexAcosh(SClass* me_);
EXPORT_CPP SClass* _complexAsinh(SClass* me_);
EXPORT_CPP SClass* _complexAtanh(SClass* me_);
EXPORT_CPP SClass* _complexAbs(SClass* me_);