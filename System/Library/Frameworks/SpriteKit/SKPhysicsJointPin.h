//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKPhysicsJointPin
{
    _Bool _shouldEnableLimits;	// 56 = 0x38
    double _lowerAngleLimit;	// 64 = 0x40
    double _upperAngleLimit;	// 72 = 0x48
    double _frictionTorque;	// 80 = 0x50
    double _rotationSpeed;	// 88 = 0x58
    struct CGPoint _anchor;	// 96 = 0x60
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;	// IMP=0x00000000000d1fe7
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1fce
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d1fc6
@property(readonly) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) double frictionTorque; // @synthesize frictionTorque=_frictionTorque;
@property(nonatomic) double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;
@property(nonatomic) double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
@property(nonatomic) _Bool shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end
