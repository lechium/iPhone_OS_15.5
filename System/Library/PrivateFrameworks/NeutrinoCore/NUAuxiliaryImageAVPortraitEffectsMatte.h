//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAuxiliaryImage-Protocol.h>

@class AVPortraitEffectsMatte, NSString;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage>
{
    long long _auxiliaryImageType;	// 8 = 0x8
    AVPortraitEffectsMatte *_avPortraitEffectsMatte;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000120667
@property(readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte; // @synthesize avPortraitEffectsMatte=_avPortraitEffectsMatte;
@property(readonly) long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
- (struct CGImage *)cgImageRef;	// IMP=0x0000000000120641
- (struct __CVBuffer *)cvPixelBufferRef;	// IMP=0x00000000001205f5
- (unsigned int)pixelFormatType;	// IMP=0x00000000001205b1
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;	// IMP=0x0000000000120552
- (id)dictionaryRepresentation;	// IMP=0x000000000012051d
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000120484
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;	// IMP=0x00000000001203fd
- (id)underlyingAVPortraitEffectsMatte;	// IMP=0x00000000001203eb
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1;	// IMP=0x000000000012004a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

