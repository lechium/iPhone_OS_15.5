//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIView;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView
{
    id <_UIQueuingScrollViewDelegate> _qDelegate;	// 16 = 0x10
    id <_UIQueuingScrollViewDataSource> _qDataSource;	// 24 = 0x18
    long long _navigationOrientation;	// 32 = 0x20
    NSArray *_views;	// 40 = 0x28
    NSArray *_wrapperViews;	// 48 = 0x30
    UIView *_pendingVisibleView;	// 56 = 0x38
    double _pageSpacing;	// 64 = 0x40
    NSMutableArray *_viewStateQueue;	// 72 = 0x48
    NSMutableArray *_completionStateQueue;	// 80 = 0x50
    _Bool _manualScrollInProgress;	// 88 = 0x58
    struct {
        unsigned int delegateInterestedInPendingScrolls:1;
        unsigned int delegateInterestedInCommittedScrolls:1;
        unsigned int delegateInterestedInCompletedScrolls:1;
        unsigned int delegateInterestedInBailedOutScrolls:1;
        unsigned int delegateInterestedFinishedScrolling:1;
        unsigned int delegateCanVetoSubviewLayout:1;
        unsigned int dataSourceSuppliesBeforeView:1;
        unsigned int dataSourceSuppliesAfterView:1;
        unsigned int dataSourceInterestedInFlushedViews:1;
    } _delegateFlags;	// 92 = 0x5c
    struct CGRect _disabledScrollingRegion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000473d13
@property(nonatomic) struct CGRect disabledScrollingRegion; // @synthesize disabledScrollingRegion=_disabledScrollingRegion;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) __weak id <_UIQueuingScrollViewDataSource> qDataSource; // @synthesize qDataSource=_qDataSource;
@property(nonatomic) __weak id <_UIQueuingScrollViewDelegate> qDelegate; // @synthesize qDelegate=_qDelegate;
- (_Bool)canBecomeFocused;	// IMP=0x0000000000473c89
- (void)_didEndProgrammaticScroll;	// IMP=0x0000000000473c75
- (void)_didEndManualScroll;	// IMP=0x0000000000473c2c
- (void)_didEndScroll:(_Bool)arg1;	// IMP=0x000000000047385e
- (void)_didEndDraggingManualScroll;	// IMP=0x0000000000473479
- (void)_didScrollWithAnimation:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x0000000000472af5
- (_Bool)_isScrollInProgress:(_Bool)arg1;	// IMP=0x0000000000472abb
- (_Bool)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;	// IMP=0x00000000004729ae
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(_Bool)arg4;	// IMP=0x00000000004725ea
- (void)_boundsDidChangeToSize:(struct CGSize)arg1;	// IMP=0x0000000000472309
- (void)_adjustContentInsets;	// IMP=0x0000000000472168
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000471e88
- (void)_notifyDelegateDidFinishScrolling;	// IMP=0x0000000000471e3a
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;	// IMP=0x0000000000471dc0
- (void)_notifyDelegateDidEndManualScroll:(_Bool)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(_Bool)arg4 didFinish:(_Bool)arg5 didComplete:(_Bool)arg6;	// IMP=0x0000000000471d10
- (void)_notifyDelegateDidCommitManualScroll:(_Bool)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 canComplete:(_Bool)arg6;	// IMP=0x0000000000471c4c
- (void)_notifyDelegateWillManuallyScroll:(_Bool)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000471ba2
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000470a87
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(_Bool)arg2 didComplete:(_Bool)arg3;	// IMP=0x0000000000470a05
- (void)_enqueueCompletionState:(id)arg1;	// IMP=0x00000000004707bc
- (long long)_navigationDirectionFromCurrentOffset;	// IMP=0x00000000004706a2
- (long long)_navigationDirectionForActiveScroll:(_Bool)arg1;	// IMP=0x0000000000470381
- (_Bool)isManualScrollInProgress;	// IMP=0x0000000000470321
- (_Bool)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;	// IMP=0x00000000004702c3
- (void)_invalidateOffscreenViews;	// IMP=0x000000000047021d
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(_Bool)arg2 updatingContents:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000046ffa4
- (id)_dequeueViewForIndex:(long long)arg1;	// IMP=0x000000000046fe09
- (id)_requestViewForIndex:(long long)arg1;	// IMP=0x000000000046fd18
- (void)_replaceViews:(id)arg1 updatingContents:(_Bool)arg2 adjustContentInsets:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000046f9a1
- (void)_flushView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000046f912
- (id)_visibleView;	// IMP=0x000000000046f81e
- (id)_viewAfterView:(id)arg1;	// IMP=0x000000000046f807
- (id)_viewBeforeView:(id)arg1;	// IMP=0x000000000046f7ed
- (id)_viewBefore:(_Bool)arg1 view:(id)arg2;	// IMP=0x000000000046f752
- (_Bool)_dataSourceProvidesViews;	// IMP=0x000000000046f70a
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;	// IMP=0x000000000046f503
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;	// IMP=0x000000000046f469
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000046f463
- (unsigned long long)_abuttedPagingEdges;	// IMP=0x000000000046f0d5
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000046ef85
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000046ef17
- (void)_scrollViewDidEndDecelerating;	// IMP=0x000000000046eeaf
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;	// IMP=0x000000000046ee26
- (void)layoutSubviews;	// IMP=0x000000000046ed50
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000046ec7a
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000046eb9e
- (void)_setFrameAndApplyPageSpacing:(struct CGRect)arg1;	// IMP=0x000000000046ea00
@property(readonly, nonatomic) UIView *visibleView;
- (id)initWithFrame:(struct CGRect)arg1 navigationOrientation:(long long)arg2;	// IMP=0x000000000046e55b

@end

