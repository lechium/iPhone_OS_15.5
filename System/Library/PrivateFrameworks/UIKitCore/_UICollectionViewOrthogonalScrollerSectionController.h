//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class NSHashTable, NSIndexSet, NSMapTable, NSString, NSUUID, UICollectionView, _UICollectionViewOrthogonalScrollerEmbeddedScrollView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate>
{
    _Bool _shouldPreventFocusScrollPastContentSize;	// 8 = 0x8
    _Bool _isHandlingScrollViewDelegateCallout;	// 9 = 0x9
    UICollectionView *_collectionView;	// 16 = 0x10
    NSMapTable *_scrollViewFromSectionMap;	// 24 = 0x18
    NSMapTable *_scrollViewToSectionMap;	// 32 = 0x20
    NSHashTable *_frontMostElements;	// 40 = 0x28
    NSHashTable *_elementsBelowOrthogonalScrollView;	// 48 = 0x30
    NSIndexSet *_currentOrthogonalSectionIndexes;	// 56 = 0x38
    _UICollectionViewOrthogonalScrollerEmbeddedScrollView *_scrollViewCurrentlyBeingConfigured;	// 64 = 0x40
    NSUUID *_lastUpdateIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003aff82
@property(retain, nonatomic) NSUUID *lastUpdateIdentifier; // @synthesize lastUpdateIdentifier=_lastUpdateIdentifier;
@property(nonatomic) _Bool isHandlingScrollViewDelegateCallout; // @synthesize isHandlingScrollViewDelegateCallout=_isHandlingScrollViewDelegateCallout;
@property(retain, nonatomic) _UICollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured; // @synthesize scrollViewCurrentlyBeingConfigured=_scrollViewCurrentlyBeingConfigured;
@property(retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes; // @synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes;
@property(retain, nonatomic) NSHashTable *elementsBelowOrthogonalScrollView; // @synthesize elementsBelowOrthogonalScrollView=_elementsBelowOrthogonalScrollView;
@property(retain, nonatomic) NSHashTable *frontMostElements; // @synthesize frontMostElements=_frontMostElements;
@property(retain, nonatomic) NSMapTable *scrollViewToSectionMap; // @synthesize scrollViewToSectionMap=_scrollViewToSectionMap;
@property(retain, nonatomic) NSMapTable *scrollViewFromSectionMap; // @synthesize scrollViewFromSectionMap=_scrollViewFromSectionMap;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldPreventFocusScrollPastContentSize; // @synthesize shouldPreventFocusScrollPastContentSize=_shouldPreventFocusScrollPastContentSize;
- (id)_managedScrollViews;	// IMP=0x00000000003afe2f
- (void)_placeView:(id)arg1 belowOrthogonalScrollViewForSection:(long long)arg2;	// IMP=0x00000000003afd7a
- (void)_updateElementOrdering;	// IMP=0x00000000003afa11
- (struct CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x00000000003af908
- (_Bool)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(struct UIEdgeInsets)arg3 frameInsets:(struct UIEdgeInsets)arg4 isInitialConfiguration:(_Bool)arg5;	// IMP=0x00000000003af14b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000003aefbb
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000003aee4c
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)arg1;	// IMP=0x00000000003aed0d
- (void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003ae9b1
- (id)_addSectionScrollViewForSection:(long long)arg1;	// IMP=0x00000000003ae485
- (id)_addSectionScrollViewForIndexPath:(id)arg1;	// IMP=0x00000000003ae3e1
- (id)_sectionScrollViewForSection:(long long)arg1;	// IMP=0x00000000003ae35a
- (id)_sectionScrollViewForIndexPath:(id)arg1;	// IMP=0x00000000003ae2dc
- (void)cleanupEmbeddedOrthogonalScrollViews;	// IMP=0x00000000003adf70
- (void)updateParentScrollViewForCellPromiseRegion:(id)arg1;	// IMP=0x00000000003adeb8
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2;	// IMP=0x00000000003adcc6
- (void)reconfigureOrthogonalSectionsForUpdate:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000003ad3f4
- (void)updateContentSizesForOrthogonalSections:(id)arg1;	// IMP=0x00000000003ad324
- (struct NSDirectionalEdgeInsets)_orthogonalScrollViewFrameInsetsForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x00000000003ad1b0
- (void)performLayout;	// IMP=0x00000000003acc2a
- (_Bool)hasOrthogonalSections;	// IMP=0x00000000003acc0d
- (void)addElementIfNeeded:(id)arg1;	// IMP=0x00000000003aca9b
- (id)autoScrollAssistantForOrthogonalScrollingSectionAtIndexPath:(id)arg1;	// IMP=0x00000000003aca0a
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003ac9a8
- (_Bool)isIndexPathInExtantOrthogonalScroller:(id)arg1;	// IMP=0x00000000003ac93a
- (_Bool)isIndexPathInOrthogonalScrollingSection:(id)arg1;	// IMP=0x00000000003ac842
- (_Bool)isElementInOrthogonalScrollingSection:(id)arg1;	// IMP=0x00000000003ac67d
- (id)initWithCollectionView:(id)arg1;	// IMP=0x00000000003ac4e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
