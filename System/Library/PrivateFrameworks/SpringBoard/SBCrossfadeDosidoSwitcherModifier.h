//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBHomeScreenSwitcherModifier;

@interface SBCrossfadeDosidoSwitcherModifier
{
    SBHomeScreenSwitcherModifier *_homeScreenModifier;	// 24 = 0x18
    SBAppLayout *_fromAppLayout;	// 32 = 0x20
    SBAppLayout *_toAppLayout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000058f55e
- (_Bool)_shouldEnsureHomeScreenVisible;	// IMP=0x000000000058f537
- (_Bool)_isToAppLayoutAtIndex:(unsigned long long)arg1;	// IMP=0x000000000058f4a0
- (_Bool)_isFromAppLayoutAtIndex:(unsigned long long)arg1;	// IMP=0x000000000058f409
- (id)appLayoutsToCacheSnapshots;	// IMP=0x000000000058f3f7
- (unsigned long long)transactionCompletionOptions;	// IMP=0x000000000058f3ec
- (id)topMostLayoutElements;	// IMP=0x000000000058f351
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000058f267
- (long long)wallpaperStyle;	// IMP=0x000000000058f21e
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x000000000058f20c
- (_Bool)isSwitcherWindowVisible;	// IMP=0x000000000058f204
- (_Bool)isHomeScreenContentRequired;	// IMP=0x000000000058f1be
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x000000000058f178
- (double)homeScreenBackdropBlurProgress;	// IMP=0x000000000058f0c6
- (long long)homeScreenBackdropBlurType;	// IMP=0x000000000058f07d
- (double)homeScreenDimmingAlpha;	// IMP=0x000000000058efcb
- (double)wallpaperScale;	// IMP=0x000000000058ef19
- (double)homeScreenScale;	// IMP=0x000000000058ee67
- (double)homeScreenAlpha;	// IMP=0x000000000058edb5
- (id)_opacitySettings;	// IMP=0x000000000058ed3b
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x000000000058ec84
- (id)visibleAppLayouts;	// IMP=0x000000000058ec1f
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x000000000058ebac
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000058eb22
- (id)transitionWillBegin;	// IMP=0x000000000058ea6f
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;	// IMP=0x000000000058e9c5

@end
