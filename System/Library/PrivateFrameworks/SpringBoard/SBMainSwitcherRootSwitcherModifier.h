//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, SBAppLayout, SBDisplayItem;

@interface SBMainSwitcherRootSwitcherModifier
{
    struct CGSize _fullScreenCardSize;	// 24 = 0x18
    struct CGSize _floatingCardSize;	// 40 = 0x28
    long long _environmentMode;	// 56 = 0x38
    _Bool _floatingSwitcherVisible;	// 64 = 0x40
    _Bool _isInPeekState;	// 65 = 0x41
    SBAppLayout *_appLayout;	// 72 = 0x48
    SBAppLayout *_floatingAppLayout;	// 80 = 0x50
    long long _floatingConfiguration;	// 88 = 0x58
    NSSet *_previousDisplayItems;	// 96 = 0x60
    NSSet *_displayItems;	// 104 = 0x68
    SBDisplayItem *_lastGesturedDisplayItem;	// 112 = 0x70
    SBDisplayItem *_lastPulsedDisplayItem;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000020cc91
- (_Bool)_correctFloorModifierToHandleEvent;	// IMP=0x000000000020cbfb
- (void)_ensureModifier:(id)arg1 startsInFinalStateOfEvent:(id)arg2;	// IMP=0x000000000020cadb
- (void)_setCardSizesWithEvent:(id)arg1;	// IMP=0x000000000020c9f4
- (id)_newMultitaskingModifierForEnvironmentMode:(long long)arg1;	// IMP=0x000000000020c921
- (id)_createNewDefaultFloorModifier;	// IMP=0x000000000020c8b0
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg1;	// IMP=0x000000000020c829
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;	// IMP=0x000000000020c7a8
- (id)shelfModifierForTransitionEvent:(id)arg1;	// IMP=0x000000000020c511
- (id)userScrollingModifierForScrollEvent:(id)arg1;	// IMP=0x000000000020c4e3
- (id)multitaskingModifierForEvent:(id)arg1;	// IMP=0x000000000020c4db
- (id)floorModifierForGestureEvent:(id)arg1;	// IMP=0x000000000020c4c9
- (id)floorModifierForTransitionEvent:(id)arg1;	// IMP=0x000000000020c20e
- (id)removalModifierForRemovalEvent:(id)arg1;	// IMP=0x000000000020c151
- (id)highlightModifierForHighlightEvent:(id)arg1;	// IMP=0x000000000020c09a
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;	// IMP=0x000000000020bfe6
- (id)insertionModifierForInsertionEvent:(id)arg1;	// IMP=0x000000000020bf51
- (id)transitionModifierForMainTransitionEvent:(id)arg1;	// IMP=0x000000000020ad75
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;	// IMP=0x000000000020ac4c
- (id)handleGestureEvent:(id)arg1;	// IMP=0x000000000020a8a5
- (id)handleTransitionEvent:(id)arg1;	// IMP=0x000000000020a4f9
- (id)gestureModifierForGestureEvent:(id)arg1;	// IMP=0x000000000020a35b
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;	// IMP=0x000000000020a256
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg1 fromAppLayouts:(id)arg2;	// IMP=0x0000000000209f12
- (id)init;	// IMP=0x0000000000209ecf

@end

