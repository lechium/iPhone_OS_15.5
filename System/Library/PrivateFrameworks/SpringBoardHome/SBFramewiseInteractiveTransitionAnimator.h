//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@class NSString;
@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning>
{
    double _percentComplete;	// 8 = 0x8
    _Bool _presenting;	// 16 = 0x10
    id <SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b6312
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <SBFramewiseInteractiveTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double percentVisible;
- (_Bool)supportsRestarting;	// IMP=0x00000000001b62a0
- (double)percentComplete;	// IMP=0x00000000001b6295
- (void)animateTransition:(id)arg1;	// IMP=0x00000000001b60dc
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000001b60ce
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x00000000001b607c
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x00000000001b602a
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;	// IMP=0x00000000001b5fc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

