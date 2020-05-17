#include "draw_common.h"

ID3D10Device1* Device;
ID3D10RasterizerState* RasterizerStates[RasterizerState_Num];
ID3D10DepthStencilState* DepthState[DepthNum];
ID3D10BlendState* BlendState[BlendNum];
ID3D10SamplerState* Sampler[SamplerNum];
SVertexBuf* VertexBufs[VertexBuf_Num];
SShaderBuf* ShaderBufs[ShaderBuf_Num];
SObjVsConstBuf ObjVsConstBuf;
SObjPsConstBuf ObjPsConstBuf;
ID3D10Texture2D* TexToonRamp;
ID3D10ShaderResourceView* ViewToonRamp;
ID3D10Texture2D* TexEven[TexEvenNum];
ID3D10ShaderResourceView* ViewEven[TexEvenNum];
SWndBuf* CurWndBuf;
void* (*Callback2d)(int kind, void* arg1, void* arg2);

SVertexBuf* MakeVertexBuf(size_t vertex_size, const void* vertices, size_t vertex_line_size, size_t idx_size, const U32* idces)
{
	SVertexBuf* vertex_buf = static_cast<SVertexBuf*>(AllocMem(sizeof(SVertexBuf)));

	{
		D3D10_BUFFER_DESC desc;
		desc.ByteWidth = static_cast<UINT>(vertex_size);
		desc.Usage = D3D10_USAGE_IMMUTABLE;
		desc.BindFlags = D3D10_BIND_VERTEX_BUFFER;
		desc.CPUAccessFlags = 0;
		desc.MiscFlags = 0;

		D3D10_SUBRESOURCE_DATA sub;
		sub.pSysMem = vertices;
		sub.SysMemPitch = 0;
		sub.SysMemSlicePitch = 0;

		if (FAILED(Device->CreateBuffer(&desc, &sub, &vertex_buf->Vertex)))
			return NULL;
	}

	vertex_buf->VertexLineSize = vertex_line_size;

	{
		D3D10_BUFFER_DESC desc;
		desc.ByteWidth = static_cast<UINT>(idx_size);
		desc.Usage = D3D10_USAGE_IMMUTABLE;
		desc.BindFlags = D3D10_BIND_INDEX_BUFFER;
		desc.CPUAccessFlags = 0;
		desc.MiscFlags = 0;

		D3D10_SUBRESOURCE_DATA sub;
		sub.pSysMem = idces;
		sub.SysMemPitch = 0;
		sub.SysMemSlicePitch = 0;

		if (FAILED(Device->CreateBuffer(&desc, &sub, &vertex_buf->Idx)))
			return NULL;
	}

	return vertex_buf;
}

void FinVertexBuf(SVertexBuf* vertex_buf)
{
	if (vertex_buf->Idx != NULL)
		vertex_buf->Idx->Release();
	if (vertex_buf->Vertex != NULL)
		vertex_buf->Vertex->Release();
	FreeMem(vertex_buf);
}

SShaderBuf* MakeShaderBuf(EShaderKind kind, size_t size, const void* bin, size_t const_buf_size, int layout_num, const ELayoutType* layout_types, const Char** layout_semantics)
{
	SShaderBuf* shader_buf = static_cast<SShaderBuf*>(AllocMem(sizeof(SShaderBuf)));
	ASSERT(const_buf_size % 16 == 0);
	switch (kind)
	{
		case ShaderKind_Vs:
			if (FAILED(Device->CreateVertexShader(bin, size, reinterpret_cast<ID3D10VertexShader**>(&shader_buf->Shader))))
				return NULL;
			break;
		case ShaderKind_Gs:
			if (FAILED(Device->CreateGeometryShader(bin, size, reinterpret_cast<ID3D10GeometryShader**>(&shader_buf->Shader))))
				return NULL;
			break;
		case ShaderKind_Ps:
			if (FAILED(Device->CreatePixelShader(bin, size, reinterpret_cast<ID3D10PixelShader**>(&shader_buf->Shader))))
				return NULL;
			break;
		default:
			ASSERT(False);
			break;
	}
	shader_buf->Kind = kind;
	shader_buf->ConstBufSize = const_buf_size;

	if (const_buf_size == 0)
		shader_buf->ConstBuf = NULL;
	else
	{
		D3D10_BUFFER_DESC desc;
		desc.ByteWidth = static_cast<UINT>(const_buf_size);
		desc.Usage = D3D10_USAGE_DYNAMIC;
		desc.BindFlags = D3D10_BIND_CONSTANT_BUFFER;
		desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
		desc.MiscFlags = 0;
		if (FAILED(Device->CreateBuffer(&desc, NULL, &shader_buf->ConstBuf)))
			return NULL;
	}

	if (layout_num == 0)
		shader_buf->Layout = NULL;
	else
	{
		D3D10_INPUT_ELEMENT_DESC* descs = static_cast<D3D10_INPUT_ELEMENT_DESC*>(AllocMem(sizeof(D3D10_INPUT_ELEMENT_DESC) * static_cast<size_t>(layout_num)));
		char(*semantics)[33] = static_cast<char(*)[33]>(AllocMem(sizeof(char[33]) * static_cast<size_t>(layout_num)));
		size_t offset = 0;
		for (int i = 0; i < layout_num; i++)
		{
			{
				size_t len = wcslen(layout_semantics[i]);
				ASSERT(len <= 32);
				for (int j = 0; j < len; j++)
					semantics[i][j] = static_cast<char>(layout_semantics[i][j]);
				semantics[i][len] = '\0';
				descs[i].SemanticName = semantics[i];
				descs[i].SemanticIndex = 0;
			}
			{
				DXGI_FORMAT fmt = DXGI_FORMAT_UNKNOWN;
				size_t size2;
				switch (layout_types[i])
				{
					case LayoutType_Int1:
						fmt = DXGI_FORMAT_R32_SINT;
						size2 = sizeof(int);
						break;
					case LayoutType_Int2:
						fmt = DXGI_FORMAT_R32G32_SINT;
						size2 = sizeof(int) * 2;
						break;
					case LayoutType_Int4:
						fmt = DXGI_FORMAT_R32G32B32A32_SINT;
						size2 = sizeof(int) * 4;
						break;
					case LayoutType_Float1:
						fmt = DXGI_FORMAT_R32_FLOAT;
						size2 = sizeof(float);
						break;
					case LayoutType_Float2:
						fmt = DXGI_FORMAT_R32G32_FLOAT;
						size2 = sizeof(float) * 2;
						break;
					case LayoutType_Float3:
						fmt = DXGI_FORMAT_R32G32B32_FLOAT;
						size2 = sizeof(float) * 3;
						break;
					case LayoutType_Float4:
						fmt = DXGI_FORMAT_R32G32B32A32_FLOAT;
						size2 = sizeof(float) * 4;
						break;
					default:
						ASSERT(False);
						size2 = 0;
						break;
				}
				descs[i].Format = fmt;
				descs[i].InputSlot = 0;
				descs[i].AlignedByteOffset = static_cast<UINT>(offset);
				descs[i].InputSlotClass = D3D10_INPUT_PER_VERTEX_DATA;
				descs[i].InstanceDataStepRate = 0;
				offset += size2;
			}
		}
		if (FAILED(Device->CreateInputLayout(descs, static_cast<UINT>(layout_num), bin, size, &shader_buf->Layout)))
			return NULL;
		FreeMem(semantics);
		FreeMem(descs);
	}

	return shader_buf;
}

void FinShaderBuf(SShaderBuf* shader_buf)
{
	if (shader_buf->Layout != NULL)
		shader_buf->Layout->Release();
	if (shader_buf->ConstBuf != NULL)
		shader_buf->ConstBuf->Release();
	if (shader_buf->Shader != NULL)
	{
		switch (shader_buf->Kind)
		{
			case ShaderKind_Vs:
				static_cast<ID3D10VertexShader*>(shader_buf->Shader)->Release();
				break;
			case ShaderKind_Gs:
				static_cast<ID3D10GeometryShader*>(shader_buf->Shader)->Release();
				break;
			case ShaderKind_Ps:
				static_cast<ID3D10PixelShader*>(shader_buf->Shader)->Release();
				break;
			default:
				ASSERT(False);
				break;
		}
	}
	FreeMem(shader_buf);
}

U8* AdjustTexSize(U8* argb, int* width, int* height)
{
	int width2 = 1;
	int height2 = 1;
	while (width2 < *width)
		width2 *= 2;
	while (height2 < *height)
		height2 *= 2;

	U8* rgba2 = static_cast<U8*>(AllocMem(static_cast<size_t>(width2 * height2 * 4)));
	memset(rgba2, 0, static_cast<size_t>(width2 * height2 * 4));
	for (int i = 0; i < *height; i++)
		memcpy(rgba2 + width2 * 4 * i, argb + *width * 4 * i, *width * 4);

	*width = width2;
	*height = height2;
	FreeMem(argb);
	return rgba2;
}

Bool IsPowerOf2(U64 n)
{
	return (n & (n - 1)) == 0;
}

void IdentityFloat(float mat[4][4])
{
	mat[0][0] = 1.0f;
	mat[0][1] = 0.0f;
	mat[0][2] = 0.0f;
	mat[0][3] = 0.0f;
	mat[1][0] = 0.0f;
	mat[1][1] = 1.0f;
	mat[1][2] = 0.0f;
	mat[1][3] = 0.0f;
	mat[2][0] = 0.0f;
	mat[2][1] = 0.0f;
	mat[2][2] = 1.0f;
	mat[2][3] = 0.0f;
	mat[3][0] = 0.0f;
	mat[3][1] = 0.0f;
	mat[3][2] = 0.0f;
	mat[3][3] = 1.0f;
}

double Normalize(double vec[3])
{
	double len = sqrt(vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]);
	if (len != 0.0)
	{
		vec[0] /= len;
		vec[1] /= len;
		vec[2] /= len;
	}
	return len;
}

double Dot(const double a[3], const double b[3])
{
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void Cross(double out[3], const double a[3], const double b[3])
{
	out[0] = a[1] * b[2] - a[2] * b[1];
	out[1] = a[2] * b[0] - a[0] * b[2];
	out[2] = a[0] * b[1] - a[1] * b[0];
}

HFONT ToFontHandle(SClass* font)
{
	return reinterpret_cast<SFont*>(font)->Font;
}

void* MakeDrawBuf(int tex_width, int tex_height, int split, HWND wnd, void* old, Bool editable)
{
	SWndBuf* old2 = static_cast<SWndBuf*>(old);
	FLOAT clear_color[4];
	if (old == NULL)
	{
		clear_color[0] = 0.0f;
		clear_color[1] = 0.0f;
		clear_color[2] = 0.0f;
		clear_color[3] = 1.0f;
	}
	else
	{
		memcpy(clear_color, old2->ClearColor, sizeof(FLOAT) * 4);
		FinDrawBuf(old2);
	}
	SWndBuf* wnd_buf = static_cast<SWndBuf*>(AllocMem(sizeof(SWndBuf)));
	memset(wnd_buf, 0, sizeof(SWndBuf));
	memcpy(wnd_buf->ClearColor, clear_color, sizeof(FLOAT) * 4);
	wnd_buf->TexWidth = tex_width;
	wnd_buf->TexHeight = tex_height;
	wnd_buf->AutoClear = True;
	wnd_buf->Editable = editable;
	wnd_buf->Split = split;

	// Create a swap chain.
	{
		IDXGIFactory* factory = NULL;
		DXGI_SWAP_CHAIN_DESC desc;
		Bool success = False;
		for (; ; )
		{
			if (FAILED(CreateDXGIFactory(__uuidof(IDXGIFactory), reinterpret_cast<void**>(&factory))))
				break;
			desc.BufferDesc.Width = static_cast<UINT>(tex_width);
			desc.BufferDesc.Height = static_cast<UINT>(tex_height);
			desc.BufferDesc.RefreshRate.Numerator = 60;
			desc.BufferDesc.RefreshRate.Denominator = 1;
			desc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
			desc.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
			desc.BufferDesc.Scaling = DXGI_MODE_SCALING_STRETCHED;
			desc.SampleDesc.Count = 1;
			desc.SampleDesc.Quality = 0;
			desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
			desc.BufferCount = 1;
			desc.OutputWindow = wnd;
			desc.Windowed = TRUE;
			desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
			desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
			if (FAILED(factory->CreateSwapChain(Device, &desc, &wnd_buf->SwapChain)))
				break;
			success = True;
			break;
		}
		if (factory != NULL)
			factory->Release();
		if (!success)
			THROW(0xe9170009);
	}

	// Create a back buffer and a depth buffer.
	{
		ID3D10Texture2D* back = NULL;
		ID3D10Texture2D* depth_stencil = NULL;
		Bool success = False;
		for (; ; )
		{
			if (FAILED(wnd_buf->SwapChain->GetBuffer(0, __uuidof(ID3D10Texture2D), reinterpret_cast<void**>(&back))))
				break;
			if (FAILED(Device->CreateRenderTargetView(back, NULL, &wnd_buf->RenderTargetView)))
				break;
			{
				D3D10_TEXTURE2D_DESC desc;
				memset(&desc, 0, sizeof(desc));
				desc.Width = static_cast<UINT>(tex_width);
				desc.Height = static_cast<UINT>(tex_height);
				desc.MipLevels = 1;
				desc.ArraySize = 1;
				desc.Format = DXGI_FORMAT_D32_FLOAT;
				desc.SampleDesc.Count = 1;
				desc.SampleDesc.Quality = 0;
				desc.Usage = D3D10_USAGE_DEFAULT;
				desc.BindFlags = D3D10_BIND_DEPTH_STENCIL;
				desc.CPUAccessFlags = 0;
				desc.MiscFlags = 0;
				if (FAILED(Device->CreateTexture2D(&desc, NULL, &depth_stencil)))
					break;
			}
			{
				D3D10_DEPTH_STENCIL_VIEW_DESC desc;
				memset(&desc, 0, sizeof(desc));
				desc.Format = DXGI_FORMAT_D32_FLOAT;
				desc.ViewDimension = D3D10_DSV_DIMENSION_TEXTURE2D;
				desc.Texture2D.MipSlice = 0;
				if (FAILED(Device->CreateDepthStencilView(depth_stencil, &desc, &wnd_buf->DepthView)))
					break;
			}
			success = True;
			break;
		}
		if (depth_stencil != NULL)
			depth_stencil->Release();
		if (back != NULL)
			back->Release();
		if (!success)
			THROW(0xe9170009);
	}

	// Create a temporary texture.
	{
		{
			D3D10_TEXTURE2D_DESC desc;
			desc.Width = static_cast<UINT>(tex_width / split);
			desc.Height = static_cast<UINT>(tex_height / split);
			desc.MipLevels = 1;
			desc.ArraySize = 1;
			desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
			desc.SampleDesc.Count = 1;
			desc.SampleDesc.Quality = 0;
			desc.Usage = D3D10_USAGE_DEFAULT;
			desc.BindFlags = D3D10_BIND_RENDER_TARGET | D3D10_BIND_SHADER_RESOURCE;
			desc.CPUAccessFlags = 0;
			desc.MiscFlags = 0;
			if (FAILED(Device->CreateTexture2D(&desc, NULL, &wnd_buf->TmpTex)))
				THROW(0xe9170009);
		}
		{
			D3D10_SHADER_RESOURCE_VIEW_DESC desc;
			memset(&desc, 0, sizeof(D3D10_SHADER_RESOURCE_VIEW_DESC));
			desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
			desc.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
			desc.Texture2D.MostDetailedMip = 0;
			desc.Texture2D.MipLevels = 1;
			if (FAILED(Device->CreateShaderResourceView(wnd_buf->TmpTex, &desc, &wnd_buf->TmpShaderResView)))
				THROW(0xe9170009);
		}
		if (FAILED(Device->CreateRenderTargetView(wnd_buf->TmpTex, NULL, &wnd_buf->TmpRenderTargetView)))
			THROW(0xe9170009);
	}
	if (editable)
	{
		D3D10_TEXTURE2D_DESC desc;
		desc.Width = static_cast<UINT>(tex_width);
		desc.Height = static_cast<UINT>(tex_height);
		desc.MipLevels = 1;
		desc.ArraySize = 1;
		desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		desc.SampleDesc.Count = 1;
		desc.SampleDesc.Quality = 0;
		desc.Usage = D3D10_USAGE_STAGING;
		desc.BindFlags = 0;
		desc.CPUAccessFlags = D3D10_CPU_ACCESS_READ | D3D10_CPU_ACCESS_WRITE;
		desc.MiscFlags = 0;
		if (FAILED(Device->CreateTexture2D(&desc, NULL, &wnd_buf->EditableTex)))
			THROW(0xe9170009);
	}
	else
		wnd_buf->EditableTex = NULL;

	if (Callback2d != NULL)
	{
		IDXGISurface* surface = NULL;
		if (FAILED(wnd_buf->TmpTex->QueryInterface(&surface)))
			THROW(0xe9170009);
		Callback2d(0, wnd_buf, surface);
	}

	ActiveDrawBuf(wnd_buf);
	ResetViewport();
	return wnd_buf;
}

void FinDrawBuf(void* wnd_buf)
{
	if (CurWndBuf == wnd_buf)
		CurWndBuf = NULL;
	SWndBuf* wnd_buf2 = static_cast<SWndBuf*>(wnd_buf);
	if (Callback2d != NULL)
		Callback2d(1, wnd_buf, NULL);
	if (wnd_buf2->TmpRenderTargetView != NULL)
		wnd_buf2->TmpRenderTargetView->Release();
	if (wnd_buf2->TmpShaderResView != NULL)
		wnd_buf2->TmpShaderResView->Release();
	if (wnd_buf2->TmpTex != NULL)
		wnd_buf2->TmpTex->Release();
	if (wnd_buf2->DepthView != NULL)
		wnd_buf2->DepthView->Release();
	if (wnd_buf2->RenderTargetView != NULL)
		wnd_buf2->RenderTargetView->Release();
	if (wnd_buf2->SwapChain != NULL)
		wnd_buf2->SwapChain->Release();
	FreeMem(wnd_buf);
}

void ActiveDrawBuf(void* wnd_buf)
{
	if (CurWndBuf != wnd_buf)
	{
		SWndBuf* wnd_buf2 = static_cast<SWndBuf*>(wnd_buf);
		CurWndBuf = wnd_buf2;
		Device->OMSetRenderTargets(1, &CurWndBuf->TmpRenderTargetView, CurWndBuf->DepthView);
		ResetViewport();

		if (Callback2d != NULL)
			Callback2d(2, wnd_buf, NULL);
	}
}

void ResetViewport()
{
	D3D10_VIEWPORT viewport =
	{
		0,
		0,
		static_cast<UINT>(CurWndBuf->TexWidth / CurWndBuf->Split),
		static_cast<UINT>(CurWndBuf->TexHeight / CurWndBuf->Split),
		0.0f,
		1.0f,
	};
	Device->RSSetViewports(1, &viewport);
}

Bool MakeTexWithImg(ID3D10Texture2D** tex, ID3D10ShaderResourceView** view, ID3D10RenderTargetView** render_target_view, int width, int height, const void* img, size_t pitch, DXGI_FORMAT fmt, D3D10_USAGE usage, UINT cpu_access_flag, Bool render_target)
{
	{
		D3D10_TEXTURE2D_DESC desc;
		D3D10_SUBRESOURCE_DATA sub;
		desc.Width = static_cast<UINT>(width);
		desc.Height = static_cast<UINT>(height);
		desc.MipLevels = 1;
		desc.ArraySize = 1;
		desc.Format = fmt;
		desc.SampleDesc.Count = 1;
		desc.SampleDesc.Quality = 0;
		desc.Usage = usage;
		desc.BindFlags = render_target ? (D3D10_BIND_RENDER_TARGET | D3D10_BIND_SHADER_RESOURCE) : D3D10_BIND_SHADER_RESOURCE;
		desc.CPUAccessFlags = cpu_access_flag;
		desc.MiscFlags = 0;
		sub.pSysMem = img;
		sub.SysMemPitch = static_cast<UINT>(pitch);
		sub.SysMemSlicePitch = 0;
		if (FAILED(Device->CreateTexture2D(&desc, &sub, tex)))
			return False;
	}
	{
		D3D10_SHADER_RESOURCE_VIEW_DESC desc;
		memset(&desc, 0, sizeof(D3D10_SHADER_RESOURCE_VIEW_DESC));
		desc.Format = fmt;
		desc.ViewDimension = D3D_SRV_DIMENSION_TEXTURE2D;
		desc.Texture2D.MostDetailedMip = 0;
		desc.Texture2D.MipLevels = 1;
		if (FAILED(Device->CreateShaderResourceView(*tex, &desc, view)))
			return False;
	}
	if (render_target_view != NULL)
	{
		if (FAILED(Device->CreateRenderTargetView(*tex, NULL, render_target_view)))
			return False;
	}
	return True;
}
