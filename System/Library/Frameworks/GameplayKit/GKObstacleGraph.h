//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface GKObstacleGraph
{
    NSMutableArray *_sourceObstacles;	// 8 = 0x8
    void *_cObstacleGraph;	// 16 = 0x10
    Class _nodeClass;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005507b
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;	// IMP=0x00000000000545ff
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;	// IMP=0x0000000000054508
- (void).cxx_destruct;	// IMP=0x00000000000559d3
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000559c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000558a5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055083
- (Class)nodeClass;	// IMP=0x0000000000055066
- (_Bool)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;	// IMP=0x0000000000054fba
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;	// IMP=0x0000000000054f12
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;	// IMP=0x0000000000054e6a
- (id)nodesForObstacle:(id)arg1;	// IMP=0x0000000000054df1
- (void)removeObstacles:(id)arg1;	// IMP=0x0000000000054c54
- (void)removeAllObstacles;	// IMP=0x0000000000054c3f
- (void)addObstacles:(id)arg1;	// IMP=0x0000000000054aa2
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;	// IMP=0x0000000000054a14
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;	// IMP=0x0000000000054986
- (void)connectNodeUsingObstacles:(id)arg1;	// IMP=0x0000000000054920
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;	// IMP=0x0000000000054676
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;	// IMP=0x0000000000054578
@property(readonly, nonatomic) float bufferRadius;
- (id)mutObstacles;	// IMP=0x00000000000544dd
@property(readonly, nonatomic) NSArray *obstacles;
- (void *)cObstacleGraph;	// IMP=0x00000000000544b7
- (void *)makeCGraph;	// IMP=0x0000000000054456

@end

