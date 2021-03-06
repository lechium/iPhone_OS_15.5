//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBFloatingFluidSwitcherRootSwitcherModifier
{
    _Bool _floatingSwitcherVisible;	// 24 = 0x18
    SBAppLayout *_activeAppLayout;	// 32 = 0x20
    long long _interfaceOrientation;	// 40 = 0x28
    long long _floatingConfiguration;	// 48 = 0x30
    struct CGRect _containerViewBounds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005b284f
@property(nonatomic) struct CGRect containerViewBounds; // @synthesize containerViewBounds=_containerViewBounds;
@property(nonatomic, getter=isFloatingSwitcherVisible) _Bool floatingSwitcherVisible; // @synthesize floatingSwitcherVisible=_floatingSwitcherVisible;
@property(nonatomic) long long floatingConfiguration; // @synthesize floatingConfiguration=_floatingConfiguration;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) SBAppLayout *activeAppLayout; // @synthesize activeAppLayout=_activeAppLayout;
- (void)_updateContainerViewBounds;	// IMP=0x00000000005b2746
- (id)_newMultitaskingModifier;	// IMP=0x00000000005b272c
- (Class)_defaultMultitaskingModifierClass;	// IMP=0x00000000005b271b
- (id)transientlyVisibleSlideOverTongueModifierForEvent:(id)arg1;	// IMP=0x00000000005b25e4
- (id)userScrollingModifierForScrollEvent:(id)arg1;	// IMP=0x00000000005b25cb
- (id)lowEndHardwareModifier;	// IMP=0x00000000005b2551
- (id)removalModifierForRemovalEvent:(id)arg1;	// IMP=0x00000000005b249d
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;	// IMP=0x00000000005b23fd
- (id)highlightModifierForHighlightEvent:(id)arg1;	// IMP=0x00000000005b23f5
- (id)insertionModifierForInsertionEvent:(id)arg1;	// IMP=0x00000000005b236e
- (id)_entityRemovalModifierForEvent:(id)arg1;	// IMP=0x00000000005b21ba
- (id)multitaskingModifierForEvent:(id)arg1;	// IMP=0x00000000005b2144
- (id)floorModifierForGestureEvent:(id)arg1;	// IMP=0x00000000005b2132
- (id)shelfModifierForTransitionEvent:(id)arg1;	// IMP=0x00000000005b1eea
- (id)floorModifierForTransitionEvent:(id)arg1;	// IMP=0x00000000005b1d27
- (id)transitionModifierForMainTransitionEvent:(id)arg1;	// IMP=0x00000000005b1468
- (id)gestureModifierForGestureEvent:(id)arg1;	// IMP=0x00000000005b1197
- (id)topMostLayoutElements;	// IMP=0x00000000005b0f9a
- (id)appExposeAccessoryButtonsBundleIdentifier;	// IMP=0x00000000005b0f92
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;	// IMP=0x00000000005b0e34
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;	// IMP=0x00000000005b0c41
- (id)handleEvent:(id)arg1;	// IMP=0x00000000005b0a2b
- (void)setDelegate:(id)arg1;	// IMP=0x00000000005b09de
- (id)init;	// IMP=0x00000000005b0960

@end

