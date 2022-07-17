//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000639ddf
- (id)_newMultitaskingModifier;	// IMP=0x0000000000639dc2
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;	// IMP=0x0000000000639dba
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;	// IMP=0x0000000000639828
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;	// IMP=0x0000000000639640
- (long long)gestureType;	// IMP=0x0000000000639635
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;	// IMP=0x0000000000639546

@end
