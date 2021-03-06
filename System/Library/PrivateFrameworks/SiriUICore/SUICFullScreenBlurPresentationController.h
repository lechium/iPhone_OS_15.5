//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController
{
    _UIBackdropView *_fullScreenBlurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000dcbe
- (void)_stageViewsForFadeIn;	// IMP=0x000000000000db6d
@property(nonatomic) unsigned long long blurStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3;	// IMP=0x000000000000da89
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000000da71
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000000d822
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000000d7ff
- (void)presentationTransitionWillBegin;	// IMP=0x000000000000d5f2
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000000d5dd

@end

