//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSIndexSet, NSMutableArray, NSOrderedSet, _NSDiffableDataSourceSectionSnapshotState;

@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying>
{
    _NSDiffableDataSourceSectionSnapshotState *_state;	// 8 = 0x8
    NSMutableArray *_expandedItemsUpdates;	// 16 = 0x10
    NSMutableArray *_collapsedItemsUpdates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c789e7
- (void)_prepareForApplyToDataSource;	// IMP=0x0000000000c789d1
- (id)_itemAfterItem:(id)arg1;	// IMP=0x0000000000c7886d
- (id)_itemBeforeItem:(id)arg1;	// IMP=0x0000000000c7874b
@property(readonly, nonatomic) NSIndexSet *_visibleIndexes;
- (_Bool)_itemHasChildren:(id)arg1;	// IMP=0x0000000000c7857f
@property(readonly, nonatomic) _NSDiffableDataSourceSectionSnapshotState *_state;
@property(readonly, nonatomic) NSOrderedSet *_visibleItemsOrderedSet;
@property(readonly, nonatomic) NSOrderedSet *_itemsOrderedSet;
- (id)snapshotter;	// IMP=0x0000000000c78488
@property(readonly, nonatomic) NSArray *_rootItems;
- (id)_indexesOfItems:(id)arg1 ignoringItemsNotFound:(_Bool)arg2;	// IMP=0x0000000000c780ba
- (id)_indexesOfItems:(id)arg1;	// IMP=0x0000000000c780a6
- (id)_indexesOfChildrenForParent:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000000c77f8d
- (void)_replaceItem:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000000c77d66
@property(readonly, nonatomic) NSArray *collapsedItemsUpdates;
@property(readonly, nonatomic) NSArray *expandedItemsUpdates;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c77ce9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c77ca0
- (id)description;	// IMP=0x0000000000c77bda
- (id)visualDescription;	// IMP=0x0000000000c779a2
@property(readonly, nonatomic) NSArray *rootItems;
@property(readonly, nonatomic) NSArray *visibleItems;
- (id)expandedItems;	// IMP=0x0000000000c7779e
@property(readonly, nonatomic) NSArray *items;
- (id)parentOfChild:(id)arg1;	// IMP=0x0000000000c77738
- (id)parentOfChildItem:(id)arg1;	// IMP=0x0000000000c775de
- (id)insertSnapshot:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000c7713a
- (void)insertSnapshot:(id)arg1 beforeItem:(id)arg2;	// IMP=0x0000000000c76dac
- (id)childSnapshotOfParent:(id)arg1 includingParent:(_Bool)arg2;	// IMP=0x0000000000c76d9a
- (id)snapshotOfParentItem:(id)arg1 includingParentItem:(_Bool)arg2;	// IMP=0x0000000000c76aa1
- (id)childSnapshotOfParent:(id)arg1;	// IMP=0x0000000000c76a8f
- (id)snapshotOfParentItem:(id)arg1;	// IMP=0x0000000000c76a7b
- (id)childrenOfParent:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000000c76919
- (id)childrenOfParent:(id)arg1;	// IMP=0x0000000000c76905
- (long long)levelForItem:(id)arg1;	// IMP=0x0000000000c768f3
- (long long)levelOfItem:(id)arg1;	// IMP=0x0000000000c767f1
- (_Bool)isVisible:(id)arg1;	// IMP=0x0000000000c766ef
- (_Bool)isExpanded:(id)arg1;	// IMP=0x0000000000c765ed
- (long long)indexOfItem:(id)arg1;	// IMP=0x0000000000c765d7
- (_Bool)containsItem:(id)arg1;	// IMP=0x0000000000c765c1
- (void)setChildrenWithSnapshot:(id)arg1 forParent:(id)arg2;	// IMP=0x0000000000c765a6
- (void)replaceChildrenOfParentItem:(id)arg1 withSnapshot:(id)arg2;	// IMP=0x0000000000c76200
- (void)collapseItems:(id)arg1;	// IMP=0x0000000000c760ef
- (void)expandItems:(id)arg1;	// IMP=0x0000000000c75fde
- (void)deleteAllItems;	// IMP=0x0000000000c75fb5
- (void)deleteItems:(id)arg1 orphanDisposition:(long long)arg2;	// IMP=0x0000000000c75d09
- (void)deleteItems:(id)arg1;	// IMP=0x0000000000c75cf5
- (void)insertItems:(id)arg1 afterItem:(id)arg2 insertionMode:(long long)arg3;	// IMP=0x0000000000c7594c
- (void)insertItems:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000c75937
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;	// IMP=0x0000000000c7560d
- (void)appendItems:(id)arg1 intoParent:(id)arg2;	// IMP=0x0000000000c755fb
- (void)appendItems:(id)arg1 intoParentItem:(id)arg2;	// IMP=0x0000000000c75168
- (void)appendItems:(id)arg1;	// IMP=0x0000000000c74e89
- (id)initWithSnapshot:(id)arg1;	// IMP=0x0000000000c74e33
- (id)initWithState:(id)arg1;	// IMP=0x0000000000c74d93
- (id)init;	// IMP=0x0000000000c74d53

@end

