//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSDiffableDataSourceTransaction, NSHashTable, NSMapTable, NSString, UICollectionView, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, UITableView, _UIDiffableDataSourceViewUpdater;
@protocol OS_dispatch_queue, _UIDiffableDataSourceState;

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    NSMapTable *_rendererMap;	// 24 = 0x18
    CDUnknownBlockType _rendererIdentifierProvider;	// 32 = 0x20
    NSHashTable *_sectionControllers;	// 40 = 0x28
    NSDiffableDataSourceTransaction *_pendingReorderingTransaction;	// 48 = 0x30
    NSDiffableDataSourceTransaction *_currentTransaction;	// 56 = 0x38
    _Bool _pendingReorderingTransactionShouldPerformViewAnimations;	// 64 = 0x40
    _Bool _isApplyingWithoutRebasingSectionSnapshots;	// 65 = 0x41
    CDUnknownBlockType _tableViewCellProvider;	// 72 = 0x48
    CDUnknownBlockType _supplementaryViewProvider;	// 80 = 0x50
    CDUnknownBlockType _supplementaryReuseIdentifierProvider;	// 88 = 0x58
    CDUnknownBlockType _supplementaryViewConfigurationHandler;	// 96 = 0x60
    CDUnknownBlockType _collectionViewCellProvider;	// 104 = 0x68
    CDUnknownBlockType _cellObserver;	// 112 = 0x70
    UICollectionViewDiffableDataSourceReorderingHandlers *_reorderingHandlers;	// 120 = 0x78
    CDUnknownBlockType _willApplySnapshotHandler;	// 128 = 0x80
    CDUnknownBlockType _didApplySnapshotHandler;	// 136 = 0x88
    CDUnknownBlockType _canReorderItemHandler;	// 144 = 0x90
    UICollectionViewDiffableDataSourceSectionSnapshotHandlers *_sectionSnapshotHandlers;	// 152 = 0x98
    CDUnknownBlockType _tableViewCellConfigurationHandler;	// 160 = 0xa0
    CDUnknownBlockType _reuseIdentifierProvider;	// 168 = 0xa8
    CDUnknownBlockType _collectionViewCellConfigurationHandler;	// 176 = 0xb0
    _UIDiffableDataSourceViewUpdater *_viewUpdater;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_applyQueue;	// 192 = 0xc0
    _Atomic long long _outstandingApplyCount;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_snapshotQueue;	// 208 = 0xd0
    unsigned long long _mutationQueueSource;	// 216 = 0xd8
    id <_UIDiffableDataSourceState> _state;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000002d941e
@property(nonatomic) _Bool isApplyingWithoutRebasingSectionSnapshots; // @synthesize isApplyingWithoutRebasingSectionSnapshots=_isApplyingWithoutRebasingSectionSnapshots;
@property(retain, nonatomic) id <_UIDiffableDataSourceState> state; // @synthesize state=_state;
@property unsigned long long mutationQueueSource; // @synthesize mutationQueueSource=_mutationQueueSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(readonly, nonatomic) _Atomic long long outstandingApplyCount; // @synthesize outstandingApplyCount=_outstandingApplyCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *applyQueue; // @synthesize applyQueue=_applyQueue;
@property(retain, nonatomic) _UIDiffableDataSourceViewUpdater *viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellConfigurationHandler; // @synthesize collectionViewCellConfigurationHandler=_collectionViewCellConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType reuseIdentifierProvider; // @synthesize reuseIdentifierProvider=_reuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellConfigurationHandler; // @synthesize tableViewCellConfigurationHandler=_tableViewCellConfigurationHandler;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers; // @synthesize sectionSnapshotHandlers=_sectionSnapshotHandlers;
@property(copy, nonatomic) CDUnknownBlockType canReorderItemHandler; // @synthesize canReorderItemHandler=_canReorderItemHandler;
@property(copy, nonatomic) CDUnknownBlockType didApplySnapshotHandler; // @synthesize didApplySnapshotHandler=_didApplySnapshotHandler;
@property(copy, nonatomic) CDUnknownBlockType willApplySnapshotHandler; // @synthesize willApplySnapshotHandler=_willApplySnapshotHandler;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers; // @synthesize reorderingHandlers=_reorderingHandlers;
@property(copy, nonatomic) CDUnknownBlockType cellObserver; // @synthesize cellObserver=_cellObserver;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellProvider; // @synthesize collectionViewCellProvider=_collectionViewCellProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewConfigurationHandler; // @synthesize supplementaryViewConfigurationHandler=_supplementaryViewConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider; // @synthesize supplementaryReuseIdentifierProvider=_supplementaryReuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellProvider; // @synthesize tableViewCellProvider=_tableViewCellProvider;
- (id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2;	// IMP=0x00000000002d922a
- (long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000002d9218
- (long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1;	// IMP=0x00000000002d9206
- (id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x00000000002d91eb
- (long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000002d91d0
- (long long)_numberOfSectionsForTableView:(id)arg1;	// IMP=0x00000000002d91be
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002d8dbf
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002d8cb9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002d8c6e
- (id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;	// IMP=0x00000000002d8c5c
- (id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000002d8c4a
- (long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2;	// IMP=0x00000000002d8c38
- (long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1;	// IMP=0x00000000002d8c26
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;	// IMP=0x00000000002d8c08
- (id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000002d8bed
- (long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2;	// IMP=0x00000000002d8bd2
- (long long)_numberOfSectionsForCollectionView:(id)arg1;	// IMP=0x00000000002d8bc0
- (id)sectionController:(id)arg1 snapshotForExpandingParentItem:(id)arg2 currentSectionSnapshot:(id)arg3;	// IMP=0x00000000002d8aad
- (_Bool)sectionController:(id)arg1 shouldQueryForSnapshotForExpandingParentItem:(id)arg2;	// IMP=0x00000000002d8a4a
- (void)sectionController:(id)arg1 willCollapseItem:(id)arg2;	// IMP=0x00000000002d897f
- (_Bool)sectionController:(id)arg1 shouldCollapseItem:(id)arg2;	// IMP=0x00000000002d88a2
- (void)sectionController:(id)arg1 willExpandItem:(id)arg2;	// IMP=0x00000000002d87d7
- (_Bool)sectionController:(id)arg1 shouldExpandItem:(id)arg2;	// IMP=0x00000000002d86fa
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002d8391
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002d7f09
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000002d7e03
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000002d7db8
- (id)currentTransaction;	// IMP=0x00000000002d7daa
@property(readonly, nonatomic) NSArray *sectionControllers;
- (id)_transactionForFinalSnapshot:(id)arg1 dataSourceDiffer:(id)arg2 shouldSkipRebasingSectionSnapshots:(_Bool)arg3;	// IMP=0x00000000002d7883
- (id)_transactionForReloadUpdatesWithSnapshot:(id)arg1;	// IMP=0x00000000002d77e5
- (id)_reorderingTransactionForReorderingUpdate:(id)arg1;	// IMP=0x00000000002d7572
- (void)_resetCurrentTransaction;	// IMP=0x00000000002d7539
- (_Bool)_isApplyingReorderingTransaction;	// IMP=0x00000000002d752b
- (unsigned long long)_capabilities;	// IMP=0x00000000002d73b6
- (void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2 shouldPerformViewAnimations:(_Bool)arg3;	// IMP=0x00000000002d72a7
- (void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2;	// IMP=0x00000000002d7292
- (void)_willBeginReorderingForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002d700a
- (_Bool)canMoveItemAtIndexPath:(id)arg1;	// IMP=0x00000000002d6e70
- (void)_notifyDidApplyForCurrentTransactionIfNeeded;	// IMP=0x00000000002d6d0b
- (void)_notifyWillApplyForCurrentTransactionIfNeeded;	// IMP=0x00000000002d6ba6
- (void)_commitRebasedSectionSnapshotsFromCurrentTransactionIfNeeded;	// IMP=0x00000000002d66f1
- (void)_computeCurrentTransactionForFinalSnapshot:(id)arg1 withDataSourceDiffer:(id)arg2;	// IMP=0x00000000002d665d
- (void)_performApplyWithoutRebasingSectionSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d65e5
- (id)associatedSectionControllerForSectionIdentifier:(id)arg1;	// IMP=0x00000000002d63b7
- (id)associatedSectionControllerForItemIdentifier:(id)arg1;	// IMP=0x00000000002d634e
- (void)addAssociatedSectionControllerIfNeeded:(id)arg1;	// IMP=0x00000000002d62dd
- (void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d5aa4
- (void)_storeState:(id)arg1;	// IMP=0x00000000002d5a66
- (void)_commitStateAtomically:(id)arg1;	// IMP=0x00000000002d5908
- (id)_snapshotWithHandlerAtomic:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d5733
- (_Bool)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;	// IMP=0x00000000002d5607
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 commitAlongsideHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000002d5336
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(_Bool)arg3;	// IMP=0x00000000002d4e6f
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;	// IMP=0x00000000002d4e57
- (void)_commitUpdate:(id)arg1 snapshot:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d49c4
- (id)_pendingReloadUpdatesForSnapshot:(id)arg1;	// IMP=0x00000000002d47cb
- (void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d398d
- (id)_snapshotForSection:(id)arg1;	// IMP=0x00000000002d38fe
- (id)snapshotForSection:(id)arg1;	// IMP=0x00000000002d3781
- (void)_applyDifferencesFromSnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d35ee
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d35dc
- (void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d35b3
- (void)_applyDifferencesFromSnapshot:(id)arg1 customAnimationsProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d3585
@property(nonatomic) long long tableViewDefaultRowAnimation;
- (void)applySnapshot:(id)arg1;	// IMP=0x00000000002d34e3
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d3420
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;	// IMP=0x00000000002d340b
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d2e5c
- (void)reloadFromSnapshot:(id)arg1;	// IMP=0x00000000002d2e48
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d2e1e
- (void)applyDifferencesFromSnapshot:(id)arg1;	// IMP=0x00000000002d2df0
- (id)emptySnapshot;	// IMP=0x00000000002d2dd7
- (id)snapshot;	// IMP=0x00000000002d2d1b
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x00000000002d2d02
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000000002d2ce9
- (long long)indexForSectionIdentifier:(id)arg1;	// IMP=0x00000000002d2cd0
- (id)sectionIdentifierForIndex:(long long)arg1;	// IMP=0x00000000002d2cb7
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d2ad1
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d28eb
- (void)appendSectionWithIdentifier:(id)arg1;	// IMP=0x00000000002d27a2
- (void)reloadSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d26b4
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d2535
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d23b6
- (void)deleteSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d2334
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d21b5
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d2036
- (void)appendSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d1fb4
- (void)reconfigureItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d1f32
- (void)reloadItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d1eb0
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002d1d31
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002d1bb2
- (void)deleteAllItems;	// IMP=0x00000000002d1b66
- (void)deleteItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d1ae4
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002d1965
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002d17e6
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002d169c
- (void)appendItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002d1688
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x00000000002d166f
- (long long)indexOfItemIdentifier:(id)arg1;	// IMP=0x00000000002d1656
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x00000000002d163d
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000000002d1624
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x00000000002d160b
@property(readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (id)_diffableDataSourceImpl;	// IMP=0x00000000002d1577
- (_Bool)_isDiffableDataSource;	// IMP=0x00000000002d156f
@property(readonly, copy) NSString *description;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d1342
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d12b2
@property(readonly, nonatomic) __weak UICollectionView *_collectionView;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d117a
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 dataSource:(id)arg3;	// IMP=0x00000000002d10cc
- (id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d100b
- (id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d0d61
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d0cd1
- (id)initWithViewUpdatesSink:(id)arg1;	// IMP=0x00000000002d0c08
- (id)initWithState:(id)arg1;	// IMP=0x00000000002d0b64
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 state:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000002d093b
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 state:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000002d0702
- (void)validateIdentifiers;	// IMP=0x00000000002d9560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

