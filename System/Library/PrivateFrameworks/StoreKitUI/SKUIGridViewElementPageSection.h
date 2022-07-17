//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICollectionDOMFeatureTargetting-Protocol.h>
#import <StoreKitUI/SKUIGridViewElementPageSectionConfigurationDataSource-Protocol.h>

@class IKColor, NSArray, NSString, SKUIGridComponent, SKUIGridViewElementPageSectionConfiguration, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElementPageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>
{
    IKColor *_backgroundColor;	// 8 = 0x8
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 16 = 0x10
    double _cellPaddingInteriorHorizontal;	// 24 = 0x18
    double _cellPaddingLeftEdgeHorizontal;	// 32 = 0x20
    double _cellPaddingRightEdgeHorizontal;	// 40 = 0x28
    SKUIGridViewElementPageSectionConfiguration *_configuration;	// 48 = 0x30
    _Bool _editing;	// 56 = 0x38
    NSArray *_indexPathsForBackgroundItems;	// 64 = 0x40
    long long _lastNeedsMoreCount;	// 72 = 0x48
    NSArray *_viewElements;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002c4e31
- (void)_resetLayoutProperties;	// IMP=0x00000000002c4dba
- (void)_requestLayoutForCells;	// IMP=0x00000000002c4c72
- (void)_reloadViewElementProperties;	// IMP=0x00000000002c4b44
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c4983
- (_Bool)_containsOnlyShelfElements;	// IMP=0x00000000002c480e
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;	// IMP=0x00000000002c479f
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002c45c4
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002c45af
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)_setContext:(id)arg1;	// IMP=0x00000000002c4529
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002c4470
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002c4090
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002c3f2d
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;	// IMP=0x00000000002c3da3
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000002c3cca
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;	// IMP=0x00000000002c3ca0
- (void)reloadVisibleCellsWithReason:(long long)arg1;	// IMP=0x00000000002c3bfa
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000002c3b5e
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000000002c39d0
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000002c3572
- (long long)numberOfCells;	// IMP=0x00000000002c3555
- (id)indexPathsForBackgroundItems;	// IMP=0x00000000002c3540
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c3233
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002c3135
- (void)deselectItemsAnimated:(_Bool)arg1;	// IMP=0x00000000002c2f07
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;	// IMP=0x00000000002c2dd3
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000002c2d61
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c2be1
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c2a93
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c2a8b
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c2a83
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c275f
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c26cd
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002c261f
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002c2575
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002c230c
- (id)backgroundColorForSection;	// IMP=0x00000000002c22f7
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000002c21f0
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000002c20e4
- (void)dealloc;	// IMP=0x00000000002c2099
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000002c2013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
