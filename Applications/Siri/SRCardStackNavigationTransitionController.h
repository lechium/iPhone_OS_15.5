//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSMutableArray, NSString, SRCompactResultView, SRCompactResultViewController, UINavigationController, UIPanGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning;

@interface SRCardStackNavigationTransitionController : UIPercentDrivenInteractiveTransition
{
    _Bool;	// 8 = 0x8
    _Bool _cancelling;	// 9 = 0x9
    long long _operation;	// 16 = 0x10
    SRCompactResultViewController *_compactResultViewController;	// 24 = 0x18
    UIPanGestureRecognizer *_panGestureRecognizer;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    NSMutableArray *_recentViewControllers;	// 48 = 0x30
    struct CGRect _fromPlatteredCardViewOriginalFrame;	// 56 = 0x38
    struct CGRect _backgroundEmptyPlatterViewOriginalFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000077b36
@property(retain, nonatomic, getter=_recentViewControllers, setter=_setRecentViewControllers:) NSMutableArray *recentViewControllers; // @synthesize recentViewControllers=_recentViewControllers;
@property(nonatomic, getter=_backgroundEmptyPlatterViewOriginalFrame, setter=_setBackgroundEmptyPlatterViewOriginalFrame:) struct CGRect backgroundEmptyPlatterViewOriginalFrame; // @synthesize backgroundEmptyPlatterViewOriginalFrame=_backgroundEmptyPlatterViewOriginalFrame;
@property(nonatomic, getter=_fromPlatteredCardViewOriginalFrame, setter=_setFromPlatteredCardViewOriginalFrame:) struct CGRect fromPlatteredCardViewOriginalFrame; // @synthesize fromPlatteredCardViewOriginalFrame=_fromPlatteredCardViewOriginalFrame;
@property(nonatomic, getter=_navigationController, setter=_setNavigationController:) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic, getter=_isCancelling, setter=_setCancelling:) _Bool cancelling; // @synthesize cancelling=_cancelling;
@property(nonatomic, getter=_isGesturing, setter=_setGesturing:) _Bool gesturing; // @synthesize gesturing=_gesturing;
@property(retain, nonatomic, getter=_panGestureRecognizer) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) SRCompactResultViewController *compactResultViewController; // @synthesize compactResultViewController=_compactResultViewController;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void)_panGestureRecognizerDidPan:(id)arg1;	// IMP=0x0010000000077751
- (struct CGRect)_prepareBackgroundEmptyPlatteredViewForTransitionInContext:(id)arg1;	// IMP=0x0010000000077590
- (struct CGRect)_prepareToPlatteredCardViewForTransitionInContext:(id)arg1;	// IMP=0x0010000000077248
- (struct CGAffineTransform)_calculateMoveFromPlatteredCardViewToBackgroundAffineTransformForPercentComplete:(double)arg1 withSemanticContentAttribute:(long long)arg2;	// IMP=0x0010000000077198
- (struct CGAffineTransform)_prepareFromPlatteredCardViewForTransitionWithContext:(id)arg1;	// IMP=0x0010000000077079
- (struct CGRect)_convertFrameForFromPlatteredCardView:(id)arg1 toContainerView:(id)arg2;	// IMP=0x0010000000076faa
- (id)_toPlatteredCardViewGivenToViewController:(id)arg1;	// IMP=0x0010000000076f5a
- (id)_fromPlatteredCardViewGivenFromViewController:(id)arg1;	// IMP=0x0010000000076ea3
- (unsigned long long)_expectedPopCountForTransitionContext:(id)arg1;	// IMP=0x0010000000076e0c
- (id)_backgroundPlatteredCardViewForOperation:(long long)arg1 recentViewControllers:(id)arg2;	// IMP=0x0010000000076ceb
- (id)_safelyExtractSnippetPlatterViewControllerFromViewController:(id)arg1;	// IMP=0x0010000000076c91
- (void)_transitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000076733
- (void)_animateOnePopTransition:(id)arg1 originalContext:(id)arg2 andComplete:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000762ec
- (id)_popTransitionContextGivenOriginalContext:(id)arg1 revealedViewController:(id)arg2 poppedViewController:(id)arg3 duration:(double)arg4;	// IMP=0x0010000000075f16
- (void)_animateMultiPopKeyframe:(unsigned long long)arg1 outOfTotalKeyframes:(unsigned long long)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000075c72
- (void)_recursivelyAnimateNextMultiPopKeyframe:(unsigned long long)arg1 outOfTotalKeyframes:(unsigned long long)arg2 transitionContext:(id)arg3;	// IMP=0x0010000000075ad2
- (void)_animatePushTransition:(id)arg1;	// IMP=0x00100000000755c9
- (void)_performPushTransitionFromViewController:(id)arg1 andView:(id)arg2 toViewController:(id)arg3 andView:(id)arg4 inContainerView:(id)arg5 recentViewControllers:(id)arg6 transitionDuration:(double)arg7 animated:(_Bool)arg8 transitionCompletion:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0010000000075003
@property(readonly, nonatomic, getter=_compactResultView) SRCompactResultView *compactResultView;
- (void)layout;	// IMP=0x0010000000074b39
- (double)transitionDuration:(id)arg1;	// IMP=0x0010000000074a8e
- (double)_transitionDurationForOperation:(long long)arg1 context:(id)arg2;	// IMP=0x0010000000074a1b
- (void)animateTransition:(id)arg1;	// IMP=0x001000000007497f
- (void)_animateTransitionForOperation:(long long)arg1 context:(id)arg2;	// IMP=0x0010000000074906
- (id)interactionControllerForAnimationController:(id)arg1;	// IMP=0x00100000000748da
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
- (void)configureWithNavigationController:(id)arg1;	// IMP=0x001000000007487a
- (id)initWithCompactResultViewController:(id)arg1;	// IMP=0x00100000000747d1

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
