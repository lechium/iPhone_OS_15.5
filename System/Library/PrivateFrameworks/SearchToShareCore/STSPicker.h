//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <SearchToShareCore/MFMailComposeViewControllerDelegate-Protocol.h>
#import <SearchToShareCore/STSGridLayoutDelegate-Protocol.h>
#import <SearchToShareCore/STSLoadMoreFooterDelegate-Protocol.h>
#import <SearchToShareCore/STSResultDetailViewControllerDelegate-Protocol.h>
#import <SearchToShareCore/STSSearchModelDelegate-Protocol.h>
#import <SearchToShareCore/STSZKWBrowserHeaderViewDelegate-Protocol.h>
#import <SearchToShareCore/UICollectionViewDataSource-Protocol.h>
#import <SearchToShareCore/UISearchBarDelegate-Protocol.h>
#import <SearchToShareCore/UIViewControllerPreviewingDelegate-Protocol.h>
#import <SearchToShareCore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID, SFSearchResult, STSDetailTransitionAnimator, STSMailComposeViewController, STSPickerView, STSSearchModel, UIColor;
@protocol OS_dispatch_queue, STSPickerSelectionDelegate, UIViewControllerPreviewing;

@interface STSPicker : UIViewController <UIViewControllerPreviewingDelegate, STSResultDetailViewControllerDelegate, MFMailComposeViewControllerDelegate, UIViewControllerTransitioningDelegate, STSLoadMoreFooterDelegate, STSSearchModelDelegate, UICollectionViewDataSource, STSGridLayoutDelegate, STSZKWBrowserHeaderViewDelegate, UISearchBarDelegate>
{
    STSSearchModel *_searchModel;	// 8 = 0x8
    NSUUID *_lastSearchId;	// 16 = 0x10
    NSMutableArray *_displayedResults;	// 24 = 0x18
    NSMutableSet *_queuedImageURLs;	// 32 = 0x20
    unsigned long long _sectionsTag;	// 40 = 0x28
    long long _lastInsertedIndexesCount;	// 48 = 0x30
    NSMutableSet *_lastInsertedIndexesWaitingToLoad;	// 56 = 0x38
    NSArray *_visiblePredictions;	// 64 = 0x40
    NSIndexPath *_detailResultIndexPath;	// 72 = 0x48
    NSIndexPath *_activeDownloadIndexPath;	// 80 = 0x50
    double _activeDownloadProgress;	// 88 = 0x58
    id <UIViewControllerPreviewing> _previewingContext;	// 96 = 0x60
    STSMailComposeViewController *_feedbackMailComposer;	// 104 = 0x68
    STSDetailTransitionAnimator *_detailTransitionAnimator;	// 112 = 0x70
    _Bool _isLoadingMoreResults;	// 120 = 0x78
    _Bool _needsReloadAfterLayout;	// 121 = 0x79
    _Bool _showSuggestions;	// 122 = 0x7a
    _Bool _isScrolling;	// 123 = 0x7b
    _Bool _isSnapShotting;	// 124 = 0x7c
    NSObject<OS_dispatch_queue> *_displayedResultsQueue;	// 128 = 0x80
    SFSearchResult *_previewingSearchResult;	// 136 = 0x88
    NSMutableSet *_visibleResultsSent;	// 144 = 0x90
    struct CGPoint _startScrollPosition;	// 152 = 0x98
    _Bool _debugMode;	// 168 = 0xa8
    UIColor *_originalColor;	// 176 = 0xb0
    NSMutableArray *_debugItems;	// 184 = 0xb8
    NSString *_currentQuery;	// 192 = 0xc0
    id <STSPickerSelectionDelegate> _selectionDelegate;	// 200 = 0xc8
    NSString *_headerCellReuseIdentifier;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000001c054
@property(readonly, nonatomic) NSString *headerCellReuseIdentifier; // @synthesize headerCellReuseIdentifier=_headerCellReuseIdentifier;
@property(nonatomic) __weak id <STSPickerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)sendVisibleResultsFeedback;	// IMP=0x000000000001b968
- (id)_noticeTextForSearchError:(id)arg1;	// IMP=0x000000000001b831
- (void)_reportFeedbackDisplayedResultsDidScroll:(_Bool)arg1;	// IMP=0x000000000001b70f
- (void)_cancelActiveDownload;	// IMP=0x000000000001b517
- (void)_beginDownloadingResultAtIndexPath:(id)arg1;	// IMP=0x0000000000019ed7
- (id)_detailViewControllerForIndexPath:(id)arg1;	// IMP=0x00000000000196b7
- (void)_presentDetailViewControllerForIndexPath:(id)arg1;	// IMP=0x000000000001953e
- (void)_presentNoticeWithText:(id)arg1;	// IMP=0x0000000000019463
- (id)_loadMoreFooter;	// IMP=0x00000000000193a6
- (void)_updatePredictedSuggestionsForSize:(struct CGSize)arg1;	// IMP=0x00000000000191c1
- (void)_loadMoreResultsIfNecessary;	// IMP=0x0000000000018e30
- (void)_fetchImageWithURL:(id)arg1 priority:(long long)arg2 forCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000018294
- (void)loadMoreFooterDidTapLogo;	// IMP=0x0000000000018248
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x0000000000018076
- (void)headerView:(id)arg1 didSelectSuggestionButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000017fb2
- (void)headerView:(id)arg1 didRequestCompletion:(id)arg2;	// IMP=0x0000000000017f3d
- (void)headerView:(id)arg1 didSearchFor:(id)arg2;	// IMP=0x0000000000017ec8
- (void)headerViewDidDeleteText;	// IMP=0x0000000000017e8b
- (void)headerDidSelectCancelButton:(id)arg1;	// IMP=0x0000000000017dee
- (void)headerViewDidSelectSearchButton:(id)arg1;	// IMP=0x0000000000017da2
- (void)detailViewControllerDidInsert:(id)arg1;	// IMP=0x0000000000017d26
- (void)detailViewControllerDidSelectProviderLink:(id)arg1;	// IMP=0x0000000000017c29
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x0000000000017adb
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x000000000001779a
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000174b8
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000017012
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000016e64
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000016be5
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000016b8f
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000016b36
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000016a84
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000016945
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000001684f
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000165bc
- (long long)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000001642f
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000016303
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000015395
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000152f5
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000001529c
- (void)searchModel:(id)arg1 insertedResultsAtIndexPaths:(id)arg2 removedResultsAtIndexPaths:(id)arg3;	// IMP=0x0000000000014df3
- (void)searchModelUpdatedPredictedSuggestions:(id)arg1;	// IMP=0x0000000000014cc9
- (id)getTapToRadarPunchOut:(id)arg1;	// IMP=0x0000000000014709
- (void)_handleDebugGesture:(id)arg1;	// IMP=0x00000000000139ba
- (void)_handleLongPress:(id)arg1;	// IMP=0x000000000001369d
- (void)updateContentOffset:(double)arg1;	// IMP=0x000000000001364e
@property(readonly, nonatomic) STSPickerView *pickerView;
@property(readonly, nonatomic) NSArray *querySuggestions;
- (void)resetContent;	// IMP=0x00000000000135a9
- (void)cancelImageDownloads;	// IMP=0x0000000000013538
- (void)performSearchWithQueryString:(id)arg1 requestType:(long long)arg2;	// IMP=0x0000000000013111
- (void)performZKWSearchQuery;	// IMP=0x0000000000012ca8
- (id)snapshotImage;	// IMP=0x0000000000012785
- (void)willResignActiveWithConversation:(id)arg1;	// IMP=0x0000000000012771
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;	// IMP=0x00000000000126d0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000012635
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000012515
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000012399
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000011e15
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000011da2
- (void)loadView;	// IMP=0x0000000000011a1b
- (void)didReceiveMemoryWarning;	// IMP=0x000000000001196f
- (id)initWithSearchModel:(id)arg1 showSuggestions:(_Bool)arg2;	// IMP=0x00000000000117de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) STSPickerView *view; // @dynamic view;

@end
