//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBViewControllerInteractiveTransitioning-Protocol.h>

@class NSString;
@protocol SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;

@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
    id <UIViewControllerAnimatedTransitioning> _animator;	// 16 = 0x10
    double _completionSpeed;	// 24 = 0x18
    long long _completionCurve;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000055487a
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x00000000005547ea
- (void)cancelTransition;	// IMP=0x00000000005547e4
- (void)finishInteractiveTransition;	// IMP=0x00000000005547de
- (void)updateTransition:(double)arg1;	// IMP=0x00000000005547b8
- (id)initWithAnimator:(id)arg1;	// IMP=0x0000000000554725
- (id)init;	// IMP=0x000000000055469e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

