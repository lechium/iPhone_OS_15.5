//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBlurEffect, UIColor, UITraitCollection;

@interface SFThemeColorBarTheme
{
    _Bool _appliesDarkeningOverlay;	// 8 = 0x8
    UIColor *_themeColor;	// 16 = 0x10
    UIColor *_overrideTintColor;	// 24 = 0x18
    long long _userInterfaceStyle;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    NSString *_backdropGroupName;	// 48 = 0x30
    UIBlurEffect *_overrideBackdropEffect;	// 56 = 0x38
}

+ (_Bool)prefersThemeColorEffect;	// IMP=0x00000000000922a6
+ (_Bool)canTintPrivateStyles;	// IMP=0x000000000009229e
- (void).cxx_destruct;	// IMP=0x00000000000928fb
@property(retain, nonatomic) UIBlurEffect *overrideBackdropEffect; // @synthesize overrideBackdropEffect=_overrideBackdropEffect;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) _Bool appliesDarkeningOverlay; // @synthesize appliesDarkeningOverlay=_appliesDarkeningOverlay;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(readonly, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000092776
- (id)backdropEffects;	// IMP=0x0000000000092682
- (id)backdropEffect;	// IMP=0x0000000000092629
- (void)applyBackdropEffectsToView:(id)arg1;	// IMP=0x0000000000092475
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;	// IMP=0x00000000000922ae

@end
