//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToSwitcherSwitcherModifier
{
    SBAppLayout *_selectedAppLayout;	// 24 = 0x18
    long long _startingEnvironmentMode;	// 32 = 0x20
    SBSwitcherModifier *_multitaskingModifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005e1fc0
- (id)_dismissForEmptySwitcherResponseName;	// IMP=0x00000000005e1f9b
- (id)_appLayoutToScrollToDuringTransition;	// IMP=0x00000000005e1e9b
- (unsigned long long)_indexOfSelectedAppLayout;	// IMP=0x00000000005e1e36
- (id)appLayoutsToCacheSnapshots;	// IMP=0x00000000005e1d0b
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x00000000005e1cf9
- (_Bool)isSwitcherWindowVisible;	// IMP=0x00000000005e1cf1
- (_Bool)isHomeScreenContentRequired;	// IMP=0x00000000005e1ce9
- (long long)wallpaperStyle;	// IMP=0x00000000005e1cde
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x00000000005e1cd6
- (long long)homeScreenBackdropBlurType;	// IMP=0x00000000005e1cbb
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;	// IMP=0x00000000005e1cb3
- (double)containerStatusBarAnimationDuration;	// IMP=0x00000000005e1bf6
- (_Bool)isContainerStatusBarVisible;	// IMP=0x00000000005e1bee
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000005e1be0
- (id)_layoutSettings;	// IMP=0x00000000005e1b3f
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000005e1a9a
- (id)visibleAppLayouts;	// IMP=0x00000000005e1904
- (id)handleTimerEvent:(id)arg1;	// IMP=0x00000000005e17aa
- (id)transitionWillBegin;	// IMP=0x00000000005e1563
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;	// IMP=0x00000000005e14a8

@end

