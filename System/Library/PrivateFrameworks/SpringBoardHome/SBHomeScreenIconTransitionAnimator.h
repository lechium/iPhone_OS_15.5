//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconAnimatorDelegate-Protocol.h>
#import <SpringBoardHome/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@class NSString, SBHIconAnimationSettings, SBIconAnimator, SBNestingViewController;
@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBViewControllerContextTransitioning;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
    unsigned long long _transitionToken;	// 16 = 0x10
    SBHIconAnimationSettings *_currentSettings;	// 24 = 0x18
    unsigned long long _currentOperation;	// 32 = 0x20
    _Bool _receivedFirstInteractiveUpdate;	// 40 = 0x28
    _Bool _needsTransitionTokenIncrementOnNextUpdate;	// 41 = 0x29
    SBIconAnimator *_iconAnimator;	// 48 = 0x30
    SBNestingViewController *_childViewController;	// 56 = 0x38
    unsigned long long _operation;	// 64 = 0x40
    double _initialDelay;	// 72 = 0x48
    id <SBHomeScreenIconTransitionAnimatorDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016a1f8
@property(nonatomic) __weak id <SBHomeScreenIconTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) SBNestingViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) SBIconAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(readonly, nonatomic) SBHIconAnimationSettings *currentSettings;
- (_Bool)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000016a024
- (void)iconAnimatorWasInvalidated:(id)arg1;	// IMP=0x0000000000169fd7
- (void)animationEnded:(_Bool)arg1;	// IMP=0x0000000000169f6a
- (_Bool)supportsRestarting;	// IMP=0x0000000000169f62
- (double)percentComplete;	// IMP=0x0000000000169f12
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x0000000000169d98
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;	// IMP=0x0000000000169c20
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x0000000000169a7c
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000169865
- (id)transitionAnimationFactory:(id)arg1;	// IMP=0x00000000001695b3
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000001694fc
- (void)completeImmediately;	// IMP=0x000000000016938c
- (void)reverse;	// IMP=0x000000000016934e
- (void)restart;	// IMP=0x0000000000169312
- (void)cancel;	// IMP=0x00000000001692da
@property(readonly, nonatomic) unsigned long long currentOperation;
@property(readonly, nonatomic, getter=wasRestarted) _Bool restarted;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000000001691ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
