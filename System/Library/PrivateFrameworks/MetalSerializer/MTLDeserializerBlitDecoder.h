//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLDeserializerDecoder-Protocol.h>

@class NSString, _MTLDeserializer;
@protocol MTLBlitCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface MTLDeserializerBlitDecoder : NSObject <MTLDeserializerDecoder>
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLBlitCommandEncoderSPI> blitEncoder;	// 16 = 0x10
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000002328
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000201e
- (void)decodeBlitWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001fbf
- (void)decodeBlitUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001f60
- (void)decodeSynchronizeTextureImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001f34
- (void)decodeSynchronizeResource:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001f08
- (void)decodeOptimizeImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001e81
- (void)decodeOptimize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001e04
- (void)decodeGenerateMipmaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001da6
- (void)decodeFillBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001cb7
- (void)decodeCopyFromTextureToTextureWithOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001bc3
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001b1d
- (void)decodeCopyFromTextureToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001a31
- (void)decodeCopyFromTextureToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001949
- (void)decodeCopyFromBufferToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000018b5
- (void)decodeCopyFromBufferToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000017d0
- (id)getTextureForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001760
- (id)getBufferForReferenceNonNull:(unsigned int)arg1;	// IMP=0x00000000000016f0
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000001631
- (void)dealloc;	// IMP=0x00000000000015f6
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000001590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

