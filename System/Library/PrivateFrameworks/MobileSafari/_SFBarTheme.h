//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIBlurEffect, UIColor;

@interface _SFBarTheme : NSObject
{
    UIColor *_preferredControlsTintColor;	// 8 = 0x8
    _Bool _backdropIsDark;	// 16 = 0x10
    _Bool _backdropIsTinted;	// 17 = 0x11
    long long _tintStyle;	// 24 = 0x18
    UIColor *_controlsTintColor;	// 32 = 0x20
    UIColor *_preferredBarTintColor;	// 40 = 0x28
    UIColor *_platterProgressBarTintColor;	// 48 = 0x30
    long long _overrideUserInterfaceStyle;	// 56 = 0x38
    UIBlurEffect *_backdropEffect;	// 64 = 0x40
    NSArray *_backdropAdjustmentEffects;	// 72 = 0x48
}

+ (id)controlsTintColorForStyle:(long long)arg1;	// IMP=0x00000000000b5509
+ (_Bool)backdropIsDarkForStyle:(long long)arg1;	// IMP=0x00000000000b54fc
+ (id)backdropEffectForStyle:(long long)arg1;	// IMP=0x00000000000b54ef
+ (_Bool)prefersThemeColorEffect;	// IMP=0x00000000000b4c6b
+ (_Bool)canTintPrivateStyles;	// IMP=0x00000000000b4c63
+ (id)themeWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;	// IMP=0x00000000000b4be8
+ (id)themeWithBarTintStyle:(long long)arg1;	// IMP=0x00000000000b4bd1
+ (id)themeWithTheme:(id)arg1;	// IMP=0x00000000000b4b44
- (void).cxx_destruct;	// IMP=0x00000000000b55b1
@property(readonly, nonatomic) NSArray *backdropAdjustmentEffects; // @synthesize backdropAdjustmentEffects=_backdropAdjustmentEffects;
@property(readonly, nonatomic) UIBlurEffect *backdropEffect; // @synthesize backdropEffect=_backdropEffect;
@property(readonly, nonatomic) long long overrideUserInterfaceStyle; // @synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle;
@property(readonly, nonatomic) UIColor *platterProgressBarTintColor; // @synthesize platterProgressBarTintColor=_platterProgressBarTintColor;
@property(readonly, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(readonly, nonatomic) UIColor *controlsTintColor; // @synthesize controlsTintColor=_controlsTintColor;
@property(readonly, nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(readonly, nonatomic) _Bool backdropIsTinted; // @synthesize backdropIsTinted=_backdropIsTinted;
@property(readonly, nonatomic) _Bool backdropIsDark; // @synthesize backdropIsDark=_backdropIsDark;
@property(readonly, nonatomic) NSArray *backdropEffects;
- (void)applyBackdropEffectsToView:(id)arg1;	// IMP=0x00000000000b536f
- (id)description;	// IMP=0x00000000000b5264
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b514d
@property(readonly, nonatomic) _SFBarTheme *fallbackTheme;
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;	// IMP=0x00000000000b4c73

@end

