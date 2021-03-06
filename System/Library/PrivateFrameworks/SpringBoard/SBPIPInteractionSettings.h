//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBPIPInteractionSettings : PTSettings
{
    _Bool _shouldStashOnTransitionToSwitcher;	// 8 = 0x8
    _Bool _shouldUnstashOnTransitionFromSwitcher;	// 9 = 0x9
    _Bool _shouldStashOnTransitionToHomescreen;	// 10 = 0xa
    _Bool _shouldUnstashOnTransitionFromHomescreen;	// 11 = 0xb
    _Bool _shouldStashOnAppToAppTransitions;	// 12 = 0xc
    _Bool _usesKeyboards;	// 13 = 0xd
    _Bool _keyboardDismissesOnTransitionToHomescreen;	// 14 = 0xe
    _Bool _keyboardDismissesOnOutsideUserInteractionOnHomescreen;	// 15 = 0xf
    _Bool _keyboardDismissesOnOutsideUserInteractionOutsideHomescreen;	// 16 = 0x10
    _Bool _alwaysStartAtSmallestSize;	// 17 = 0x11
    _Bool _panGestureEnabled;	// 18 = 0x12
    _Bool _pinchGestureEnabled;	// 19 = 0x13
    _Bool _rotationGestureEnabled;	// 20 = 0x14
    _Bool _stashingEnabled;	// 21 = 0x15
    unsigned long long _freePositioning;	// 24 = 0x18
    double _defaultContentSizeResetTimeout;	// 32 = 0x20
    double _inFlightHitTestPadding;	// 40 = 0x28
    double _maximumSizeSpanForPreferredSizeTuning;	// 48 = 0x30
    double _minimumSizeSpanBetweenPreferredSizes;	// 56 = 0x38
    double _positionDecelerationRate;	// 64 = 0x40
    double _positionExtenderMaximumDistance;	// 72 = 0x48
    double _positionVelocityYWeightOverVelocityX;	// 80 = 0x50
    double _rotationExtenderMaximumDistance;	// 88 = 0x58
    double _rotationPreRecognitionWeight;	// 96 = 0x60
    double _rotationRubberBandCoefficient;	// 104 = 0x68
    double _scaleDecelerationRate;	// 112 = 0x70
    double _scaleExtenderMaximumDistance;	// 120 = 0x78
    double _scaleLowPassFilterPreviousWeight;	// 128 = 0x80
    double _stashProgressTabAppearanceThresholdX;	// 136 = 0x88
    SBFFluidBehaviorSettings *_interactiveFluidBehavior;	// 144 = 0x90
    SBFFluidBehaviorSettings *_stashTabFluidBehavior;	// 152 = 0x98
    SBFFluidBehaviorSettings *_regionUpdateFluidBehavior;	// 160 = 0xa0
}

+ (id)settingsControllerModule;	// IMP=0x000000000067dcaf
- (void).cxx_destruct;	// IMP=0x000000000067edfd
@property(retain, nonatomic) SBFFluidBehaviorSettings *regionUpdateFluidBehavior; // @synthesize regionUpdateFluidBehavior=_regionUpdateFluidBehavior;
@property(retain, nonatomic) SBFFluidBehaviorSettings *stashTabFluidBehavior; // @synthesize stashTabFluidBehavior=_stashTabFluidBehavior;
@property(retain, nonatomic) SBFFluidBehaviorSettings *interactiveFluidBehavior; // @synthesize interactiveFluidBehavior=_interactiveFluidBehavior;
@property(nonatomic) double stashProgressTabAppearanceThresholdX; // @synthesize stashProgressTabAppearanceThresholdX=_stashProgressTabAppearanceThresholdX;
@property(nonatomic) double scaleLowPassFilterPreviousWeight; // @synthesize scaleLowPassFilterPreviousWeight=_scaleLowPassFilterPreviousWeight;
@property(nonatomic) double scaleExtenderMaximumDistance; // @synthesize scaleExtenderMaximumDistance=_scaleExtenderMaximumDistance;
@property(nonatomic) double scaleDecelerationRate; // @synthesize scaleDecelerationRate=_scaleDecelerationRate;
@property(nonatomic) double rotationRubberBandCoefficient; // @synthesize rotationRubberBandCoefficient=_rotationRubberBandCoefficient;
@property(nonatomic) double rotationPreRecognitionWeight; // @synthesize rotationPreRecognitionWeight=_rotationPreRecognitionWeight;
@property(nonatomic) double rotationExtenderMaximumDistance; // @synthesize rotationExtenderMaximumDistance=_rotationExtenderMaximumDistance;
@property(nonatomic) double positionVelocityYWeightOverVelocityX; // @synthesize positionVelocityYWeightOverVelocityX=_positionVelocityYWeightOverVelocityX;
@property(nonatomic) double positionExtenderMaximumDistance; // @synthesize positionExtenderMaximumDistance=_positionExtenderMaximumDistance;
@property(nonatomic) double positionDecelerationRate; // @synthesize positionDecelerationRate=_positionDecelerationRate;
@property(nonatomic) double minimumSizeSpanBetweenPreferredSizes; // @synthesize minimumSizeSpanBetweenPreferredSizes=_minimumSizeSpanBetweenPreferredSizes;
@property(nonatomic) double maximumSizeSpanForPreferredSizeTuning; // @synthesize maximumSizeSpanForPreferredSizeTuning=_maximumSizeSpanForPreferredSizeTuning;
@property(nonatomic) double inFlightHitTestPadding; // @synthesize inFlightHitTestPadding=_inFlightHitTestPadding;
@property(nonatomic) double defaultContentSizeResetTimeout; // @synthesize defaultContentSizeResetTimeout=_defaultContentSizeResetTimeout;
@property(nonatomic) unsigned long long freePositioning; // @synthesize freePositioning=_freePositioning;
@property(nonatomic) _Bool stashingEnabled; // @synthesize stashingEnabled=_stashingEnabled;
@property(nonatomic) _Bool rotationGestureEnabled; // @synthesize rotationGestureEnabled=_rotationGestureEnabled;
@property(nonatomic) _Bool pinchGestureEnabled; // @synthesize pinchGestureEnabled=_pinchGestureEnabled;
@property(nonatomic) _Bool panGestureEnabled; // @synthesize panGestureEnabled=_panGestureEnabled;
@property(nonatomic) _Bool alwaysStartAtSmallestSize; // @synthesize alwaysStartAtSmallestSize=_alwaysStartAtSmallestSize;
@property(nonatomic) _Bool keyboardDismissesOnOutsideUserInteractionOutsideHomescreen; // @synthesize keyboardDismissesOnOutsideUserInteractionOutsideHomescreen=_keyboardDismissesOnOutsideUserInteractionOutsideHomescreen;
@property(nonatomic) _Bool keyboardDismissesOnOutsideUserInteractionOnHomescreen; // @synthesize keyboardDismissesOnOutsideUserInteractionOnHomescreen=_keyboardDismissesOnOutsideUserInteractionOnHomescreen;
@property(nonatomic) _Bool keyboardDismissesOnTransitionToHomescreen; // @synthesize keyboardDismissesOnTransitionToHomescreen=_keyboardDismissesOnTransitionToHomescreen;
@property(nonatomic) _Bool usesKeyboards; // @synthesize usesKeyboards=_usesKeyboards;
@property(nonatomic) _Bool shouldStashOnAppToAppTransitions; // @synthesize shouldStashOnAppToAppTransitions=_shouldStashOnAppToAppTransitions;
@property(nonatomic) _Bool shouldUnstashOnTransitionFromHomescreen; // @synthesize shouldUnstashOnTransitionFromHomescreen=_shouldUnstashOnTransitionFromHomescreen;
@property(nonatomic) _Bool shouldStashOnTransitionToHomescreen; // @synthesize shouldStashOnTransitionToHomescreen=_shouldStashOnTransitionToHomescreen;
@property(nonatomic) _Bool shouldUnstashOnTransitionFromSwitcher; // @synthesize shouldUnstashOnTransitionFromSwitcher=_shouldUnstashOnTransitionFromSwitcher;
@property(nonatomic) _Bool shouldStashOnTransitionToSwitcher; // @synthesize shouldStashOnTransitionToSwitcher=_shouldStashOnTransitionToSwitcher;
- (void)setDefaultValues;	// IMP=0x000000000067d874

@end

