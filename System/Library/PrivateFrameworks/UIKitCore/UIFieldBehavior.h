//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKPhysicsField, UIRegion;

@interface UIFieldBehavior
{
    PKPhysicsField *_field;	// 8 = 0x8
    struct {
        unsigned int fieldIsKindOfNoiseField:1;
    } _fieldFlags;	// 16 = 0x10
    UIRegion *_region;	// 24 = 0x18
}

+ (id)fieldWithEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000062a09b
+ (id)magneticField;	// IMP=0x000000000062a024
+ (id)electricField;	// IMP=0x0000000000629fad
+ (id)springField;	// IMP=0x0000000000629f36
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;	// IMP=0x0000000000629e75
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;	// IMP=0x0000000000629db4
+ (id)velocityFieldWithVector:(struct CGVector)arg1;	// IMP=0x0000000000629d0c
+ (id)linearGravityFieldWithVector:(struct CGVector)arg1;	// IMP=0x0000000000629c66
+ (id)radialGravityFieldWithPosition:(struct CGPoint)arg1;	// IMP=0x0000000000629bc0
+ (id)vortexField;	// IMP=0x0000000000629b49
+ (id)dragField;	// IMP=0x0000000000629ad2
+ (_Bool)_isPrimitiveBehavior;	// IMP=0x0000000000629aca
- (void).cxx_destruct;	// IMP=0x000000000062b5ea
@property(retain, nonatomic) UIRegion *region; // @synthesize region=_region;
- (void)_dissociate;	// IMP=0x000000000062b30a
- (void)_associate;	// IMP=0x000000000062b117
@property(nonatomic) double animationSpeed;
@property(nonatomic) double smoothness;
@property(nonatomic) struct CGVector direction;
- (_Bool)isEnabled;	// IMP=0x000000000062af8f
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000062af56
@property(nonatomic) double minimumRadius;
@property(nonatomic) double falloff;
@property(nonatomic) double strength;
@property(nonatomic) struct CGPoint position;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)removeItem:(id)arg1;	// IMP=0x000000000062aaa4
- (void)addItem:(id)arg1;	// IMP=0x000000000062a9ab
- (void)_changedParameter;	// IMP=0x000000000062a79e
@property(readonly, nonatomic) PKPhysicsField *_field;
- (void)_addFieldItem:(id)arg1;	// IMP=0x000000000062a682
- (id)init;	// IMP=0x000000000062a630
- (id)_initWithField:(id)arg1;	// IMP=0x000000000062a45a

@end

