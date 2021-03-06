//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKNode, SKRange;

__attribute__((visibility("hidden")))
@interface SKDistanceConstraint
{
    SKRange *_distanceRange;	// 24 = 0x18
    SKNode *_node;	// 32 = 0x20
    struct CGPoint _point;	// 40 = 0x28
}

+ (id)constraintWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;	// IMP=0x00000000000ea5d2
+ (id)constraintWithPoint:(struct CGPoint)arg1 distanceRange:(id)arg2;	// IMP=0x00000000000ea54f
+ (id)constraintWithNode:(id)arg1 distanceRange:(id)arg2;	// IMP=0x00000000000ea4ab
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e9e15
- (void).cxx_destruct;	// IMP=0x00000000000ea746
@property struct CGPoint point; // @synthesize point=_point;
@property __weak SKNode *node; // @synthesize node=_node;
@property(copy) SKRange *distanceRange; // @synthesize distanceRange=_distanceRange;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea3ba
- (_Bool)isEqualToDistanceConstraint:(id)arg1;	// IMP=0x00000000000ea195
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea07a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e9f0f
- (id)initWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;	// IMP=0x00000000000e9e1d

@end

