//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIViewAnimatingPrivate-Protocol.h>
#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, UIViewAnimationState, UIViewPropertyAnimatorTrackingState, _UIAppCACommitFuture, _UICompoundObjectMap;
@protocol UITimingCurveProvider;

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying>
{
    UIViewPropertyAnimatorTrackingState *_trackingState;	// 8 = 0x8
    NSString *_trackingDescription;	// 16 = 0x10
    double _fractionComplete;	// 24 = 0x18
    double _fractionCompleteWhenContinued;	// 32 = 0x20
    double _drag;	// 40 = 0x28
    _Bool _running;	// 48 = 0x30
    _Bool _reversed;	// 49 = 0x31
    _Bool _pausedAsSpring;	// 50 = 0x32
    _Bool _optionsAreExplicit;	// 51 = 0x33
    _Bool _addedPacingAnimation;	// 52 = 0x34
    _Bool _hasFinalized;	// 53 = 0x35
    double _baseDuration;	// 56 = 0x38
    double _internalDuration;	// 64 = 0x40
    double _delay;	// 72 = 0x48
    UIViewPropertyAnimator *_outerAnimator;	// 80 = 0x50
    NSString *_pacingAnimationKey;	// 88 = 0x58
    CAMediaTimingFunction *_timingFunctionPriorToPause;	// 96 = 0x60
    CAMediaTimingFunction *_timingFunctionWhenPaused;	// 104 = 0x68
    id <UITimingCurveProvider> _timingProviderWhenContinued;	// 112 = 0x70
    _UICompoundObjectMap *_originalToValueMap;	// 120 = 0x78
    _UICompoundObjectMap *_originalFromValueMap;	// 128 = 0x80
    _UICompoundObjectMap *_additiveOffsetsForAnimationKeysMap;	// 136 = 0x88
    _UICompoundObjectMap *_continuedWithSpringForAnimationKeyMap;	// 144 = 0x90
    _UIAppCACommitFuture *_caContinuationCommitFuture;	// 152 = 0x98
    _Bool _useCoreAnimation;	// 160 = 0xa0
    _Bool _pausesOnCompletion;	// 161 = 0xa1
    _Bool _userInteractionEnabled;	// 162 = 0xa2
    _Bool _manualHitTestingEnabled;	// 163 = 0xa3
    _Bool _interruptible;	// 164 = 0xa4
    _Bool _scrubsLinearly;	// 165 = 0xa5
    _Bool _starting;	// 166 = 0xa6
    _Bool _pausedOnCompletion;	// 167 = 0xa7
    _Bool _shouldLayoutSubviews;	// 168 = 0xa8
    _Bool _introspectable;	// 169 = 0xa9
    UIViewAnimationState *_viewAnimationState;	// 176 = 0xb0
    NSUUID *_trackingIdentifier;	// 184 = 0xb8
    id <UITimingCurveProvider> _timingParameters;	// 192 = 0xc0
    long long _animationState;	// 200 = 0xc8
    NSMutableArray *_animations;	// 208 = 0xd0
    NSMutableArray *_completions;	// 216 = 0xd8
    long long _finishingPosition;	// 224 = 0xe0
    NSMutableDictionary *_animationDescriptionMap;	// 232 = 0xe8
    unsigned long long _options;	// 240 = 0xf0
}

+ (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3;	// IMP=0x00000000000b4907
+ (id)_currentPropertyAnimator;	// IMP=0x00000000000b25b8
+ (id)observedsOfAnimatorWithTrackingId:(id)arg1;	// IMP=0x00000000000b259f
+ (void)removeAllObservedForObservingAnimatorWithId:(id)arg1;	// IMP=0x00000000000b24ed
+ (void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2;	// IMP=0x00000000000b240b
+ (void)animator:(id)arg1 isObserving:(id)arg2;	// IMP=0x00000000000b22c0
+ (id)_getPropertyAnimationForState:(id)arg1;	// IMP=0x00000000000b22a7
+ (id)_propertyAnimatorWithUUID:(id)arg1;	// IMP=0x00000000000b228e
+ (void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg1;	// IMP=0x00000000000b2237
+ (void)_saveReferenceToPropertyAnimator:(id)arg1;	// IMP=0x00000000000b218e
+ (void)_removeReferenceToActivePropertyAnimator:(id)arg1;	// IMP=0x00000000000b2137
+ (void)_saveReferenceToActivePropertyAnimator:(id)arg1;	// IMP=0x00000000000b20d3
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000b1487
+ (void)_removeTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;	// IMP=0x00000000000b1170
+ (void)_saveTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;	// IMP=0x00000000000b1014
+ (id)_currentTrackedAnimationsState;	// IMP=0x00000000000b0ffb
+ (id)_trackAdditiveAnimationWithAnimator:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 forLayer:(id)arg5;	// IMP=0x00000000000b0e22
+ (id)_trackNonAdditiveAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000b0cfc
+ (id)_trackAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forAnimationKey:(id)arg3 trackingSetup:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b0af9
+ (CDUnknownBlockType)_animationBlockForTrackingAnimation:(id)arg1 animator:(id)arg2 trackingSetup:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b090c
+ (id)_animatorWithTimingAttributesMatchingAnimation:(id)arg1 forLayer:(id)arg2 wasReused:(_Bool *)arg3;	// IMP=0x00000000000b0241
+ (double)_delayForAnimation:(id)arg1 forLayer:(id)arg2;	// IMP=0x00000000000b014a
+ (_Bool)_containsAnimatorForTrackedAnimationsUUID:(id)arg1;	// IMP=0x00000000000b0110
+ (id)_animatorsForTrackedAnimationsUUID:(id)arg1;	// IMP=0x00000000000b0064
+ (id)_performWhileTrackingAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00000000000affd1
+ (id)_animatorForTrackedAnimationsUUID:(id)arg1;	// IMP=0x00000000000aff7a
+ (void)_finishTrackingAnimations;	// IMP=0x00000000000aff23
+ (id)_startTrackingAnimations;	// IMP=0x00000000000afe9b
+ (void)_setTrackedAnimationsOptimizationsEnabled:(_Bool)arg1;	// IMP=0x00000000000afe4f
+ (_Bool)_trackedAnimationsOptimizationsEnabled;	// IMP=0x00000000000afe0b
+ (void)_setTrackedAnimationsUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000000afdbf
+ (_Bool)_trackedAnimationsUserInteractionEnabled;	// IMP=0x00000000000afd7b
+ (void)_setTrackedAnimationsScrubLinearly:(_Bool)arg1;	// IMP=0x00000000000afd2f
+ (_Bool)_trackedAnimationsScrubLinearly;	// IMP=0x00000000000afceb
+ (void)_setTrackedAnimationsStartPaused:(_Bool)arg1;	// IMP=0x00000000000afc9f
+ (_Bool)_trackedAnimationsStartPaused;	// IMP=0x00000000000afc5b
+ (_Bool)_trackingAnimationsCurrentlyEnabled;	// IMP=0x00000000000afc28
+ (_Bool)_canEnableTrackingAnimationsWithAnimators;	// IMP=0x00000000000afb91
+ (id)_currentTrackedAnimationsUUID;	// IMP=0x00000000000afb3a
+ (id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000af931
- (void).cxx_destruct;	// IMP=0x00000000000ba79a
@property(nonatomic, getter=isIntrospectable) _Bool introspectable; // @synthesize introspectable=_introspectable;
@property(nonatomic, setter=_setShouldLayoutSubviews:) _Bool shouldLayoutSubviews; // @synthesize shouldLayoutSubviews=_shouldLayoutSubviews;
@property(nonatomic, getter=_isPausedOnCompletion, setter=_setPausedOnCompletion:) _Bool pausedOnCompletion; // @synthesize pausedOnCompletion=_pausedOnCompletion;
@property(nonatomic, getter=_isStarting, setter=_setStarting:) _Bool starting; // @synthesize starting=_starting;
@property(nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic, getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:) NSMutableDictionary *animationDescriptionMap; // @synthesize animationDescriptionMap=_animationDescriptionMap;
@property(nonatomic, getter=_finishingPosition, setter=_setFinishingPosition:) long long finishingPosition; // @synthesize finishingPosition=_finishingPosition;
@property(retain, nonatomic, getter=_completions, setter=_setCompletions:) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic, getter=_animations, setter=_setAnimations:) NSMutableArray *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=_animationState, setter=_setAnimationState:) long long animationState; // @synthesize animationState=_animationState;
@property(nonatomic) _Bool scrubsLinearly; // @synthesize scrubsLinearly=_scrubsLinearly;
@property(nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
@property(nonatomic, getter=isManualHitTestingEnabled) _Bool manualHitTestingEnabled; // @synthesize manualHitTestingEnabled=_manualHitTestingEnabled;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(copy, nonatomic, setter=_setTimingParameters:) id <UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
@property(nonatomic) _Bool pausesOnCompletion; // @synthesize pausesOnCompletion=_pausesOnCompletion;
@property(nonatomic, getter=isReversed) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic, getter=_trackingIdentifier, setter=_setTrackingIdentifier:) NSUUID *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
@property(readonly, nonatomic) _Bool useCoreAnimation; // @synthesize useCoreAnimation=_useCoreAnimation;
@property(nonatomic) double internalDuration; // @synthesize internalDuration=_internalDuration;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;	// IMP=0x00000000000ba5a7
- (void)interactionProgressDidUpdate:(id)arg1;	// IMP=0x00000000000ba544
- (void)startAnimationAfterDelay:(double)arg1;	// IMP=0x00000000000ba44d
- (void)startAnimation;	// IMP=0x00000000000ba3b1
- (void)startAnimationAsPaused:(_Bool)arg1;	// IMP=0x00000000000b9acc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000b99ff
- (void)_setupAnimationTracking:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b990c
@property(nonatomic) double fractionComplete;
@property(nonatomic) double pacedFractionComplete;
- (id)_currentTimingFunction;	// IMP=0x00000000000b91e8
- (void)finalizeStoppedAnimationWithPosition:(long long)arg1;	// IMP=0x00000000000b8bc7
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x00000000000b89b3
- (void)_scheduleCACommitFuture;	// IMP=0x00000000000b892c
- (void)continueAnimation;	// IMP=0x00000000000b8915
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;	// IMP=0x00000000000b8813
- (void)_continueWithTimingParameters:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000b72f4
- (_Bool)_computeSmallestDisplacementFractionComplete:(double *)arg1;	// IMP=0x00000000000b6fbf
- (_Bool)_computeDisplacementFractionComplete:(id)arg1 withKey:(id)arg2 inLayer:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 fractionComplete:(double *)arg6 displacement:(double *)arg7;	// IMP=0x00000000000b6816
- (void)_restoreLayerValueIfReversed:(id)arg1 animation:(id)arg2 toValue:(id)arg3;	// IMP=0x00000000000b6649
- (void)pauseAnimation;	// IMP=0x00000000000b64e6
- (id)timingFunctionForPause;	// IMP=0x00000000000b640b
- (void)pauseAnimationTransiently;	// IMP=0x00000000000b63a8
- (double)_pauseAnimation:(id)arg1;	// IMP=0x00000000000b4e6e
- (void)_untrackPropertyAnimationsForKeys:(id *)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b4d86
- (id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id *)arg3;	// IMP=0x00000000000b49af
- (_Bool)_wasContinuedWithNewSpringForAnimationKey:(id)arg1 forLayer:(id)arg2;	// IMP=0x00000000000b48aa
- (_Bool)_setContinuedWithNewSpring:(_Bool)arg1 forAnimationKey:(id)arg2 forLayer:(id)arg3;	// IMP=0x00000000000b47d0
- (double)_effectiveAdditiveOffsetForKey:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b4722
- (double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b46bb
- (void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3;	// IMP=0x00000000000b45c0
- (id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b45a1
- (void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;	// IMP=0x00000000000b44ed
- (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b44cb
- (void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;	// IMP=0x00000000000b440b
@property(readonly, nonatomic) NSArray *animationDescriptions;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b42e8
- (void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2;	// IMP=0x00000000000b41b0
- (id)_newAnimationUpdateForProperty:(id)arg1 implicit:(_Bool)arg2 additive:(_Bool)arg3;	// IMP=0x00000000000b4153
- (id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3;	// IMP=0x00000000000b3fd3
- (void)clearAnimationDescriptions;	// IMP=0x00000000000b3f96
- (id)_animationDescriptionForView:(id)arg1;	// IMP=0x00000000000b3eed
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3ed0
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2;	// IMP=0x00000000000b3eb6
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3;	// IMP=0x00000000000b35e3
@property(readonly, copy) NSString *description;
- (void)finishAnimationAtPosition:(long long)arg1;	// IMP=0x00000000000b33e8
- (void)_runCompletions:(long long)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000b3349
- (void)_executeCompletionHandlerWithFinalPosition:(long long)arg1;	// IMP=0x00000000000b31e8
- (void)_clearAnimationState;	// IMP=0x00000000000b2f9b
- (void)dealloc;	// IMP=0x00000000000b2a4a
- (void)_runAnimations;	// IMP=0x00000000000b28d9
@property(readonly, nonatomic) long long state;
- (id)_stateAsString;	// IMP=0x00000000000b2849
- (void)_setKVOCompliantState:(long long)arg1;	// IMP=0x00000000000b27c7
- (void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2;	// IMP=0x00000000000b271b
- (void)_setKVOCompliantReversed:(_Bool)arg1;	// IMP=0x00000000000b26c2
- (void)_setKVOCompliantRunning:(_Bool)arg1;	// IMP=0x00000000000b2669
@property(retain, nonatomic, getter=_viewAnimationState, setter=_setViewAnimationState:) UIViewAnimationState *viewAnimationState; // @synthesize viewAnimationState=_viewAnimationState;
- (void)_setupAssociatedViewAnimationState:(id)arg1;	// IMP=0x00000000000b1ce7
- (id)animationsDescription;	// IMP=0x00000000000b1bd5
- (void)_springAnimationForXComponent:(id *)arg1 forYComponent:(id *)arg2;	// IMP=0x00000000000b1a45
- (_Bool)_generatePointValueSpringAnimationsForKeyPath:(id)arg1;	// IMP=0x00000000000b19ad
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000000b19a5
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000000b155e
@property(nonatomic) double unitDuration;
- (double)_drag;	// IMP=0x00000000000b1471
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
- (double)_dragAdjustedDuration;	// IMP=0x00000000000b1405
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000afa48
- (unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1;	// IMP=0x00000000000af73e
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4 animations:(CDUnknownBlockType)arg5;	// IMP=0x00000000000af67a
- (id)initWithDuration:(double)arg1 dampingRatio:(double)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000af5d7
- (id)initWithDuration:(double)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 animations:(CDUnknownBlockType)arg4;	// IMP=0x00000000000af516
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000af477
- (id)init;	// IMP=0x00000000000af434
- (id)initWithDuration:(double)arg1 timingParameters:(id)arg2;	// IMP=0x00000000000af3c0
- (_Bool)_addedPacingAnimation;	// IMP=0x00000000000af3b7
- (void)_setAddedPacingAnimation:(_Bool)arg1 animationKey:(id)arg2;	// IMP=0x00000000000af3a3
- (_Bool)_isActive;	// IMP=0x00000000000af26c
- (_Bool)_pausesOnCompletion;	// IMP=0x00000000000af260
- (void)_setPausesOnCompletion:(_Bool)arg1;	// IMP=0x00000000000af214
- (void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000af071

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
