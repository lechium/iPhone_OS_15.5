//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>

@class NSString, UIDimmingView, UIPresentationController, UIView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate>
{
    UIPresentationController *_searchPresentationController;	// 8 = 0x8
    UIView *_searchBarContainerView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    _Bool _isFormSheetPresentation;	// 32 = 0x20
    _Bool _presentationWasAnimated;	// 33 = 0x21
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;	// 40 = 0x28
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;	// 48 = 0x30
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) _Bool presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000d4cb0d
- (_Bool)searchBarWillResizeForScopeBar;	// IMP=0x0000000000d4ca7e
- (double)resultsControllerContentOffset;	// IMP=0x0000000000d4c6f2
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000d4c4f5
- (id)locateNavigationController;	// IMP=0x0000000000d4c47a
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000d4c456
- (double)statusBarAdjustment;	// IMP=0x0000000000d4c30a
- (_Bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000d4c1ee
- (_Bool)_statusBarPreferredHidden;	// IMP=0x0000000000d4c196
- (id)dimmingView;	// IMP=0x0000000000d4c0ac
- (struct CGSize)updateSearchBarContainerFrame;	// IMP=0x0000000000d4bbd5
- (double)_statusBarHeightChangeDueToRotation;	// IMP=0x0000000000d4bac3
- (_Bool)_currentTransitionIsRotating;	// IMP=0x0000000000d4ba73
- (void)removeContainerViewFromSuperview;	// IMP=0x0000000000d4ba5d
- (id)searchBarContainerView;	// IMP=0x0000000000d4b7c9
- (id)_searchBarContainerSuperview;	// IMP=0x0000000000d4b77b
- (struct CGRect)_containerFrame;	// IMP=0x0000000000d4b3b5
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;	// IMP=0x0000000000d4b2cd
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;	// IMP=0x0000000000d4b137
- (_Bool)presentationIsPopoverToOverFullScreenAdaptation;	// IMP=0x0000000000d4b0d9
- (id)_searchControllerPresenting;	// IMP=0x0000000000d4b0a5
- (void)dealloc;	// IMP=0x0000000000d4b045
- (id)initWithSearchPresentationController:(id)arg1;	// IMP=0x0000000000d4afe2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
