//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBHomeToGridSwitcherModifier
{
}

- (id)topMostLayoutElements;	// IMP=0x000000000017988d
- (id)appLayoutsToCacheSnapshots;	// IMP=0x0000000000179732
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x0000000000179719
- (_Bool)isSwitcherWindowVisible;	// IMP=0x0000000000179711
- (_Bool)isHomeScreenContentRequired;	// IMP=0x0000000000179709
- (long long)wallpaperStyle;	// IMP=0x00000000001796fe
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x00000000001796f6
- (long long)homeScreenBackdropBlurType;	// IMP=0x00000000001796eb
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000017959d
- (double)titleOpacityForIndex:(unsigned long long)arg1;	// IMP=0x0000000000179460
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;	// IMP=0x0000000000179323
- (long long)headerStyleForIndex:(unsigned long long)arg1;	// IMP=0x000000000017931b
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;	// IMP=0x0000000000179189
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000178f5b
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x0000000000178dfe
- (id)visibleAppLayouts;	// IMP=0x0000000000178c7e
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x0000000000178b41
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000017891b
- (id)appLayoutToScrollToDuringTransition;	// IMP=0x00000000001788a1

@end
