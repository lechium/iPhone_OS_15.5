//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKComposeReviewDelegate-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>
#import <StoreKitUI/SKUIReviewsFacebookViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSMutableIndexSet, NSOperationQueue, NSString, SKComposeReviewViewController, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIPadCustomerReviewsHeaderView, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableView, SKUIReviewList, SKUIReviewsFacebookViewController, SKUIReviewsHistogramViewController, SKUIStarRatingQueue, SSVLoadURLOperation, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKComposeReviewViewController *_composeViewController;	// 16 = 0x10
    id <SKUIProductPageChildViewControllerDelegate> _delegate;	// 24 = 0x18
    NSMutableIndexSet *_expandedIndexSet;	// 32 = 0x20
    SKUIReviewsFacebookViewController *_facebookViewController;	// 40 = 0x28
    SKUIProductPageHeaderViewController *_headerViewController;	// 48 = 0x30
    SKUIReviewsHistogramViewController *_histogramViewController;	// 56 = 0x38
    _Bool _isPad;	// 64 = 0x40
    SKUILayoutCache *_layoutCache;	// 72 = 0x48
    long long _loadedPageCount;	// 80 = 0x50
    SSVLoadURLOperation *_loadOperation;	// 88 = 0x58
    NSOperationQueue *_operationQueue;	// 96 = 0x60
    SKUIProductPage *_productPage;	// 104 = 0x68
    SKUIReviewList *_reviewList;	// 112 = 0x70
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;	// 120 = 0x78
    long long _sortOrder;	// 128 = 0x80
    _Bool _showAllVersions;	// 136 = 0x88
    SKUIStarRatingQueue *_starRatingQueue;	// 144 = 0x90
    SKUIProductPageTableView *_tableView;	// 152 = 0x98
    _Bool _askPermission;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000001e19ae
@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) _Bool askPermission; // @synthesize askPermission=_askPermission;
- (id)_urlStringWithPageNumber:(long long)arg1;	// IMP=0x00000000001e177d
- (id)_textLayoutRequestWithText:(id)arg1;	// IMP=0x00000000001e16ed
- (id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001e12fb
- (id)_tableView;	// IMP=0x00000000001e113b
- (_Bool)_shouldShowLoadMoreCell;	// IMP=0x00000000001e10fc
- (void)_setReviewListWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000001e0d0f
- (id)_reviewsHeaderView;	// IMP=0x00000000001e085e
- (void)_resetPersonalStarRating;	// IMP=0x00000000001e083f
- (void)_reloadData;	// IMP=0x00000000001e052c
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint)arg1;	// IMP=0x00000000001e0041
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001dffeb
- (id)_histogramViewController;	// IMP=0x00000000001dfac3
- (double)_defaultPageWidth;	// IMP=0x00000000001df9e6
- (id)_bottomBorderColorForScheme:(id)arg1;	// IMP=0x00000000001df995
- (void)_addReviewsFromResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000001df450
- (void)_addHeaderView;	// IMP=0x00000000001df237
- (void)_writeAReviewAction:(id)arg1;	// IMP=0x00000000001df086
- (void)_versionSelectionAction:(id)arg1;	// IMP=0x00000000001defe9
- (void)_starRatingAction:(id)arg1;	// IMP=0x00000000001decdc
- (void)_sortSelectionAction:(id)arg1;	// IMP=0x00000000001dec2f
- (void)_appSupportAction:(id)arg1;	// IMP=0x00000000001deb9b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001dea10
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001de88f
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001de713
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001de576
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001de47b
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001de432
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001de39c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001de304
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001de2f9
- (void)reviewComposeViewControllerDidFinish:(id)arg1;	// IMP=0x00000000001de28d
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x00000000001de23d
- (void)reviewsFacebookViewControllerDidChange:(id)arg1;	// IMP=0x00000000001de1fa
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000001de1df
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001de1a3
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001ddfc8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001ddf60
- (void)loadView;	// IMP=0x00000000001ddf14
@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
- (void)reloadData;	// IMP=0x00000000001dd95e
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dealloc;	// IMP=0x00000000001dd712
- (id)initWithProductPage:(id)arg1;	// IMP=0x00000000001dd676

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
