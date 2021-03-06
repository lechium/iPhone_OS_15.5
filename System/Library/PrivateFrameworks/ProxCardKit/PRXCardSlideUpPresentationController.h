//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface PRXCardSlideUpPresentationController : UIPresentationController
{
    UIView *_dimmingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015d6f
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000015d1d
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000015c33
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000015bf2
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000015a51
- (id)initWithDimmingStyle:(long long)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x00000000000158f8
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000000158de

@end

