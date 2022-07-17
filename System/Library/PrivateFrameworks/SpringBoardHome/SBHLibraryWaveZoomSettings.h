//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PTPointSettings, SBFAnimationSettings, SBHInterpolationSettings;

@interface SBHLibraryWaveZoomSettings
{
    double _interPodWaveDelay;	// 8 = 0x8
    double _upperPodRelativeCrossfadeDuration;	// 16 = 0x10
    double _upperPodRelativeStackAlphaDuration;	// 24 = 0x18
    double _relativeBackgroundDuration;	// 32 = 0x20
    double _relativeSearchDuration;	// 40 = 0x28
    double _searchScale;	// 48 = 0x30
    double _podRelativeFadeDelay;	// 56 = 0x38
    SBFAnimationSettings *_podFadeSettings;	// 64 = 0x40
    PTPointSettings *_zEffectControlPoint1Settings;	// 72 = 0x48
    PTPointSettings *_zEffectControlPoint2Settings;	// 80 = 0x50
    SBHInterpolationSettings *_retargetedMassSettings;	// 88 = 0x58
    SBHInterpolationSettings *_retargetedStiffnessSettings;	// 96 = 0x60
    SBHInterpolationSettings *_retargetedInitialVelocitySettings;	// 104 = 0x68
    SBHInterpolationSettings *_retargetedBasicDurationSettings;	// 112 = 0x70
}

+ (id)settingsControllerModule;	// IMP=0x00000000001eded4
- (void).cxx_destruct;	// IMP=0x00000000001eeb73
@property(retain, nonatomic) SBHInterpolationSettings *retargetedBasicDurationSettings; // @synthesize retargetedBasicDurationSettings=_retargetedBasicDurationSettings;
@property(retain, nonatomic) SBHInterpolationSettings *retargetedInitialVelocitySettings; // @synthesize retargetedInitialVelocitySettings=_retargetedInitialVelocitySettings;
@property(retain, nonatomic) SBHInterpolationSettings *retargetedStiffnessSettings; // @synthesize retargetedStiffnessSettings=_retargetedStiffnessSettings;
@property(retain, nonatomic) SBHInterpolationSettings *retargetedMassSettings; // @synthesize retargetedMassSettings=_retargetedMassSettings;
@property(retain, nonatomic) PTPointSettings *zEffectControlPoint2Settings; // @synthesize zEffectControlPoint2Settings=_zEffectControlPoint2Settings;
@property(retain, nonatomic) PTPointSettings *zEffectControlPoint1Settings; // @synthesize zEffectControlPoint1Settings=_zEffectControlPoint1Settings;
@property(retain, nonatomic) SBFAnimationSettings *podFadeSettings; // @synthesize podFadeSettings=_podFadeSettings;
@property(nonatomic) double podRelativeFadeDelay; // @synthesize podRelativeFadeDelay=_podRelativeFadeDelay;
@property(nonatomic) double searchScale; // @synthesize searchScale=_searchScale;
@property(nonatomic) double relativeSearchDuration; // @synthesize relativeSearchDuration=_relativeSearchDuration;
@property(nonatomic) double relativeBackgroundDuration; // @synthesize relativeBackgroundDuration=_relativeBackgroundDuration;
@property(nonatomic) double upperPodRelativeStackAlphaDuration; // @synthesize upperPodRelativeStackAlphaDuration=_upperPodRelativeStackAlphaDuration;
@property(nonatomic) double upperPodRelativeCrossfadeDuration; // @synthesize upperPodRelativeCrossfadeDuration=_upperPodRelativeCrossfadeDuration;
@property(nonatomic) double interPodWaveDelay; // @synthesize interPodWaveDelay=_interPodWaveDelay;
- (void)setDefaultValues;	// IMP=0x00000000001edd2d

@end
