//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider>
{
    _Bool _implicitDuration;	// 8 = 0x8
    double _dampingRatio;	// 16 = 0x10
    double _mass;	// 24 = 0x18
    double _stiffness;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    struct CGVector _initialVelocity;	// 48 = 0x30
}

+ (void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double *)arg4 response:(double *)arg5;	// IMP=0x00000000000aebab
+ (void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double *)arg3 stiffness:(double *)arg4 damping:(double *)arg5;	// IMP=0x00000000000aeb61
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ae9fc
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) _Bool implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property(readonly, nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double settlingDuration;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae808
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae703
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ae569
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ae459
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000ae441
- (id)initWithParameters:(id)arg1 initialVelocity:(struct CGVector)arg2;	// IMP=0x00000000000ae3b3
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x00000000000ae39b
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(struct CGVector)arg3;	// IMP=0x00000000000ae30f
- (id)initWithDampingRatio:(double)arg1;	// IMP=0x00000000000ae2f7
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;	// IMP=0x00000000000ae289
- (id)initWithVelocity:(struct CGVector)arg1;	// IMP=0x00000000000ae19d
- (id)init;	// IMP=0x00000000000ae0c8
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;	// IMP=0x00000000000adff9
- (id)description;	// IMP=0x00000000000ade88
- (id)effectiveTimingFunction;	// IMP=0x00000000000ade80
- (id)_mediaTimingFunction;	// IMP=0x00000000000ade78
@property(readonly, nonatomic) long long timingCurveType;

@end

