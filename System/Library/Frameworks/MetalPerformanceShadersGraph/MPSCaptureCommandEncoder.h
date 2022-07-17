//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/MTLComputeCommandEncoder-Protocol.h>

@class MPSGraphCaptureContext, NSString;
@protocol MTLComputeCommandEncoder, MTLDevice;

@interface MPSCaptureCommandEncoder : NSObject <MTLComputeCommandEncoder>
{
    id <MTLComputeCommandEncoder> _encoder;	// 8 = 0x8
    MPSGraphCaptureContext *_captureContext;	// 16 = 0x10
    void *_encoderContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b7069
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001b7060
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x00000000001b7057
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000001b700b
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000001b6fdd
- (void)waitForFence:(id)arg1;	// IMP=0x00000000001b6faf
- (void)updateFence:(id)arg1;	// IMP=0x00000000001b6f81
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000001b6f78
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x00000000001b6f4a
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000001b6ccb
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x00000000001b6c9d
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x00000000001b6c94
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001b6c51
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x00000000001b6c48
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000001b6c1a
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000001b6c11
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001b6be3
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000001b6bda
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001b6bac
- (void)setComputePipelineState:(id)arg1;	// IMP=0x00000000001b6b4e
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001b6ac2
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000001b6ab9
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001b6ab0
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001b69e9
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000001b69b4
- (void)dealloc;	// IMP=0x00000000001b6942
- (id)initWithCommandEncoder:(id)arg1 captureContext:(id)arg2;	// IMP=0x00000000001b684a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end
