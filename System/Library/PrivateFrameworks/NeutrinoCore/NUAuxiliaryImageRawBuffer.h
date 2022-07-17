//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAuxiliaryImage-Protocol.h>

@class NSString;

@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage>
{
    long long _auxiliaryImageType;	// 8 = 0x8
    struct __CVBuffer *_pixelBuffer;	// 16 = 0x10
    struct CGImageMetadata *_metadata;	// 24 = 0x18
}

@property(retain, nonatomic) struct CGImageMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly) long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
- (unsigned int)pixelFormatType;	// IMP=0x00000000001219de
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;	// IMP=0x000000000012158f
- (id)dictionaryRepresentation;	// IMP=0x000000000012155a
- (struct CGImage *)cgImageRef;	// IMP=0x0000000000121449
- (struct __CVBuffer *)cvPixelBufferRef;	// IMP=0x0000000000121437
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000001213b7
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;	// IMP=0x0000000000120e0a
- (void)dealloc;	// IMP=0x0000000000120dbe
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 auxiliaryImageType:(long long)arg2;	// IMP=0x0000000000120d69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
