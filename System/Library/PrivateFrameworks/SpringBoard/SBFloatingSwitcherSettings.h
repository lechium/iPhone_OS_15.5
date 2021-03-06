//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class MTLumaDodgePillSettings, SBFFluidBehaviorSettings;

@interface SBFloatingSwitcherSettings : PTSettings
{
    _Bool _showFloats;	// 8 = 0x8
    double _switcherCardScale;	// 16 = 0x10
    double _cardSpacing;	// 24 = 0x18
    double _dimmingAlpha;	// 32 = 0x20
    double _leadingEdgeRubberbandingRange;	// 40 = 0x28
    double _perCardAdditionalScaleCoefficient;	// 48 = 0x30
    double _scaleCurveExponent;	// 56 = 0x38
    double _opacityMinimumDistanceThreshold;	// 64 = 0x40
    double _opacityFadeDistance;	// 72 = 0x48
    double _darkeningMinimumDistanceThreshold;	// 80 = 0x50
    double _darkeningFadeDistance;	// 88 = 0x58
    double _maximumDarkening;	// 96 = 0x60
    double _titleAndIconOpacityMinimumDistanceThreshold;	// 104 = 0x68
    double _titleAndIconOpacityFadeDistance;	// 112 = 0x70
    double _titleOpacityMinimumDistanceThreshold;	// 120 = 0x78
    double _titleOpacityFadeDistance;	// 128 = 0x80
    double _overshootPullbackDelayOffscreen;	// 136 = 0x88
    double _overshootPullbackDelayOnscreen;	// 144 = 0x90
    double _rightEdgePeekDelay;	// 152 = 0x98
    double _rightEdgePeekTimeout;	// 160 = 0xa0
    SBFFluidBehaviorSettings *_tongueContainerPositionAnimationSettings;	// 168 = 0xa8
    SBFFluidBehaviorSettings *_tongueContainerTransformAnimationSettings;	// 176 = 0xb0
    SBFFluidBehaviorSettings *_tongueCollapsedToExpandedAnimationSettings;	// 184 = 0xb8
    SBFFluidBehaviorSettings *_tongueExpandedToCollapsedAnimationSettings;	// 192 = 0xc0
    MTLumaDodgePillSettings *_homeAffordanceSettings;	// 200 = 0xc8
}

+ (id)settingsControllerModule;	// IMP=0x000000000019c243
- (void).cxx_destruct;	// IMP=0x000000000019cf1b
@property _Bool showFloats; // @synthesize showFloats=_showFloats;
@property(retain) MTLumaDodgePillSettings *homeAffordanceSettings; // @synthesize homeAffordanceSettings=_homeAffordanceSettings;
@property(retain) SBFFluidBehaviorSettings *tongueExpandedToCollapsedAnimationSettings; // @synthesize tongueExpandedToCollapsedAnimationSettings=_tongueExpandedToCollapsedAnimationSettings;
@property(retain) SBFFluidBehaviorSettings *tongueCollapsedToExpandedAnimationSettings; // @synthesize tongueCollapsedToExpandedAnimationSettings=_tongueCollapsedToExpandedAnimationSettings;
@property(retain) SBFFluidBehaviorSettings *tongueContainerTransformAnimationSettings; // @synthesize tongueContainerTransformAnimationSettings=_tongueContainerTransformAnimationSettings;
@property(retain) SBFFluidBehaviorSettings *tongueContainerPositionAnimationSettings; // @synthesize tongueContainerPositionAnimationSettings=_tongueContainerPositionAnimationSettings;
@property double rightEdgePeekTimeout; // @synthesize rightEdgePeekTimeout=_rightEdgePeekTimeout;
@property double rightEdgePeekDelay; // @synthesize rightEdgePeekDelay=_rightEdgePeekDelay;
@property double overshootPullbackDelayOnscreen; // @synthesize overshootPullbackDelayOnscreen=_overshootPullbackDelayOnscreen;
@property double overshootPullbackDelayOffscreen; // @synthesize overshootPullbackDelayOffscreen=_overshootPullbackDelayOffscreen;
@property double titleOpacityFadeDistance; // @synthesize titleOpacityFadeDistance=_titleOpacityFadeDistance;
@property double titleOpacityMinimumDistanceThreshold; // @synthesize titleOpacityMinimumDistanceThreshold=_titleOpacityMinimumDistanceThreshold;
@property double titleAndIconOpacityFadeDistance; // @synthesize titleAndIconOpacityFadeDistance=_titleAndIconOpacityFadeDistance;
@property double titleAndIconOpacityMinimumDistanceThreshold; // @synthesize titleAndIconOpacityMinimumDistanceThreshold=_titleAndIconOpacityMinimumDistanceThreshold;
@property double maximumDarkening; // @synthesize maximumDarkening=_maximumDarkening;
@property double darkeningFadeDistance; // @synthesize darkeningFadeDistance=_darkeningFadeDistance;
@property double darkeningMinimumDistanceThreshold; // @synthesize darkeningMinimumDistanceThreshold=_darkeningMinimumDistanceThreshold;
@property double opacityFadeDistance; // @synthesize opacityFadeDistance=_opacityFadeDistance;
@property double opacityMinimumDistanceThreshold; // @synthesize opacityMinimumDistanceThreshold=_opacityMinimumDistanceThreshold;
@property double scaleCurveExponent; // @synthesize scaleCurveExponent=_scaleCurveExponent;
@property double perCardAdditionalScaleCoefficient; // @synthesize perCardAdditionalScaleCoefficient=_perCardAdditionalScaleCoefficient;
@property double leadingEdgeRubberbandingRange; // @synthesize leadingEdgeRubberbandingRange=_leadingEdgeRubberbandingRange;
@property double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property double cardSpacing; // @synthesize cardSpacing=_cardSpacing;
@property double switcherCardScale; // @synthesize switcherCardScale=_switcherCardScale;
- (id)archiveValueForKey:(id)arg1;	// IMP=0x000000000019cb0b
- (void)setDefaultValues;	// IMP=0x000000000019bcc5

@end

