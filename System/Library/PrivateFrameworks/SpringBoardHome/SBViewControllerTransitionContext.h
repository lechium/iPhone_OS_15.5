//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBViewControllerContextTransitioning-Protocol.h>
#import <SpringBoardHome/SBViewControllerTransitionCoordinator-Protocol.h>

@class BSUIAnimationFactory, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView;
@protocol SBHViewControllerTransitionAnimationContext, SBViewControllerTransitionContextDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator>
{
    long long _presentationStyle;	// 8 = 0x8
    struct CGAffineTransform _targetTransform;	// 16 = 0x10
    NSMutableDictionary *_viewControllersByKey;	// 64 = 0x40
    NSMutableDictionary *_viewsByKey;	// 72 = 0x48
    NSMapTable *_initialFramesByViewController;	// 80 = 0x50
    NSMapTable *_finalFramesByViewController;	// 88 = 0x58
    _Bool _transitionStarted;	// 96 = 0x60
    _Bool _animationFinished;	// 97 = 0x61
    _Bool _transitionFinished;	// 98 = 0x62
    _Bool _transitionIsCancelled;	// 99 = 0x63
    _Bool _transitionWasEverCancelled;	// 100 = 0x64
    _Bool _transitionBeganInteractively;	// 101 = 0x65
    _Bool _transitionWasInteractive;	// 102 = 0x66
    _Bool _wantsAnimation;	// 103 = 0x67
    _Bool _transitionDidBeginCalled;	// 104 = 0x68
    double _transitionPercentComplete;	// 112 = 0x70
    unsigned long long _transitionAnimationOptions;	// 120 = 0x78
    BSUIAnimationFactory *_transitionAnimationFactory;	// 128 = 0x80
    id <UIViewControllerAnimatedTransitioning> _animator;	// 136 = 0x88
    id <UIViewControllerInteractiveTransitioning> _interactor;	// 144 = 0x90
    NSMutableArray *_alongsideAnimations;	// 152 = 0x98
    NSMutableArray *_alongsideCompletions;	// 160 = 0xa0
    NSMutableArray *_alongsideInteractionEndedHandlers;	// 168 = 0xa8
    NSMutableSet *_alongsideAnimationViews;	// 176 = 0xb0
    NSMutableArray *_transitionContinuations;	// 184 = 0xb8
    unsigned long long _outstandingClientCompletionCount;	// 192 = 0xc0
    id <SBViewControllerTransitionContextDelegate> _delegate;	// 200 = 0xc8
    UIView *_containerView;	// 208 = 0xd0
    id _userInfo;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000309f5
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool wantsAnimation; // @synthesize wantsAnimation=_wantsAnimation;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SBViewControllerTransitionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000030906
- (id)succinctDescription;	// IMP=0x00000000000308b6
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000301dd
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003018d
@property(readonly, copy) NSString *description;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003016e
- (void)_runInteractionEndedHandlers;	// IMP=0x000000000002ffe8
- (void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;	// IMP=0x000000000002fe62
- (void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002fc4f
- (void)_startInteractiveTransition;	// IMP=0x000000000002fc2f
- (id)_interactiveAnimator;	// IMP=0x000000000002fbf6
- (_Bool)_animatorIsInteractive;	// IMP=0x000000000002fbbc
- (_Bool)_objectSupportsRestarting:(id)arg1;	// IMP=0x000000000002fb6e
- (_Bool)_interactorSupportsRestarting;	// IMP=0x000000000002fb55
- (_Bool)_animatorSupportsRestarting;	// IMP=0x000000000002fb15
- (id)_reversibleAnimator;	// IMP=0x000000000002fadc
- (_Bool)_animatorIsReversible;	// IMP=0x000000000002fac1
- (void)_updateTransitionAnimationFactoryAndOptions;	// IMP=0x000000000002f9f9
- (CDUnknownBlockType)_acquireTransitionCompletion;	// IMP=0x000000000002f966
- (void)addTransitionContinuation:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f80b
- (void)_completeTransition;	// IMP=0x000000000002f57c
- (void)_completeTransitionIfPossible;	// IMP=0x000000000002f558
- (_Bool)requiresRestartableAnimations;	// IMP=0x000000000002f546
- (_Bool)requiresInteractiveAnimations;	// IMP=0x000000000002f534
- (_Bool)requiresCancellableAnimations;	// IMP=0x000000000002f4fb
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f49a
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f40a
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f2f5
- (unsigned long long)transitionAnimationOptions;	// IMP=0x000000000002f2eb
- (id)transitionAnimationFactory;	// IMP=0x000000000002f2da
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (_Bool)wasPreviousPhaseInteractive;	// IMP=0x000000000002f214
@property(readonly, nonatomic) _Bool initiallyInteractive;
- (_Bool)transitionWasRestarted;	// IMP=0x000000000002f1df
- (void)restartTransition;	// IMP=0x000000000002edf7
- (_Bool)supportsRestarting;	// IMP=0x000000000002edb0
- (_Bool)supportsCancelling;	// IMP=0x000000000002ed9e
- (void)cancelTransition;	// IMP=0x000000000002ea20
- (struct CGRect)finalFrameForViewController:(id)arg1;	// IMP=0x000000000002e9c1
- (struct CGRect)initialFrameForViewController:(id)arg1;	// IMP=0x000000000002e962
- (id)viewForKey:(id)arg1;	// IMP=0x000000000002e94c
- (id)viewControllerForKey:(id)arg1;	// IMP=0x000000000002e936
- (void)completeTransition:(_Bool)arg1;	// IMP=0x000000000002e61a
- (void)pauseInteractiveTransition;	// IMP=0x000000000002e614
- (void)cancelInteractiveTransition;	// IMP=0x000000000002e553
- (void)finishInteractiveTransition;	// IMP=0x000000000002e376
- (void)updateInteractiveTransition:(double)arg1;	// IMP=0x000000000002e21e
@property(readonly, nonatomic) _Bool transitionWasCancelled;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (void)startTransition;	// IMP=0x000000000002de53
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)setFinalFrame:(struct CGRect)arg1 forViewController:(id)arg2;	// IMP=0x000000000002ddab
- (void)setInitialFrame:(struct CGRect)arg1 forViewController:(id)arg2;	// IMP=0x000000000002dd1a
- (void)setView:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002dd04
- (void)setViewController:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002dcee
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> interactor;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator;
- (void)dealloc;	// IMP=0x000000000002dad1
- (id)init;	// IMP=0x000000000002d8ef
@property(retain, nonatomic) id <SBHViewControllerTransitionAnimationContext> animationContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

