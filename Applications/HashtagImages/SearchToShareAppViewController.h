//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, STSPicker, STSRootView, STSSearchBrowserRootViewController, STSSearchModel, STSZKWBrowserHeaderView;

@interface SearchToShareAppViewController : UIViewController
{
    STSPicker *_zkwPicker;	// 8 = 0x8
    STSZKWBrowserHeaderView *_zkwHeaderView;	// 16 = 0x10
    STSSearchBrowserRootViewController *_searchBrowserRootViewController;	// 24 = 0x18
    STSSearchModel *_zkwSearchModel;	// 32 = 0x20
    STSSearchModel *_searchBrowserSearchModel;	// 40 = 0x28
    NSMutableArray *_recentResults;	// 48 = 0x30
    _Bool _updateRecents;	// 56 = 0x38
    NSMutableArray *_constraints;	// 64 = 0x40
    CDUnknownBlockType _requestExpandedCompletion;	// 72 = 0x48
    CDUnknownBlockType _engagementFeedbackBlock;	// 80 = 0x50
    unsigned long long _presentationStyle;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000004f29
@property(readonly, nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) CDUnknownBlockType engagementFeedbackBlock; // @synthesize engagementFeedbackBlock=_engagementFeedbackBlock;
@property(copy, nonatomic) CDUnknownBlockType requestExpandedCompletion; // @synthesize requestExpandedCompletion=_requestExpandedCompletion;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;	// IMP=0x0010000000004de1
- (id)searchResultForDict:(id)arg1;	// IMP=0x00100000000049d3
- (id)dictForSearchResult:(id)arg1;	// IMP=0x00100000000046da
- (void)saveRecents;	// IMP=0x0010000000004570
- (void)_addResultToRecents:(id)arg1;	// IMP=0x00100000000042a0
- (void)_updatePickerBottomInset;	// IMP=0x0010000000004250
- (void)_setup;	// IMP=0x0010000000003d74
- (void)_transitionContentFromViewController:(id)arg1 toViewController:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000039f9
- (void)updateRecentResults:(id)arg1;	// IMP=0x00100000000039b3
- (void)searchBrowserRootViewControllerDidSelectCancel:(id)arg1;	// IMP=0x001000000000371f
- (void)browserDidTapLogo:(id)arg1;	// IMP=0x00100000000034c0
- (void)requestExpandedPresentationStyleForBrowser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003469
- (_Bool)browserIsPresentedFullscreen:(id)arg1;	// IMP=0x001000000000344f
- (void)browserSuggestionButtonClicked:(id)arg1 suggestion:(id)arg2;	// IMP=0x00100000000031f8
- (void)browserCategoryButtonClicked:(id)arg1 result:(id)arg2;	// IMP=0x0010000000002fa1
- (void)browser:(id)arg1 didSearchFor:(id)arg2;	// IMP=0x0010000000002cde
- (void)browserSearchBarButtonClicked:(id)arg1;	// IMP=0x0010000000002ad9
- (void)browser:(id)arg1 didSelectResult:(id)arg2 withPayload:(id)arg3;	// IMP=0x001000000000284c
- (void)browser:(id)arg1 didSelectProviderLink:(id)arg2;	// IMP=0x00100000000027b0
- (void)browser:(id)arg1 didSelectCategoryResult:(id)arg2;	// IMP=0x001000000000279e
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000002554
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000024d7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000002477
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000023c0
- (void)awakeFromNib;	// IMP=0x0010000000002363
- (void)updateConstraintsForSearchBrowser;	// IMP=0x0010000000001fd7
- (void)updateConstraintsForZKWBrowser;	// IMP=0x0010000000001c4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) STSRootView *view; // @dynamic view;

@end

