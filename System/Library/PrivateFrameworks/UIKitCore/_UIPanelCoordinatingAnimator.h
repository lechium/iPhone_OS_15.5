//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewControllerTransitionCoordinator-Protocol.h>
#import <UIKitCore/UIViewControllerTransitionCoordinatorContext-Protocol.h>

@class NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPanelCoordinatingAnimator <UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext>
{
    _Bool _wasCancelled;	// 8 = 0x8
    _Bool _isInStartAnimation;	// 9 = 0x9
    NSMutableArray *_clientCompletions;	// 16 = 0x10
    NSMutableArray *_lateAnimations;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000049ce68
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void)_runCompletions:(long long)arg1 finished:(_Bool)arg2;	// IMP=0x000000000049cddc
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x000000000049cda2
- (void)_sendPanelCoordinationCompletions;	// IMP=0x000000000049cc46
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (id)viewForKey:(id)arg1;	// IMP=0x000000000049cbb0
- (id)viewControllerForKey:(id)arg1;	// IMP=0x000000000049cba8
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000049cb7b
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000049cb75
- (void)startAnimation;	// IMP=0x000000000049c7a3
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000049c5a6
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000049c58c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly) Class superclass;

@end
