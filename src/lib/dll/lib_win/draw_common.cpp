#include "draw_common.h"

ID3D10Device1* Device;
ID3D10RasterizerState* RasterizerStates[RasterizerState_Num];
ID3D10DepthStencilState* DepthState[DepthNum];
ID3D10BlendState* BlendState[BlendNum];
ID3D10SamplerState* Sampler[SamplerNum];
void* VertexBufs[VertexBuf_Num];
void* ShaderBufs[ShaderBuf_Num];

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
