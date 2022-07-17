//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXNumberAnimator, PXRegionOfInterest, PXStoryViewControllerTransition, PXStoryViewModeTransition, PXStoryViewModel, UIImpactFeedbackGenerator, UIViewController;

@interface PXStoryViewControllerViewModelTransitionsCoordinator
{
    _Bool _isDismissalPreviewFractionInitialized;	// 8 = 0x8
    _Bool _isDismisallTriggered;	// 9 = 0x9
    _Bool _isPreparedForDismissal;	// 10 = 0xa
    _Bool _isFinishingDismissal;	// 11 = 0xb
    _Bool _shouldFinish;	// 12 = 0xc
    PXStoryViewModel *_viewModel;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    PXNumberAnimator *_dismissalPreviewFraction;	// 32 = 0x20
    PXStoryViewControllerTransition *_dismissalTransition;	// 40 = 0x28
    PXStoryViewModeTransition *_viewModeTransition;	// 48 = 0x30
    double _viewModeTransitionStartTime;	// 56 = 0x38
    PXRegionOfInterest *_fullsizeContentBoundingBox;	// 64 = 0x40
    UIImpactFeedbackGenerator *_dismissalFeedbackGenerator;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000009ef89d
@property(retain, nonatomic) UIImpactFeedbackGenerator *dismissalFeedbackGenerator; // @synthesize dismissalFeedbackGenerator=_dismissalFeedbackGenerator;
@property(nonatomic) _Bool shouldFinish; // @synthesize shouldFinish=_shouldFinish;
@property(nonatomic) _Bool isFinishingDismissal; // @synthesize isFinishingDismissal=_isFinishingDismissal;
@property(nonatomic) _Bool isPreparedForDismissal; // @synthesize isPreparedForDismissal=_isPreparedForDismissal;
@property(nonatomic) _Bool isDismisallTriggered; // @synthesize isDismisallTriggered=_isDismisallTriggered;
@property(retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox; // @synthesize fullsizeContentBoundingBox=_fullsizeContentBoundingBox;
@property(nonatomic) double viewModeTransitionStartTime; // @synthesize viewModeTransitionStartTime=_viewModeTransitionStartTime;
@property(retain, nonatomic) PXStoryViewModeTransition *viewModeTransition; // @synthesize viewModeTransition=_viewModeTransition;
@property(retain, nonatomic) PXStoryViewControllerTransition *dismissalTransition; // @synthesize dismissalTransition=_dismissalTransition;
@property(nonatomic) _Bool isDismissalPreviewFractionInitialized; // @synthesize isDismissalPreviewFractionInitialized=_isDismissalPreviewFractionInitialized;
@property(readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction; // @synthesize dismissalPreviewFraction=_dismissalPreviewFraction;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000009ef64d
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x00000000009ef531
- (void)_updateSwipeDownDismissalPreview;	// IMP=0x00000000009ef4b3
- (void)_invalidateSwipeDownDismissalPreview;	// IMP=0x00000000009ef46f
- (void)_updateSwipeDownTriggeringDismissal;	// IMP=0x00000000009ef2d1
- (void)_invalidateSwipeDownTriggeringDismissal;	// IMP=0x00000000009ef28d
- (void)_updateDesiredDismissalState;	// IMP=0x00000000009eef27
- (void)_invalidateDesiredDismissalState;	// IMP=0x00000000009eeee3
- (void)_updateShouldFinish;	// IMP=0x00000000009eee82
- (void)_invalidateShouldFinish;	// IMP=0x00000000009eee3e
- (void)_updateFractionCompleted;	// IMP=0x00000000009eedc0
- (void)_invalidateFractionCompleted;	// IMP=0x00000000009eed7c
- (void)_updateViewControllerDismissalTargetPlacement;	// IMP=0x00000000009eecfe
- (void)_invalidateViewControllerDismissalTargetPlacement;	// IMP=0x00000000009eecba
- (void)_updateSummaryItemPlacementOverride;	// IMP=0x00000000009eeba5
- (void)_invalidateSummaryItemPlacementOverride;	// IMP=0x00000000009eeb61
- (void)_updateFullsizeContentBoundingBox;	// IMP=0x00000000009eea13
- (void)_invalidateFullsizeContentBoundingBox;	// IMP=0x00000000009ee9cf
- (void)_updateViewModeTransition;	// IMP=0x00000000009ee960
- (void)_invalidateViewModeTransition;	// IMP=0x00000000009ee91c
- (void)_dismissalTransition:(id)arg1 didEnd:(_Bool)arg2;	// IMP=0x00000000009ee7c9
- (void)_endDismissal:(_Bool)arg1;	// IMP=0x00000000009ee6bf
- (void)_forceDismissViewController;	// IMP=0x00000000009ee67b
- (void)_tryDismissingViewController;	// IMP=0x00000000009ee58c
- (void)_handleViewModeTransitionStartDelay;	// IMP=0x00000000009ee372
- (void)configureUpdater:(id)arg1;	// IMP=0x00000000009ee057
- (id)initWithViewModel:(id)arg1 viewController:(id)arg2;	// IMP=0x00000000009edf65
- (id)initWithObservableModel:(id)arg1;	// IMP=0x00000000009edee2

@end
