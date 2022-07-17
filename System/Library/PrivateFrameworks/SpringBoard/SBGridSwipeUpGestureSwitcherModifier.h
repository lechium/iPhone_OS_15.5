//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier
{
    struct CGPoint _translation;	// 24 = 0x18
    _Bool _isApplyingContentViewScaleToSwitcherViewBounds;	// 40 = 0x28
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000623e4a
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(CDUnknownBlockType)arg1;	// IMP=0x0000000000623e24
- (void)_applyPrototypeSettings;	// IMP=0x0000000000623db5
- (long long)finalResponseForGestureEvent:(id)arg1;	// IMP=0x0000000000623ccb
- (id)handleGestureEvent:(id)arg1;	// IMP=0x0000000000623af6
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x0000000000623ae4
- (_Bool)isSwitcherWindowVisible;	// IMP=0x0000000000623adc
- (_Bool)isHomeScreenContentRequired;	// IMP=0x0000000000623ad4
- (long long)wallpaperStyle;	// IMP=0x0000000000623ac9
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x0000000000623ac1
- (long long)homeScreenBackdropBlurType;	// IMP=0x0000000000623ab6
- (id)visibleAppLayouts;	// IMP=0x0000000000623967
- (double)contentViewScale;	// IMP=0x0000000000623867
- (struct CGPoint)scrollViewContentOffset;	// IMP=0x00000000006236ec
- (struct CGRect)switcherViewBounds;	// IMP=0x0000000000623608
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x00000000006235bb
- (id)initWithGestureID:(id)arg1;	// IMP=0x0000000000623546

@end
