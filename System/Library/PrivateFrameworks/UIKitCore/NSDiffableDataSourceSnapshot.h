//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>
{
    __UIDiffableDataSourceSnapshot *_impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bcbed
@property(readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl; // @synthesize impl=_impl;
- (id)state;	// IMP=0x00000000002bcbcd
- (id)_identifierAfterIdentifier:(id)arg1;	// IMP=0x00000000002bca73
- (id)_identifierBeforeIdentifier:(id)arg1;	// IMP=0x00000000002bc97c
- (struct _NSRange)sectionGlobalItemRangeForSection:(long long)arg1;	// IMP=0x00000000002bc8f5
- (id)indexPathForIdentifier:(id)arg1;	// IMP=0x00000000002bc871
- (id)identifierForIndexPath:(id)arg1;	// IMP=0x00000000002bc7ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bc766
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bc6fc
- (void)reloadSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc6e6
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002bc6d0
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002bc6ba
- (void)deleteSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc6a4
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002bc68e
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002bc678
- (void)appendSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc662
- (void)reconfigureItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc64c
- (void)reloadItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc636
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002bc620
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002bc60a
- (void)deleteAllItems;	// IMP=0x00000000002bc5f4
- (void)deleteItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc5de
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002bc5c8
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002bc5b2
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002bc59c
- (void)appendItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002bc586
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x00000000002bc570
- (long long)indexOfItemIdentifier:(id)arg1;	// IMP=0x00000000002bc55a
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x00000000002bc544
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000000002bc52e
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x00000000002bc518
@property(readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (id)description;	// IMP=0x00000000002bc02f
- (id)_initWithImpl:(id)arg1;	// IMP=0x00000000002bbfc4
- (id)initWithState:(id)arg1;	// IMP=0x00000000002bbf1b
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000002bbec5
- (id)init;	// IMP=0x00000000002bbeb1
- (void)validateIdentifiers;	// IMP=0x00000000002bcbfd

@end

