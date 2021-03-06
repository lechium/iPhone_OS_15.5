//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMaskedVariableBlur
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMask;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000000ea7ae
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000eaf2a
- (id)upCubic:(id)arg1 scale:(float)arg2;	// IMP=0x00000000000eae91
- (id)downTwo:(id)arg1;	// IMP=0x00000000000ea9e5
- (id)_kernelCombine;	// IMP=0x00000000000ea9c5
- (id)_kernelD2;	// IMP=0x00000000000ea9a5
- (_Bool)_isIdentity;	// IMP=0x00000000000ea974

@end

