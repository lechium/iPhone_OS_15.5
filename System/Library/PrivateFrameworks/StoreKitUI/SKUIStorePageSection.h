//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>

@class IKColor, NSArray, NSIndexPath, NSSet, NSString, SKUIPageComponent, SKUIProductPageOverlayController, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate>
{
    _Bool _bottomSection;	// 8 = 0x8
    SKUIPageComponent *_component;	// 16 = 0x10
    SKUIStorePageSectionContext *_context;	// 24 = 0x18
    _Bool _hasValidRelevantEntityProviders;	// 32 = 0x20
    SKUIProductPageOverlayController *_overlayController;	// 40 = 0x28
    NSSet *_relevantEntityProviders;	// 48 = 0x30
    long long _sectionIndex;	// 56 = 0x38
    _Bool _topSection;	// 64 = 0x40
    IKColor *_backgroundColorForSection;	// 72 = 0x48
    NSArray *_indexPathsForBackgroundItems;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000bf1cf
@property(readonly, nonatomic) NSArray *indexPathsForBackgroundItems; // @synthesize indexPathsForBackgroundItems=_indexPathsForBackgroundItems;
@property(readonly, nonatomic) IKColor *backgroundColorForSection; // @synthesize backgroundColorForSection=_backgroundColorForSection;
@property(nonatomic, getter=isTopSection) _Bool topSection; // @synthesize topSection=_topSection;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) SKUIPageComponent *pageComponent; // @synthesize pageComponent=_component;
@property(readonly, nonatomic) SKUIStorePageSectionContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isBottomSection) _Bool bottomSection; // @synthesize bottomSection=_bottomSection;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bef7b
- (void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg1 toSet:(id)arg2;	// IMP=0x00000000000bee6a
- (long long)_itemPinningGroup;	// IMP=0x00000000000bedfc
- (long long)_itemPinningStyle;	// IMP=0x00000000000bed26
- (id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3;	// IMP=0x00000000000bead3
- (void)_setContext:(id)arg1;	// IMP=0x00000000000bea88
- (void)productPageOverlayDidDismiss:(id)arg1;	// IMP=0x00000000000be9f0
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000be9ea
- (void)willHideInContext:(id)arg1;	// IMP=0x00000000000be9e4
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000be9de
- (long long)updateWithContext:(id)arg1 pageComponent:(id)arg2;	// IMP=0x00000000000be891
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000be889
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;	// IMP=0x00000000000be811
- (void)showProductViewControllerWithItem:(id)arg1;	// IMP=0x00000000000be37c
- (void)showPageWithLink:(id)arg1;	// IMP=0x00000000000bde5e
- (void)sendXEventWithLink:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bdd91
- (void)sendXEventWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bdd19
@property(readonly, nonatomic) struct UIEdgeInsets sectionContentInset;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;	// IMP=0x00000000000bdc7a
- (void)reloadVisibleCellsWithReason:(long long)arg1;	// IMP=0x00000000000bdb43
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000bdb3d
@property(readonly, copy, nonatomic) NSSet *relevantEntityProviders;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;	// IMP=0x00000000000bda59
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000000000bda51
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000000bda35
- (void)playVideoWithURL:(id)arg1;	// IMP=0x00000000000bd8f7
- (void)playVideoForElement:(id)arg1;	// IMP=0x00000000000bd6cd
- (long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bd689
- (long long)pinningGroupForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bd677
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bd665
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bd646
- (id)performItemOfferActionForItem:(id)arg1;	// IMP=0x00000000000bd4df
- (_Bool)performDefaultActionForViewElement:(id)arg1;	// IMP=0x00000000000bd3ec
@property(readonly, nonatomic) long long numberOfCells;
- (struct _NSRange)itemRangeForIndexPathRange:(struct SKUIIndexPathRange)arg1;	// IMP=0x00000000000bd38b
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x00000000000bd12c
- (void)invalidateCachedLayoutInformation;	// IMP=0x00000000000bd126
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bd038
@property(readonly, nonatomic) _Bool fitsToHeight;
@property(readonly, nonatomic) NSIndexPath *firstAppearanceIndexPath;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000bd022
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000000bcf75
- (void)didAppearInContext:(id)arg1;	// IMP=0x00000000000bcf6f
- (void)deselectItemsAnimated:(_Bool)arg1;	// IMP=0x00000000000bcf69
@property(readonly, nonatomic) long long defaultItemPinningStyle;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;	// IMP=0x00000000000bcf58
- (_Bool)containsElementWithIndexBarEntryID:(id)arg1;	// IMP=0x00000000000bceb1
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;	// IMP=0x00000000000bceab
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000000bcd07
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bccff
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bccf7
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;	// IMP=0x00000000000bccf1
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bcceb
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bcc5f
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;	// IMP=0x00000000000bcc59
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bcc53
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;	// IMP=0x00000000000bcc4d
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000bcc47
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;	// IMP=0x00000000000bcc41
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000bc8be
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x00000000000bc73c
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x00000000000bc5ef
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x00000000000bc4f6
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000bc4e0
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000bc4d8
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000000bc43a
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000000bc3c9
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000bc3c3
- (void)dealloc;	// IMP=0x00000000000bc37f
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000bc314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
