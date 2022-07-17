//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBUILegibility-Protocol.h>
#import <SpringBoard/_SBFVibrantView-Protocol.h>

@class NSString, SBSaturatedIconView, SBUILegibilityView, UIImage, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView, SBUILegibility>
{
    double _strength;	// 8 = 0x8
    _UILegibilitySettings *_legibilitySettings;	// 16 = 0x10
    struct UIEdgeInsets _hitTestEdgeInsets;	// 24 = 0x18
    UIView *_tintView;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    SBUILegibilityView *_legibilityView;	// 72 = 0x48
    SBSaturatedIconView *_saturatedIconView;	// 80 = 0x50
    UIImage *_grabberImage;	// 88 = 0x58
    _Bool _vibrancyAllowed;	// 96 = 0x60
    _SBFVibrantSettings *_vibrantSettings;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006a2894
@property(nonatomic, getter=isVibrancyAllowed) _Bool vibrancyAllowed; // @synthesize vibrancyAllowed=_vibrancyAllowed;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (id)_lazyLegibilityView;	// IMP=0x00000000006a25f1
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000000006a2513
- (_Bool)_shouldUseVibrancy;	// IMP=0x00000000006a2308
- (void)setAppStyleGrabberImage:(id)arg1;	// IMP=0x00000000006a228e
- (void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1;	// IMP=0x00000000006a20c3
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000006a2039
- (void)layoutSubviews;	// IMP=0x00000000006a1eb1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000006a1e73
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000006a1d80
- (id)initWithAdditionalTopPadding:(_Bool)arg1 invertVerticalInsets:(_Bool)arg2;	// IMP=0x00000000006a1936

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
