//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputGuideImage;	// 80 = 0x50
    NSData *inputLightMap;	// 88 = 0x58
    CIImage *inputLightMapImage;	// 96 = 0x60
    NSNumber *inputLightMapWidth;	// 104 = 0x68
    NSNumber *inputLightMapHeight;	// 112 = 0x70
    NSNumber *inputLocalLight;	// 120 = 0x78
    NSNumber *inputSmartShadows;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x00000000000e9306
- (id)outputImage;	// IMP=0x00000000000e96b1
- (id)_polyKernel;	// IMP=0x00000000000e9691
- (id)_shadowKernel;	// IMP=0x00000000000e9671

@end

