//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSBatteryFillView, NSArray, NSLayoutConstraint, SBUILegibilityLabel, UIImage, UIImageView, UIView, _UIBackdropView;

@interface _CSSingleBatteryChargingView
{
    UIView *_batteryContainerView;	// 24 = 0x18
    _UIBackdropView *_batteryBlurView;	// 32 = 0x20
    CSBatteryFillView *_batteryFillView;	// 40 = 0x28
    SBUILegibilityLabel *_chargePercentLabel;	// 48 = 0x30
    NSArray *_batteryConstraints;	// 56 = 0x38
    NSLayoutConstraint *_batteryTopOffset;	// 64 = 0x40
    UIImage *_batteryImage;	// 72 = 0x48
    UIImage *_boltImage;	// 80 = 0x50
    UIImageView *_boltImageView;	// 88 = 0x58
    _Bool _horizontalLayoutNeeded;	// 96 = 0x60
    _Bool _includesBoltImage;	// 97 = 0x61
    struct CGSize _batterySize;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000c6ce3
@property(nonatomic) _Bool includesBoltImage; // @synthesize includesBoltImage=_includesBoltImage;
@property(nonatomic) _Bool horizontalLayoutNeeded; // @synthesize horizontalLayoutNeeded=_horizontalLayoutNeeded;
@property(nonatomic) struct CGSize batterySize; // @synthesize batterySize=_batterySize;
- (id)_chargePercentFont;	// IMP=0x00000000000c6c3b
- (double)_batteryNoseOffset;	// IMP=0x00000000000c6b9b
- (void)_layoutBattery;	// IMP=0x00000000000c68ed
- (void)_layoutChargePercentLabel;	// IMP=0x00000000000c6649
- (void)layoutSubviews;	// IMP=0x00000000000c661b
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6609
- (double)desiredVisibilityDuration;	// IMP=0x00000000000c65fb
- (long long)batteryCount;	// IMP=0x00000000000c65f0
- (void)setBatteryVisible:(_Bool)arg1;	// IMP=0x00000000000c65a6
- (_Bool)batteryVisible;	// IMP=0x00000000000c6577
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x00000000000c6484
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x00000000000c639f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c5b9c

@end
