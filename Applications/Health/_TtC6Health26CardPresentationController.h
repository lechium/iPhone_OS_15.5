//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class MISSING_TYPE, UIView;

@interface _TtC6Health26CardPresentationController : UIPresentationController
{
    MISSING_TYPE *$__lazy_storage_$_panGestureRecognizer;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_backingView;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_shadowView;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_vibrancyAnimator;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_verticalMovementAnimator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000041150
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000041090
- (void)handlePanGestureWithRecognizer:(id)arg1;	// IMP=0x0010000000040a40
- (void)containerViewWillLayoutSubviews;	// IMP=0x00100000000408f0
- (void)dismissalTransitionWillBegin;	// IMP=0x0010000000040480
- (void)presentationTransitionWillBegin;	// IMP=0x0010000000040250
@property(nonatomic, readonly) UIView *presentedView;

@end
