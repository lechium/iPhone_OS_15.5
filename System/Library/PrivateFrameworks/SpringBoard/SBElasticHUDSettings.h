//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBElasticHUDSettings : PTSettings
{
    _Bool _showDebugUI;	// 8 = 0x8
    _Bool _autoDismiss;	// 9 = 0x9
    _Bool _requiresTickHapticMitigations;	// 10 = 0xa
    _Bool _rampTickHapticIntensity;	// 11 = 0xb
    _Bool _displayBrightnessKeyCommandsEnabled;	// 12 = 0xc
    _Bool _keyboardBrightnessKeyCommandsEnabled;	// 13 = 0xd
    float _volumeStepDelta;	// 16 = 0x10
    float _minimumTickHapticIntensity;	// 20 = 0x14
    float _maximumTickHapticIntensity;	// 24 = 0x18
    double _minMaxXScaleSpringRetargetImpulse;	// 32 = 0x20
    double _minMaxXScaleSpringDampingRatio;	// 40 = 0x28
    double _minMaxXScaleSpringResponse;	// 48 = 0x30
    double _minMaxXScaleSpringVolumeToMax;	// 56 = 0x38
    double _minMaxXScaleSpringVolumeToMin;	// 64 = 0x40
    double _minMaxYScaleSpringRetargetImpulse;	// 72 = 0x48
    double _minMaxYScaleSpringDampingRatio;	// 80 = 0x50
    double _minMaxYScaleSpringResponse;	// 88 = 0x58
    double _minMaxYScaleSpringVolumeToMax;	// 96 = 0x60
    double _minMaxYScaleSpringVolumeToMin;	// 104 = 0x68
    double _deflatorTargetDownScale;	// 112 = 0x70
    double _deflatorTargetCompleteDownScale;	// 120 = 0x78
    double _deflatorTargetFudgeFactor;	// 128 = 0x80
    double _deflatorTargetCompleteImpulse;	// 136 = 0x88
    double _positionXSpringRetargetImpulse;	// 144 = 0x90
    double _positionXSpringDampingRatio;	// 152 = 0x98
    double _positionXSpringResponse;	// 160 = 0xa0
    double _positionXSpringResponseBeginDeflator;	// 168 = 0xa8
    double _positionXSpringResponseFinishDeflate;	// 176 = 0xb0
    double _positionYSpringRetargetImpulse;	// 184 = 0xb8
    double _positionYSpringDampingRatio;	// 192 = 0xc0
    double _positionYSpringResponse;	// 200 = 0xc8
    double _scaleSpringRetargetImpulse;	// 208 = 0xd0
    double _scaleSpringDampingRatio;	// 216 = 0xd8
    double _scaleSpringResponse;	// 224 = 0xe0
    double _scaleSpringResponseBeginDeflator;	// 232 = 0xe8
    double _scaleSpringResponseFinishDeflate;	// 240 = 0xf0
    double _scaleSpringBase;	// 248 = 0xf8
    double _scaleSpringTracking;	// 256 = 0x100
    double _dimmingAlpha;	// 264 = 0x108
    double _dismissalInterval;	// 272 = 0x110
    double _legibilityStrength;	// 280 = 0x118
    double _labelMargin;	// 288 = 0x120
    double _onscreenTopMargin;	// 296 = 0x128
    double _onscreenLeadingMargin;	// 304 = 0x130
    double _offscreenTopMargin;	// 312 = 0x138
    double _offscreenLeadingMargin;	// 320 = 0x140
    double _landscapeScaleSpringVolumeDownInput;	// 328 = 0x148
    double _landscapeScaleSpringVolumeUpInput;	// 336 = 0x150
    double _portraitScaleSpringVolumeDownInput;	// 344 = 0x158
    double _portraitScaleSpringVolumeUpInput;	// 352 = 0x160
    double _landscapeState1CornerRadius;	// 360 = 0x168
    double _landscapeState2CornerRadius;	// 368 = 0x170
    double _landscapeState3CornerRadius;	// 376 = 0x178
    double _landscapeStateBaseCornerRadius;	// 384 = 0x180
    double _portraitState1CornerRadius;	// 392 = 0x188
    double _portraitState2CornerRadius;	// 400 = 0x190
    double _portraitState3CornerRadius;	// 408 = 0x198
    double _portraitStateBaseCornerRadius;	// 416 = 0x1a0
    double _landscapeState1Width;	// 424 = 0x1a8
    double _landscapeState2Width;	// 432 = 0x1b0
    double _landscapeState3Width;	// 440 = 0x1b8
    double _landscapeState1Height;	// 448 = 0x1c0
    double _landscapeState2Height;	// 456 = 0x1c8
    double _landscapeState3Height;	// 464 = 0x1d0
    double _portraitState1Width;	// 472 = 0x1d8
    double _portraitState2Width;	// 480 = 0x1e0
    double _portraitState3Width;	// 488 = 0x1e8
    double _portraitState1Height;	// 496 = 0x1f0
    double _portraitState2Height;	// 504 = 0x1f8
    double _portraitState3Height;	// 512 = 0x200
    double _volumeButtonsCenterY;	// 520 = 0x208
    unsigned long long _tickHapticSkipInterval;	// 528 = 0x210
}

+ (id)settingsControllerModule;	// IMP=0x00000000004c99d0
@property(nonatomic) _Bool keyboardBrightnessKeyCommandsEnabled; // @synthesize keyboardBrightnessKeyCommandsEnabled=_keyboardBrightnessKeyCommandsEnabled;
@property(nonatomic) _Bool displayBrightnessKeyCommandsEnabled; // @synthesize displayBrightnessKeyCommandsEnabled=_displayBrightnessKeyCommandsEnabled;
@property(nonatomic) unsigned long long tickHapticSkipInterval; // @synthesize tickHapticSkipInterval=_tickHapticSkipInterval;
@property(nonatomic) float maximumTickHapticIntensity; // @synthesize maximumTickHapticIntensity=_maximumTickHapticIntensity;
@property(nonatomic) float minimumTickHapticIntensity; // @synthesize minimumTickHapticIntensity=_minimumTickHapticIntensity;
@property(nonatomic) _Bool rampTickHapticIntensity; // @synthesize rampTickHapticIntensity=_rampTickHapticIntensity;
@property(nonatomic) _Bool requiresTickHapticMitigations; // @synthesize requiresTickHapticMitigations=_requiresTickHapticMitigations;
@property(nonatomic) float volumeStepDelta; // @synthesize volumeStepDelta=_volumeStepDelta;
@property(nonatomic) _Bool autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(nonatomic) _Bool showDebugUI; // @synthesize showDebugUI=_showDebugUI;
@property(nonatomic) double volumeButtonsCenterY; // @synthesize volumeButtonsCenterY=_volumeButtonsCenterY;
@property(nonatomic) double portraitState3Height; // @synthesize portraitState3Height=_portraitState3Height;
@property(nonatomic) double portraitState2Height; // @synthesize portraitState2Height=_portraitState2Height;
@property(nonatomic) double portraitState1Height; // @synthesize portraitState1Height=_portraitState1Height;
@property(nonatomic) double portraitState3Width; // @synthesize portraitState3Width=_portraitState3Width;
@property(nonatomic) double portraitState2Width; // @synthesize portraitState2Width=_portraitState2Width;
@property(nonatomic) double portraitState1Width; // @synthesize portraitState1Width=_portraitState1Width;
@property(nonatomic) double landscapeState3Height; // @synthesize landscapeState3Height=_landscapeState3Height;
@property(nonatomic) double landscapeState2Height; // @synthesize landscapeState2Height=_landscapeState2Height;
@property(nonatomic) double landscapeState1Height; // @synthesize landscapeState1Height=_landscapeState1Height;
@property(nonatomic) double landscapeState3Width; // @synthesize landscapeState3Width=_landscapeState3Width;
@property(nonatomic) double landscapeState2Width; // @synthesize landscapeState2Width=_landscapeState2Width;
@property(nonatomic) double landscapeState1Width; // @synthesize landscapeState1Width=_landscapeState1Width;
@property(nonatomic) double portraitStateBaseCornerRadius; // @synthesize portraitStateBaseCornerRadius=_portraitStateBaseCornerRadius;
@property(nonatomic) double portraitState3CornerRadius; // @synthesize portraitState3CornerRadius=_portraitState3CornerRadius;
@property(nonatomic) double portraitState2CornerRadius; // @synthesize portraitState2CornerRadius=_portraitState2CornerRadius;
@property(nonatomic) double portraitState1CornerRadius; // @synthesize portraitState1CornerRadius=_portraitState1CornerRadius;
@property(nonatomic) double landscapeStateBaseCornerRadius; // @synthesize landscapeStateBaseCornerRadius=_landscapeStateBaseCornerRadius;
@property(nonatomic) double landscapeState3CornerRadius; // @synthesize landscapeState3CornerRadius=_landscapeState3CornerRadius;
@property(nonatomic) double landscapeState2CornerRadius; // @synthesize landscapeState2CornerRadius=_landscapeState2CornerRadius;
@property(nonatomic) double landscapeState1CornerRadius; // @synthesize landscapeState1CornerRadius=_landscapeState1CornerRadius;
@property(nonatomic) double portraitScaleSpringVolumeUpInput; // @synthesize portraitScaleSpringVolumeUpInput=_portraitScaleSpringVolumeUpInput;
@property(nonatomic) double portraitScaleSpringVolumeDownInput; // @synthesize portraitScaleSpringVolumeDownInput=_portraitScaleSpringVolumeDownInput;
@property(nonatomic) double landscapeScaleSpringVolumeUpInput; // @synthesize landscapeScaleSpringVolumeUpInput=_landscapeScaleSpringVolumeUpInput;
@property(nonatomic) double landscapeScaleSpringVolumeDownInput; // @synthesize landscapeScaleSpringVolumeDownInput=_landscapeScaleSpringVolumeDownInput;
@property(nonatomic) double offscreenLeadingMargin; // @synthesize offscreenLeadingMargin=_offscreenLeadingMargin;
@property(nonatomic) double offscreenTopMargin; // @synthesize offscreenTopMargin=_offscreenTopMargin;
@property(nonatomic) double onscreenLeadingMargin; // @synthesize onscreenLeadingMargin=_onscreenLeadingMargin;
@property(nonatomic) double onscreenTopMargin; // @synthesize onscreenTopMargin=_onscreenTopMargin;
@property(nonatomic) double labelMargin; // @synthesize labelMargin=_labelMargin;
@property(nonatomic) double legibilityStrength; // @synthesize legibilityStrength=_legibilityStrength;
@property(nonatomic) double dismissalInterval; // @synthesize dismissalInterval=_dismissalInterval;
@property(nonatomic) double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property(nonatomic) double scaleSpringTracking; // @synthesize scaleSpringTracking=_scaleSpringTracking;
@property(nonatomic) double scaleSpringBase; // @synthesize scaleSpringBase=_scaleSpringBase;
@property(nonatomic) double scaleSpringResponseFinishDeflate; // @synthesize scaleSpringResponseFinishDeflate=_scaleSpringResponseFinishDeflate;
@property(nonatomic) double scaleSpringResponseBeginDeflator; // @synthesize scaleSpringResponseBeginDeflator=_scaleSpringResponseBeginDeflator;
@property(nonatomic) double scaleSpringResponse; // @synthesize scaleSpringResponse=_scaleSpringResponse;
@property(nonatomic) double scaleSpringDampingRatio; // @synthesize scaleSpringDampingRatio=_scaleSpringDampingRatio;
@property(nonatomic) double scaleSpringRetargetImpulse; // @synthesize scaleSpringRetargetImpulse=_scaleSpringRetargetImpulse;
@property(nonatomic) double positionYSpringResponse; // @synthesize positionYSpringResponse=_positionYSpringResponse;
@property(nonatomic) double positionYSpringDampingRatio; // @synthesize positionYSpringDampingRatio=_positionYSpringDampingRatio;
@property(nonatomic) double positionYSpringRetargetImpulse; // @synthesize positionYSpringRetargetImpulse=_positionYSpringRetargetImpulse;
@property(nonatomic) double positionXSpringResponseFinishDeflate; // @synthesize positionXSpringResponseFinishDeflate=_positionXSpringResponseFinishDeflate;
@property(nonatomic) double positionXSpringResponseBeginDeflator; // @synthesize positionXSpringResponseBeginDeflator=_positionXSpringResponseBeginDeflator;
@property(nonatomic) double positionXSpringResponse; // @synthesize positionXSpringResponse=_positionXSpringResponse;
@property(nonatomic) double positionXSpringDampingRatio; // @synthesize positionXSpringDampingRatio=_positionXSpringDampingRatio;
@property(nonatomic) double positionXSpringRetargetImpulse; // @synthesize positionXSpringRetargetImpulse=_positionXSpringRetargetImpulse;
@property(nonatomic) double deflatorTargetCompleteImpulse; // @synthesize deflatorTargetCompleteImpulse=_deflatorTargetCompleteImpulse;
@property(nonatomic) double deflatorTargetFudgeFactor; // @synthesize deflatorTargetFudgeFactor=_deflatorTargetFudgeFactor;
@property(nonatomic) double deflatorTargetCompleteDownScale; // @synthesize deflatorTargetCompleteDownScale=_deflatorTargetCompleteDownScale;
@property(nonatomic) double deflatorTargetDownScale; // @synthesize deflatorTargetDownScale=_deflatorTargetDownScale;
@property(nonatomic) double minMaxYScaleSpringVolumeToMin; // @synthesize minMaxYScaleSpringVolumeToMin=_minMaxYScaleSpringVolumeToMin;
@property(nonatomic) double minMaxYScaleSpringVolumeToMax; // @synthesize minMaxYScaleSpringVolumeToMax=_minMaxYScaleSpringVolumeToMax;
@property(nonatomic) double minMaxYScaleSpringResponse; // @synthesize minMaxYScaleSpringResponse=_minMaxYScaleSpringResponse;
@property(nonatomic) double minMaxYScaleSpringDampingRatio; // @synthesize minMaxYScaleSpringDampingRatio=_minMaxYScaleSpringDampingRatio;
@property(nonatomic) double minMaxYScaleSpringRetargetImpulse; // @synthesize minMaxYScaleSpringRetargetImpulse=_minMaxYScaleSpringRetargetImpulse;
@property(nonatomic) double minMaxXScaleSpringVolumeToMin; // @synthesize minMaxXScaleSpringVolumeToMin=_minMaxXScaleSpringVolumeToMin;
@property(nonatomic) double minMaxXScaleSpringVolumeToMax; // @synthesize minMaxXScaleSpringVolumeToMax=_minMaxXScaleSpringVolumeToMax;
@property(nonatomic) double minMaxXScaleSpringResponse; // @synthesize minMaxXScaleSpringResponse=_minMaxXScaleSpringResponse;
@property(nonatomic) double minMaxXScaleSpringDampingRatio; // @synthesize minMaxXScaleSpringDampingRatio=_minMaxXScaleSpringDampingRatio;
@property(nonatomic) double minMaxXScaleSpringRetargetImpulse; // @synthesize minMaxXScaleSpringRetargetImpulse=_minMaxXScaleSpringRetargetImpulse;
- (void)setDefaultValues;	// IMP=0x00000000004c9034

@end

