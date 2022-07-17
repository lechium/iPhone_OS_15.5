//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISunbeamsGenerator
{
    CIVector *inputCenter;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputSunRadius;	// 88 = 0x58
    NSNumber *inputMaxStriationRadius;	// 96 = 0x60
    NSNumber *inputStriationStrength;	// 104 = 0x68
    NSNumber *inputStriationContrast;	// 112 = 0x70
    NSNumber *inputTime;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x000000000016b353
- (id)outputImage;	// IMP=0x000000000016af1d
- (id)_CISunbeams;	// IMP=0x000000000016aefd

@end
