//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIPresentationController;

@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    UIPresentationController *_presentationController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000f241
@property(retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;	// IMP=0x000000000000f089
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;	// IMP=0x000000000000eeec
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000000edad
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000000ebb4
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000000ea19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
