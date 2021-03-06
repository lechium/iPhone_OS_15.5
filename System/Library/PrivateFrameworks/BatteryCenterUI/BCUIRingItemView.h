//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <BatteryCenterUI/BCUIBatteryDeviceDisplaying-Protocol.h>
#import <BatteryCenterUI/MTVisualStylingRequiring-Protocol.h>

@class BCUIChargeRing, MTVisualStylingProvider, NSArray, NSNumberFormatter, NSString, UIImage, UILabel;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIRingItemView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>
{
    BCUIChargeRing *_chargeRing;	// 8 = 0x8
    UILabel *_chargeLabel;	// 16 = 0x10
    NSNumberFormatter *_percentChargeFormatter;	// 24 = 0x18
    MTVisualStylingProvider *_visualStylingProvider;	// 32 = 0x20
    NSString *_contentSizeCategory;	// 40 = 0x28
    _Bool _empty;	// 48 = 0x30
    double _scaleFactor;	// 56 = 0x38
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 64 = 0x40
    long long _ringItemViewStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003b6f
@property(nonatomic) long long ringItemViewStyle; // @synthesize ringItemViewStyle=_ringItemViewStyle;
@property(nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (id)_effectiveContentSizeCategoryForTraitCollection:(id)arg1;	// IMP=0x0000000000003ac8
- (_Bool)_isPercentSymbolEnabledForRingItemStyle:(long long)arg1 andContentSizeCategory:(id)arg2;	// IMP=0x0000000000003aa1
- (id)_percentChargeString:(long long)arg1;	// IMP=0x0000000000003a1a
- (id)_lazyPercentChargeFormatter;	// IMP=0x00000000000039c9
- (struct CGRect)_frameForChargeLabelWithSize:(struct CGSize)arg1 baseLineOffsetFromBoundsTop:(double)arg2 chargeRingSize:(struct CGSize)arg3 style:(long long)arg4 inBounds:(struct CGRect)arg5 scale:(double)arg6;	// IMP=0x00000000000038bb
- (struct CGSize)_sizeForChargeLabel:(id)arg1 withStyle:(long long)arg2 inBounds:(struct CGRect)arg3 scale:(double)arg4;	// IMP=0x000000000000382f
- (void)_stopAutomaticallyUpdatingVisualStyling;	// IMP=0x00000000000037f8
- (void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;	// IMP=0x0000000000003742
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1;	// IMP=0x000000000000353c
- (id)_visualStylingProviderForCategory:(long long)arg1;	// IMP=0x000000000000351a
- (void)_updateFontForChargeLabelForStyle:(long long)arg1;	// IMP=0x0000000000003404
- (void)_configureChargeLabelForStyle:(long long)arg1;	// IMP=0x00000000000032cd
- (struct CGRect)_frameForChargeRingWithSize:(struct CGSize)arg1 chargeLabelSize:(struct CGSize)arg2 style:(long long)arg3 inBounds:(struct CGRect)arg4 scale:(double)arg5;	// IMP=0x00000000000031a7
- (struct CGSize)_sizeForChargeRingWithStyle:(long long)arg1 inBounds:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x0000000000003147
- (id)_chargeRing;	// IMP=0x00000000000030ae
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x0000000000002f8e
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000002ec0
- (void)layoutSubviews;	// IMP=0x00000000000028ad
- (void)didMoveToWindow;	// IMP=0x0000000000002813
- (void)didMoveToSuperview;	// IMP=0x00000000000027a2
@property(retain, nonatomic) UIImage *glyph;
@property(nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled;
@property(nonatomic, getter=isCharging) _Bool charging;
@property(nonatomic, getter=isLowCharge) _Bool lowCharge;
@property(nonatomic) long long percentCharge;
@property(nonatomic) double ringLineWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

