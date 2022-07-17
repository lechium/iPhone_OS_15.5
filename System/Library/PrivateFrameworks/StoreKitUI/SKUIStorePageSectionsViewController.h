//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>
#import <StoreKitUI/SKUIStorePageCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewControllerTesting-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSNumber, NSString, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UIRefreshControl, UITapGestureRecognizer, UIView;
@protocol SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSectionsViewController <UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    SKUIProductPageOverlayController *_activeOverlayController;	// 8 = 0x8
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;	// 16 = 0x10
    SKUICollectionView *_collectionView;	// 24 = 0x18
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;	// 32 = 0x20
    SKUIColorScheme *_colorScheme;	// 40 = 0x28
    struct UIEdgeInsets _contentInsetAdjustments;	// 48 = 0x30
    id _deferredSplitsDescription;	// 80 = 0x50
    id <SKUIStorePageSectionsDelegate> _delegate;	// 88 = 0x58
    _Bool _delegateWantsDidScroll;	// 96 = 0x60
    _Bool _delegateWantsWillScrollToOffsetVisibleRange;	// 97 = 0x61
    _Bool _didInitialReload;	// 98 = 0x62
    NSMapTable *_entityProviderToRelevantSections;	// 104 = 0x68
    NSMapTable *_expandSectionContexts;	// 112 = 0x70
    NSMutableIndexSet *_expandInsertSections;	// 120 = 0x78
    NSMutableIndexSet *_expandRemoveSections;	// 128 = 0x80
    long long _ignoreSectionsChangeCount;	// 136 = 0x88
    SKUIIndexBarControl *_indexBarControl;	// 144 = 0x90
    NSIndexPath *_indexPathOfEditedCell;	// 152 = 0x98
    NSArray *_initialOverlayURLs;	// 160 = 0xa0
    NSNumber *_lastKnownWidth;	// 168 = 0xa8
    long long _layoutStyle;	// 176 = 0xb0
    NSMapTable *_menuSectionContexts;	// 184 = 0xb8
    SKUIMetricsController *_metricsController;	// 192 = 0xc0
    SKUIProductPageOverlayController *_overlayController;	// 200 = 0xc8
    long long _pinningTransitionStyle;	// 208 = 0xd0
    id <UIViewControllerPreviewing> _viewControllerPreviewing;	// 216 = 0xd8
    id <SKUICollectionViewPullToRefreshDelegate> _pullToRefreshDelegate;	// 224 = 0xe0
    UIRefreshControl *_refreshControl;	// 232 = 0xe8
    _Bool _rendersWithParallax;	// 240 = 0xf0
    _Bool _rendersWithPerspective;	// 241 = 0xf1
    SKUIResourceLoader *_resourceLoader;	// 248 = 0xf8
    _Bool _scrollOffsetHasChanged;	// 256 = 0x100
    NSMutableArray *_sections;	// 264 = 0x108
    SKUIStorePageSplitsDescription *_splitsDescription;	// 272 = 0x110
    UIView *_splitsDividerView;	// 280 = 0x118
    SKUIStackedBar *_stackedBar;	// 288 = 0x120
    SKUILayoutCache *_textLayoutCache;	// 296 = 0x128
    long long _lastInterfaceOrientation;	// 304 = 0x130
    _Bool _itemsChangedStateWhileDisappeared;	// 312 = 0x138
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x000000000007b1d3
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0000000000076c2e
- (void).cxx_destruct;	// IMP=0x00000000000815a6
@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SKUICollectionViewPullToRefreshDelegate> pullToRefreshDelegate; // @synthesize pullToRefreshDelegate=_pullToRefreshDelegate;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(nonatomic) __weak id <SKUIStorePageSectionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void)_updateSectionsAfterMenuChange;	// IMP=0x00000000000813b5
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000000080ba0
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;	// IMP=0x0000000000080b10
- (id)_textLayoutCache;	// IMP=0x0000000000080abb
- (id)_splitForSectionIndex:(long long)arg1;	// IMP=0x00000000000808c2
- (void)_setPageSize:(struct CGSize)arg1;	// IMP=0x00000000000806e3
- (void)_scrollFirstAppearanceSectionToView;	// IMP=0x000000000008053b
- (void)_reloadRelevantEntityProviders;	// IMP=0x000000000007fdf0
- (void)_reloadCollectionView;	// IMP=0x000000000007f5f9
- (void)_registerForNotificationsForEntityProvider:(id)arg1;	// IMP=0x000000000007f562
- (id)_prepareLayoutForSections;	// IMP=0x000000000007f0b7
- (void)_prefetchArtworkForVisibleSections;	// IMP=0x000000000007f082
- (id)_newStorePageCollectionViewLayout;	// IMP=0x000000000007efef
- (id)_newSectionsWithPageComponents:(id)arg1;	// IMP=0x000000000007ee3c
- (id)_newSectionsWithPageComponent:(id)arg1;	// IMP=0x000000000007ed0b
- (id)_newSectionContext;	// IMP=0x000000000007ea8e
- (id)_menuContextForMenuComponent:(id)arg1;	// IMP=0x000000000007e9a1
- (id)_expandContextForMenuComponent:(id)arg1;	// IMP=0x000000000007e8e2
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;	// IMP=0x000000000007e340
- (void)_invalidateIfLastKnownWidthChanged;	// IMP=0x000000000007e21c
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007df63
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007de5e
- (void)_endAllPendingActiveImpression;	// IMP=0x000000000007de21
- (void)_deselectCellsForAppearance:(_Bool)arg1;	// IMP=0x000000000007dbd1
- (id)_defaultSectionForSwooshComponent:(id)arg1;	// IMP=0x000000000007db4d
- (id)_defaultSectionForGridComponent:(id)arg1;	// IMP=0x000000000007da5d
- (id)_currentBackdropGroupName;	// IMP=0x000000000007d9b1
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;	// IMP=0x000000000007cdc8
- (id)_collectionViewSublayouts;	// IMP=0x000000000007cd4e
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;	// IMP=0x000000000007cad0
- (void)_beginActiveImpressionsForImpressionableViewElements;	// IMP=0x000000000007c940
- (void)_applyColorScheme:(id)arg1 toIndexBarControl:(id)arg2;	// IMP=0x000000000007c844
- (void)_entityProviderDidInvalidateNotification:(id)arg1;	// IMP=0x000000000007c42f
- (void)_handleTap:(id)arg1;	// IMP=0x000000000007c3be
- (id)_impressionableViewElements;	// IMP=0x000000000007c189
- (id)_visibleMetricsImpressionsString;	// IMP=0x000000000007bf54
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;	// IMP=0x000000000007bbd6
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;	// IMP=0x000000000007b831
- (void)_setRendersWithParallax:(_Bool)arg1;	// IMP=0x000000000007b81c
- (void)_setRendersWithPerspective:(_Bool)arg1;	// IMP=0x000000000007b771
- (void)_setActiveProductPageOverlayController:(id)arg1;	// IMP=0x000000000007b73b
- (void)_pageSectionDidDismissOverlayController:(id)arg1;	// IMP=0x000000000007b678
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;	// IMP=0x000000000007b320
- (void)_endIgnoringSectionChanges;	// IMP=0x000000000007b277
- (void)_beginIgnoringSectionChanges;	// IMP=0x000000000007b266
- (void)_contentSizeChangeNotification:(id)arg1;	// IMP=0x000000000007b254
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;	// IMP=0x000000000007afa9
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x000000000007acfe
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x000000000007abc3
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000007a8dc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000007a7c7
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000007a764
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000007a6b5
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;	// IMP=0x0000000000079f30
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;	// IMP=0x0000000000079e9a
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;	// IMP=0x0000000000079e04
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000079d7e
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000079cf8
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000000079c6b
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000000079bc8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000079b47
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000079a79
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000799ab
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x00000000000798fc
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000798df
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000007988d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000079746
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x0000000000079582
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007949a
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000792d3
- (id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000078f62
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000078bee
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;	// IMP=0x0000000000078afe
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x0000000000078a49
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000789c3
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007893d
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000788b7
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000078819
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;	// IMP=0x00000000000787d7
- (_Bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;	// IMP=0x0000000000078684
- (id)backgroundColorForSection:(long long)arg1;	// IMP=0x00000000000785ff
- (void)productPageOverlayDidDismiss:(id)arg1;	// IMP=0x0000000000078517
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x0000000000078363
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x0000000000077c33
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;	// IMP=0x0000000000077ab3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000778d9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000777df
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000077796
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000077692
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000077449
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000772df
- (void)loadView;	// IMP=0x0000000000076f40
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000076e79
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000076c36
- (void)skui_viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000076be6
- (void)_longPressAction:(id)arg1;	// IMP=0x0000000000076b0f
- (void)_startRefresh:(id)arg1;	// IMP=0x0000000000076a54
- (void)setUsePullToRefresh:(_Bool)arg1;	// IMP=0x000000000007697d
- (id)SKUIStackedBar;	// IMP=0x0000000000076968
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;	// IMP=0x0000000000076851
- (void)setSKUIStackedBar:(id)arg1;	// IMP=0x00000000000767f7
- (void)setSectionsWithSplitsDescription:(id)arg1;	// IMP=0x0000000000075227
- (void)setSectionsWithPageComponents:(id)arg1;	// IMP=0x0000000000075172
- (void)reloadSections:(id)arg1;	// IMP=0x0000000000074b03
@property(readonly, nonatomic, getter=isDisplayingOverlays) _Bool displayingOverlays;
- (void)invalidateAndReload;	// IMP=0x0000000000074771
- (void)dismissOverlays;	// IMP=0x000000000007471c
- (id)defaultSectionForComponent:(id)arg1;	// IMP=0x0000000000074485
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)dealloc;	// IMP=0x0000000000073e73
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000073e5f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073e4b
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x0000000000073ca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
