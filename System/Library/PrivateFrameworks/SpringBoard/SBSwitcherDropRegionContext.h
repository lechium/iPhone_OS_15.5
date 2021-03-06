//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBAppLayout;

@interface SBSwitcherDropRegionContext : NSObject <BSDescriptionProviding>
{
    _Bool _intersectingAppLayoutIsOnFirstRow;	// 8 = 0x8
    unsigned long long _currentDropRegion;	// 16 = 0x10
    SBAppLayout *_draggingAppLayout;	// 24 = 0x18
    long long _draggingLayoutRole;	// 32 = 0x20
    SBAppLayout *_intersectingAppLayout;	// 40 = 0x28
    long long _intersectingLayoutRole;	// 48 = 0x30
    long long _intersectingAppLayoutConfiguration;	// 56 = 0x38
    SBAppLayout *_closestVisibleAppLayout;	// 64 = 0x40
    SBAppLayout *_remainingAppLayout;	// 72 = 0x48
    SBAppLayout *_evictedAppLayout;	// 80 = 0x50
    struct CGSize _scaledIntersectingAppLayoutSize;	// 88 = 0x58
    struct CGSize _unscaledIntersectingAppLayoutSize;	// 104 = 0x68
    struct CGRect _originRect;	// 120 = 0x78
    struct CGRect _targetRect;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000516357
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) SBAppLayout *evictedAppLayout; // @synthesize evictedAppLayout=_evictedAppLayout;
@property(retain, nonatomic) SBAppLayout *remainingAppLayout; // @synthesize remainingAppLayout=_remainingAppLayout;
@property(retain, nonatomic) SBAppLayout *closestVisibleAppLayout; // @synthesize closestVisibleAppLayout=_closestVisibleAppLayout;
@property(nonatomic) _Bool intersectingAppLayoutIsOnFirstRow; // @synthesize intersectingAppLayoutIsOnFirstRow=_intersectingAppLayoutIsOnFirstRow;
@property(nonatomic) long long intersectingAppLayoutConfiguration; // @synthesize intersectingAppLayoutConfiguration=_intersectingAppLayoutConfiguration;
@property(nonatomic) struct CGSize unscaledIntersectingAppLayoutSize; // @synthesize unscaledIntersectingAppLayoutSize=_unscaledIntersectingAppLayoutSize;
@property(nonatomic) struct CGSize scaledIntersectingAppLayoutSize; // @synthesize scaledIntersectingAppLayoutSize=_scaledIntersectingAppLayoutSize;
@property(nonatomic) long long intersectingLayoutRole; // @synthesize intersectingLayoutRole=_intersectingLayoutRole;
@property(retain, nonatomic) SBAppLayout *intersectingAppLayout; // @synthesize intersectingAppLayout=_intersectingAppLayout;
@property(readonly, nonatomic) long long draggingLayoutRole; // @synthesize draggingLayoutRole=_draggingLayoutRole;
@property(readonly, nonatomic) SBAppLayout *draggingAppLayout; // @synthesize draggingAppLayout=_draggingAppLayout;
@property(nonatomic) unsigned long long currentDropRegion; // @synthesize currentDropRegion=_currentDropRegion;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000515ca2
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000515c52
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000515c36
- (id)succinctDescription;	// IMP=0x0000000000515be6
@property(readonly, copy) NSString *description;
- (long long)effectiveDroppingAppLayoutConfiguration;	// IMP=0x0000000000515a6c
- (id)displayItemsToReloadSnapshots;	// IMP=0x0000000000515944
- (id)droppedLeafAppLayout;	// IMP=0x0000000000515898
- (_Bool)isSwap;	// IMP=0x0000000000515807
- (id)finalTargetAppLayout;	// IMP=0x0000000000515276
@property(readonly, nonatomic) unsigned long long currentDropAction;
@property(readonly, nonatomic) SBAppLayout *intersectingLeafAppLayout;
@property(readonly, nonatomic) SBAppLayout *draggingLeafAppLayout;
- (id)initWithDraggingLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x0000000000515064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

