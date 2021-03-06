//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSNumber, UIView, _UIPageCurlState;

@interface _UIPageCurl : NSObject
{
    long long _spineLocation;	// 8 = 0x8
    struct CGRect _contentRect;	// 16 = 0x10
    UIView *_contentView;	// 48 = 0x30
    _UIPageCurlState *_manualPageCurlState;	// 56 = 0x38
    NSMutableArray *_pendingStateQueue;	// 64 = 0x40
    NSMutableArray *_activeStateQueue;	// 72 = 0x48
    NSMutableSet *_completedStates;	// 80 = 0x50
    double _delayBetweenSuccessiveAnimations;	// 88 = 0x58
    double _pageDiagonalAngle;	// 96 = 0x60
    double _pageDiagonalLength;	// 104 = 0x68
    double _manualPageCurlMaxDAngle;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000046b676
@property(nonatomic, setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle; // @synthesize _manualPageCurlMaxDAngle;
@property(readonly, nonatomic) long long _spineLocation; // @synthesize _spineLocation;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;	// IMP=0x000000000046af7e
- (void)_abortManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;	// IMP=0x000000000046af6a
- (void)_completeManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;	// IMP=0x000000000046af53
- (void)_endManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(_Bool)arg3;	// IMP=0x000000000046aa46
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(_Bool)arg2;	// IMP=0x000000000046a8b5
- (void)_updateManualCurlToLocation:(struct CGPoint)arg1;	// IMP=0x000000000046a802
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;	// IMP=0x000000000046a09d
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(_Bool)arg1;	// IMP=0x0000000000469ee5
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(_Bool)arg2;	// IMP=0x0000000000469b07
- (void)_forceCleanupState:(id)arg1 finished:(_Bool)arg2 completed:(_Bool)arg3;	// IMP=0x0000000000469aed
- (void)_cleanupState:(id)arg1;	// IMP=0x0000000000469ad8
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(struct CGPoint)arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(CDUnknownBlockType)arg6 finally:(CDUnknownBlockType)arg7;	// IMP=0x00000000004695ee
- (_Bool)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x000000000046955e
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000469514
- (struct CGPoint)_referenceLocationForInitialLocation:(struct CGPoint)arg1 direction:(long long)arg2;	// IMP=0x0000000000469327
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;	// IMP=0x0000000000468c4e
- (id)_animationKeyPaths;	// IMP=0x0000000000468c17
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint)arg2 time:(double *)arg3 radius:(double *)arg4 angle:(double *)arg5;	// IMP=0x0000000000468118
- (double)_distanceToTravelWithCurrentSpineLocation;	// IMP=0x0000000000468006
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double *)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(struct CGPoint)arg7 state:(id)arg8;	// IMP=0x00000000004673ad
- (void)_ensureCurlFilterOnLayer:(id)arg1;	// IMP=0x000000000046730a
- (void)_fromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;	// IMP=0x00000000004672f8
- (_Bool)_populateFromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;	// IMP=0x0000000000466de7
- (double)_baseAngleOffsetForState:(id)arg1;	// IMP=0x0000000000466c67
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;	// IMP=0x0000000000466a45
- (id)_newCurlFilter;	// IMP=0x000000000046686c
- (struct CGRect)_pageViewFrame:(_Bool)arg1;	// IMP=0x000000000046678f
- (void)_setContentRect:(struct CGRect)arg1;	// IMP=0x00000000004665d7
@property(readonly, nonatomic) NSNumber *_wrappedManualPageCurlDirection;
- (_Bool)_areAnimationsInFlightOrPending;	// IMP=0x0000000000466546
@property(readonly, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) _Bool _manualPageCurlInProgressAndUncommitted;
- (void)dealloc;	// IMP=0x00000000004664dc
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(struct CGRect)arg2 inContentView:(id)arg3;	// IMP=0x0000000000466224

@end

