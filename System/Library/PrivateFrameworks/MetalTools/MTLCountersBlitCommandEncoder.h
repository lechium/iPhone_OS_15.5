//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCountersTraceBlitCommandEncoder;

@interface MTLCountersBlitCommandEncoder
{
    MTLCountersTraceBlitCommandEncoder *_traceEncoder;	// 40 = 0x28
}

- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000a8d5e
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x00000000000a8d0b
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000a8ca2
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x00000000000a8c4f
- (void)endEncoding;	// IMP=0x00000000000a8c01
- (void)waitForFence:(id)arg1;	// IMP=0x00000000000a8bae
- (void)updateFence:(id)arg1;	// IMP=0x00000000000a8b5b
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x00000000000a8ade
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x00000000000a8a7c
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x00000000000a89f6
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x00000000000a8955
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x00000000000a88bd
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_1e3be3a8)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x00000000000a8822
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x00000000000a87b0
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x00000000000a873e
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x00000000000a86eb
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000a8641
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x00000000000a8594
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000a84d2
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x00000000000a8416
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000a8357
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x00000000000a82a4
- (void)setLabel:(id)arg1;	// IMP=0x00000000000a8251
- (void)popDebugGroup;	// IMP=0x00000000000a8203
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000000000a81b0
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000000000a815d
- (void)dealloc;	// IMP=0x00000000000a811b
- (id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000a809c

@end
