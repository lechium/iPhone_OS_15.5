//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter
{
    float _inputThreshold;	// 72 = 0x48
    CIImage *_inputImage;	// 80 = 0x50
    CIImage *_inputDepthMap;	// 88 = 0x58
}

+ (id)kernelBlackAndWhite;	// IMP=0x0000000000005800
- (void).cxx_destruct;	// IMP=0x0000000000006263
@property float inputThreshold; // @synthesize inputThreshold=_inputThreshold;
@property(retain) CIImage *inputDepthMap; // @synthesize inputDepthMap=_inputDepthMap;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x0000000000005c58
- (id)photoEffectName;	// IMP=0x0000000000005bb7

@end

