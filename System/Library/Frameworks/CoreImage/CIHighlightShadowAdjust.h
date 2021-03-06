//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightShadowAdjust <_CIFilterProperties>
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputShadowAmount;	// 88 = 0x58
    NSNumber *inputHighlightAmount;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00000000000b546e
@property(retain, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount;
@property(retain, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x00000000000b624e
- (id)_outputProperties;	// IMP=0x00000000000b60c8
- (id)outputImage;	// IMP=0x00000000000b59d6
- (id)_kernelSnoB_v0;	// IMP=0x00000000000b59b6
- (id)_kernelSHnoB_v0;	// IMP=0x00000000000b5996
- (id)_kernelSH_v0;	// IMP=0x00000000000b5976
- (id)_kernelSHnoB_v1;	// IMP=0x00000000000b5956
- (id)_kernelSH_v1;	// IMP=0x00000000000b5936
- (id)_kernelSHnoB_v2;	// IMP=0x00000000000b5916
- (id)_kernelSH_v2;	// IMP=0x00000000000b58f6
- (_Bool)_isIdentity;	// IMP=0x00000000000b585f
- (void)setDefaults;	// IMP=0x00000000000b57e2
- (int)_defaultVersion;	// IMP=0x00000000000b57d7
- (int)_maxVersion;	// IMP=0x00000000000b57cc

@end

