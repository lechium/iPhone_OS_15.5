//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMirror
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputPoint;	// 80 = 0x50
    NSNumber *inputAngle;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000000f369c
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000f433b
- (struct Rectangle)computeDOD:(struct vec2)arg1 tst:(struct vec3)arg2 off:(struct vec4)arg3 mtx:(struct vec4)arg4;	// IMP=0x00000000000f38ab
- (id)_kernel;	// IMP=0x00000000000f388b

@end

