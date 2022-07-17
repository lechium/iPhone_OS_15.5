//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSkyAmount;	// 80 = 0x50
    NSNumber *inputGrassAmount;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000001599dc
@property(retain, nonatomic) NSNumber *inputGrassAmount; // @synthesize inputGrassAmount;
@property(retain, nonatomic) NSNumber *inputSkyAmount; // @synthesize inputSkyAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000159c92
- (id)_kernel;	// IMP=0x0000000000159c72

@end
