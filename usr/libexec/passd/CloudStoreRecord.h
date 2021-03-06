//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreRecord
{
}

+ (id)_predicateForRecordType:(id)arg1;	// IMP=0x004000000020f2c1
+ (id)_predicateForCloudStoreZonePID:(id)arg1;	// IMP=0x001000000020f29e
+ (id)_predicateForRecordName:(id)arg1;	// IMP=0x001000000020f27b
+ (id)_predicateForRecord:(id)arg1 cloudStoreZonePID:(id)arg2;	// IMP=0x001000000020f0d6
+ (void)removeCloudStoreRecordsWithName:(id)arg1 recordType:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000020ef1c
+ (void)removeCloudStoreRecordID:(id)arg1 recordType:(id)arg2 cloudStoreZone:(id)arg3 inDatabase:(id)arg4;	// IMP=0x001000000020ecdb
+ (void)deleteEntitiesForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020ec1a
+ (id)anyInDatabase:(id)arg1 cloudStoreRecord:(id)arg2 cloudStoreZone:(id)arg3;	// IMP=0x001000000020eaff
+ (id)insertOrUpdateCloudStoreRecord:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000020e8c2
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000020e893
+ (id)databaseTable;	// IMP=0x001000000020e886
- (id)_commonDictionaryForCloudStoreRecord:(id)arg1;	// IMP=0x004000000020f2e4
- (unsigned long long)hash;	// IMP=0x001000000020f08b
- (void)updateWithCloudStoreRecord:(id)arg1;	// IMP=0x001000000020eab3
- (id);	// IMP=0x001000000020e992

@end

