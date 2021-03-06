//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreZone
{
}

+ (id)_propertySettersForCloudStoreZone;	// IMP=0x00400000002b86d4
+ (id)_cloudStoreZonesWithQuery:(id)arg1;	// IMP=0x00100000002b8188
+ (id)cloudStoreZonesForContainerDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002b80c8
+ (id)fetchTimestampForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b7fd8
+ (id)tokenDataForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b7f04
+ (id)_predicateForPID:(long long)arg1;	// IMP=0x00100000002b7e91
+ (id)_predicateForDatabasePID:(long long)arg1;	// IMP=0x00100000002b7e1e
+ (id)_predicateForZoneName:(id)arg1;	// IMP=0x00100000002b7dfb
+ (id)_predicateForZoneName:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00100000002b7cd3
+ (void)deleteEntitiesForCloudStoreDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002b7c2d
+ (void)removeCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b7a64
+ (id)_cloudStoreZoneWithName:(id)arg1 containerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b79d3
+ (id)cloudStoreZoneWithPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002b7929
+ (id)anyInDatabase:(id)arg1 forCloudStoreZone:(id)arg2;	// IMP=0x00100000002b7823
+ (void)updateChangeToken:(id)arg1 fetchTimestamp:(id)arg2 forCloudStoreZone:(id)arg3 inContainerDatabase:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00100000002b74d2
+ (id)insertOrUpdateCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b73c7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002b7398
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002b72bf
+ (id)databaseTable;	// IMP=0x00100000002b72b2
- (id)_commonDictionaryForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00400000002b8551
- (id)cloudStoreZone;	// IMP=0x00100000002b8373
- (_Bool)deleteFromDatabase;	// IMP=0x00100000002b7b17
- (void)updateWithShareParticipants:(id)arg1;	// IMP=0x00100000002b77a4
- (void)updateWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00100000002b76e2
- (id)initWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b7600

@end

