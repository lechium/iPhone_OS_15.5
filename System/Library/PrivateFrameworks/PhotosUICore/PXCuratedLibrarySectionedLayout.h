//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryViewModelPresenter-Protocol.h>
#import <PhotosUICore/PXGSublayoutFaultingDelegate-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXMonthsSublayoutProvider-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXAssetsDataSource, PXAssetsSectionLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGSpriteReference;

@interface PXCuratedLibrarySectionedLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    PXAssetsDataSource *_currentDataSource;	// 32 = 0x20
    long long _currentZoomLevel;	// 40 = 0x28
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;	// 48 = 0x30
    long long *_accumulatedSectionItems;	// 56 = 0x38
    long long _accumulatedSectionItemsCount;	// 64 = 0x40
    _Bool _isUpdatingSublayouts;	// 72 = 0x48
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;	// 80 = 0x50
    NSIndexSet *_cachedSectionsWithSelectedItems;	// 88 = 0x58
    _Bool _isInitialLoad;	// 96 = 0x60
    _Bool _performedInitialLoad;	// 97 = 0x61
    PXCuratedLibraryLayoutSpec *_spec;	// 104 = 0x68
    PXCuratedLibraryViewModel *_viewModel;	// 112 = 0x70
    double _lateralMargin;	// 120 = 0x78
    id _lastVisibleDominantObjectReference;	// 128 = 0x80
    PXGSpriteReference *_lastHitSpriteReference;	// 136 = 0x88
    double _defaultInterlayoutSpacing;	// 144 = 0x90
    long long _presentedZoomLevel;	// 152 = 0x98
    PXAssetsDataSource *_presentedDataSource;	// 160 = 0xa0
    struct UIEdgeInsets _padding;	// 168 = 0xa8
}

+ (void)setShouldDisableLaunchOptimizations:(_Bool)arg1;	// IMP=0x000000000080d67b
+ (_Bool)shouldDisableLaunchOptimizations;	// IMP=0x000000000080d66f
- (void).cxx_destruct;	// IMP=0x000000000080be7d
@property(readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) long long presentedZoomLevel; // @synthesize presentedZoomLevel=_presentedZoomLevel;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) double defaultInterlayoutSpacing; // @synthesize defaultInterlayoutSpacing=_defaultInterlayoutSpacing;
@property(nonatomic) _Bool performedInitialLoad; // @synthesize performedInitialLoad=_performedInitialLoad;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(retain, nonatomic) PXGSpriteReference *lastHitSpriteReference; // @synthesize lastHitSpriteReference=_lastHitSpriteReference;
@property(retain, nonatomic) id lastVisibleDominantObjectReference; // @synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @synthesize spec=_spec;
- (id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2;	// IMP=0x000000000080bb4f
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;	// IMP=0x000000000080b744
- (id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2;	// IMP=0x000000000080b2a4
- (id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2;	// IMP=0x000000000080b049
@property(readonly, nonatomic) PXAssetsSectionLayout *dominantSectionLayout;
- (struct CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1;	// IMP=0x000000000080aa09
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000080a956
- (void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000080a37c
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000080a2ab
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000080a1e3
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000080a127
- (void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000809ecd
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;	// IMP=0x0000000000809c81
- (void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000809a59
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000809895
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x0000000000809745
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000080919b
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;	// IMP=0x0000000000809193
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000809061
@property(retain, nonatomic) id dominantHeroPreferences;
- (void)setPrefersDominantHero:(_Bool)arg1 forZoomLevel:(long long)arg2;	// IMP=0x0000000000808f9c
- (_Bool)prefersDominantHeroForZoomLevel:(long long)arg1;	// IMP=0x0000000000808f7f
- (void)setSafeAreaInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000808e5b
- (_Bool)allowsSublayoutUpdateCycleAssertions;	// IMP=0x0000000000808c0e
- (_Bool)allowsDanglingUpdatesAssertions;	// IMP=0x0000000000808c06
- (long long)scrollableAxis;	// IMP=0x0000000000808bfb
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x0000000000808629
- (void)clearLastVisibleAreaAnchoringInformation;	// IMP=0x00000000008085e6
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000008084f9
- (void)_anchorVisibleArea;	// IMP=0x0000000000808487
- (void)_updatePreheating;	// IMP=0x0000000000807fc8
- (void)_updateSublayoutsForSkimming;	// IMP=0x0000000000807dde
- (void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1;	// IMP=0x0000000000807d97
- (void)_updateSublayoutsDataSource;	// IMP=0x000000000080747a
- (void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000008071ed
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize)arg3;	// IMP=0x0000000000806f39
- (void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1;	// IMP=0x0000000000806da3
- (void)_updateFaultOutsets;	// IMP=0x0000000000806b08
- (void)update;	// IMP=0x0000000000805c0c
- (void)dealloc;	// IMP=0x0000000000805bcb
- (id)init;	// IMP=0x0000000000805b51
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;	// IMP=0x0000000000805986

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

