//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKNode;

__attribute__((visibility("hidden")))
@interface SKReach
{
    SKNode *_ikRoot;	// 8 = 0x8
    struct CGPoint _goalPosition;	// 16 = 0x10
    NSMutableArray *_ikChain;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    _Bool _timeConstrained;	// 48 = 0x30
    double _zRotationSpeed;	// 56 = 0x38
}

+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 velocity:(double)arg3;	// IMP=0x000000000002e300
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3;	// IMP=0x000000000002e249
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4;	// IMP=0x000000000002e0cc
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4;	// IMP=0x000000000002e0c4
- (void).cxx_destruct;	// IMP=0x000000000002f794
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f6ba
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000002f51e
- (void)solveIKWithTarget:(id)arg1;	// IMP=0x000000000002e4b4
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000002e199
- (id)init;	// IMP=0x000000000002e030

@end
