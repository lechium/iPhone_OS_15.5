//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBMixedGridSwitcherModifier;

@interface SBRelocateFloatingAppLayoutSwitcherModifier
{
    SBAppLayout *_floatingAppLayout;	// 24 = 0x18
    long long _floatingConfiguration;	// 32 = 0x20
    long long _direction;	// 40 = 0x28
    SBMixedGridSwitcherModifier *_mixedGridModifier;	// 48 = 0x30
    _Bool _moveFloatingAppToLeadingSide;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000046e2c1
- (_Bool)_comingFromSwitcherWithLeadingFloatingApp;	// IMP=0x000000000046e29a
- (_Bool)_goingToSwitcherWithLeadingFloatingApp;	// IMP=0x000000000046e273
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x000000000046e0c1
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000046e005
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000046dce0
- (id)handleTimerEvent:(id)arg1;	// IMP=0x000000000046dbb7
- (id)transitionDidEnd;	// IMP=0x000000000046daff
- (id)transitionWillUpdate;	// IMP=0x000000000046da0b
- (id)transitionWillBegin;	// IMP=0x000000000046d953
- (id)initWithTransitionID:(id)arg1 floatingAppLayout:(id)arg2 floatingConfiguration:(long long)arg3 direction:(long long)arg4 mixedGridModifier:(id)arg5;	// IMP=0x000000000046d877

@end

