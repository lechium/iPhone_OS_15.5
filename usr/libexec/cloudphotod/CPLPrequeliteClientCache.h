//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteClientCache
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0020000000059e63
- (void)fillRelatedIdentifiersInChange:(id)arg1;	// IMP=0x0010000000059bfe
- (id)statusPerScopeIndex;	// IMP=0x0010000000059b9c
- (id)statusDictionary;	// IMP=0x0010000000059a26
- (id)status;	// IMP=0x00100000000598ae
- (_Bool)_updateRelatedIdentifier:(id)arg1 forRecordWithIdentifier:(id)arg2;	// IMP=0x00100000000597bd
- (_Bool)_deleteBadRelations;	// IMP=0x00100000000596f1
- (id)_badContainerRelationsIdentifiers;	// IMP=0x00100000000595eb
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0010000000059494
- (_Bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x001000000005933d
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0010000000058e2c
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x0010000000058948
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005881f
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005866e
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000058343
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000580e9
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000057cd9
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000578b8
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000005762e
- (_Bool)initializeStorage;	// IMP=0x00100000000574ba
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000005748b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: hash
// Property attributes: (null)

@property(readonly) Class superclass;

@end

