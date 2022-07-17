//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharedAccountCloudStore
{
}

+ (id)_propertySettersForSharedAccountCloudStore;	// IMP=0x00400000003402ea
+ (id)_sharedAccountCloudStoreForQuery:(id)arg1;	// IMP=0x001000000033ffef
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000033fd9e
+ (void)deleteEntitiesForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033fc89
+ (id)sharedAccountCloudStoreByAccountIdentifierInDatabase:(id)arg1;	// IMP=0x001000000033f92a
+ (id)sharedAccountCloudStoreForAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033f873
+ (id)insertOrUpdateSharedAccountCloudStore:(id)arg1 forAccount:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033f519
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000033f465
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000033f436
+ (id)databaseTable;	// IMP=0x001000000033f429
- (id)_commonDictionaryForSharedAccountCloudStore:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00400000003401ca
- (id)sharedAccountCloudStore;	// IMP=0x001000000033fe11
- (_Bool)deleteFromDatabase;	// IMP=0x001000000033fd22
- (void)updateWithSharedAccountCloudStore:(id)arg1 forAccount:(id)arg2;	// IMP=0x001000000033f735
- (id)initWithSharedAccountCloudStore:(id)arg1 forAccount:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033f61e

@end
