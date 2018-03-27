// Copyright 2018 Elizabeth Baumel. All rights reserved.
//==============================================================================================================
// D3D12PipelineStateObject.h - Represents all the pipeline state, from Input Assembler to OutputMerger, for a draw call. 
// Includes the actual bytecode of the shaders bound for a draw call, state for the rasterizer, blending, depth stencil, (in multigpu) which nodes this state applies to,
//==============================================================================================================
#pragma once
#include "DependencyNode.h"
#include <d3d12.h>
#include "d3dx12.h"
#include "Renderer.h"
#include "D3D12RootSignature.h"

class D3D12Adapter;
// Dependencies: child devices, root signature
class D3D12PipelineStateObject : public DependencyNode
{
public:
	D3D12PipelineStateObject(D3D12Adapter& InAdapter, D3D12RootSignature& InRootSignature/*, Shaders InShaders*/);

	void Initialize();

	D3D12Adapter& ParentAdapter;
	D3D12RootSignature& RootSignature;

	ID3D12PipelineState* d3dPipelineState;

	//shaders
};