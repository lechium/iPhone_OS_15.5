//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import <SafariServices/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;
@protocol SFInteractiveDismissControllerDelegate, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
    unsigned long long _dismissMode;	// 16 = 0x10
    long long _interactionState;	// 24 = 0x18
    double _timestamps[3];	// 32 = 0x20
    double _velocities[3];	// 56 = 0x38
    double _accelerations[3];	// 80 = 0x50
    UIView *_dimmingView;	// 104 = 0x68
    UIScreenEdgePanGestureRecognizer *_edgeSwipeGestureRecognizer;	// 112 = 0x70
    UIViewController *_viewControllerToBeDismissed;	// 120 = 0x78
    UIView *_edgeSwipeView;	// 128 = 0x80
    id <SFInteractiveDismissControllerDelegate> _delegate;	// 136 = 0x88
    unsigned long long _sampleCount;	// 144 = 0x90
    double _totalDistance;	// 152 = 0x98
    double _skipTimeStamp;	// 160 = 0xa0
    double _previousTimeStamp;	// 168 = 0xa8
    double _previousDisplacement;	// 176 = 0xb0
    double _previousVelocity;	// 184 = 0xb8
    double _previousAcceleration;	// 192 = 0xc0
    double _averageVelocity;	// 200 = 0xc8
    double _averageAcceleration;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000014aed1
@property(nonatomic) double averageAcceleration; // @synthesize averageAcceleration=_averageAcceleration;
@property(nonatomic) double averageVelocity; // @synthesize averageVelocity=_averageVelocity;
@property(nonatomic) double previousAcceleration; // @synthesize previousAcceleration=_previousAcceleration;
@property(nonatomic) double previousVelocity; // @synthesize previousVelocity=_previousVelocity;
@property(nonatomic) double previousDisplacement; // @synthesize previousDisplacement=_previousDisplacement;
@property(nonatomic) double previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;
@property(nonatomic) double skipTimeStamp; // @synthesize skipTimeStamp=_skipTimeStamp;
@property(nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) __weak id <SFInteractiveDismissControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *edgeSwipeView; // @synthesize edgeSwipeView=_edgeSwipeView;
@property(nonatomic) __weak UIViewController *viewControllerToBeDismissed; // @synthesize viewControllerToBeDismissed=_viewControllerToBeDismissed;
@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer; // @synthesize edgeSwipeGestureRecognizer=_edgeSwipeGestureRecognizer;
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x000000000014acf7
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000014acee
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000014ace5
- (void)_presentAnimateTransition:(id)arg1;	// IMP=0x000000000014a7c2
- (void)_dismissAnimateTransition:(id)arg1;	// IMP=0x000000000014a157
- (void)animateTransition:(id)arg1;	// IMP=0x000000000014a0b5
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000014a0a7
- (_Bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double *)arg3;	// IMP=0x0000000000149e86
- (void)_updateStatistics:(id)arg1 firstSample:(_Bool)arg2 finalSample:(_Bool)arg3;	// IMP=0x0000000000149b08
- (struct CGPoint)velocityForStatistics;	// IMP=0x0000000000149a99
- (struct CGPoint)translationForStatistics;	// IMP=0x0000000000149a2a
- (double)_translationCoefficient;	// IMP=0x00000000001499a7
- (void)_animateDismissalCompleteTransition;	// IMP=0x0000000000149152
- (void)_animateDismissalCancelTransition;	// IMP=0x000000000014898d
- (double)_percentComplete:(id)arg1;	// IMP=0x0000000000148848
- (void)swiped:(id)arg1;	// IMP=0x000000000014856a
- (void)finishInteractiveTransition;	// IMP=0x000000000014851a
- (void)cancelInteractiveTransition;	// IMP=0x00000000001484ca
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x0000000000148464
- (id)init;	// IMP=0x000000000014837c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

