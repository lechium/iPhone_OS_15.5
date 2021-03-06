//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSString, UIView;
@protocol UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface SVSCommonNavController : UINavigationController
{
    UIView *_dimmingView;	// 8 = 0x8
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001df612
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)pushViewController:(id)arg1 transition:(int)arg2;	// IMP=0x00100000001df543
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001df4aa
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001df3e8
- (void)cancelProxCardDraggingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001df32c
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001df324
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00100000001df27b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

