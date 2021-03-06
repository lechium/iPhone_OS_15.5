//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <BatteryCenterUI/BCUIBatteryDeviceDisplaying-Protocol.h>
#import <BatteryCenterUI/MTVisualStylingRequiring-Protocol.h>

@class BCUIRingCapShadow, BCUIRingView, CABackdropLayer, MTVisualStylingProvider, NSArray, NSString, UIImage, UIImageView;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIChargeRing : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>
{
    BCUIRingView *_baseRing;	// 8 = 0x8
    BCUIRingView *_chargeRing;	// 16 = 0x10
    BCUIRingCapShadow *_ringCapShadow;	// 24 = 0x18
    UIImageView *_boltMaskImageView;	// 32 = 0x20
    UIImageView *_boltImageView;	// 40 = 0x28
    CABackdropLayer *_captureBackdrop;	// 48 = 0x30
    UIImageView *_glyphImageView;	// 56 = 0x38
    MTVisualStylingProvider *_visualStylingProvider;	// 64 = 0x40
    MTVisualStylingProvider *_baseRingVisualStylingProvider;	// 72 = 0x48
    _Bool _lowCharge;	// 80 = 0x50
    _Bool _charging;	// 81 = 0x51
    _Bool _lowPowerModeEnabled;	// 82 = 0x52
    double _lineWidth;	// 88 = 0x58
    long long _percentCharge;	// 96 = 0x60
    UIImage *_glyph;	// 104 = 0x68
    double _scaleFactor;	// 112 = 0x70
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000008818
@property(nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) UIImage *glyph; // @synthesize glyph=_glyph;
@property(nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property(nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic, getter=isLowCharge) _Bool lowCharge; // @synthesize lowCharge=_lowCharge;
@property(nonatomic) long long percentCharge; // @synthesize percentCharge=_percentCharge;
- (void)_updateVisualStylingForBolt;	// IMP=0x000000000000843c
- (void)_configureCaptureBackdropIfNecessary;	// IMP=0x000000000000825a
- (void)_updateVisualStylingForBaseRingIfNecessary;	// IMP=0x00000000000081b3
- (id)_ringVisualStylingProvider;	// IMP=0x00000000000080a8
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1;	// IMP=0x0000000000007fd2
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1;	// IMP=0x0000000000007f7e
- (void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)arg1 observerBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f31
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1;	// IMP=0x0000000000007d2b
- (id)_visualStylingProviderForCategory:(long long)arg1;	// IMP=0x0000000000007d16
- (void)_configureRingCapShadowIfNecessary;	// IMP=0x00000000000079d1
- (_Bool)_shouldShowRingCapShadow;	// IMP=0x00000000000079ae
- (_Bool)_isPastThresholdForRingCapShadow;	// IMP=0x0000000000007988
- (void)_configureBoltImageViewIfNecessary;	// IMP=0x00000000000077e3
- (void)_configureBoltMaskImageViewIfNecessary;	// IMP=0x000000000000761a
- (id)_glyphImageView;	// IMP=0x000000000000755b
- (id)_baseRing;	// IMP=0x000000000000749e
- (id)_chargeRing;	// IMP=0x000000000000740d
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000072e6
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000000727f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000007211
- (void)layoutSubviews;	// IMP=0x00000000000068c2
- (void)didMoveToWindow;	// IMP=0x0000000000006828
- (void)didMoveToSuperview;	// IMP=0x00000000000067b7
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEmpty) _Bool empty;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

