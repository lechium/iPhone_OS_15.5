//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesTree-Protocol.h>

@class NSArray, NSString;

@interface SBFTraitsPreferencesTree : NSObject <SBFTraitsPreferencesTree, BSDescriptionProviding>
{
    NSString *_debugName;	// 8 = 0x8
    NSArray *_rootChildren;	// 16 = 0x10
    _Bool _isFlatTree;	// 24 = 0x18
    long long _traversalType;	// 32 = 0x20
}

+ (id)treeWithNodesSpecifications:(id)arg1 traversalType:(long long)arg2 debugName:(id)arg3;	// IMP=0x000000000001221f
- (void).cxx_destruct;	// IMP=0x000000000001399e
@property(nonatomic) _Bool isFlatTree; // @synthesize isFlatTree=_isFlatTree;
@property(nonatomic) long long traversalType; // @synthesize traversalType=_traversalType;
@property(readonly, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (id)_recursiveDescriptionWithChildrenInZOrder:(_Bool)arg1;	// IMP=0x00000000000131db
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000131c9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000013179
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001311c
- (id)succinctDescription;	// IMP=0x00000000000130cc
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)recursiveDescription;	// IMP=0x0000000000013092
- (id)participantsTopologicalSort;	// IMP=0x0000000000012ebc
- (id)topologicalSort;	// IMP=0x0000000000012c09
- (id)_initWithRootChildren:(id)arg1 traversalType:(long long)arg2 debugName:(id)arg3;	// IMP=0x00000000000120bf

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

