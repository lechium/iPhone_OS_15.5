//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIButtonBarAppearanceDelegate-Protocol.h>

@class NSString, UIColor, UIImage, UIImageSymbolConfiguration, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarContentView <_UIButtonBarAppearanceDelegate>
{
    _Bool _barIsBlack;	// 8 = 0x8
    _Bool _centerTextButtons;	// 9 = 0x9
    Class _appearanceGuideClass;	// 16 = 0x10
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 24 = 0x18
    UIImage *_backIndicatorMaskImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023ebab
@property(retain, nonatomic) UIImage *backIndicatorMaskImage; // @synthesize backIndicatorMaskImage=_backIndicatorMaskImage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(nonatomic) _Bool centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic) _Bool barIsBlack; // @synthesize barIsBlack=_barIsBlack;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;	// IMP=0x000000000023eb05
@property(retain, nonatomic) UIImage *backIndicatorImage;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x000000000023eada
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000023eac8
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000023e91e
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e90c
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e85b
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e849
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e689
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000023e677
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000023e46d
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e45b
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e29b
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e289
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000023e18b
- (void)_setTintColor:(id)arg1;	// IMP=0x000000000023e179
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x000000000023e0c0
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000023e0ae
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000023de50
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000023de3e
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000023de23
- (void)_appearanceChanged;	// IMP=0x000000000023dde6
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (double)absorptionForItem:(id)arg1;	// IMP=0x000000000023ddcb
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;	// IMP=0x000000000023ddae
@property(readonly, nonatomic) _Bool isRTL;
@property(readonly, nonatomic) _Bool compactMetrics;
@property(readonly, nonatomic) long long barType;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000023dd18

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end
