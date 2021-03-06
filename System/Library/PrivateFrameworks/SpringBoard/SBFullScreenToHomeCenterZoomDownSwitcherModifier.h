//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier
{
    SBAppLayout *_appLayout;	// 24 = 0x18
    struct CGPoint _liftOffVelocity;	// 32 = 0x20
    double _offsetYPercentOfScreenHeight;	// 48 = 0x30
    SBCoplanarSwitcherModifier *_coplanarModifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000058e5fb
- (_Bool)_isIndexCenterZoomAppLayout:(unsigned long long)arg1;	// IMP=0x000000000058e572
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x000000000058e56a
- (_Bool)isSwitcherWindowVisible;	// IMP=0x000000000058e562
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;	// IMP=0x000000000058e55a
- (id)topMostLayoutElements;	// IMP=0x000000000058e43b
- (id)appLayoutsToCacheSnapshots;	// IMP=0x000000000058e429
- (_Bool)isHomeScreenContentRequired;	// IMP=0x000000000058e421
- (long long)wallpaperStyle;	// IMP=0x000000000058e416
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x000000000058e40e
- (long long)homeScreenBackdropBlurType;	// IMP=0x000000000058e3f0
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;	// IMP=0x000000000058e3c2
- (id)_opacitySettings;	// IMP=0x000000000058e348
- (id)_layoutSettings;	// IMP=0x000000000058e2ce
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x000000000058e1fb
- (id)visibleAppLayouts;	// IMP=0x000000000058e1d4
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x000000000058e10a
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000058e026
- (id)transitionWillBegin;	// IMP=0x000000000058df73
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x000000000058deb6
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 offsetYPercentOfScreenHeight:(double)arg3;	// IMP=0x000000000058de28

@end

