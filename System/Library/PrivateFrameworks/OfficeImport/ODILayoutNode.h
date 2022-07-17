//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, ODDAlgorithm, ODDPoint, ODDShape;

__attribute__((visibility("hidden")))
@interface ODILayoutNode : NSObject
{
    ODDPoint *mPoint;	// 8 = 0x8
    ODDAlgorithm *mAlgorithm;	// 16 = 0x10
    ODDShape *mShape;	// 24 = 0x18
    NSMutableArray *mChildren;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003466e0
- (id)initWithLayoutNode:(id)arg1 point:(id)arg2;	// IMP=0x0000000000346647
- (void)processShape:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x0000000000346d6c
- (void)processAlgorithm:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x0000000000346d5b
- (void)processForEach:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x0000000000346b91
- (void)processChoose:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x0000000000346aa0
- (void)processLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x0000000000346a0a
- (void)processLayoutObjects:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000034681f
- (id)initWithLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000034671e

@end
