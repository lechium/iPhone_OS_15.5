//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAuxiliaryImage-Protocol.h>

@class AVSemanticSegmentationMatte, NSString;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage>
{
    long long _auxiliaryImageType;	// 8 = 0x8
    AVSemanticSegmentationMatte *_avSemanticSegmentationMatte;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000120d59
@property(readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte; // @synthesize avSemanticSegmentationMatte=_avSemanticSegmentationMatte;
@property(readonly) long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
- (struct CGImage *)cgImageRef;	// IMP=0x0000000000120d33
- (struct __CVBuffer *)cvPixelBufferRef;	// IMP=0x0000000000120ce7
- (unsigned int)pixelFormatType;	// IMP=0x0000000000120ca3
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;	// IMP=0x0000000000120c44
- (id)dictionaryRepresentation;	// IMP=0x0000000000120c0f
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000120b76
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;	// IMP=0x0000000000120aef
- (id)underlyingAVSemanticSegmentationMatte;	// IMP=0x0000000000120add
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1;	// IMP=0x0000000000120677

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

