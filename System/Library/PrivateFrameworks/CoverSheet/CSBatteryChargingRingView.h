//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCBatteryDevice, BSTimer, CABackdropLayer, CALayer, CSMagSafeAccessoryConfiguration, CSMagSafePowerStatus, CSMagSafeSilhouetteConfiguration, CSRingLayer, SBUILegibilityLabel, UIImageView, UIView;

@interface CSBatteryChargingRingView
{
    CSMagSafeAccessoryConfiguration *_configuration;	// 8 = 0x8
    CSMagSafePowerStatus *_internalStatus;	// 16 = 0x10
    CSMagSafePowerStatus *_externalStatus;	// 24 = 0x18
    CABackdropLayer *_ringBlurBackdropLayer;	// 32 = 0x20
    CALayer *_chargingBoltGlyph;	// 40 = 0x28
    CABackdropLayer *_backgroundRadiusBackdropLayer;	// 48 = 0x30
    CABackdropLayer *_backgroundBackdropLayer;	// 56 = 0x38
    CABackdropLayer *_averageColorBackdropLayer;	// 64 = 0x40
    CALayer *_ringTempOverlayLayer;	// 72 = 0x48
    CALayer *_splashRing;	// 80 = 0x50
    CALayer *_splashRing1;	// 88 = 0x58
    CALayer *_splashRing3;	// 96 = 0x60
    CSRingLayer *_batteryLevelRing;	// 104 = 0x68
    CSRingLayer *_trackFillRingLayer;	// 112 = 0x70
    CSRingLayer *_ringBlurLayer;	// 120 = 0x78
    SBUILegibilityLabel *_chargePercentLabel;	// 128 = 0x80
    CALayer *_auxiliaryBatteryContainerLayer;	// 136 = 0x88
    CSRingLayer *_auxiliaryBatteryLevelRing;	// 144 = 0x90
    CSRingLayer *_auxiliaryBatteryTrackFillRingLayer;	// 152 = 0x98
    UIView *_auxiliaryBatteryPillLevelView;	// 160 = 0xa0
    UIView *_auxiliaryBatteryPillTrackView;	// 168 = 0xa8
    UIView *_auxiliaryBatteryPillClippingView;	// 176 = 0xb0
    SBUILegibilityLabel *_auxiliaryBatteryLabel;	// 184 = 0xb8
    UIImageView *_auxiliaryGlyphImageView;	// 192 = 0xc0
    CALayer *_auxiliaryGlyphLayer;	// 200 = 0xc8
    BSTimer *_longTailShortcutTimer;	// 208 = 0xd0
    CDUnknownBlockType _longTailShortcutTimerHandler;	// 216 = 0xd8
    CALayer *_auxiliaryChargingBoltGlyph;	// 224 = 0xe0
    CABackdropLayer *_auxiliaryCaptureBackdrop;	// 232 = 0xe8
    UIImageView *_boltMaskImageView;	// 240 = 0xf0
    CALayer *_auxiliaryChargingBoltGlyphMask;	// 248 = 0xf8
    CALayer *_silhouetteLayer;	// 256 = 0x100
    CSMagSafeSilhouetteConfiguration *_silhouette;	// 264 = 0x108
    BCBatteryDevice *_internalBattery;	// 272 = 0x110
    UIView *_chargingContainerView;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000000008982d
@property(retain, nonatomic) UIView *chargingContainerView; // @synthesize chargingContainerView=_chargingContainerView;
@property(retain, nonatomic) BCBatteryDevice *internalBattery; // @synthesize internalBattery=_internalBattery;
@property(retain, nonatomic) CSMagSafeSilhouetteConfiguration *silhouette; // @synthesize silhouette=_silhouette;
@property(retain, nonatomic) CALayer *silhouetteLayer; // @synthesize silhouetteLayer=_silhouetteLayer;
@property(retain, nonatomic) CALayer *auxiliaryChargingBoltGlyphMask; // @synthesize auxiliaryChargingBoltGlyphMask=_auxiliaryChargingBoltGlyphMask;
@property(retain, nonatomic) UIImageView *boltMaskImageView; // @synthesize boltMaskImageView=_boltMaskImageView;
@property(retain, nonatomic) CABackdropLayer *auxiliaryCaptureBackdrop; // @synthesize auxiliaryCaptureBackdrop=_auxiliaryCaptureBackdrop;
@property(retain, nonatomic) CALayer *auxiliaryChargingBoltGlyph; // @synthesize auxiliaryChargingBoltGlyph=_auxiliaryChargingBoltGlyph;
@property(copy, nonatomic) CDUnknownBlockType longTailShortcutTimerHandler; // @synthesize longTailShortcutTimerHandler=_longTailShortcutTimerHandler;
@property(retain, nonatomic) BSTimer *longTailShortcutTimer; // @synthesize longTailShortcutTimer=_longTailShortcutTimer;
@property(retain, nonatomic) CALayer *auxiliaryGlyphLayer; // @synthesize auxiliaryGlyphLayer=_auxiliaryGlyphLayer;
@property(retain, nonatomic) UIImageView *auxiliaryGlyphImageView; // @synthesize auxiliaryGlyphImageView=_auxiliaryGlyphImageView;
@property(retain, nonatomic) SBUILegibilityLabel *auxiliaryBatteryLabel; // @synthesize auxiliaryBatteryLabel=_auxiliaryBatteryLabel;
@property(retain, nonatomic) UIView *auxiliaryBatteryPillClippingView; // @synthesize auxiliaryBatteryPillClippingView=_auxiliaryBatteryPillClippingView;
@property(retain, nonatomic) UIView *auxiliaryBatteryPillTrackView; // @synthesize auxiliaryBatteryPillTrackView=_auxiliaryBatteryPillTrackView;
@property(retain, nonatomic) UIView *auxiliaryBatteryPillLevelView; // @synthesize auxiliaryBatteryPillLevelView=_auxiliaryBatteryPillLevelView;
@property(retain, nonatomic) CSRingLayer *auxiliaryBatteryTrackFillRingLayer; // @synthesize auxiliaryBatteryTrackFillRingLayer=_auxiliaryBatteryTrackFillRingLayer;
@property(retain, nonatomic) CSRingLayer *auxiliaryBatteryLevelRing; // @synthesize auxiliaryBatteryLevelRing=_auxiliaryBatteryLevelRing;
@property(retain, nonatomic) CALayer *auxiliaryBatteryContainerLayer; // @synthesize auxiliaryBatteryContainerLayer=_auxiliaryBatteryContainerLayer;
@property(retain, nonatomic) SBUILegibilityLabel *chargePercentLabel; // @synthesize chargePercentLabel=_chargePercentLabel;
@property(retain, nonatomic) CSRingLayer *ringBlurLayer; // @synthesize ringBlurLayer=_ringBlurLayer;
@property(retain, nonatomic) CSRingLayer *trackFillRingLayer; // @synthesize trackFillRingLayer=_trackFillRingLayer;
@property(retain, nonatomic) CSRingLayer *batteryLevelRing; // @synthesize batteryLevelRing=_batteryLevelRing;
@property(retain, nonatomic) CALayer *splashRing3; // @synthesize splashRing3=_splashRing3;
@property(retain, nonatomic) CALayer *splashRing1; // @synthesize splashRing1=_splashRing1;
@property(retain, nonatomic) CALayer *splashRing; // @synthesize splashRing=_splashRing;
@property(retain, nonatomic) CALayer *ringTempOverlayLayer; // @synthesize ringTempOverlayLayer=_ringTempOverlayLayer;
@property(retain, nonatomic) CABackdropLayer *averageColorBackdropLayer; // @synthesize averageColorBackdropLayer=_averageColorBackdropLayer;
@property(retain, nonatomic) CABackdropLayer *backgroundBackdropLayer; // @synthesize backgroundBackdropLayer=_backgroundBackdropLayer;
@property(retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // @synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer;
@property(retain, nonatomic) CALayer *chargingBoltGlyph; // @synthesize chargingBoltGlyph=_chargingBoltGlyph;
@property(retain, nonatomic) CABackdropLayer *ringBlurBackdropLayer; // @synthesize ringBlurBackdropLayer=_ringBlurBackdropLayer;
@property(retain, nonatomic) CSMagSafePowerStatus *externalStatus; // @synthesize externalStatus=_externalStatus;
@property(retain, nonatomic) CSMagSafePowerStatus *internalStatus; // @synthesize internalStatus=_internalStatus;
@property(retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration; // @synthesize configuration=_configuration;
- (struct CGRect)_pillFrameForBatteryCharge:(double)arg1;	// IMP=0x00000000000892d1
- (struct CGPoint)_positionForPill:(id)arg1 forBatteryCharge:(double)arg2;	// IMP=0x0000000000089160
- (double)_estimatedDurationForAnimation:(unsigned long long)arg1;	// IMP=0x0000000000089128
- (_Bool)_shouldUseShortcutForAnimation:(unsigned long long)arg1;	// IMP=0x000000000008910c
- (_Bool)_isShowingAuxiliary;	// IMP=0x00000000000890ce
- (id)_springAnimationWithKeyPath:(id)arg1 stiffness:(double)arg2 damping:(double)arg3 duration:(double)arg4 delay:(double)arg5;	// IMP=0x0000000000088ff2
- (id)_springAnimationWithKeyPath:(id)arg1 delay:(double)arg2 forPresent:(_Bool)arg3 from:(id)arg4 to:(id)arg5;	// IMP=0x0000000000088f08
- (id)_springAnimationWithKeyPath:(id)arg1 forPresent:(_Bool)arg2 from:(id)arg3 to:(id)arg4;	// IMP=0x0000000000088ee2
- (id)_trackAnimationForConfiguration:(id)arg1 withCurrentTime:(double)arg2;	// IMP=0x0000000000088d16
- (void)_createBoltViewsIfNeeded;	// IMP=0x00000000000864f5
- (void)_createAuxiliaryPillViewsIfNeeded;	// IMP=0x0000000000085f1f
- (id)_trackRingForRingConfiguration:(id)arg1 withBlendMode:(id)arg2;	// IMP=0x0000000000085e5f
- (struct CGPath *)_pathForRingConfiguration:(id)arg1;	// IMP=0x0000000000085de1
- (id)_ringLayerForRingConfiguration:(id)arg1;	// IMP=0x0000000000085c28
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 font:(id)arg3;	// IMP=0x0000000000085a9e
- (id)_auxiliaryChargePercentFont;	// IMP=0x0000000000085a7d
- (id)_chargePercentFont;	// IMP=0x0000000000085a5c
- (_Bool)_isReduceTransparencyEnabled;	// IMP=0x0000000000085a52
- (_Bool)_isDarkerSystemColorsEnabled;	// IMP=0x0000000000085a48
- (_Bool)_isReduceMotionEnabled;	// IMP=0x0000000000085a3e
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000857ea
- (void)_runAnimationWithType:(unsigned long long)arg1;	// IMP=0x0000000000085791
- (void)_performChargingBoltDismissAnimation;	// IMP=0x0000000000085736
- (void)_performChargingBoltPresentAnimation;	// IMP=0x0000000000085684
- (void)_runAuxiliaryBatteryLevelDismissAnimation;	// IMP=0x0000000000084f66
- (void)_runBatteryLevelDismissAnimation;	// IMP=0x0000000000084a70
- (void)_runAuxiliaryChargingLabelPresentAnimation;	// IMP=0x0000000000084490
- (void)_runChargingLabelPresentAnimation;	// IMP=0x0000000000084309
- (void)_runAuxiliaryBatteryLevelAnimation;	// IMP=0x0000000000083743
- (void)_runBatteryLevelRingAnimation;	// IMP=0x0000000000083369
- (void)_runAuxiliaryChargingBoltAnimationVisible:(_Bool)arg1;	// IMP=0x0000000000082f11
- (void)_runChargingBoltAnimationVisible:(_Bool)arg1;	// IMP=0x0000000000082a3e
- (void)_runRingBlurAnimation;	// IMP=0x0000000000081ea3
- (void)_runAuxiliarySplashRingAnimation;	// IMP=0x0000000000081647
- (void)_animateSilhouetteToVisible:(_Bool)arg1;	// IMP=0x00000000000813ea
- (void)_runSplashRingAnimation;	// IMP=0x0000000000080f93
- (void)_runDimAnimation;	// IMP=0x0000000000080ac7
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x000000000008084b
- (double)desiredVisibilityDuration;	// IMP=0x0000000000080822
- (long long)batteryCount;	// IMP=0x0000000000080809
- (void)setBatteryVisible:(_Bool)arg1;	// IMP=0x00000000000807bf
- (_Bool)batteryVisible;	// IMP=0x0000000000080790
- (void)_handleExternalStatusUpdate;	// IMP=0x000000000008028a
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x0000000000080104
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x000000000007fdd8
- (id)_powerStatusForBattery:(id)arg1;	// IMP=0x000000000007fc06
- (double)batteryChargingLevel;	// IMP=0x000000000007fba4
- (void)updateForInternalPowerStatus:(id)arg1;	// IMP=0x000000000007fa49
- (void)updateForInternalBatteryDevice:(id)arg1;	// IMP=0x000000000007f9b8
- (void)_layoutAuxiliaryChargePercentLabel;	// IMP=0x000000000007d37e
- (void)_layoutChargePercentLabel;	// IMP=0x000000000007d051
- (void)layoutSubviews;	// IMP=0x0000000000076c1d
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000000064377
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000064309

@end
