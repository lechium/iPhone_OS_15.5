//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CIHueSaturationValueGradient
{
    NSNumber *inputValue;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputSoftness;	// 88 = 0x58
    NSNumber *inputDither;	// 96 = 0x60
    id inputColorSpace;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00000000000b2401
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(retain, nonatomic) NSNumber *inputDither; // @synthesize inputDither;
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputValue; // @synthesize inputValue;
- (id)outputImage;	// IMP=0x00000000000b2819
- (id)_kernelD;	// IMP=0x00000000000b23e1
- (id)_kernel;	// IMP=0x00000000000b23c1

@end

