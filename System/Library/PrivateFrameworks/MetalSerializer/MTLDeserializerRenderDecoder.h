//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLDeserializerDecoder-Protocol.h>

@class NSString, _MTLDeserializer;
@protocol MTLCommandBuffer, MTLRenderCommandEncoderSPI, MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerRenderDecoder : NSObject <MTLDeserializerDecoder>
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLRenderCommandEncoderSPI> renderEncoder;	// 16 = 0x10
    id <MTLCommandBuffer> commandBuffer;	// 24 = 0x18
    id <MTLRenderPipelineState> _pipelineState;	// 32 = 0x20
    unsigned int _maxColorAttachmentIndex;	// 40 = 0x28
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x000000000000abfc
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009b8a
- (id)newDescriptor:(id)arg1;	// IMP=0x0000000000009b02
- (id)newDescriptorFromVersion1:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000092e2
- (void)decodeSetStencilResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009258
- (void)decodeSetDepthResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000091ce
- (void)decodeSetColorResolveTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000090f4
- (void)decodeSetStencilCleared:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000090de
- (void)decodeSetDepthCleared:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000090c8
- (void)decodeSetTransformFeedbackState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000907a
- (void)decodeSetTriangleFillModeFrontBack:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000009026
- (void)decodeSetPrimitiveRestartIndexEnabled:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008f65
- (void)decodeSetProvokingVertexMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008f17
- (void)decodeSetViewportTransformEnabled:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008ec3
- (void)decodeSetFragmentSamplerState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008ddd
- (void)decodeSetVertexSamplerState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008cf7
- (void)decodeSetClipPlane:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008c43
- (void)decodeSetPointSize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008bf3
- (void)decodeSetAlphaTestReferenceValue:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008ba3
- (void)decodeSetLineWidth:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008b53
- (void)decodeUseResourcesWithStages:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000089e0
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008873
- (void)decodeUseHeapsWithStages:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008705
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000859c
- (void)decodeTextureBarrier:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008596
- (void)decodeSetVisibilityResultMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008541
- (void)decodeSetViewports:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000008374
- (void)decodeSetViewport:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000082e8
- (void)decodeSetVertexTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000080f7
- (void)decodeSetVertexSamplerStatesLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007ead
- (void)decodeSetVertexSamplerStates:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007cd3
- (void)decodeSetVertexBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007c0d
- (void)decodeSetVertexBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000079f8
- (void)decodeSetTriangleFillMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000079aa
- (void)decodeSetTesselationFactorScale:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000795a
- (void)decodeSetTesselationFactorBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000078e8
- (void)decodeSetStencilStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000789a
- (void)decodeSetStencilStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000784c
- (void)decodeSetStencilRef:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000077fa
- (void)decodeSetScissorRects:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000007639
- (void)decodeSetScissorRect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000075c8
- (void)decodeSetRenderPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000754c
- (void)decodeSetFrontFacingWinding:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000074fe
- (void)decodeSetFragmentTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000730d
- (void)decodeSetFragmentSamplerStatesLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000070c3
- (void)decodeSetFragmentSamplerStates:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006ed5
- (void)decodeSetFragmentBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006e0f
- (void)decodeSetFragmentBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006bfa
- (void)decodeSetDepthClipMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006bac
- (void)decodeSetDepthBias:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006b49
- (void)decodeSetCullMode:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006afb
- (void)decodeSetDepthStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006aad
- (void)decodeSetDepthStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006a5f
- (void)decodeSetDepthStencilState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006a00
- (void)decodeSetColorStoreActionOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000695a
- (void)decodeSetColorStoreAction:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000068bd
- (void)decodeSetBlendColor:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000685d
- (void)decodeRenderWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000067fa
- (void)decodeRenderUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006797
- (void)decodeRenderBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000676b
- (void)decodeRenderBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006765
- (void)decodeExecuteCommandsInBufferRanged:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000675f
- (void)decodeExecuteCommandsInBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006759
- (void)decodeDrawIndexedPatchesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006615
- (void)decodeDrawPatchesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006508
- (void)decodeDrawIndexedPrimitivesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000063e3
- (void)decodeDrawPrimitivesIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000006303
- (void)decodeDrawIndexedPatches16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000061d9
- (void)decodeDrawIndexedPatches64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000060a6
- (void)decodeDrawPatches16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005fcb
- (void)decodeDrawPatches64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005eef
- (void)decodeDrawIndexedInstancedBasePrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005dea
- (void)decodeDrawIndexedInstancedBasePrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005ce1
- (void)decodeDrawIndexedInstancedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005bf2
- (void)decodeDrawIndexedInstancedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005b00
- (void)decodeDrawIndexedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005a0b
- (void)decodeDrawIndexedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005916
- (void)decodeDrawInstancedBasePrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000585a
- (void)decodeDrawInstancedBasePrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000579b
- (void)decodeDrawInstancedPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000056f2
- (void)decodeDrawInstancedPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005643
- (void)decodeDrawPrimitives16:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000055a1
- (void)decodeDrawPrimitives64:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000054a0
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000005404
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000005345
- (void)dealloc;	// IMP=0x00000000000052f3
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000052b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

