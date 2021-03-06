//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCountersTraceComputeCommandEncoder;

@interface MTLCountersComputeCommandEncoder
{
    _Bool _APITimingEnabled;	// 36 = 0x24
    MTLCountersTraceComputeCommandEncoder *_traceEncoder;	// 40 = 0x28
}

- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000002acde
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000002ac0f
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000002ab2c
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000002aa5d
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002a98e
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x000000000002a8d9
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002a80a
- (void)useHeap:(id)arg1;	// IMP=0x000000000002a755
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000002a672
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000002a5a3
- (void)endEncoding;	// IMP=0x000000000002a4f9
- (void)waitForFence:(id)arg1;	// IMP=0x000000000002a444
- (void)updateFence:(id)arg1;	// IMP=0x000000000002a38f
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x000000000002a2c0
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000002a1e3
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000002a100
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000002a023
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000029f54
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;	// IMP=0x0000000000029e80
- (void)setImageBlockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000029e40
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000029d71
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000029c80
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000029b93
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000029ab0
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000299e1
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000298fe
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002982f
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000029740
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000029671
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000002958e
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000294ab
- (void)setComputePipelineState:(id)arg1;	// IMP=0x00000000000293f6
- (void)setLabel:(id)arg1;	// IMP=0x0000000000029341
- (void)popDebugGroup;	// IMP=0x0000000000029297
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000000000291e2
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000002912d
- (void)dealloc;	// IMP=0x00000000000290eb
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000029048

@end

