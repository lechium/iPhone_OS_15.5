//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIItemCollectionDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIStyledImageDataConsumer, SKUIUber, UICollectionView, UIImage;
@protocol SKUIItemGridDelegate;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSMutableIndexSet *_hiddenIconIndexSet;	// 16 = 0x10
    SKUIItemCollectionController *_itemCollectionController;	// 24 = 0x18
    UIImage *_placeholderImage;	// 32 = 0x20
    NSMutableIndexSet *_selectedItemIndexSet;	// 40 = 0x28
    NSMutableArray *_items;	// 48 = 0x30
    double _rowHeight;	// 56 = 0x38
    SKUIClientContext *_clientContext;	// 64 = 0x40
    id <SKUIItemGridDelegate> _delegate;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    SKUIUber *_uber;	// 88 = 0x58
    struct CGSize _imageBoundingSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000259843
@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) __weak id <SKUIItemGridDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (id)_itemCollectionController;	// IMP=0x0000000000259664
- (void)_reloadLayout;	// IMP=0x0000000000259530
- (id)_collectionViewLayout;	// IMP=0x0000000000259513
- (id)_collectionView;	// IMP=0x0000000000259358
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000025933b
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000025928f
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000259272
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000259175
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000259107
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000258e9c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000258e1d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000258d8b
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;	// IMP=0x0000000000258ca8
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;	// IMP=0x0000000000258bcf
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;	// IMP=0x0000000000258bba
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;	// IMP=0x0000000000258ba5
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;	// IMP=0x0000000000258b11
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000258ad3
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000258a8a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002589e0
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000002589d5
- (void)loadView;	// IMP=0x0000000000258913
- (void)unhideIcons;	// IMP=0x00000000002587f3
- (void)setItemCellClass:(Class)arg1;	// IMP=0x000000000025871f
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property(nonatomic) struct CGPoint contentOffset;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext;
- (void)removeItemsAtIndexes:(id)arg1;	// IMP=0x00000000002585bb
- (id)popIconImageViewForItemAtIndex:(long long)arg1;	// IMP=0x0000000000258363
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;	// IMP=0x00000000002582c0
- (void)dealloc;	// IMP=0x00000000002581d4
- (id)initWithRowHeight:(double)arg1;	// IMP=0x000000000025818a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
