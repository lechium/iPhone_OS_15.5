//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLBlitCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsBlitCommandEncoder <MTLBlitCommandEncoderSPI>
{
}

- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000008cd8
- (void)resolveCounters:(id)arg1 inRange:(struct _NSRange)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;	// IMP=0x0000000000008c40
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000008bd1
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;	// IMP=0x0000000000008b39
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000008aca
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000008a5b
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x0000000000008a03
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000008994
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x000000000000893c
- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x00000000000088dd
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;	// IMP=0x000000000000883f
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x00000000000087ba
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x0000000000008722
- (void)invalidateCompressedTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000086b3
- (void)invalidateCompressedTexture:(id)arg1;	// IMP=0x000000000000865b
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x00000000000085e1
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x0000000000008572
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x00000000000084f8
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x000000000000847e
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x0000000000008404
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x00000000000083ac
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x0000000000008314
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000000827c
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x00000000000081e4
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000000810f
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x0000000000008043
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x0000000000007fab
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x0000000000007f13
- (void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x0000000000007f0d
- (void)synchronizeResource:(id)arg1;	// IMP=0x0000000000007f07
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000007eaf
- (void)updateFence:(id)arg1;	// IMP=0x0000000000007e57
- (id)initWithBlitCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000007e28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

