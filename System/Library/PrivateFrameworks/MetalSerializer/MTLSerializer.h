//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDevice, MTLSerializerObjectRefAllocator, OS_dispatch_queue;

@interface MTLSerializer : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    id <MTLSerializerObjectRefAllocator> _objectIndex;	// 24 = 0x18
    void *_commandBufferIndex;	// 32 = 0x20
    void *_eventNotifications;	// 40 = 0x28
    _Bool _deserializerGeneratesResourceRefs;	// 48 = 0x30
    unsigned long long _reflectionSerializationVersion;	// 56 = 0x38
    struct MTLSerializerFeatures _features;	// 64 = 0x40
}

@property unsigned long long reflectionSerializationVersion; // @synthesize reflectionSerializationVersion=_reflectionSerializationVersion;
@property(readonly, nonatomic) _Bool deserializerGeneratesResourceRefs; // @synthesize deserializerGeneratesResourceRefs=_deserializerGeneratesResourceRefs;
@property(readonly) _Bool supportsOpenGL;
- (const char *)payloadFromReplyData:(const char *)arg1 replyDataSize:(unsigned long long)arg2;	// IMP=0x0000000000004d76
- (unsigned int)computePipelineWithReplyData:(const void *)arg1 replyDataSize:(unsigned long long)arg2 pipelineInfo:(CDStruct_868f45a5 *)arg3 errorMessage:(id *)arg4;	// IMP=0x0000000000004d4a
- (unsigned int)handleNewObjectReplyData:(const void *)arg1 replyDataSize:(unsigned long long)arg2;	// IMP=0x0000000000004d24
- (unsigned int)handleNewObjectReplyData:(const void *)arg1 replyDataSize:(unsigned long long)arg2 errorMessage:(id *)arg3;	// IMP=0x0000000000004d11
- (unsigned int)newHeapWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004c15
- (unsigned int)newSamplerStateWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004bb3
- (unsigned int)newDepthStencilStateWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004b51
- (unsigned int)newTextureWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004aef
- (unsigned int)newIOSurfaceTextureWithDescriptor:(id)arg1 plane:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000004a15
- (unsigned int)newComputePipelineStateWithSerializedDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004960
- (unsigned int)newRenderPipelineStateWithSerializedDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000000048ab
- (unsigned int)newFunctionWithIR:(id)arg1;	// IMP=0x0000000000004857
- (unsigned int)newSharedTextureWithHandle:(id)arg1;	// IMP=0x00000000000047b8
- (unsigned int)newSharedTextureWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004706
- (unsigned int)newTiledTextureWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 allocator:(id)arg5;	// IMP=0x0000000000004669
- (unsigned int)newTextureWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 allocator:(id)arg5;	// IMP=0x00000000000045cc
- (void)doesAliasResources:(const id *)arg1 count:(unsigned long long)arg2 all:(_Bool)arg3 resource:(id)arg4 allocator:(id)arg5;	// IMP=0x000000000000452a
- (void)makeAliasableResource:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000000044d9
- (void)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000449c
- (void)heapTextureSizeAndAlignWithDescriptor:(id)arg1 allocator:(id)arg2;	// IMP=0x000000000000445f
- (void)argumentEncoderSetSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;	// IMP=0x00000000000043cc
- (void)argumentEncoderSetTextures:(const id *)arg1 withRange:(struct _NSRange)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;	// IMP=0x0000000000004339
- (void)sharedEventWaitSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2 eventRef:(unsigned int)arg3 allocator:(id)arg4;	// IMP=0x00000000000042ed
- (void)sharedEventSetSignaledValue:(unsigned long long)arg1 eventRef:(unsigned int)arg2 allocator:(id)arg3;	// IMP=0x00000000000042b3
- (void)sharedEventSignaledValueForEventRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x000000000000427f
- (unsigned int)notifyListenerForEventRef:(unsigned int)arg1 atValue:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000004218
- (void)uniqueIdentifierForComputePipelineState:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000000041c0
- (void)uniqueIdentifierForRenderPipelineState:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004168
- (void)uniqueIdentifierForSamplerState:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004110
- (void)uniqueIdentifierForTexture:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000000040b8
- (void)bufferGPUAddress:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000004067
- (void)argumentEncoderSetBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3 encoderRef:(unsigned int)arg4 allocator:(id)arg5;	// IMP=0x0000000000003fba
- (void)argumentEncoderSetArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;	// IMP=0x0000000000003f44
- (void)maxAvailableSizeWithAlignment:(unsigned long long)arg1 heap:(id)arg2 allocator:(id)arg3;	// IMP=0x0000000000003eed
- (void)getComputeInfoWithAllocator:(id)arg1;	// IMP=0x0000000000003ebe
- (void)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1 allocator:(id)arg2;	// IMP=0x0000000000003e89
- (void)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 allocator:(id)arg2;	// IMP=0x0000000000003e54
- (void)sizeInfoForHeap:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000003e03
- (void)argumentEncoderConstantAtIndex:(unsigned long long)arg1 encoderRef:(unsigned int)arg2 bufferRef:(unsigned int)arg3 allocator:(id)arg4;	// IMP=0x0000000000003db9
- (void)argumentBufferLayoutConstantAtIndex:(unsigned long long)arg1 layoutRef:(unsigned int)arg2 allocator:(id)arg3;	// IMP=0x0000000000003d7f
- (unsigned int)newArgumentEncoderWithLayout:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000003d28
- (unsigned int)newArgumentBufferLayoutWithStructType:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000003c51
- (unsigned int)newSharedEventWithMachPort:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000003c00
- (unsigned int)newSharedEventWithHandle:(id)arg1 allocator:(id)arg2;	// IMP=0x0000000000003baf
- (unsigned int)newSharedEventWithAllocator:(id)arg1;	// IMP=0x0000000000003b5b
- (unsigned int)newFenceWithAllocator:(id)arg1;	// IMP=0x0000000000003b07
- (unsigned int)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5 baseTexture:(id)arg6 allocator:(id)arg7;	// IMP=0x0000000000003a3e
- (unsigned int)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 baseTexture:(id)arg5 allocator:(id)arg6;	// IMP=0x0000000000003999
- (unsigned int)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 heap:(id)arg3 offset:(unsigned long long)arg4 useOffset:(_Bool)arg5 allocator:(id)arg6;	// IMP=0x00000000000038f2
- (unsigned int)newTextureWithDescriptor:(id)arg1 heap:(id)arg2 offset:(unsigned long long)arg3 useOffset:(_Bool)arg4 allocator:(id)arg5;	// IMP=0x000000000000384f
- (unsigned int)newTextureViewWithPixelFormat:(unsigned long long)arg1 baseTexture:(id)arg2 allocator:(id)arg3;	// IMP=0x00000000000037d8
- (void *)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 dataSize:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 texture:(id)arg7 allocator:(id)arg8;	// IMP=0x000000000000373a
- (id)getBytesFromRegion:(CDStruct_4c83c94d)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 mipmapLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 texture:(id)arg6 outDataSize:(unsigned long long *)arg7;	// IMP=0x000000000000363e
- (id)didModifyRange:(struct _NSRange)arg1 buffer:(id)arg2;	// IMP=0x00000000000035d4
- (void)copyImageBytesFromSource:(char *)arg1 toDestination:(char *)arg2 dataSize:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 mipmapLevel:(unsigned long long)arg7 slice:(unsigned long long)arg8 texture:(id)arg9;	// IMP=0x00000000000033ec
- (unsigned long long)dataSizeForRegion:(CDStruct_4c83c94d)arg1 pixelFormat:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;	// IMP=0x0000000000003343
- (id)newDepthStencilStateWithDescriptor:(id)arg1;	// IMP=0x000000000000324f
- (id)newSamplerStateWithDescriptor:(id)arg1;	// IMP=0x000000000000308b
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000002f5e
- (void)releaseNotificationRef:(unsigned int)arg1;	// IMP=0x0000000000002f0f
- (unsigned int)newNotificationRef;	// IMP=0x0000000000002f01
- (void)releaseCommandBufferRef:(unsigned int)arg1;	// IMP=0x0000000000002eb2
- (unsigned int)newCommandBufferRef;	// IMP=0x0000000000002ea4
- (void)deleteCommandQueueRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002e4e
- (void)releaseCommandQueueRef:(unsigned int)arg1;	// IMP=0x0000000000002e48
- (unsigned int)newCommandQueueRef;	// IMP=0x0000000000002e28
- (void)deleteEventRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002dd2
- (void)releaseEventRef:(unsigned int)arg1;	// IMP=0x0000000000002dcc
- (unsigned int)newEventRef;	// IMP=0x0000000000002dac
- (void)deleteHeapRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002d56
- (void)releaseHeapRef:(unsigned int)arg1;	// IMP=0x0000000000002d50
- (unsigned int)newHeapRef;	// IMP=0x0000000000002d30
- (void)deleteArgumentEncoderRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002cda
- (void)releaseArgumentEncoderRef:(unsigned int)arg1;	// IMP=0x0000000000002cd4
- (unsigned int)newArgumentEncoderRef;	// IMP=0x0000000000002cb4
- (void)deleteArgumentBufferLayoutRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002c5e
- (void)releaseArgumentBufferLayoutRef:(unsigned int)arg1;	// IMP=0x0000000000002c58
- (unsigned int)newArgumentBufferLayoutRef;	// IMP=0x0000000000002c38
- (void)deleteFenceRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002be2
- (void)releaseFenceRef:(unsigned int)arg1;	// IMP=0x0000000000002bdc
- (unsigned int)newFenceRef;	// IMP=0x0000000000002bbc
- (void)deleteRenderPipelineStateRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002b66
- (void)releaseRenderPipelineStateRef:(unsigned int)arg1;	// IMP=0x0000000000002b60
- (unsigned int)newRenderPipelineStateRef;	// IMP=0x0000000000002b40
- (void)deleteComputePipelineStateRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002aea
- (void)releaseComputePipelineStateRef:(unsigned int)arg1;	// IMP=0x0000000000002ae4
- (unsigned int)newComputePipelineStateRef;	// IMP=0x0000000000002ac4
- (void)deleteFunctionRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002a6e
- (void)releaseFunctionRef:(unsigned int)arg1;	// IMP=0x0000000000002a68
- (unsigned int)newFunctionRef;	// IMP=0x0000000000002a48
- (void)deleteSamplerStateRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x00000000000029f2
- (void)releaseSamplerStateRef:(unsigned int)arg1;	// IMP=0x00000000000029ec
- (unsigned int)newSamplerStateRef;	// IMP=0x00000000000029cc
- (void)deleteDepthStencilStateRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x0000000000002976
- (void)releaseDepthStencilStateRef:(unsigned int)arg1;	// IMP=0x0000000000002970
- (unsigned int)newDepthStencilStateRef;	// IMP=0x0000000000002950
- (void)deleteTextureRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x00000000000028fa
- (void)releaseTextureRef:(unsigned int)arg1;	// IMP=0x00000000000028f4
- (unsigned int)newTextureRef;	// IMP=0x00000000000028d4
- (void)deleteBufferRef:(unsigned int)arg1 allocator:(id)arg2;	// IMP=0x000000000000287e
- (void)releaseBufferRef:(unsigned int)arg1;	// IMP=0x0000000000002878
- (unsigned int)newBufferRef;	// IMP=0x0000000000002858
- (void)dealloc;	// IMP=0x00000000000027d3
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000000027b6
- (id)initWithDevice:(id)arg1 deserializerGeneratesResourceRefs:(_Bool)arg2;	// IMP=0x00000000000027a1
- (id)initWithDevice:(id)arg1 deserializerGeneratesResourceRefs:(_Bool)arg2 deserializerVersion:(unsigned int)arg3;	// IMP=0x0000000000002728
- (id)initWithDevice:(id)arg1 objectRefAllocator:(id)arg2 deserializerGeneratesResourceRefs:(_Bool)arg3;	// IMP=0x0000000000002713
- (id)initWithDevice:(id)arg1 objectRefAllocator:(id)arg2 deserializerGeneratesResourceRefs:(_Bool)arg3 deserializerVersion:(unsigned int)arg4;	// IMP=0x00000000000025db

@end
