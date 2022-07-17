//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurCombiner
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBlurImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    NSDictionary *inputTuningParameters;	// 96 = 0x60
}

@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputBlurImage; // @synthesize inputBlurImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001123be
- (id)_ourBlendKernelMetal;	// IMP=0x0000000000112361
- (id)nonMetalKernelYCC;	// IMP=0x0000000000112304
- (id)nonMetalKernel;	// IMP=0x00000000001122a7
- (id)_blendKernel:(_Bool)arg1;	// IMP=0x00000000001121de

@end
