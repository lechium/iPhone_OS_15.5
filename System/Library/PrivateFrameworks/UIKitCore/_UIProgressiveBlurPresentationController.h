//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController
{
    long long _blurStyle;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003d63b9
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
- (id)_preferredAnimationControllerForDismissal;	// IMP=0x00000000003d635b
- (id)_preferredAnimationControllerForPresentation;	// IMP=0x00000000003d632d
- (_Bool)_forcesPreferredAnimationControllers;	// IMP=0x00000000003d6325
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x00000000003d5fe6
- (void)_configureSubviews;	// IMP=0x00000000003d5eb8
- (void)dismissalTransitionWillBegin;	// IMP=0x00000000003d5e3a
- (void)presentationTransitionWillBegin;	// IMP=0x00000000003d5db9
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000003d5d76
- (long long)presentationStyle;	// IMP=0x00000000003d5d6b

@end

