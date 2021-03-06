//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXNumberAnimator, PXStoryModel, PXStoryViewModel;

@interface PXStoryOverlayController
{
    _Bool _preventAnimatingNextRelatedOverlayVisibilityFractionChange;	// 8 = 0x8
    PXStoryViewModel *_viewModel;	// 16 = 0x10
    PXStoryModel *_mainModel;	// 24 = 0x18
    PXNumberAnimator *_chromeVisibilityFractionAnimator;	// 32 = 0x20
    PXNumberAnimator *_scrubberVisibilityFractionAnimator;	// 40 = 0x28
    PXNumberAnimator *_styleSwitcherVisibilityFractionAnimator;	// 48 = 0x30
    PXNumberAnimator *_relatedOverlayVisibilityFractionAnimator;	// 56 = 0x38
    PXNumberAnimator *_fadeOutOverlayVisibilityFractionAnimator;	// 64 = 0x40
    PXNumberAnimator *_infoPanelVisibilityFractionAnimator;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006eb231
@property(nonatomic) _Bool preventAnimatingNextRelatedOverlayVisibilityFractionChange; // @synthesize preventAnimatingNextRelatedOverlayVisibilityFractionChange=_preventAnimatingNextRelatedOverlayVisibilityFractionChange;
@property(readonly, nonatomic) PXNumberAnimator *infoPanelVisibilityFractionAnimator; // @synthesize infoPanelVisibilityFractionAnimator=_infoPanelVisibilityFractionAnimator;
@property(readonly, nonatomic) PXNumberAnimator *fadeOutOverlayVisibilityFractionAnimator; // @synthesize fadeOutOverlayVisibilityFractionAnimator=_fadeOutOverlayVisibilityFractionAnimator;
@property(readonly, nonatomic) PXNumberAnimator *relatedOverlayVisibilityFractionAnimator; // @synthesize relatedOverlayVisibilityFractionAnimator=_relatedOverlayVisibilityFractionAnimator;
@property(readonly, nonatomic) PXNumberAnimator *styleSwitcherVisibilityFractionAnimator; // @synthesize styleSwitcherVisibilityFractionAnimator=_styleSwitcherVisibilityFractionAnimator;
@property(readonly, nonatomic) PXNumberAnimator *scrubberVisibilityFractionAnimator; // @synthesize scrubberVisibilityFractionAnimator=_scrubberVisibilityFractionAnimator;
@property(readonly, nonatomic) PXNumberAnimator *chromeVisibilityFractionAnimator; // @synthesize chromeVisibilityFractionAnimator=_chromeVisibilityFractionAnimator;
@property(retain, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(readonly, nonatomic) __weak PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000006eae74
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x00000000006eadf7
- (void)_updateRelatedOverlayVisibilityFraction;	// IMP=0x00000000006ead79
- (void)_invalidateRelatedOverlayVisibilityFraction;	// IMP=0x00000000006ead35
- (void)_updateRelatedOverlayVisibilityFractionAnimator;	// IMP=0x00000000006eac63
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;	// IMP=0x00000000006eac1f
- (void)_updateStyleSwitcherVisibilityFraction;	// IMP=0x00000000006eaba1
- (void)_invalidateStyleSwitcherVisibilityFraction;	// IMP=0x00000000006eab5d
- (void)_updateScrubberVisibilityFraction;	// IMP=0x00000000006eaadf
- (void)_invalidateScrubberVisibilityFraction;	// IMP=0x00000000006eaa9b
- (void)_updateAnimator:(id)arg1 endValue:(double)arg2 animated:(_Bool)arg3;	// IMP=0x00000000006ea9f4
- (void)_updateInfoPanelVisibilityFraction;	// IMP=0x00000000006ea976
- (void)_invalidateInfoPanelVisibilityFraction;	// IMP=0x00000000006ea932
- (void)_updateInfoPanelVisibilityFractionAnimator;	// IMP=0x00000000006ea88b
- (void)_invalidateInfoPanelVisibilityFractionAnimator;	// IMP=0x00000000006ea847
- (void)_updateFadeOutOverlayVisibilityFraction;	// IMP=0x00000000006ea7c9
- (void)_invalidateFadeOutOverlayVisibilityFraction;	// IMP=0x00000000006ea785
- (void)_updateFadeOutOverlayVisibilityFractionAnimator;	// IMP=0x00000000006ea6f1
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;	// IMP=0x00000000006ea6ad
- (void)_updateStyleSwitcherVisibilityFractionAnimator;	// IMP=0x00000000006ea5a6
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;	// IMP=0x00000000006ea562
- (void)_updateScrubberVisibilityFractionAnimator;	// IMP=0x00000000006ea4bd
- (void)_invalidateScrubberVisibilityFractionAnimator;	// IMP=0x00000000006ea479
- (void)_updateChromeVisibilityFraction;	// IMP=0x00000000006ea3fb
- (void)_invalidateChromeVisibilityFraction;	// IMP=0x00000000006ea3b7
- (void)_updateChromeVisibilityFractionAnimator;	// IMP=0x00000000006ea312
- (void)_invalidateChromeVisibilityFractionAnimator;	// IMP=0x00000000006ea2ce
- (void)_updateRelatedOverlayVisible;	// IMP=0x00000000006ea014
- (void)_invalidateRelatedOverlayVisible;	// IMP=0x00000000006e9fd0
- (void)_updateChromeItems;	// IMP=0x00000000006e9b1d
- (void)_invalidateChromeItems;	// IMP=0x00000000006e9ad9
- (void)_updateMainModel;	// IMP=0x00000000006e9a6a
- (void)_invalidateMainModel;	// IMP=0x00000000006e9a26
- (void)configureUpdater:(id)arg1;	// IMP=0x00000000006e9826
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000006e958a
- (id)initWithObservableModel:(id)arg1;	// IMP=0x00000000006e9507

@end

