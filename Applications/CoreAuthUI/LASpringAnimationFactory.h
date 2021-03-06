//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface LASpringAnimationFactory : NSObject
{
    double _duration;	// 8 = 0x8
    _Bool _needsDurationUpdate;	// 16 = 0x10
    double _mass;	// 24 = 0x18
    double _stiffness;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    double _velocity;	// 48 = 0x30
    CAMediaTimingFunction *_timing;	// 56 = 0x38
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;	// IMP=0x004000000000d70e
+ (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x001000000000d6f9
+ (double)defaultDuration;	// IMP=0x001000000000d6cc
+ (id)defaultTimingFunction;	// IMP=0x001000000000d6c2
- (void).cxx_destruct;	// IMP=0x002000000000ddaf
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;	// IMP=0x001000000000dc5a
- (id)_timingFunctionForAnimation;	// IMP=0x001000000000dc4c
- (id)_springAnimationWithKeyPath:(id)arg1;	// IMP=0x001000000000db65
- (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x001000000000db24
- (void)dealloc;	// IMP=0x001000000000daf5
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;	// IMP=0x001000000000da4a
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;	// IMP=0x001000000000d9c4
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;	// IMP=0x001000000000d994
- (id)initWithVelocity:(double)arg1;	// IMP=0x001000000000d92f
- (id)init;	// IMP=0x001000000000d91a

@end

