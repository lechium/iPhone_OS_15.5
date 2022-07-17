//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/_UIDiffableDataSourceIdentifying-Protocol.h>

@class NSString, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, __UIDiffableDataSource;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource>
{
    __UIDiffableDataSource *_impl;	// 8 = 0x8
    CDUnknownBlockType __didReorderItemsHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002bdb5d
@property(copy, nonatomic) CDUnknownBlockType _didReorderItemsHandler; // @synthesize _didReorderItemsHandler=__didReorderItemsHandler;
@property(retain, nonatomic) __UIDiffableDataSource *impl; // @synthesize impl=_impl;
- (id)_diffableDataSourceImpl;	// IMP=0x00000000002bdb1b
- (_Bool)_isDiffableDataSource;	// IMP=0x00000000002bdb13
- (id)_snapshotForSection:(id)arg1;	// IMP=0x00000000002bdafd
- (void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002bdae7
- (id)_associatedSectionControllerForSectionIdentifier:(id)arg1;	// IMP=0x00000000002bdad1
- (id)_associatedSectionControllerForItemIdentifier:(id)arg1;	// IMP=0x00000000002bdabb
- (id)collectionView;	// IMP=0x00000000002bdaa5
- (void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bda8f
- (void)_applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bda7d
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000002bda61
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x00000000002bda48
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002bd886
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002bd79b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000002bd668
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000002bd652
- (id)initWithViewUpdatesSink:(id)arg1;	// IMP=0x00000000002bd5d0
- (CDUnknownBlockType)_canReorderItemHandler;	// IMP=0x00000000002bd5ba
- (void)_setCanReorderItemHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bd5a4
- (void)_setDidReorderItemsHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bd412
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x00000000002bd3fc
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000000002bd3e6
- (long long)indexForSectionIdentifier:(id)arg1;	// IMP=0x00000000002bd3d0
- (id)sectionIdentifierForIndex:(long long)arg1;	// IMP=0x00000000002bd3ba
@property(copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers;
- (id)snapshotForSection:(id)arg1;	// IMP=0x00000000002bd34c
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002bd336
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3;	// IMP=0x00000000002bd31d
- (void)applySnapshotUsingReloadData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bd2a4
- (void)applySnapshotUsingReloadData:(id)arg1;	// IMP=0x00000000002bd290
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bd212
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;	// IMP=0x00000000002bd1fd
- (id)snapshot;	// IMP=0x00000000002bd193
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 itemRenderer:(id)arg2;	// IMP=0x00000000002bd071
- (id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bce4c
- (id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bcd75
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bccba
- (void)validateIdentifiers;	// IMP=0x00000000002bdb85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
