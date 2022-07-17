//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, __UIDiffableDataSource;

@interface _UIDiffableDataSource : NSObject
{
    __UIDiffableDataSource *_dsImpl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c3ca8c
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3ca76
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3ca60
- (void)applySnapshot:(id)arg1;	// IMP=0x0000000000c3ca4a
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3c9cf
- (void)reloadFromSnapshot:(id)arg1;	// IMP=0x0000000000c3c97f
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3c901
- (void)applyDifferencesFromSnapshot:(id)arg1;	// IMP=0x0000000000c3c8b1
- (id)emptySnapshot;	// IMP=0x0000000000c3c856
- (id)snapshot;	// IMP=0x0000000000c3c7fb
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x0000000000c3c7e5
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x0000000000c3c7cf
- (void)reloadSectionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c7b9
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c7a3
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c78d
- (void)deleteSectionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c777
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c761
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c74b
- (void)appendSectionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c735
- (void)appendSectionWithIdentifier:(id)arg1;	// IMP=0x0000000000c3c71f
- (void)reloadItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c709
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c6f3
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c6dd
- (void)deleteAllItems;	// IMP=0x0000000000c3c6c7
- (void)deleteItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c6b1
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c69b
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c685
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;	// IMP=0x0000000000c3c66f
- (void)appendItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c3c659
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x0000000000c3c643
- (long long)indexOfItemIdentifier:(id)arg1;	// IMP=0x0000000000c3c62d
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x0000000000c3c617
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x0000000000c3c601
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x0000000000c3c5eb
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (void)setDefaultRowAnimation:(long long)arg1;	// IMP=0x0000000000c3c57d
- (long long)defaultRowAnimation;	// IMP=0x0000000000c3c567
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c3c4a4
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3c3fd
- (id)_impl;	// IMP=0x0000000000c3c3ef
- (id)dsImpl;	// IMP=0x0000000000c3c3e1
- (id)initWithDiffableDataSource:(id)arg1;	// IMP=0x0000000000c3c376
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c3c2b3
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3c20c
- (id)initWithViewUpdatesSink:(id)arg1;	// IMP=0x0000000000c3c18a
- (id)init;	// IMP=0x0000000000c3c103

@end
