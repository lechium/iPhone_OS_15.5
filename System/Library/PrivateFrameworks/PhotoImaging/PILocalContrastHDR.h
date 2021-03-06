//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PILocalContrastHDR : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputStrength;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x000000000000a2a7
- (void).cxx_destruct;	// IMP=0x000000000000adc3
- (id)outputImage;	// IMP=0x000000000000a59d
- (id)_kernelLocalContrast;	// IMP=0x000000000000a56d

@end

