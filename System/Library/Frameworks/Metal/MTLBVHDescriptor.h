//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTLBVHDescriptor : NSObject
{
    _Bool _motion;	// 8 = 0x8
    float _primitiveCost;	// 12 = 0xc
    float _traversalCost;	// 16 = 0x10
    float _motionTraversalCost;	// 20 = 0x14
    float _primitiveMotionStartTime;	// 24 = 0x18
    float _primitiveMotionEndTime;	// 28 = 0x1c
    float _splitCapacity;	// 32 = 0x20
    float _minOverlap;	// 36 = 0x24
    unsigned long long _maxDepth;	// 40 = 0x28
    unsigned long long _branchingFactor;	// 48 = 0x30
    unsigned long long _minPrimitivesPerLeaf;	// 56 = 0x38
    unsigned long long _maxPrimitivesPerLeaf;	// 64 = 0x40
    NSArray *_geometryDescriptors;	// 72 = 0x48
    unsigned long long _primitiveKeyframeCount;	// 80 = 0x50
    unsigned long long _splitHeuristic;	// 88 = 0x58
}

@property(nonatomic) float minOverlap; // @synthesize minOverlap=_minOverlap;
@property(nonatomic) float splitCapacity; // @synthesize splitCapacity=_splitCapacity;
@property(nonatomic) unsigned long long splitHeuristic; // @synthesize splitHeuristic=_splitHeuristic;
@property(nonatomic) float primitiveMotionEndTime; // @synthesize primitiveMotionEndTime=_primitiveMotionEndTime;
@property(nonatomic) float primitiveMotionStartTime; // @synthesize primitiveMotionStartTime=_primitiveMotionStartTime;
@property(nonatomic) _Bool motion; // @synthesize motion=_motion;
@property(nonatomic) unsigned long long primitiveKeyframeCount; // @synthesize primitiveKeyframeCount=_primitiveKeyframeCount;
@property(nonatomic) float motionTraversalCost; // @synthesize motionTraversalCost=_motionTraversalCost;
@property(retain, nonatomic) NSArray *geometryDescriptors; // @synthesize geometryDescriptors=_geometryDescriptors;
@property(nonatomic) float traversalCost; // @synthesize traversalCost=_traversalCost;
@property(nonatomic) float primitiveCost; // @synthesize primitiveCost=_primitiveCost;
@property(nonatomic) unsigned long long maxPrimitivesPerLeaf; // @synthesize maxPrimitivesPerLeaf=_maxPrimitivesPerLeaf;
@property(nonatomic) unsigned long long minPrimitivesPerLeaf; // @synthesize minPrimitivesPerLeaf=_minPrimitivesPerLeaf;
@property(nonatomic) unsigned long long branchingFactor; // @synthesize branchingFactor=_branchingFactor;
@property(nonatomic) unsigned long long maxDepth; // @synthesize maxDepth=_maxDepth;
- (_Bool)primitiveMotion;	// IMP=0x0000000000013c43
- (void)dealloc;	// IMP=0x0000000000013c08
- (id)init;	// IMP=0x0000000000013b79

@end

