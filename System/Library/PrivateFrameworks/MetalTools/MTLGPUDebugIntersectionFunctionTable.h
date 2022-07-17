//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLGPUDebugResource-Protocol.h>

@class MTLGPUDebugComputePipelineState, MTLGPUDebugRenderPipelineState, NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLIntersectionFunctionTable;

@interface MTLGPUDebugIntersectionFunctionTable <MTLGPUDebugResource>
{
    unsigned long long _gpuIdentifier;	// 48 = 0x30
    unsigned long long _functionCount;	// 56 = 0x38
    MTLGPUDebugComputePipelineState *_computePipelineState;	// 64 = 0x40
    MTLGPUDebugRenderPipelineState *_renderPipelineState;	// 72 = 0x48
    id <MTLBuffer> _handleBuffer;	// 80 = 0x50
}

- (void)dealloc;	// IMP=0x0000000000032270
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long gpuAddress;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;	// IMP=0x000000000003224f
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000321f6
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000003217b
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000003211f
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000320a1
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000032048
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000031ff4
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(optional_b0be1e53)arg3;	// IMP=0x0000000000031f84
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000031f04
- (void)_setupIdentifier;	// IMP=0x0000000000031dac
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3 renderPipelineState:(id)arg4;	// IMP=0x0000000000031ce7
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3 computePipelineState:(id)arg4;	// IMP=0x0000000000031c22
- (id)initWithIntersectionFunctionTable:(id)arg1 device:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000031b78

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long allocationID;
@property(retain, nonatomic) id <MTLIntersectionFunctionTable> baseObject; // @dynamic baseObject;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long heapOffset;
@property(copy) NSString *label;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unfilteredResourceOptions;

@end
