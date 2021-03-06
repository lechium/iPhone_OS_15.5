//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    SCNNode *_node;	// 8 = 0x8
    double _mass;	// 16 = 0x10
    double _charge;	// 24 = 0x18
    double _friction;	// 32 = 0x20
    double _restitution;	// 40 = 0x28
    double _rollingFriction;	// 48 = 0x30
    double _continuousCollisionDetectionThreshold;	// 56 = 0x38
    SCNPhysicsShape *_physicsShape;	// 64 = 0x40
    long long _type;	// 72 = 0x48
    double _damping;	// 80 = 0x50
    struct SCNVector4 _angularVelocity;	// 88 = 0x58
    double _angularDamping;	// 104 = 0x68
    struct SCNVector3 _velocityFactor;	// 112 = 0x70
    struct SCNVector3 _angularVelocityFactor;	// 124 = 0x7c
    struct SCNVector3 _velocity;	// 136 = 0x88
    _Bool _ignoreGravity;	// 148 = 0x94
    double _linearRestingThreshold;	// 152 = 0x98
    double _angularRestingThreshold;	// 160 = 0xa0
    _Bool _explicitMomentOfInertia;	// 168 = 0xa8
    struct SCNVector3 _momentOfInertia;	// 172 = 0xac
    struct SCNVector3 _centerOfMassOffset;	// 184 = 0xb8
    unsigned long long _categoryBitMask;	// 200 = 0xc8
    unsigned long long _collisionBitMask;	// 208 = 0xd0
    unsigned long long _contactTestBitMask;	// 216 = 0xd8
    _Bool _allowsResting;	// 224 = 0xe0
    _Bool _isDefaultShape;	// 225 = 0xe1
    void *_body;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000121104
+ (id)kinematicBody;	// IMP=0x000000000011d10b
+ (id)dynamicBody;	// IMP=0x000000000011d0ea
+ (id)staticBody;	// IMP=0x000000000011d0cc
+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;	// IMP=0x000000000011d090
@property(nonatomic) double continuousCollisionDetectionThreshold; // @synthesize continuousCollisionDetectionThreshold=_continuousCollisionDetectionThreshold;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000120cc2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000120a27
- (void)_didDecodeSCNPhysicsBody:(id)arg1;	// IMP=0x0000000000120a03
- (id)_owner;	// IMP=0x00000000001209f9
- (void)_setOwner:(id)arg1;	// IMP=0x000000000012070c
- (void)_removeOwner;	// IMP=0x0000000000120612
- (void)_ownerWillDie;	// IMP=0x0000000000120604
- (void *)_createBody;	// IMP=0x00000000001203f7
- (id)copy;	// IMP=0x00000000001203e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001200d5
- (void)moveToTransform:(struct SCNMatrix4)arg1;	// IMP=0x000000000011ff86
- (void)rotateToAxisAngle:(struct SCNVector4)arg1;	// IMP=0x000000000011fcd4
- (void)moveToPosition:(struct SCNVector3)arg1;	// IMP=0x000000000011fc12
- (void)resetTransform;	// IMP=0x000000000011fae7
- (void)resetToTransform:(struct SCNMatrix4)arg1;	// IMP=0x000000000011fa02
- (void)setResting:(_Bool)arg1;	// IMP=0x000000000011f949
- (void)clearAllForces;	// IMP=0x000000000011f844
- (void)_activate;	// IMP=0x000000000011f82a
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(_Bool)arg2;	// IMP=0x000000000011f6a0
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(_Bool)arg3;	// IMP=0x000000000011f4b4
- (void)applyForce:(struct SCNVector3)arg1 impulse:(_Bool)arg2;	// IMP=0x000000000011f36f
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic, getter=isAffectedByGravity) _Bool affectedByGravity;
@property(nonatomic) struct SCNVector3 velocity;
- (double)continuousCollisionDetection;	// IMP=0x000000000011ed3c
@property(nonatomic) unsigned long long contactTestBitMask;
@property(nonatomic) unsigned long long collisionBitMask;
@property(nonatomic) unsigned long long categoryBitMask;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
- (struct btCollisionShape *)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;	// IMP=0x000000000011e4aa
- (double)angularSleepingThreshold;	// IMP=0x000000000011e49c
- (void)setAngularSleepingThreshold:(double)arg1;	// IMP=0x000000000011e48a
- (double)linearSleepingThreshold;	// IMP=0x000000000011e47c
- (void)setLinearSleepingThreshold:(double)arg1;	// IMP=0x000000000011e46a
@property(nonatomic) double angularRestingThreshold;
@property(nonatomic) double linearRestingThreshold;
@property(nonatomic) double angularDamping;
@property(nonatomic) double damping;
@property(nonatomic) double rollingFriction;
@property(nonatomic) double restitution;
@property(nonatomic) double friction;
@property(nonatomic) _Bool allowsResting;
@property(readonly, nonatomic) _Bool isResting;
@property(nonatomic) double charge;
@property(nonatomic) _Bool usesDefaultMomentOfInertia;
@property(nonatomic) struct SCNVector3 centerOfMassOffset;
@property(nonatomic) struct SCNVector3 momentOfInertia;
- (_Bool)respondsToCollision;	// IMP=0x000000000011d7df
@property(nonatomic) double mass;
@property(nonatomic) long long type;
- (void)dealloc;	// IMP=0x000000000011d022
- (void *)_handle;	// IMP=0x000000000011d015
- (struct __C3DScene *)sceneRef;	// IMP=0x000000000011cfff
- (id)initWithType:(long long)arg1 shape:(id)arg2;	// IMP=0x000000000011ced4

@end

