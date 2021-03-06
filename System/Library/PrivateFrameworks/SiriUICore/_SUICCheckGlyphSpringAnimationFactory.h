//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject
{
    double _duration;	// 8 = 0x8
    _Bool _needsDurationUpdate;	// 16 = 0x10
    double _mass;	// 24 = 0x18
    double _stiffness;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    double _velocity;	// 48 = 0x30
    CAMediaTimingFunction *_timing;	// 56 = 0x38
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;	// IMP=0x0000000000001b21
+ (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000000001b0c
+ (double)defaultDuration;	// IMP=0x0000000000001adf
+ (id)defaultTimingFunction;	// IMP=0x0000000000001ad5
- (void).cxx_destruct;	// IMP=0x00000000000021c2
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;	// IMP=0x000000000000206d
- (id)_timingFunctionForAnimation;	// IMP=0x000000000000205f
- (id)_springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000000001f78
- (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000000001f37
- (void)dealloc;	// IMP=0x0000000000001f08
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;	// IMP=0x0000000000001e5d
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;	// IMP=0x0000000000001dd7
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;	// IMP=0x0000000000001da7
- (id)initWithVelocity:(double)arg1;	// IMP=0x0000000000001d42
- (id)init;	// IMP=0x0000000000001d2d

@end

