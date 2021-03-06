//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIToneCurve <_CIFilterProperties>
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputPoint0;	// 80 = 0x50
    CIVector *inputPoint1;	// 88 = 0x58
    CIVector *inputPoint2;	// 96 = 0x60
    CIVector *inputPoint3;	// 104 = 0x68
    CIVector *inputPoint4;	// 112 = 0x70
    CIImage *_curveImage;	// 120 = 0x78
}

+ (void)splineCurveTable:(double *)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint *)arg4;	// IMP=0x0000000000170d2b
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;	// IMP=0x0000000000170d0d
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(_Bool)arg2;	// IMP=0x0000000000170b79
+ (id)customAttributes;	// IMP=0x0000000000170287
@property(copy, nonatomic) CIVector *inputPoint4; // @synthesize inputPoint4;
@property(copy, nonatomic) CIVector *inputPoint3; // @synthesize inputPoint3;
@property(copy, nonatomic) CIVector *inputPoint2; // @synthesize inputPoint2;
@property(copy, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(copy, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x000000000017197e
- (id)_outputProperties;	// IMP=0x0000000000171364
- (id)outputImage;	// IMP=0x00000000001708e2
- (_Bool)_isIdentity;	// IMP=0x0000000000170755
- (id)_kernel16;	// IMP=0x0000000000170735
- (void)dealloc;	// IMP=0x000000000017003b

@end

