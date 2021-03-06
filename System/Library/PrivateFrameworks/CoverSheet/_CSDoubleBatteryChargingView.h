//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSBatteryFillView, SBUILegibilityLabel, UIImageView, UIView, _UIBackdropView;

@interface _CSDoubleBatteryChargingView
{
    UIView *_batteryContainerView;	// 24 = 0x18
    UIView *_internalBatteryContainerView;	// 32 = 0x20
    UIView *_externalBatteryContainerView;	// 40 = 0x28
    _UIBackdropView *_internalBatteryBlurView;	// 48 = 0x30
    _UIBackdropView *_externalBatteryBlurView;	// 56 = 0x38
    CSBatteryFillView *_internalBatteryFillView;	// 64 = 0x40
    CSBatteryFillView *_externalBatteryFillView;	// 72 = 0x48
    SBUILegibilityLabel *_internalChargePercentLabel;	// 80 = 0x50
    SBUILegibilityLabel *_externalChargePercentLabel;	// 88 = 0x58
    SBUILegibilityLabel *_internalChargingNameLabel;	// 96 = 0x60
    SBUILegibilityLabel *_externalChargingNameLabel;	// 104 = 0x68
    UIImageView *_internalChargingIndicator;	// 112 = 0x70
    UIImageView *_externalChargingIndicator;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c89eb
- (id)_chargePercentFont;	// IMP=0x00000000000c8930
- (double)_deviceChargeBaselineOffset;	// IMP=0x00000000000c8922
- (double)_deviceNameBaselineOffset;	// IMP=0x00000000000c88ac
- (double)_chargingBoltTopOffset;	// IMP=0x00000000000c8836
- (double)_batteryTopPadding;	// IMP=0x00000000000c87fa
- (double)_spaceBetweenBatteryImages;	// IMP=0x00000000000c8784
- (void)layoutSubviews;	// IMP=0x00000000000c7df2
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7de0
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x00000000000c7bba
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x00000000000c796d
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x00000000000c779e
- (double)desiredVisibilityDuration;	// IMP=0x00000000000c7790
- (long long)batteryCount;	// IMP=0x00000000000c7785
- (void)setBatteryVisible:(_Bool)arg1;	// IMP=0x00000000000c773b
- (_Bool)batteryVisible;	// IMP=0x00000000000c770c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c6d8b

@end

