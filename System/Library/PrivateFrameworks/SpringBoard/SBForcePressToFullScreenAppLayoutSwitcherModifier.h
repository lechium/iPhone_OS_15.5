//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier
{
    SBAppLayout *_fromAppLayout;	// 24 = 0x18
    SBAppLayout *_toAppLayout;	// 32 = 0x20
    SBSwitcherModifier *_multitaskingModifier;	// 40 = 0x28
    long long _startingEnvironmentMode;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005df823
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x00000000005df811
- (_Bool)isSwitcherWindowVisible;	// IMP=0x00000000005df809
- (id)appLayoutsToCacheSnapshots;	// IMP=0x00000000005df759
- (_Bool)isHomeScreenContentRequired;	// IMP=0x00000000005df751
- (long long)wallpaperStyle;	// IMP=0x00000000005df746
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x00000000005df73e
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;	// IMP=0x00000000005df736
- (_Bool)isContainerStatusBarVisible;	// IMP=0x00000000005df72e
- (long long)homeScreenBackdropBlurType;	// IMP=0x00000000005df713
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000005df705
- (id)visibleAppLayouts;	// IMP=0x00000000005df6a0
- (_Bool)shouldAsyncRenderUntilDelay:(inout double *)arg1;	// IMP=0x00000000005df5aa
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4;	// IMP=0x00000000005df47a

@end
