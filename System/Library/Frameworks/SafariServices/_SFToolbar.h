//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIToolbar.h>

#import <SafariServices/_SFBarCommon-Protocol.h>
#import <SafariServices/_SFBarRegistrationObserving-Protocol.h>

@class NSString, UIBlurEffect, UIView, UIVisualEffectView, _SFBarTheme;
@protocol _SFBarRegistrationToken;

@interface _SFToolbar : UIToolbar <_SFBarCommon, _SFBarRegistrationObserving>
{
    UIVisualEffectView *_backgroundView;	// 8 = 0x8
    UIBlurEffect *_customBackdropEffect;	// 16 = 0x10
    UIView *_separator;	// 24 = 0x18
    _Bool _usesLegacyDarkBackdrop;	// 32 = 0x20
    long long _placement;	// 40 = 0x28
    _SFBarTheme *_theme;	// 48 = 0x30
    id <_SFBarRegistrationToken> _barRegistration;	// 56 = 0x38
    UIView *_superviewOwningLayout;	// 64 = 0x40
}

+ (_Bool)_deviceSupportsMinibars;	// IMP=0x0000000000074c72
- (void).cxx_destruct;	// IMP=0x00000000000754b0
@property(nonatomic) __weak UIView *superviewOwningLayout; // @synthesize superviewOwningLayout=_superviewOwningLayout;
@property(nonatomic) __weak id <_SFBarRegistrationToken> barRegistration; // @synthesize barRegistration=_barRegistration;
@property(nonatomic) _Bool usesLegacyDarkBackdrop; // @synthesize usesLegacyDarkBackdrop=_usesLegacyDarkBackdrop;
@property(retain, nonatomic) _SFBarTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
- (void)didChangeArrangedBarItems:(id)arg1;	// IMP=0x00000000000753f0
- (void)didCompleteBarRegistrationWithToken:(id)arg1;	// IMP=0x00000000000753dc
- (id)popoverSourceInfoForBarItem:(long long)arg1;	// IMP=0x0000000000075390
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000075165
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x0000000000075021
- (double)_contentMargin;	// IMP=0x0000000000074fd9
- (void)_cancelLinkAnimations;	// IMP=0x0000000000074f89
- (_Bool)isMinibar;	// IMP=0x0000000000074e4b
@property(copy, nonatomic) NSString *backdropGroupName;
- (void)layoutSubviews;	// IMP=0x0000000000074d52
@property(readonly, nonatomic) double baselineOffsetAdjustment;
- (void)_updateBackgroundViewEffects;	// IMP=0x0000000000074ae8
- (void)setItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000074a84
- (void)dealloc;	// IMP=0x0000000000074a46
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000749ff
- (id)initWithPlacement:(long long)arg1 hideBackground:(_Bool)arg2;	// IMP=0x0000000000074799
- (id)initWithPlacement:(long long)arg1;	// IMP=0x000000000007477f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
