//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;	// IMP=0x000000000000ceb6
+ (id)valueWithCAColorMatrix:(struct CAColorMatrix)arg1;	// IMP=0x000000000008120b
+ (id)valueWithCAPoint3D:(struct CAPoint3D)arg1;	// IMP=0x000000000011f9f7
@property(readonly) struct CATransform3D CATransform3DValue;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;	// IMP=0x000000000005080f
- (struct Object *)CA_copyRenderValue;	// IMP=0x000000000005042c
- (struct CAColorMatrix)CAColorMatrixValue;	// IMP=0x00000000000811c7
- (struct CAPoint3D)CAPoint3DValue;	// IMP=0x000000000011f9bb
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x00000000001f2f1b
- (id)CA_roundToIntegerFromValue:(id)arg1;	// IMP=0x00000000001f2de7
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x00000000001f2857
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x00000000001f21f3
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x00000000001f1aa8
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0000000000245298
- (id)CAMLType;	// IMP=0x00000000002451a7
- (struct CGAffineTransform)CA_CGAffineTransformValue;	// IMP=0x00000000002464d4
@end
