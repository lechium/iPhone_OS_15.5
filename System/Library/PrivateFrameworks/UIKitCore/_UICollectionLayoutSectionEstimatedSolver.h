//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSolutionState, _UICollectionLayoutSupplementaryRegistrar;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>
{
    _Bool _layoutRTL;	// 8 = 0x8
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;	// 9 = 0x9
    NSCollectionLayoutSection *_layoutSection;	// 16 = 0x10
    id <NSCollectionLayoutContainer> _container;	// 24 = 0x18
    UITraitCollection *_traitCollection;	// 32 = 0x20
    unsigned long long _layoutAxis;	// 40 = 0x28
    long long _frameCount;	// 48 = 0x30
    id <_UICollectionPreferredSizes> _preferredSizes;	// 56 = 0x38
    NSString *_errorDescription;	// 64 = 0x40
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;	// 72 = 0x48
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;	// 80 = 0x50
    id <NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;	// 88 = 0x58
    _UICollectionLayoutSolutionState *_solutionState;	// 96 = 0x60
    unsigned long long _containerLayoutAxis;	// 104 = 0x68
    struct CGPoint _orthogonalOffset;	// 112 = 0x70
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;	// 128 = 0x80
    struct CGRect _overrideContentRectForPinning;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000002a811c
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
@property(nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) struct CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(readonly, nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;	// IMP=0x00000000002a8025
- (id)auxillaryHostPreferredSizes;	// IMP=0x00000000002a800b
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x00000000002a7ff2
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x00000000002a7fe7
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x00000000002a7fd5
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x00000000002a7fc3
- (id)auxillaryHostAuxillaryItems;	// IMP=0x00000000002a7f73
- (id)auxillaryHostContainer;	// IMP=0x00000000002a7e10
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x00000000002a7de4
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x00000000002a7c0d
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x00000000002a7ad3
- (struct CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect)arg1 insets:(struct NSDirectionalEdgeInsets)arg2 layoutAxis:(unsigned long long)arg3;	// IMP=0x00000000002a79b5
- (struct CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect)arg1 bookmarks:(id)arg2;	// IMP=0x00000000002a76c7
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;	// IMP=0x00000000002a7413
- (id)_sectionContainer;	// IMP=0x00000000002a7142
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1;	// IMP=0x00000000002a6abb
- (id)_solveWithParameters:(id)arg1;	// IMP=0x00000000002a3116
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;	// IMP=0x00000000002a3035
- (void)_configureInitialOrthogonalPrefetchingUnitVector;	// IMP=0x00000000002a2fd0
- (void)_setOrthogonalOffset:(struct CGPoint)arg1;	// IMP=0x00000000002a2f12
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property(readonly, nonatomic) struct CGRect effectiveContentFrame;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)visualDescription;	// IMP=0x00000000002a2c61
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000002a2af1
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;	// IMP=0x00000000002a2a23
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000002a282d
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000002a265d
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000002a2283
- (id)frameForIndex:(long long)arg1;	// IMP=0x00000000002a1fb5
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;	// IMP=0x00000000002a1b2b
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;	// IMP=0x00000000002a1b09
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1 overrideContentRectForPinning:(struct CGRect)arg2;	// IMP=0x00000000002a1aa6
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;	// IMP=0x00000000002a1a2e
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;	// IMP=0x00000000002a19ab
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6;	// IMP=0x00000000002a1854
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;	// IMP=0x00000000002a1838
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;	// IMP=0x00000000002a181d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

