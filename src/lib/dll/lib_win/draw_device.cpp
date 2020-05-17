#include "draw_device.h"

#include "png_decoder.h"

#pragma comment(lib, "d3d10_1.lib")
#pragma comment(lib, "dxgi.lib")

static const FLOAT BlendFactor[4] = { 0.0f, 0.0f, 0.0f, 0.0f };

static S64 Cnt;
static U32 PrevTime;
static int CurZBuf = -1;
static int CurBlend = -1;
static int CurSampler = -1;
static double ViewMat[4][4];
static double ProjMat[4][4];

const U8* GetTriVsBin(size_t* size);
const U8* GetTriPsBin(size_t* size);
const U8* GetFontPsBin(size_t* size);
const U8* GetRectVsBin(size_t* size);
const U8* GetCircleVsBin(size_t* size);
const U8* GetCirclePsBin(size_t* size);
const U8* GetCircleLinePsBin(size_t* size);
const U8* GetTexVsBin(size_t* size);
const U8* GetTexRotVsBin(size_t* size);
const U8* GetTexPsBin(size_t* size);
const U8* GetObjVsBin(size_t* size);
const U8* GetObjSmVsBin(size_t* size);
const U8* GetObjJointVsBin(size_t* size);
const U8* GetObjJointSmVsBin(size_t* size);
const U8* GetObjPsBin(size_t* size);
const U8* GetObjSmPsBin(size_t* size);
const U8* GetObjToonPsBin(size_t* size);
const U8* GetObjToonSmPsBin(size_t* size);
const U8* GetObjFastVsBin(size_t* size);
const U8* GetObjFastSmVsBin(size_t* size);
const U8* GetObjFastJointVsBin(size_t* size);
const U8* GetObjFastJointSmVsBin(size_t* size);
const U8* GetObjFastPsBin(size_t* size);
const U8* GetObjFastSmPsBin(size_t* size);
const U8* GetObjToonFastPsBin(size_t* size);
const U8* GetObjToonFastSmPsBin(size_t* size);
const U8* GetObjFlatVsBin(size_t* size);
const U8* GetObjFlatJointVsBin(size_t* size);
const U8* GetObjFlatFastVsBin(size_t* size);
const U8* GetObjFlatFastJointVsBin(size_t* size);
const U8* GetObjFlatPsBin(size_t* size);
const U8* GetObjOutlineVsBin(size_t* size);
const U8* GetObjOutlineJointVsBin(size_t* size);
const U8* GetObjOutlinePsBin(size_t* size);
const U8* GetObjShadowVsBin(size_t* size);
const U8* GetObjShadowJointVsBin(size_t* size);
const U8* GetFilterVsBin(size_t* size);
const U8* GetFilterNonePsBin(size_t* size);
const U8* GetFilterMonotonePsBin(size_t* size);
const U8* GetParticle2dVsBin(size_t* size);
const U8* GetParticle2dPsBin(size_t* size);
const U8* GetParticleUpdatingVsBin(size_t* size);
const U8* GetParticleUpdatingPsBin(size_t* size);
const U8* GetPolyVsBin(size_t* size);
const U8* GetPolyPsBin(size_t* size);
const U8* GetToonRampPngBin(size_t* size);
const U8* GetBoxKnobjBin(size_t* size);
const U8* GetSphereKnobjBin(size_t* size);
const U8* GetPlaneKnobjBin(size_t* size);

static void SetProjViewMat(float out[4][4], const double proj[4][4], const double view[4][4]);

EXPORT_CPP void _drawInit()
{
	{
		const D3D10_DRIVER_TYPE type[] =
		{
			D3D10_DRIVER_TYPE_HARDWARE,
			D3D10_DRIVER_TYPE_WARP
		};
		const D3D10_FEATURE_LEVEL1 level[] =
		{
			D3D10_FEATURE_LEVEL_10_1,
			D3D10_FEATURE_LEVEL_10_0,
			D3D10_FEATURE_LEVEL_9_3,
			D3D10_FEATURE_LEVEL_9_2,
			D3D10_FEATURE_LEVEL_9_1
		};
		Bool success = False;
		for (int i = 0; i < sizeof(type) / sizeof(type[0]); i++)
		{
			for (int j = 0; j < sizeof(level) / sizeof(level[0]); j++)
			{
				if (SUCCEEDED(D3D10CreateDevice1(NULL, type[i], NULL, D3D10_CREATE_DEVICE_BGRA_SUPPORT, level[j], D3D10_1_SDK_VERSION, &Device)))
				{
					success = True;
					break;
				}
			}
			if (success)
				break;
		}
		if (!success)
			THROW(0xe9170009);
	}

	Cnt = 0;
	PrevTime = static_cast<U32>(timeGetTime());

	// Create a rasterizer state.
	{
		D3D10_RASTERIZER_DESC desc;
		memset(&desc, 0, sizeof(desc));
		desc.FillMode = D3D10_FILL_SOLID;
		desc.CullMode = D3D10_CULL_FRONT; // Cull the front in order to exchange the right handed system and the left handed system.
		desc.FrontCounterClockwise = FALSE;
		desc.DepthBias = 0;
		desc.DepthBiasClamp = 0.0f;
		desc.SlopeScaledDepthBias = 0.0f;
		desc.DepthClipEnable = FALSE;
		desc.ScissorEnable = FALSE;
		desc.MultisampleEnable = FALSE;
		desc.AntialiasedLineEnable = FALSE;
		if (FAILED(Device->CreateRasterizerState(&desc, &RasterizerStates[RasterizerState_Normal])))
			THROW(0xe9170009);
		desc.CullMode = D3D10_CULL_BACK;
		if (FAILED(Device->CreateRasterizerState(&desc, &RasterizerStates[RasterizerState_Inverted])))
			THROW(0xe9170009);
		desc.CullMode = D3D10_CULL_NONE;
		if (FAILED(Device->CreateRasterizerState(&desc, &RasterizerStates[RasterizerState_None])))
			THROW(0xe9170009);
	}

	// Create depth buffer modes.
	for (int i = 0; i < DepthNum; i++)
	{
		D3D10_DEPTH_STENCIL_DESC desc;
		memset(&desc, 0, sizeof(desc));
		desc.DepthFunc = D3D10_COMPARISON_LESS_EQUAL;
		desc.StencilEnable = FALSE;
		switch (i)
		{
			// Disable test, disable writing.
			case 0:
				desc.DepthEnable = FALSE;
				desc.DepthWriteMask = D3D10_DEPTH_WRITE_MASK_ZERO;
				break;
				// Disable test, enable writing.
			case 1:
				desc.DepthEnable = FALSE;
				desc.DepthWriteMask = D3D10_DEPTH_WRITE_MASK_ALL;
				break;
				// Enable test, disable writing.
			case 2:
				desc.DepthEnable = TRUE;
				desc.DepthWriteMask = D3D10_DEPTH_WRITE_MASK_ZERO;
				break;
				// Enable test, enable writing.
			case 3:
				desc.DepthEnable = TRUE;
				desc.DepthWriteMask = D3D10_DEPTH_WRITE_MASK_ALL;
				break;
			default:
				ASSERT(False);
				break;
		}
		if (FAILED(Device->CreateDepthStencilState(&desc, &DepthState[i])))
			THROW(0xe9170009);
	}

	// Create blend modes.
	for (int i = 0; i < BlendNum; i++)
	{
		D3D10_BLEND_DESC desc;
		memset(&desc, 0, sizeof(desc));
		desc.AlphaToCoverageEnable = FALSE;
		desc.SrcBlendAlpha = D3D10_BLEND_ONE;
		desc.DestBlendAlpha = D3D10_BLEND_INV_SRC_ALPHA;
		desc.BlendOpAlpha = D3D10_BLEND_OP_ADD;
		for (int j = 0; j < 8; j++)
		{
			desc.BlendEnable[j] = i == 0 ? FALSE : TRUE;
			desc.RenderTargetWriteMask[j] = D3D10_COLOR_WRITE_ENABLE_ALL;
		}
		switch (i)
		{
			// None: S * 1 + D * 0.
			case 0:
				desc.SrcBlend = D3D10_BLEND_ONE;
				desc.DestBlend = D3D10_BLEND_ZERO;
				desc.BlendOp = D3D10_BLEND_OP_ADD;
				break;
				// Alpha: S * A + D * (1 - A).
			case 1:
				desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
				desc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
				desc.BlendOp = D3D10_BLEND_OP_ADD;
				break;
				// Add: S * A + D * 1.
			case 2:
				desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
				desc.DestBlend = D3D10_BLEND_ONE;
				desc.BlendOp = D3D10_BLEND_OP_ADD;
				break;
				// Sub: S * A - D * 1.
			case 3:
				desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
				desc.DestBlend = D3D10_BLEND_ONE;
				desc.BlendOp = D3D10_BLEND_OP_REV_SUBTRACT;
				break;
				// Mul: S * D + D * 0.
			case 4:
				desc.SrcBlend = D3D10_BLEND_DEST_COLOR;
				desc.DestBlend = D3D10_BLEND_ZERO;
				desc.BlendOp = D3D10_BLEND_OP_ADD;
				break;
				// Exclusion: S * (1 - D) + D * (S - 1).
			case 5:
				desc.SrcBlend = D3D10_BLEND_INV_DEST_COLOR;
				desc.DestBlend = D3D10_BLEND_INV_SRC_COLOR;
				desc.BlendOp = D3D10_BLEND_OP_ADD;
				break;
			default:
				ASSERT(False);
				break;
		}
		if (FAILED(Device->CreateBlendState(&desc, &BlendState[i])))
			THROW(0xe9170009);
	}

	// Create a sampler.
	for (int i = 0; i < SamplerNum; i++)
	{
		D3D10_SAMPLER_DESC desc;
		memset(&desc, 0, sizeof(desc));
		desc.AddressU = D3D10_TEXTURE_ADDRESS_MIRROR;
		desc.AddressV = D3D10_TEXTURE_ADDRESS_MIRROR;
		desc.AddressW = D3D10_TEXTURE_ADDRESS_MIRROR;
		desc.MipLODBias = 0.0f;
		desc.MaxAnisotropy = 0;
		desc.ComparisonFunc = D3D10_COMPARISON_NEVER;
		desc.MinLOD = -D3D10_FLOAT32_MAX;
		desc.MaxLOD = D3D10_FLOAT32_MAX;
		switch (i)
		{
			// Nearest neighbor.
			case 0:
				desc.Filter = D3D10_FILTER_MIN_MAG_MIP_POINT;
				break;
				// Bilinear.
			case 1:
				desc.Filter = D3D10_FILTER_MIN_MAG_MIP_LINEAR;
				break;
				// Shadow
			case 2:
				desc.AddressU = D3D10_TEXTURE_ADDRESS_BORDER;
				desc.AddressV = D3D10_TEXTURE_ADDRESS_BORDER;
				desc.AddressW = D3D10_TEXTURE_ADDRESS_BORDER;
				desc.BorderColor[0] = 1.0f;
				desc.BorderColor[1] = 1.0f;
				desc.BorderColor[2] = 1.0f;
				desc.BorderColor[3] = 1.0f;
				desc.ComparisonFunc = D3D10_COMPARISON_LESS_EQUAL;
				desc.Filter = D3D10_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR;
				break;
		}
		if (FAILED(Device->CreateSamplerState(&desc, &Sampler[i])))
			THROW(0xe9170009);
	}

	// Initialize 'Tri'.
	{
		{
			float vertices[] =
			{
				1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f,
				0.0f, 1.0f, 0.0f,
			};

			U32 idces[] =
			{
				0, 1, 2,
			};

			VertexBufs[VertexBuf_TriVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 3, sizeof(idces), idces);
		}

		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float3,
			};

			const Char* layout_semantics[1] =
			{
				L"K_WEIGHT",
			};

			{
				size_t size;
				const U8* bin = GetTriVsBin(&size);
				ShaderBufs[ShaderBuf_TriVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 8, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetTriPsBin(&size);
				ShaderBufs[ShaderBuf_TriPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 4, 0, NULL, NULL);
			}
		}
	}

	// Initialize 'Rect'.
	{
		{
			float vertices[] =
			{
				0.0, 0.0,
				0.0, 1.0,
				1.0, 0.0,
				1.0, 1.0,
			};

			U32 idces[] =
			{
				0, 1, 2,
				3, 2, 1,
			};

			VertexBufs[VertexBuf_RectVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}

		{
			float vertices[] =
			{
				0.0, 0.0,
				1.0, 1.0,
			};

			U32 idces[] =
			{
				0, 1,
			};

			VertexBufs[VertexBuf_LineVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}

		{
			float vertices[] =
			{
				0.0, 0.0,
				0.0, 1.0,
				1.0, 1.0,
				1.0, 0.0,
			};

			U32 idces[] =
			{
				0, 1, 2, 3, 0
			};

			VertexBufs[VertexBuf_RectLineVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}

		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float2,
			};

			const Char* layout_semantics[1] =
			{
				L"K_WEIGHT",
			};

			{
				size_t size;
				const U8* bin = GetRectVsBin(&size);
				ShaderBufs[ShaderBuf_RectVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 4, 1, layout_types, layout_semantics);
			}
		}
	}

	if (IsResUsed(UseResFlagsKind_Draw_Circle))
	{
		// Initialize 'Circle'.
		{
			float vertices[] =
			{
				-1.0f, -1.0f,
				-1.0f, 1.0f,
				1.0f, -1.0f,
				1.0f, 1.0f,
			};

			U32 idces[] =
			{
				0, 1, 2,
				3, 2, 1,
			};

			VertexBufs[VertexBuf_CircleVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}

		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float2,
			};

			const Char* layout_semantics[1] =
			{
				L"K_WEIGHT",
			};

			{
				size_t size;
				const U8* bin = GetCircleVsBin(&size);
				ShaderBufs[ShaderBuf_CircleVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 4, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetCirclePsBin(&size);
				ShaderBufs[ShaderBuf_CirclePs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 8, 0, NULL, NULL);
			}
		}

		// Initialize 'CircleLine'.
		{
			size_t size;
			const U8* bin = GetCircleLinePsBin(&size);
			ShaderBufs[ShaderBuf_CircleLinePs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 8, 0, NULL, NULL);
		}
	}

	// Initialize 'Tex'.
	{
		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float2,
			};

			const Char* layout_semantics[1] =
			{
				L"K_WEIGHT",
			};

			{
				size_t size;
				const U8* bin = GetTexVsBin(&size);
				ShaderBufs[ShaderBuf_TexVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 8, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetTexRotVsBin(&size);
				ShaderBufs[ShaderBuf_TexRotVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 16, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetTexPsBin(&size);
				ShaderBufs[ShaderBuf_TexPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 4, 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetFontPsBin(&size);
				ShaderBufs[ShaderBuf_FontPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 4, 0, NULL, NULL);
			}
		}
	}

	// Initialize 'Obj'.
	if (IsResUsed(UseResFlagsKind_Draw_ObjDraw))
	{
		{
			ELayoutType layout_types[4] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
			};

			const Char* layout_semantics[4] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
			};

			{
				size_t size;
				const U8* bin = GetObjVsBin(&size);
				ShaderBufs[ShaderBuf_ObjVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 4, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjSmVsBin(&size);
				ShaderBufs[ShaderBuf_ObjSmVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 4, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjPsBin(&size);
				ShaderBufs[ShaderBuf_ObjPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjSmPsBin(&size);
				ShaderBufs[ShaderBuf_ObjSmPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjToonPsBin(&size);
				ShaderBufs[ShaderBuf_ObjToonPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjToonSmPsBin(&size);
				ShaderBufs[ShaderBuf_ObjToonSmPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjPsConstBuf), 0, NULL, NULL);
			}
		}
		{
			ELayoutType layout_types[7] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[6] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 6, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjJointSmVsBin(&size);
				ShaderBufs[ShaderBuf_ObjJointSmVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 6, layout_types, layout_semantics);
			}
		}
	}

	// Initialize 'ObjFast'.
	if (IsResUsed(UseResFlagsKind_Draw_ObjDraw))
	{
		{
			ELayoutType layout_types[3] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
			};

			const Char* layout_semantics[3] =
			{
				L"POSITION",
				L"NORMAL",
				L"TEXCOORD",
			};

			{
				size_t size;
				const U8* bin = GetObjFastVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 3, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjFastSmVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastSmVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 3, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjFastPsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjFastPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjFastSmPsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastSmPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjFastPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjToonFastPsBin(&size);
				ShaderBufs[ShaderBuf_ObjToonFastPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjFastPsConstBuf), 0, NULL, NULL);
			}
			{
				size_t size;
				const U8* bin = GetObjToonFastSmPsBin(&size);
				ShaderBufs[ShaderBuf_ObjToonFastSmPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjFastPsConstBuf), 0, NULL, NULL);
			}
		}
		{
			ELayoutType layout_types[5] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[5] =
			{
				L"POSITION",
				L"NORMAL",
				L"TEXCOORD",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjFastJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 5, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjFastJointSmVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFastJointSmVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 5, layout_types, layout_semantics);
			}
		}
	}

	// Initialize 'ObjFlat'.
	if (IsResUsed(UseResFlagsKind_Draw_ObjDraw))
	{
		{
			ELayoutType layout_types[4] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
			};

			const Char* layout_semantics[4] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
			};

			{
				size_t size;
				const U8* bin = GetObjFlatVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFlatVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 4, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjFlatPsBin(&size);
				ShaderBufs[ShaderBuf_ObjFlatPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjFastPsConstBuf), 0, NULL, NULL);
			}
		}
		{
			ELayoutType layout_types[7] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[6] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjFlatJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFlatJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 6, layout_types, layout_semantics);
			}
		}
		{
			ELayoutType layout_types[3] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
			};

			const Char* layout_semantics[3] =
			{
				L"POSITION",
				L"NORMAL",
				L"TEXCOORD",
			};

			{
				size_t size;
				const U8* bin = GetObjFlatFastVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFlatFastVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf) - sizeof(SObjVsConstBuf::Joint), 3, layout_types, layout_semantics);
			}
		}
		{
			ELayoutType layout_types[5] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[5] =
			{
				L"POSITION",
				L"NORMAL",
				L"TEXCOORD",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjFlatFastJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjFlatFastJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjVsConstBuf), 5, layout_types, layout_semantics);
			}
		}
	}

	// Initialize 'ObjOutline'.
	if (IsResUsed(UseResFlagsKind_Draw_ObjDrawOutline))
	{
		{
			ELayoutType layout_types[4] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
			};

			const Char* layout_semantics[4] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
			};

			{
				size_t size;
				const U8* bin = GetObjOutlineVsBin(&size);
				ShaderBufs[ShaderBuf_ObjOutlineVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjOutlineVsConstBuf) - sizeof(SObjOutlineVsConstBuf::Joint), 4, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetObjOutlinePsBin(&size);
				ShaderBufs[ShaderBuf_ObjOutlinePs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SObjOutlinePsConstBuf), 0, NULL, NULL);
			}
		}
		{
			ELayoutType layout_types[7] =
			{
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float3,
				LayoutType_Float2,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[6] =
			{
				L"POSITION",
				L"NORMAL",
				L"TANGENT",
				L"TEXCOORD",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjOutlineJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjOutlineJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjOutlineVsConstBuf), 6, layout_types, layout_semantics);
			}
		}
	}

	// Initialize 'ObjShadow'.
	if (IsResUsed(UseResFlagsKind_Draw_ObjDraw))
	{
		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float3,
			};

			const Char* layout_semantics[1] =
			{
				L"POSITION",
			};

			{
				size_t size;
				const U8* bin = GetObjShadowVsBin(&size);
				ShaderBufs[ShaderBuf_ObjShadowVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjShadowVsConstBuf) - sizeof(SObjShadowVsConstBuf::Joint), 1, layout_types, layout_semantics);
			}
		}
		{
			ELayoutType layout_types[3] =
			{
				LayoutType_Float3,
				LayoutType_Float4,
				LayoutType_Int4,
			};

			const Char* layout_semantics[3] =
			{
				L"POSITION",
				L"K_WEIGHT",
				L"K_JOINT",
			};

			{
				size_t size;
				const U8* bin = GetObjShadowJointVsBin(&size);
				ShaderBufs[ShaderBuf_ObjShadowJointVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(SObjShadowVsConstBuf), 3, layout_types, layout_semantics);
			}
		}
	}

	// Initialize 'Filter'.
	{
		{
			float vertices[] =
			{
				-1.0f, -1.0f,
				1.0f, -1.0f,
				-1.0f, 1.0f,
				1.0f, 1.0f,
			};

			U32 idces[] =
			{
				0, 1, 2,
				3, 2, 1,
			};

			VertexBufs[VertexBuf_FilterVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}

		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float2,
			};

			const Char* layout_semantics[1] =
			{
				L"K_POSITION",
			};

			{
				size_t size;
				const U8* bin = GetFilterVsBin(&size);
				ShaderBufs[ShaderBuf_FilterVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, 0, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetFilterNonePsBin(&size);
				ShaderBufs[ShaderBuf_Filter0Ps] = MakeShaderBuf(ShaderKind_Ps, size, bin, 0, 0, NULL, NULL);
			}
			if (IsResUsed(UseResFlagsKind_Draw_FilterMonotone))
			{
				size_t size;
				const U8* bin = GetFilterMonotonePsBin(&size);
				ShaderBufs[ShaderBuf_Filter1Ps] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(float) * 4, 0, NULL, NULL);
			}
		}
	}

	// Initialize 'Particle'.
	if (IsResUsed(UseResFlagsKind_Draw_Particle))
	{
		{
			float vertices[ParticleNum * 4 * 3];
			U32 idces[ParticleNum * 6];
			for (int i = 0; i < ParticleNum; i++)
			{
				const float idx = (static_cast<float>(i) + 0.5f) / static_cast<float>(ParticleNum);
				vertices[i * 4 * 3 + 0] = -1.0f;
				vertices[i * 4 * 3 + 1] = -1.0f;
				vertices[i * 4 * 3 + 2] = idx;
				vertices[i * 4 * 3 + 3] = 1.0f;
				vertices[i * 4 * 3 + 4] = -1.0f;
				vertices[i * 4 * 3 + 5] = idx;
				vertices[i * 4 * 3 + 6] = -1.0f;
				vertices[i * 4 * 3 + 7] = 1.0f;
				vertices[i * 4 * 3 + 8] = idx;
				vertices[i * 4 * 3 + 9] = 1.0f;
				vertices[i * 4 * 3 + 10] = 1.0f;
				vertices[i * 4 * 3 + 11] = idx;
				idces[i * 6 + 0] = i * 4 + 0;
				idces[i * 6 + 1] = i * 4 + 1;
				idces[i * 6 + 2] = i * 4 + 2;
				idces[i * 6 + 3] = i * 4 + 3;
				idces[i * 6 + 4] = i * 4 + 2;
				idces[i * 6 + 5] = i * 4 + 1;
			}

			VertexBufs[VertexBuf_ParticleVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 3, sizeof(idces), idces);
		}
		{
			ELayoutType layout_types[2] =
			{
				LayoutType_Float2,
				LayoutType_Float1,
			};

			const Char* layout_semantics[2] =
			{
				L"K_POSITION",
				L"K_IDX",
			};

			{
				size_t size;
				const U8* bin = GetParticle2dVsBin(&size);
				ShaderBufs[ShaderBuf_Particle2dVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 4, 2, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetParticle2dPsBin(&size);
				ShaderBufs[ShaderBuf_Particle2dPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SParticlePsConstBuf), 0, NULL, NULL);
			}
		}
		{
			float vertices[] =
			{
				-1.0f, -1.0f,
				1.0f, -1.0f,
				-1.0f, 1.0f,
				1.0f, 1.0f,
			};

			U32 idces[] =
			{
				0, 1, 2,
				3, 2, 1,
			};

			VertexBufs[VertexBuf_ParticleUpdatingVertex] = MakeVertexBuf(sizeof(vertices), vertices, sizeof(float) * 2, sizeof(idces), idces);
		}
		{
			ELayoutType layout_types[1] =
			{
				LayoutType_Float2,
			};

			const Char* layout_semantics[1] =
			{
				L"K_POSITION",
			};

			{
				size_t size;
				const U8* bin = GetParticleUpdatingVsBin(&size);
				ShaderBufs[ShaderBuf_ParticleUpdatingVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, 0, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetParticleUpdatingPsBin(&size);
				ShaderBufs[ShaderBuf_ParticleUpdatingPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, sizeof(SParticleUpdatingPsConstBuf), 0, NULL, NULL);
			}
		}
	}

	// Initialize 'Particle'.
	if (IsResUsed(UseResFlagsKind_Draw_Poly))
	{
		{
			int vertex_idx[PolyVerticesNum];
			U32 idces[PolyVerticesNum];
			for (int i = 0; i < PolyVerticesNum; i++)
			{
				vertex_idx[i] = i;
				idces[i] = i;
			}

			VertexBufs[VertexBuf_PolyVertex] = MakeVertexBuf(sizeof(vertex_idx), vertex_idx, sizeof(int), sizeof(idces), idces);
		}
		{
			ELayoutType layout_types[2] =
			{
				LayoutType_Int1,
			};

			const Char* layout_semantics[2] =
			{
				L"K_IDX",
			};

			{
				size_t size;
				const U8* bin = GetPolyVsBin(&size);
				ShaderBufs[ShaderBuf_PolyVs] = MakeShaderBuf(ShaderKind_Vs, size, bin, sizeof(float) * 4 * 64 + sizeof(float) * 4 * 64, 1, layout_types, layout_semantics);
			}
			{
				size_t size;
				const U8* bin = GetPolyPsBin(&size);
				ShaderBufs[ShaderBuf_PolyPs] = MakeShaderBuf(ShaderKind_Ps, size, bin, 0, 0, NULL, NULL);
			}
		}
	}

	// Initialize the toon ramp texture.
	{
		void* img = NULL;
		Bool success = False;
		for (; ; )
		{
			size_t size;
			int width;
			int height;
			const U8* bin = GetToonRampPngBin(&size);
			img = DecodePng(size, bin, &width, &height);
			if (!IsPowerOf2(static_cast<U64>(width)) || !IsPowerOf2(static_cast<U64>(height)))
				img = AdjustTexSize(static_cast<U8*>(img), &width, &height);
			if (!MakeTexWithImg(&TexToonRamp, &ViewToonRamp, NULL, width, height, img, 4, DXGI_FORMAT_R8G8B8A8_UNORM, D3D10_USAGE_IMMUTABLE, 0, False))
				break;
			success = True;
			break;
		}
		if (img != NULL)
			FreeMem(img);
		if (!success)
			THROW(0xe9170009);
	}

	for (int i = 0; i < TexEvenNum; i++)
	{
		float img[4];
		switch (i)
		{
			case 0:
				img[0] = 0.6f; // Diffuse red.
				img[1] = 0.6f; // Diffuse green.
				img[2] = 0.6f; // Diffuse blue.
				img[3] = 1.0f; // Alpha.
				break;
			case 1:
				img[0] = 0.7f; // Metallic F(0) red.
				img[1] = 0.7f; // Metallic F(0) green.
				img[2] = 0.7f; // Metallic F(0) blue.
				img[3] = 3.0f; // Glossiness = 2.0 / (Roughness ^ 4) - 2.0
				break;
			case 2:
				img[0] = 0.5f; // Normal x.
				img[1] = 0.5f; // Normal y.
				img[2] = 1.0f; // Normal z.
				img[3] = 0.0f; // Not used.
				break;
			default:
				ASSERT(False);
				break;
		}
		if (!MakeTexWithImg(&TexEven[i], &ViewEven[i], NULL, 1, 1, img, sizeof(img), DXGI_FORMAT_R32G32B32A32_FLOAT, D3D10_USAGE_IMMUTABLE, 0, False))
			THROW(0xe9170009);
	}

	memset(&ObjVsConstBuf, 0, sizeof(SObjVsConstBuf));
	memset(&ObjPsConstBuf, 0, sizeof(SObjPsConstBuf));
	ObjPsConstBuf.CommonParam.AmbTopColor[3] = 0.0f;
	ObjPsConstBuf.CommonParam.AmbBottomColor[3] = 0.0f;
	ObjVsConstBuf.CommonParam.Dir[3] = 0.0f;
	ObjPsConstBuf.CommonParam.DirColor[3] = 0.0f;
	_camera(0.0, 5.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	_proj(M_PI / 180.0 * 27.0, 16.0, 9.0, 0.1, 1000.0); // The angle of view of a 50mm lens is 27 degrees.
	_ambLight(0.2, 0.2, 0.32, 0.32, 0.2, 0.2);
	_dirLight(1.0, -1.0, -1.0, 1.0, 1.0, 1.0);

	Device->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
	Device->RSSetState(RasterizerStates[RasterizerState_Normal]);
	_depth(False, False);
	_blend(1);
	_sampler(1);
}

EXPORT_CPP void _drawFin()
{
	for (int i = 0; i < TexEvenNum; i++)
	{
		if (ViewEven[i] != NULL)
			ViewEven[i]->Release();
		if (TexEven[i] != NULL)
			TexEven[i]->Release();
	}
	if (ViewToonRamp != NULL)
		ViewToonRamp->Release();
	if (TexToonRamp != NULL)
		TexToonRamp->Release();
	for (int i = 0; i < VertexBuf_Num; i++)
		FinVertexBuf(VertexBufs[i]);
	for (int i = 0; i < ShaderBuf_Num; i++)
		FinShaderBuf(ShaderBufs[i]);
	for (int i = 0; i < SamplerNum; i++)
	{
		if (Sampler[i] != NULL)
			Sampler[i]->Release();
	}
	for (int i = 0; i < BlendNum; i++)
	{
		if (BlendState[i] != NULL)
			BlendState[i]->Release();
	}
	for (int i = 0; i < DepthNum; i++)
	{
		if (DepthState[i] != NULL)
			DepthState[i]->Release();
	}
	for (int i = 0; i < RasterizerState_Num; i++)
	{
		if (RasterizerStates[i] != NULL)
			RasterizerStates[i]->Release();
	}
	if (Device != NULL)
		Device->Release();
}

EXPORT_CPP void _ambLight(double topR, double topG, double topB, double bottomR, double bottomG, double bottomB)
{
	ObjPsConstBuf.CommonParam.AmbTopColor[0] = static_cast<float>(topR);
	ObjPsConstBuf.CommonParam.AmbTopColor[1] = static_cast<float>(topG);
	ObjPsConstBuf.CommonParam.AmbTopColor[2] = static_cast<float>(topB);
	ObjPsConstBuf.CommonParam.AmbBottomColor[0] = static_cast<float>(bottomR);
	ObjPsConstBuf.CommonParam.AmbBottomColor[1] = static_cast<float>(bottomG);
	ObjPsConstBuf.CommonParam.AmbBottomColor[2] = static_cast<float>(bottomB);
}

EXPORT_CPP void _blend(S64 kind)
{
	THROWDBG(kind < 0 || BlendNum <= kind, 0xe9170006);
	int kind2 = static_cast<int>(kind);
	if (CurBlend == kind2)
		return;
	Device->OMSetBlendState(BlendState[kind2], BlendFactor, 0xffffffff);
	CurBlend = kind2;
}

EXPORT_CPP void _camera(double eyeX, double eyeY, double eyeZ, double atX, double atY, double atZ, double upX, double upY, double upZ)
{
	double look[3], up[3], right[3], eye[3], pxyz[3], eye_len;

	look[0] = atX - eyeX;
	look[1] = atY - eyeY;
	look[2] = atZ - eyeZ;
	eye_len = Normalize(look);
	if (eye_len == 0.0)
		return;

	up[0] = upX;
	up[1] = upY;
	up[2] = upZ;
	Cross(right, up, look);
	if (Normalize(right) == 0.0)
		return;

	Cross(up, look, right);

	eye[0] = eyeX;
	eye[1] = eyeY;
	eye[2] = eyeZ;
	pxyz[0] = Dot(eye, right);
	pxyz[1] = Dot(eye, up);
	pxyz[2] = Dot(eye, look);

	ViewMat[0][0] = right[0];
	ViewMat[0][1] = up[0];
	ViewMat[0][2] = look[0];
	ViewMat[0][3] = 0.0;
	ViewMat[1][0] = right[1];
	ViewMat[1][1] = up[1];
	ViewMat[1][2] = look[1];
	ViewMat[1][3] = 0.0;
	ViewMat[2][0] = right[2];
	ViewMat[2][1] = up[2];
	ViewMat[2][2] = look[2];
	ViewMat[2][3] = 0.0;
	ViewMat[3][0] = -pxyz[0];
	ViewMat[3][1] = -pxyz[1];
	ViewMat[3][2] = -pxyz[2];
	ViewMat[3][3] = 1.0;

	ObjVsConstBuf.CommonParam.Eye[0] = static_cast<float>(-look[0]);
	ObjVsConstBuf.CommonParam.Eye[1] = static_cast<float>(-look[1]);
	ObjVsConstBuf.CommonParam.Eye[2] = static_cast<float>(-look[2]);
	ObjVsConstBuf.CommonParam.Eye[3] = static_cast<float>(eye_len);

	SetProjViewMat(ObjVsConstBuf.CommonParam.ProjView, ProjMat, ViewMat);
}

EXPORT_CPP void _depth(Bool test, Bool write)
{
	int kind = (static_cast<int>(test) << 1) | static_cast<int>(write);
	if (CurZBuf == kind)
		return;
	Device->OMSetDepthStencilState(DepthState[kind], 0);
	CurZBuf = kind;
}

EXPORT_CPP void _dirLight(double atX, double atY, double atZ, double r, double g, double b)
{
	double dir[3] = { atX, atY, atZ };
	Normalize(dir);
	ObjVsConstBuf.CommonParam.Dir[0] = -static_cast<float>(dir[0]);
	ObjVsConstBuf.CommonParam.Dir[1] = -static_cast<float>(dir[1]);
	ObjVsConstBuf.CommonParam.Dir[2] = -static_cast<float>(dir[2]);
	ObjPsConstBuf.CommonParam.DirColor[0] = static_cast<float>(r);
	ObjPsConstBuf.CommonParam.DirColor[1] = static_cast<float>(g);
	ObjPsConstBuf.CommonParam.DirColor[2] = static_cast<float>(b);
}

EXPORT_CPP void _proj(double fovy, double aspectX, double aspectY, double nearZ, double farZ)
{
	THROWDBG(fovy <= 0.0 || M_PI / 2.0 <= fovy || aspectX <= 0.0 || aspectY <= 0.0 || nearZ <= 0.0 || farZ <= nearZ, 0xe9170006);
	double tan_theta = tan(fovy / 2.0);
	ProjMat[0][0] = -1.0 / ((aspectX / aspectY) * tan_theta);
	ProjMat[0][1] = 0.0;
	ProjMat[0][2] = 0.0;
	ProjMat[0][3] = 0.0;
	ProjMat[1][0] = 0.0;
	ProjMat[1][1] = 1.0 / tan_theta;
	ProjMat[1][2] = 0.0;
	ProjMat[1][3] = 0.0;
	ProjMat[2][0] = 0.0;
	ProjMat[2][1] = 0.0;
	ProjMat[2][2] = farZ / (farZ - nearZ);
	ProjMat[2][3] = 1.0;
	ProjMat[3][0] = 0.0;
	ProjMat[3][1] = 0.0;
	ProjMat[3][2] = -farZ * nearZ / (farZ - nearZ);
	ProjMat[3][3] = 0.0;

	SetProjViewMat(ObjVsConstBuf.CommonParam.ProjView, ProjMat, ViewMat);
}

EXPORT_CPP void _sampler(S64 kind)
{
	THROWDBG(kind < 0 || SamplerNum <= kind, 0xe9170006);
	int kind2 = static_cast<int>(kind);
	if (CurSampler == kind2)
		return;
	Device->PSSetSamplers(0, 1, &Sampler[kind2]);
	CurSampler = kind2;
}

static void SetProjViewMat(float out[4][4], const double proj[4][4], const double view[4][4])
{
	out[0][0] = static_cast<float>(proj[0][0] * view[0][0] + proj[1][0] * view[0][1] + proj[2][0] * view[0][2] + proj[3][0] * view[0][3]);
	out[0][1] = static_cast<float>(proj[0][1] * view[0][0] + proj[1][1] * view[0][1] + proj[2][1] * view[0][2] + proj[3][1] * view[0][3]);
	out[0][2] = static_cast<float>(proj[0][2] * view[0][0] + proj[1][2] * view[0][1] + proj[2][2] * view[0][2] + proj[3][2] * view[0][3]);
	out[0][3] = static_cast<float>(proj[0][3] * view[0][0] + proj[1][3] * view[0][1] + proj[2][3] * view[0][2] + proj[3][3] * view[0][3]);
	out[1][0] = static_cast<float>(proj[0][0] * view[1][0] + proj[1][0] * view[1][1] + proj[2][0] * view[1][2] + proj[3][0] * view[1][3]);
	out[1][1] = static_cast<float>(proj[0][1] * view[1][0] + proj[1][1] * view[1][1] + proj[2][1] * view[1][2] + proj[3][1] * view[1][3]);
	out[1][2] = static_cast<float>(proj[0][2] * view[1][0] + proj[1][2] * view[1][1] + proj[2][2] * view[1][2] + proj[3][2] * view[1][3]);
	out[1][3] = static_cast<float>(proj[0][3] * view[1][0] + proj[1][3] * view[1][1] + proj[2][3] * view[1][2] + proj[3][3] * view[1][3]);
	out[2][0] = static_cast<float>(proj[0][0] * view[2][0] + proj[1][0] * view[2][1] + proj[2][0] * view[2][2] + proj[3][0] * view[2][3]);
	out[2][1] = static_cast<float>(proj[0][1] * view[2][0] + proj[1][1] * view[2][1] + proj[2][1] * view[2][2] + proj[3][1] * view[2][3]);
	out[2][2] = static_cast<float>(proj[0][2] * view[2][0] + proj[1][2] * view[2][1] + proj[2][2] * view[2][2] + proj[3][2] * view[2][3]);
	out[2][3] = static_cast<float>(proj[0][3] * view[2][0] + proj[1][3] * view[2][1] + proj[2][3] * view[2][2] + proj[3][3] * view[2][3]);
	out[3][0] = static_cast<float>(proj[0][0] * view[3][0] + proj[1][0] * view[3][1] + proj[2][0] * view[3][2] + proj[3][0] * view[3][3]);
	out[3][1] = static_cast<float>(proj[0][1] * view[3][0] + proj[1][1] * view[3][1] + proj[2][1] * view[3][2] + proj[3][1] * view[3][3]);
	out[3][2] = static_cast<float>(proj[0][2] * view[3][0] + proj[1][2] * view[3][1] + proj[2][2] * view[3][2] + proj[3][2] * view[3][3]);
	out[3][3] = static_cast<float>(proj[0][3] * view[3][0] + proj[1][3] * view[3][1] + proj[2][3] * view[3][2] + proj[3][3] * view[3][3]);
}
