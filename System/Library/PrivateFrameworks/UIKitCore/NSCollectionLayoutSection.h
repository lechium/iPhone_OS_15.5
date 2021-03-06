//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSCollectionLayoutGroup, NSDictionary, NSIndexSet;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying>
{
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;	// 8 = 0x8
    _Bool _hasBackgroundDecorationItem;	// 16 = 0x10
    NSDictionary *_supplementaryItemsDict;	// 24 = 0x18
    NSDictionary *_decorationItemsDict;	// 32 = 0x20
    _Bool _isEmptySection;	// 40 = 0x28
    _Bool _prefersListSolver;	// 41 = 0x29
    _Bool _supplementariesFollowContentInsets;	// 42 = 0x2a
    double _interGroupSpacing;	// 48 = 0x30
    long long _contentInsetsReference;	// 56 = 0x38
    long long _orthogonalScrollingBehavior;	// 64 = 0x40
    NSArray *_boundarySupplementaryItems;	// 72 = 0x48
    CDUnknownBlockType _visibleItemsInvalidationHandler;	// 80 = 0x50
    NSArray *_decorationItems;	// 88 = 0x58
    NSCollectionLayoutGroup *_group;	// 96 = 0x60
    NSArray *_supplementaryItems;	// 104 = 0x68
    NSIndexSet *_pinnedSupplementaryItemIndexes;	// 112 = 0x70
    NSDictionary *_decorationItemssDict;	// 120 = 0x78
    id <_UICollectionLayoutSectionCallback> _callback;	// 128 = 0x80
    struct CGSize _contentSize;	// 136 = 0x88
    struct NSDirectionalEdgeInsets _contentInsets;	// 152 = 0x98
}

+ (id)_emptySection;	// IMP=0x0000000000268755
+ (id)sectionWithGroup:(id)arg1;	// IMP=0x0000000000268160
+ (id)sectionWithListConfiguration:(id)arg1 layoutEnvironment:(id)arg2;	// IMP=0x00000000005db503
- (void).cxx_destruct;	// IMP=0x0000000000269f1f
@property(nonatomic) _Bool prefersListSolver; // @synthesize prefersListSolver=_prefersListSolver;
@property(readonly, nonatomic, getter=_callback) id <_UICollectionLayoutSectionCallback> callback; // @synthesize callback=_callback;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSDictionary *decorationItemssDict; // @synthesize decorationItemssDict=_decorationItemssDict;
@property(copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSCollectionLayoutGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(copy, nonatomic) CDUnknownBlockType visibleItemsInvalidationHandler; // @synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler;
@property(nonatomic) _Bool supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(nonatomic) long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property(nonatomic) long long contentInsetsReference; // @synthesize contentInsetsReference=_contentInsetsReference;
@property(nonatomic) double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000269bc6
- (id)_preferredContainerBackgroundColor;	// IMP=0x0000000000269bbe
- (_Bool)_supportsBandSelection;	// IMP=0x0000000000269bb6
- (_Bool)_pinnedSupplementariesShouldOverlap;	// IMP=0x0000000000269bae
- (double)_paddingToBoundarySupplementaries;	// IMP=0x0000000000269ba5
- (_Bool)shouldRestrictOrthogonalAxisDuringInteractiveMovement;	// IMP=0x0000000000269b9d
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x0000000000269b97
- (void)_didEndSwiping;	// IMP=0x0000000000269b91
- (void)_willBeginSwiping;	// IMP=0x0000000000269b8b
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;	// IMP=0x0000000000269b83
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;	// IMP=0x0000000000269b7b
- (_Bool)_wantsSwipeActions;	// IMP=0x0000000000269b73
- (_Bool)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;	// IMP=0x0000000000269afd
- (id)decorationItemsDict;	// IMP=0x00000000002698fa
@property(readonly, nonatomic) NSDictionary *supplementaryItemsDict;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2;	// IMP=0x00000000002694f0
- (_Bool)scrollsOrthogonally;	// IMP=0x00000000002694d7
- (_Bool)_containsEstimatedSizeElement;	// IMP=0x0000000000269325
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;	// IMP=0x0000000000268cf4
- (_Bool)_containsBackgroundDecorationItem:(id)arg1;	// IMP=0x0000000000268ba6
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;	// IMP=0x00000000002689c8
- (_Bool)_hasBackgroundDecorationItem;	// IMP=0x00000000002689bf
- (id)pinnedBoundarySupplementaryItemIndexes;	// IMP=0x0000000000268831
- (_Bool)_hasVisibleItemsHandler;	// IMP=0x00000000002687fe
- (_Bool)_isEmptySection;	// IMP=0x00000000002687f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000268270
- (id)initWithLayoutGroup:(id)arg1;	// IMP=0x0000000000268091
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 contentInsetsReference:(long long)arg3 supplementaryItems:(id)arg4 boundarySupplementartItems:(id)arg5 pinnedSupplementaryItemIndexes:(id)arg6 interGroupSpacing:(double)arg7 visibleItemsInvalidationHandler:(CDUnknownBlockType)arg8 supplementariesFollowInsets:(_Bool)arg9 decorationItems:(id)arg10 orthogonalScrollingBehavior:(long long)arg11 isEmptySection:(_Bool)arg12 prefersListSolver:(_Bool)arg13;	// IMP=0x0000000000267e0b

@end

