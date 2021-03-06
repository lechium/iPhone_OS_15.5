//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UINavigationBar;
@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;

@interface _UINavigationBarTransitionAssistant : NSObject
{
    long long _animationCount;	// 8 = 0x8
    NSMutableArray *_animationIDs;	// 16 = 0x10
    _Bool _interruptable;	// 24 = 0x18
    _Bool _interactive;	// 25 = 0x19
    _Bool _needsLifetimeExtended;	// 26 = 0x1a
    _Bool _cancelledTransition;	// 27 = 0x1b
    _Bool _shouldHideBackButtonDuringTransition;	// 28 = 0x1c
    _Bool _shouldUpdatePromptAfterTransition;	// 29 = 0x1d
    int _transition;	// 32 = 0x20
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 40 = 0x28
    UINavigationBar *_navigationBar;	// 48 = 0x30
    id <_UINavigationBarDelegatePrivate> _delegate;	// 56 = 0x38
    double _duration;	// 64 = 0x40
}

+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;	// IMP=0x000000000016de52
+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(_Bool)arg3;	// IMP=0x000000000016ddab
- (void).cxx_destruct;	// IMP=0x000000000016ed1d
@property(readonly, nonatomic) NSArray *animationIDs; // @synthesize animationIDs=_animationIDs;
@property(nonatomic) _Bool shouldUpdatePromptAfterTransition; // @synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition;
@property(nonatomic) _Bool shouldHideBackButtonDuringTransition; // @synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition;
@property(readonly, nonatomic) _Bool cancelledTransition; // @synthesize cancelledTransition=_cancelledTransition;
@property(nonatomic) _Bool needsLifetimeExtended; // @synthesize needsLifetimeExtended=_needsLifetimeExtended;
@property(readonly, nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) _Bool interruptable; // @synthesize interruptable=_interruptable;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) __weak id <_UINavigationBarDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
- (void)_getInteractive;	// IMP=0x000000000016ec0f
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;	// IMP=0x000000000016eb55
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(_Bool)arg1;	// IMP=0x000000000016ea9d
- (void)_getTransitionCoordinator;	// IMP=0x000000000016e9fb
- (void)decrementAnimationCount;	// IMP=0x000000000016e934
- (void)incrementAnimationCount;	// IMP=0x000000000016e91e
- (void)_finishTrackingAnimations;	// IMP=0x000000000016e8cb
- (void)_startTrackingAnimations;	// IMP=0x000000000016e813
- (void)finishTrackingInteractiveTransition;	// IMP=0x000000000016e7f3
- (void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x000000000016e6e7
- (void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x000000000016e5c2
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(_Bool)arg3;	// IMP=0x000000000016e270
- (void)updateInteractiveTransitionPercent:(double)arg1;	// IMP=0x000000000016e016
- (void)startInteractiveTransition;	// IMP=0x000000000016df3f
@property(readonly, nonatomic) _Bool cancelledCleanUp;
@property(readonly, nonatomic) _Bool shouldCrossfade;
@property(readonly, nonatomic) _Bool shouldAnimateAlongside;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000016dd19

@end

