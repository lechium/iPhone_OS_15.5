//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface PopUpPresentationController : UIPresentationController
{
    _Bool _blurBackground;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a76e1
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool blurBackground; // @synthesize blurBackground=_blurBackground;
- (void)containerViewWillLayoutSubviews;	// IMP=0x00100000001a7627
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00100000001a75e6
- (void)dismissalTransitionWillBegin;	// IMP=0x00100000001a7540
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00100000001a74ff
- (void)presentationTransitionWillBegin;	// IMP=0x00100000001a7388

@end

