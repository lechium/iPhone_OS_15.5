//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUIconContentViewDelegate-Protocol.h>

@class HUIconContentView, NSString, UIVisualEffect, UIVisualEffectView;
@protocol HFIconDescriptor;

@interface HUIconView : UIView <HUIconContentViewDelegate>
{
    _Bool _disableContinuousAnimation;	// 8 = 0x8
    UIVisualEffect *_vibrancyEffect;	// 16 = 0x10
    long long _contentMode;	// 24 = 0x18
    unsigned long long _iconSize;	// 32 = 0x20
    unsigned long long _displayContext;	// 40 = 0x28
    double _vibrancyEffectAnimationDuration;	// 48 = 0x30
    unsigned long long _displayStyle;	// 56 = 0x38
    UIVisualEffectView *_effectView;	// 64 = 0x40
    HUIconContentView *_currentIconContentView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000045c416
@property(retain, nonatomic) HUIconContentView *currentIconContentView; // @synthesize currentIconContentView=_currentIconContentView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) double vibrancyEffectAnimationDuration; // @synthesize vibrancyEffectAnimationDuration=_vibrancyEffectAnimationDuration;
@property(nonatomic) _Bool disableContinuousAnimation; // @synthesize disableContinuousAnimation=_disableContinuousAnimation;
@property(nonatomic) unsigned long long displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2;	// IMP=0x000000000045c331
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000045bcb0
- (void)_updateVisualEffectStateForVibrancyEffectChange:(_Bool)arg1;	// IMP=0x000000000045bc9c
- (id)_defaultVibrancyEffect;	// IMP=0x000000000045bc32
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
- (void)setVibrancyEffect:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000045bb60
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000045bac0
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000045ba32
- (void)layoutSubviews;	// IMP=0x000000000045b756
- (void)reclaimIconIfPossible;	// IMP=0x000000000045b719
- (void)renounceIconIfPossible;	// IMP=0x000000000045b6dc
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000045b1f4
- (id)contentContainerView;	// IMP=0x000000000045b1a4
- (id)initWithFrame:(struct CGRect)arg1 contentMode:(long long)arg2;	// IMP=0x000000000045b0a7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000045b090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

