//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBChainableModifierDelegate-Protocol.h>

@class NSString, SBGestureSwitcherModifier, SBMixedGridSwitcherModifier;

@interface SBMixedGridHomeGestureRootSwitcherModifier <SBChainableModifierDelegate>
{
    SBMixedGridSwitcherModifier *_mixedGridModifier;	// 24 = 0x18
    SBGestureSwitcherModifier *_gestureModifier;	// 32 = 0x20
    _Bool _continuingGesture;	// 40 = 0x28
    _Bool _lastGestureWasAnArcSwipe;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x000000000021374d
- (id)_newMultitaskingModifier;	// IMP=0x0000000000213730
- (_Bool)canTransitionWithoutGestureModifier;	// IMP=0x0000000000213728
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;	// IMP=0x0000000000213720
- (id)handleGestureEvent:(id)arg1;	// IMP=0x0000000000213484
- (id)handleEvent:(id)arg1;	// IMP=0x0000000000213293
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;	// IMP=0x0000000000213042
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;	// IMP=0x0000000000212fda
- (long long)gestureType;	// IMP=0x0000000000212fcf
- (_Bool)completesWhenChildrenComplete;	// IMP=0x0000000000212fc7
- (id)initWithStartingEnvironmentMode:(long long)arg1 mixedGridModifier:(id)arg2;	// IMP=0x0000000000212ed8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

