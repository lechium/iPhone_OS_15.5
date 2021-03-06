//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLDeserializationContext-Protocol.h>
#import <MetalSerializer/MTLDeserializerObjectDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MTLDeserializerHashObjectDelegate : NSObject <MTLDeserializationContext, MTLDeserializerObjectDelegate>
{
    NSMutableDictionary *_commandQueues;	// 8 = 0x8
    NSMutableDictionary *_functions;	// 16 = 0x10
    NSMutableDictionary *_computePipelines;	// 24 = 0x18
    NSMutableDictionary *_renderPipelines;	// 32 = 0x20
    NSMutableDictionary *_buffers;	// 40 = 0x28
    NSMutableDictionary *_textures;	// 48 = 0x30
    NSMutableDictionary *_samplers;	// 56 = 0x38
    NSMutableDictionary *_depthStencils;	// 64 = 0x40
    NSMutableDictionary *_fences;	// 72 = 0x48
    NSMutableDictionary *_argumentBufferLayouts;	// 80 = 0x50
    NSMutableDictionary *_argumentEncoders;	// 88 = 0x58
    NSMutableDictionary *_heaps;	// 96 = 0x60
    NSMutableDictionary *_events;	// 104 = 0x68
}

- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x000000000000d580
- (id)getResourceForReference:(unsigned int)arg1;	// IMP=0x000000000000d4a9
- (void)deleteResourceForReference:(unsigned int)arg1;	// IMP=0x000000000000d3be
- (void)deleteEventForReference:(unsigned int)arg1;	// IMP=0x000000000000d2f8
- (id)getEventForReference:(unsigned int)arg1;	// IMP=0x000000000000d236
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id)arg2;	// IMP=0x000000000000d15f
- (void)deleteHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000d099
- (id)getHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000cfd7
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;	// IMP=0x000000000000cf00
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000ce3a
- (id)getArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000cd78
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;	// IMP=0x000000000000cca1
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000cbdb
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000cb19
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;	// IMP=0x000000000000ca42
- (void)deleteFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000c97c
- (id)getFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000c8ba
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;	// IMP=0x000000000000c7e3
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c71d
- (id)getDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c65b
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;	// IMP=0x000000000000c584
- (void)deleteSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c4be
- (id)getSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c3fc
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;	// IMP=0x000000000000c325
- (void)deleteTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000c25f
- (id)getTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000c19d
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;	// IMP=0x000000000000c0c6
- (void)deleteBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000c000
- (id)getBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000bf3e
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;	// IMP=0x000000000000be67
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000bda1
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000bcdf
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;	// IMP=0x000000000000bc08
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000bb42
- (id)getComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ba80
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;	// IMP=0x000000000000b9a9
- (void)deleteFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000b8e3
- (id)getFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000b821
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;	// IMP=0x000000000000b74a
- (void)deleteCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000b684
- (id)getCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000b5c2
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;	// IMP=0x000000000000b4eb
- (void)dealloc;	// IMP=0x000000000000b381
- (id)init;	// IMP=0x000000000000b271

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

