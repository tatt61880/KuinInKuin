#pragma once

#include "..\common.h"

#include <d3d10_1.h>

static const int DepthNum = 4;
static const int BlendNum = 6;
static const int SamplerNum = 3;
static const int JointMax = 256;
static const int FontBitmapSize = 512;
static const int TexEvenNum = 3;
static const double DiscardAlpha = 0.02;
static const int ParticleNum = 256;
static const int ParticleTexNum = 3;
static const int PolyVerticesNum = 64;
static const int JointInfluenceMax = 2;
static const int JointInfluenceMaxAligned = 4;

enum RasterizerState
{
	RasterizerState_Normal,
	RasterizerState_Inverted,
	RasterizerState_None,

	RasterizerState_Num,
};

enum EVertexBuf
{
	VertexBuf_TriVertex,
	VertexBuf_RectVertex,
	VertexBuf_LineVertex,
	VertexBuf_RectLineVertex,
	VertexBuf_CircleVertex,
	VertexBuf_FilterVertex,
	VertexBuf_ParticleVertex,
	VertexBuf_ParticleUpdatingVertex,
	VertexBuf_PolyVertex,

	VertexBuf_Num,
};

enum EShaderBuf
{
	ShaderBuf_TriVs,
	ShaderBuf_TriPs,
	ShaderBuf_RectVs,
	ShaderBuf_CircleVs,
	ShaderBuf_CirclePs,
	ShaderBuf_CircleLinePs,
	ShaderBuf_TexVs,
	ShaderBuf_TexRotVs,
	ShaderBuf_TexPs,
	ShaderBuf_FontPs,
	ShaderBuf_ObjVs,
	ShaderBuf_ObjSmVs,
	ShaderBuf_ObjJointVs,
	ShaderBuf_ObjJointSmVs,
	ShaderBuf_ObjPs,
	ShaderBuf_ObjSmPs,
	ShaderBuf_ObjToonPs,
	ShaderBuf_ObjToonSmPs,
	ShaderBuf_ObjFastVs,
	ShaderBuf_ObjFastSmVs,
	ShaderBuf_ObjFastJointVs,
	ShaderBuf_ObjFastJointSmVs,
	ShaderBuf_ObjFastPs,
	ShaderBuf_ObjFastSmPs,
	ShaderBuf_ObjToonFastPs,
	ShaderBuf_ObjToonFastSmPs,
	ShaderBuf_ObjFlatVs,
	ShaderBuf_ObjFlatJointVs,
	ShaderBuf_ObjFlatFastVs,
	ShaderBuf_ObjFlatFastJointVs,
	ShaderBuf_ObjFlatPs,
	ShaderBuf_ObjOutlineVs,
	ShaderBuf_ObjOutlineJointVs,
	ShaderBuf_ObjOutlinePs,
	ShaderBuf_ObjShadowVs,
	ShaderBuf_ObjShadowJointVs,
	ShaderBuf_FilterVs,
	ShaderBuf_Filter0Ps,
	ShaderBuf_Filter1Ps,
	ShaderBuf_Particle2dVs,
	ShaderBuf_Particle2dPs,
	ShaderBuf_ParticleUpdatingVs,
	ShaderBuf_ParticleUpdatingPs,
	ShaderBuf_PolyVs,
	ShaderBuf_PolyPs,

	ShaderBuf_Num,
};

struct SVertexBuf
{
	ID3D10Buffer* Vertex;
	size_t VertexLineSize;
	ID3D10Buffer* Idx;
};

enum EShaderKind
{
	ShaderKind_Vs,
	ShaderKind_Gs,
	ShaderKind_Ps,
};

enum ELayoutType
{
	LayoutType_Int1,
	LayoutType_Int2,
	LayoutType_Int4,
	LayoutType_Float1,
	LayoutType_Float2,
	LayoutType_Float3,
	LayoutType_Float4,
};

struct SShaderBuf
{
	EShaderKind Kind;
	void* Shader;
	size_t ConstBufSize;
	ID3D10Buffer* ConstBuf;
	ID3D10InputLayout* Layout;
};

struct SObjCommonVsConstBuf
{
	float World[4][4];
	float NormWorld[4][4];
	float ProjView[4][4];
	float ShadowProjView[4][4];
	float Eye[4];
	float Dir[4];
};
STATIC_ASSERT(sizeof(SObjCommonVsConstBuf) == 4 * 72);

struct SObjCommonPsConstBuf
{
	float AmbTopColor[4];
	float AmbBottomColor[4];
	float DirColor[4];
};
STATIC_ASSERT(sizeof(SObjCommonPsConstBuf) == 4 * 12);

struct SObjVsConstBuf
{
	SObjCommonVsConstBuf CommonParam;
	float Joint[JointMax][4][4];
};

struct SObjPsConstBuf
{
	SObjCommonPsConstBuf CommonParam;
};

struct SObjFastPsConstBuf
{
	SObjCommonPsConstBuf CommonParam;
	float Eye[4];
	float Dir[4];
	float Half[4];
};

struct SObjOutlineVsConstBuf
{
	SObjCommonVsConstBuf CommonParam;
	float OutlineParam[4];
	float Joint[JointMax][4][4];
};

struct SObjOutlinePsConstBuf
{
	float OutlineColor[4];
};

struct SObjShadowVsConstBuf
{
	float World[4][4];
	float ProjView[4][4];
	float Joint[JointMax][4][4];
};

struct SParticlePsConstBuf
{
	float Color1[4];
	float Color2[4];
};

struct SParticleUpdatingPsConstBuf
{
	float AccelAndFriction[4];
	float SizeAccelAndRotAccel[4];
};

struct SWndBuf
{
	void* Extra;
	IDXGISwapChain* SwapChain;
	ID3D10RenderTargetView* RenderTargetView;
	ID3D10DepthStencilView* DepthView;
	FLOAT ClearColor[4];
	int TexWidth;
	int TexHeight;
	ID3D10Texture2D* TmpTex;
	ID3D10Texture2D* EditableTex;
	ID3D10ShaderResourceView* TmpShaderResView;
	ID3D10RenderTargetView* TmpRenderTargetView;
	Bool AutoClear;
	Bool Editable;
	int Split;
};

struct STex
{
	SClass Class;
	int Width;
	int Height;
	int ImgWidth;
	int ImgHeight;
	ID3D10Texture2D* Tex;
	ID3D10ShaderResourceView* View;
};

struct SFont
{
	SClass Class;
	ID3D10Texture2D* Tex;
	ID3D10ShaderResourceView* View;
	int CellWidth;
	int CellHeight;
	int CellSizeAligned;
	U32 Cnt;
	double Advance;
	double Height;
	bool Proportional;
	U8 AlignHorizontal;
	U8 AlignVertical;
	HFONT Font;
	Char* CharMap;
	U32* CntMap;
	U8* Pixel;
	HBITMAP Bitmap;
	HDC Dc;
	int* GlyphWidth;
};

extern ID3D10Device1* Device;
extern ID3D10RasterizerState* RasterizerStates[RasterizerState_Num];
extern ID3D10DepthStencilState* DepthState[DepthNum];
extern ID3D10BlendState* BlendState[BlendNum];
extern ID3D10SamplerState* Sampler[SamplerNum];
extern SVertexBuf* VertexBufs[VertexBuf_Num];
extern SShaderBuf* ShaderBufs[ShaderBuf_Num];
extern SObjVsConstBuf ObjVsConstBuf;
extern SObjPsConstBuf ObjPsConstBuf;
extern ID3D10Texture2D* TexToonRamp;
extern ID3D10ShaderResourceView* ViewToonRamp;
extern ID3D10Texture2D* TexEven[TexEvenNum];
extern ID3D10ShaderResourceView* ViewEven[TexEvenNum];
extern SWndBuf* CurWndBuf;
extern void* (*Callback2d)(int kind, void* arg1, void* arg2);

SVertexBuf* MakeVertexBuf(size_t vertex_size, const void* vertices, size_t vertex_line_size, size_t idx_size, const U32* idces);
void FinVertexBuf(SVertexBuf* vertex_buf);
SShaderBuf* MakeShaderBuf(EShaderKind kind, size_t size, const void* bin, size_t const_buf_size, int layout_num, const ELayoutType* layout_types, const Char** layout_semantics);
void FinShaderBuf(SShaderBuf* shader_buf);
U8* AdjustTexSize(U8* argb, int* width, int* height);
Bool IsPowerOf2(U64 n);
void IdentityFloat(float mat[4][4]);
double Normalize(double vec[3]);
double Dot(const double a[3], const double b[3]);
void Cross(double out[3], const double a[3], const double b[3]);
HFONT ToFontHandle(SClass* font);
void* MakeDrawBuf(int tex_width, int tex_height, int split, HWND wnd, void* old, Bool editable);
void FinDrawBuf(void* wnd_buf);
void ActiveDrawBuf(void* wnd_buf);
void ResetViewport();
Bool MakeTexWithImg(ID3D10Texture2D** tex, ID3D10ShaderResourceView** view, ID3D10RenderTargetView** render_target_view, int width, int height, const void* img, size_t pitch, DXGI_FORMAT fmt, D3D10_USAGE usage, UINT cpu_access_flag, Bool render_target);
