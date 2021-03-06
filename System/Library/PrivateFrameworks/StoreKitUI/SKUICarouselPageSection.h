//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIMissingItemDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, SKUIViewElementLayoutContext, UICollectionView;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_carouselCollectionView;	// 8 = 0x8
    long long _cellCount;	// 16 = 0x10
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cycleTimer;	// 32 = 0x20
    struct CGSize _itemSize;	// 40 = 0x28
    double _itemSpacing;	// 56 = 0x38
    SKUIMissingItemLoader *_missingItemLoader;	// 64 = 0x40
    NSArray *_modelObjects;	// 72 = 0x48
    _Bool _needsHeightCalculation;	// 80 = 0x50
    _Bool _needsReload;	// 81 = 0x51
    double _itemWidth;	// 88 = 0x58
    long long _progressIndicatorCellIndex;	// 96 = 0x60
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;	// 104 = 0x68
    NSIndexPath *_reloadIndexPath;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000f12ed
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f122f
- (void)_startCycleTimerIfNecessary;	// IMP=0x00000000000f1033
- (void)_reloadViewElementProperties;	// IMP=0x00000000000f0e72
- (void)_reloadLegacySizing;	// IMP=0x00000000000f0d93
- (id)_missingItemLoader;	// IMP=0x00000000000f0ccc
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;	// IMP=0x00000000000f0c3a
- (double)_legacyItemSpacing;	// IMP=0x00000000000f0b24
- (struct CGSize)_legacyItemSize;	// IMP=0x00000000000f098c
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;	// IMP=0x00000000000f0899
- (_Bool)_indexPathIsProgressIndicator:(id)arg1;	// IMP=0x00000000000f0859
- (void)_fireCycleTimer;	// IMP=0x00000000000f0740
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000f05cd
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000f053b
- (long long)_currentPageIndex;	// IMP=0x00000000000f043c
- (Class)_cellClassForViewElement:(id)arg1;	// IMP=0x00000000000f0397
- (Class)_cellClassForLockup:(id)arg1;	// IMP=0x00000000000f0333
- (id)_carouselCollectionView;	// IMP=0x00000000000f006a
- (void)_cancelCycleTimer;	// IMP=0x00000000000f0030
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;	// IMP=0x00000000000effa3
- (double)_actualContentWidth;	// IMP=0x00000000000eff4c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000eff12
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000efe03
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000efcf2
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000efbc1
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000efacf
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000efaba
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000efaa5
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ef874
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x00000000000ef696
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000ef685
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ef40a
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x00000000000ef391
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000ef165
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000eeb8e
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000ee281
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000000ee100
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000000ede3e
- (long long)numberOfCells;	// IMP=0x00000000000eddf2
- (void)invalidateCachedLayoutInformation;	// IMP=0x00000000000edd5f
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000000edb4a
- (long long)defaultItemPinningStyle;	// IMP=0x00000000000edb01
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed9ed
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed8dc
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000ed54d
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000ed174
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000000ed05c
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000000eceb4
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000ecc2f
- (void)dealloc;	// IMP=0x00000000000ecb9d
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000ecb51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUICarouselPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

