//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLBuffer;

@interface MTLGPUDebugIndirectCommandBuffer
{
    _Bool _hasRender;	// 48 = 0x30
    _Bool _hasCompute;	// 49 = 0x31
    _Bool _inheritsBuffers;	// 50 = 0x32
    _Bool _inheritsPipelineState;	// 51 = 0x33
    id <MTLBuffer> _argumentStorage;	// 56 = 0x38
    id <MTLBuffer> _drawOrDispatchIDBuffer;	// 64 = 0x40
    unsigned short _maxCommands;	// 72 = 0x48
    unsigned char _maxVertexBindings;	// 74 = 0x4a
    unsigned char _maxFragmentBindings;	// 75 = 0x4b
    unsigned char _maxKernelBindings;	// 76 = 0x4c
    unsigned char _maxThreadgroupBindings;	// 77 = 0x4d
    unsigned short _commandByteStride;	// 78 = 0x4e
    unsigned long long _originalResourceOptions;	// 80 = 0x50
}

- (void)dealloc;	// IMP=0x000000000007a8e0
- (unsigned long long)resourceOptions;	// IMP=0x000000000007a8cf
- (unsigned long long)hazardTrackingMode;	// IMP=0x000000000007a8b9
- (unsigned long long)cpuCacheMode;	// IMP=0x000000000007a8a5
- (unsigned long long)storageMode;	// IMP=0x000000000007a88f
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007a82a
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007a7c5
- (void)onExecuteWithComputeEncoder:(id)arg1;	// IMP=0x000000000007a7bf
- (void)onExecuteWithRenderEncoder:(id)arg1;	// IMP=0x000000000007a7b9
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 commandIndex:(unsigned long long)arg3;	// IMP=0x000000000007a75a
- (void)setComputePipelineStateBuffers:(id)arg1 commandIndex:(unsigned long long)arg2;	// IMP=0x000000000007a6eb
- (void)setRenderPipelineStateBuffers:(id)arg1 commandIndex:(unsigned long long)arg2;	// IMP=0x000000000007a67c
- (void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2 commandIndex:(unsigned long long)arg3;	// IMP=0x000000000007a617
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5;	// IMP=0x000000000007a562
- (void)resetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007a4b8
@property(readonly, nonatomic) id <MTLBuffer> internalDrawOrDispatchIDBuffer;
@property(readonly, nonatomic) id <MTLBuffer> internalICBBuffer;
@property(readonly, nonatomic) _Bool inheritsPipelineState;
@property(readonly, nonatomic) _Bool inheritsBuffers;
@property(readonly, nonatomic) unsigned long long commandByteStride;
@property(readonly, nonatomic) unsigned long long maxKernelBindings;
@property(readonly, nonatomic) unsigned long long maxFragmentBindings;
@property(readonly, nonatomic) unsigned long long maxVertexBindings;
@property(readonly, nonatomic) unsigned long long maxCommands;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5;	// IMP=0x000000000007a0c5

@end

