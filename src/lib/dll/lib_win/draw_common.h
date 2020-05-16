#pragma once

#include "..\common.h"

#include <d3d10_1.h>

static const int DepthNum = 4;
static const int BlendNum = 6;
static const int SamplerNum = 3;

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

extern ID3D10Device1* Device;
extern ID3D10RasterizerState* RasterizerStates[RasterizerState_Num];
extern ID3D10DepthStencilState* DepthState[DepthNum];
extern ID3D10BlendState* BlendState[BlendNum];
extern ID3D10SamplerState* Sampler[SamplerNum];
extern void* VertexBufs[VertexBuf_Num];
extern void* ShaderBufs[ShaderBuf_Num];

SVertexBuf* MakeVertexBuf(size_t vertex_size, const void* vertices, size_t vertex_line_size, size_t idx_size, const U32* idces);
void FinVertexBuf(SVertexBuf* vertex_buf);
SShaderBuf* MakeShaderBuf(EShaderKind kind, size_t size, const void* bin, size_t const_buf_size, int layout_num, const ELayoutType* layout_types, const Char** layout_semantics);
void FinShaderBuf(SShaderBuf* shader_buf);
