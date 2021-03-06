//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISearchControllerPresenting-Protocol.h>

@class NSString, UIPresentationController, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;	// 8 = 0x8
    UIView *_wrapperView;	// 16 = 0x10
    struct CGRect finalFrameForContainerView;	// 24 = 0x18
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000d4a85c
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000d4a746
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d4a734
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000d4a729
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000d4a5e5
- (void)_transitionFromDidEnd;	// IMP=0x0000000000d4a5ce
- (void)_transitionFromWillBegin;	// IMP=0x0000000000d4a5bc
- (void)_transitionToDidEnd;	// IMP=0x0000000000d4a5a5
- (void)_transitionToWillBegin;	// IMP=0x0000000000d4a56a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000d4a4b8
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;	// IMP=0x0000000000d4a450
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000000d4a448
- (_Bool)_shouldSubscribeToKeyboardNotifications;	// IMP=0x0000000000d4a440
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x0000000000d4a438
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;	// IMP=0x0000000000d4a3fa
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000d4a34a
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000d4a2b0
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000000d49d16
- (id)presentedView;	// IMP=0x0000000000d49d05
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000d49b9b
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000d499bc
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000d4992a
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000d4949b
- (void)dealloc;	// IMP=0x0000000000d4944d
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000d49363

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

