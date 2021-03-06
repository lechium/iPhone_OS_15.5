//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface SCNPhysicsContact : NSObject
{
    SCNNode *_nodeA;	// 8 = 0x8
    SCNNode *_nodeB;	// 16 = 0x10
    struct SCNVector3 _contactPoint;	// 24 = 0x18
    struct SCNVector3 _contactNormal;	// 36 = 0x24
    double _collisionImpulse;	// 48 = 0x30
    double _distance;	// 56 = 0x38
    double _fraction;	// 64 = 0x40
    long long _updateCount;	// 72 = 0x48
}

+ (id)_contactWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2;	// IMP=0x000000000005e1c5
- (_Bool)_shouldPostUpdate;	// IMP=0x000000000005e25b
- (void)_prepareUpdate;	// IMP=0x000000000005e251
@property(readonly, nonatomic) double sweepTestFraction;
@property(readonly, nonatomic) double penetrationDistance;
@property(readonly, nonatomic) double collisionImpulse;
@property(readonly, nonatomic) struct SCNVector3 contactNormal;
@property(readonly, nonatomic) struct SCNVector3 contactPoint;
@property(readonly, nonatomic) SCNNode *nodeB;
@property(readonly, nonatomic) SCNNode *nodeA;
- (void)_setupWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2 point:(const struct btManifoldPoint *)arg3;	// IMP=0x000000000005e0e5
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;	// IMP=0x000000000005e0af
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3)arg3 collisionImpulse:(struct SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6;	// IMP=0x000000000005e01a
- (id)description;	// IMP=0x000000000005defe
- (void)dealloc;	// IMP=0x000000000005deb4

@end

