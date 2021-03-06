//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNVector3 _halfExtent;	// 8 = 0x8
    double _strength;	// 24 = 0x18
    double _falloffExponent;	// 32 = 0x20
    double _minimumDistance;	// 40 = 0x28
    _Bool _active;	// 48 = 0x30
    long long _scope;	// 56 = 0x38
    _Bool _usesEllipsoidalExtent;	// 64 = 0x40
    _Bool _exclusive;	// 65 = 0x41
    struct SCNVector3 _offset;	// 68 = 0x44
    struct SCNVector3 _direction;	// 80 = 0x50
    unsigned long long _categoryBitMask;	// 96 = 0x60
    SCNPhysicsWorld *_world;	// 104 = 0x68
    SCNNode *_node;	// 112 = 0x70
    struct c3dPhysicsField *_field;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000048e7d
+ (double)_displayScaleFactor;	// IMP=0x000000000004892a
+ (void)_setDisplayScaleFactor:(double)arg1;	// IMP=0x0000000000048918
+ (id)magneticField;	// IMP=0x0000000000047ffb
+ (id)electricField;	// IMP=0x0000000000047fe2
+ (id)springField;	// IMP=0x0000000000047fc9
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;	// IMP=0x0000000000047f69
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;	// IMP=0x0000000000047f09
+ (id)linearGravityField;	// IMP=0x0000000000047ef0
+ (id)radialGravityField;	// IMP=0x0000000000047ed7
+ (id)vortexField;	// IMP=0x0000000000047ebe
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047e78
+ (id)dragField;	// IMP=0x0000000000047e5f
+ (id)field;	// IMP=0x0000000000047e45
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048c7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000048b70
- (struct SCNVector3)evalAtLocation:(struct SCNVector3)arg1;	// IMP=0x0000000000048b04
- (struct c3dPhysicsField *)_handle;	// IMP=0x0000000000048afa
- (id)_owner;	// IMP=0x0000000000048af0
- (void)_setWorld:(id)arg1;	// IMP=0x0000000000048ae6
- (void)_setOwner:(id)arg1;	// IMP=0x00000000000489d9
- (void)_willRemoveFromPhysicsWorld;	// IMP=0x00000000000489a8
- (void)_removeOwner;	// IMP=0x0000000000048938
- (_Bool)supportsOffset;	// IMP=0x0000000000048910
- (_Bool)supportsDirection;	// IMP=0x0000000000048908
@property(nonatomic) struct SCNVector3 direction;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic, getter=isExclusive) _Bool exclusive;
- (_Bool)exclusive;	// IMP=0x0000000000048714
@property(nonatomic) _Bool usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic) long long scope;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) double minimumDistance;
@property(nonatomic) double falloffExponent;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) double strength;
- (id)copy;	// IMP=0x000000000004810e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000480c7
- (void)_setupCommonProperties;	// IMP=0x000000000004802a
- (struct c3dPhysicsField *)_createField;	// IMP=0x0000000000048014
- (void)dealloc;	// IMP=0x0000000000047dfd
- (id)init;	// IMP=0x0000000000047db1
- (void)_commonInit;	// IMP=0x0000000000047d5f

@end

