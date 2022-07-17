//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreContainerDatabase
{
}

+ (id)_predicateForPID:(long long)arg1;	// IMP=0x004000000038fc82
+ (id)_predicateForScope:(long long)arg1;	// IMP=0x001000000038fc0f
+ (id)_predicateForContainerName:(id)arg1;	// IMP=0x001000000038fbec
+ (id)_predicateForContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x001000000038faf1
+ (id)anyInDatabase:(id)arg1 withPID:(long long)arg2;	// IMP=0x001000000038fa65
+ (id)anyInDatabase:(id)arg1 withContainerName:(id)arg2 scope:(long long)arg3;	// IMP=0x001000000038f9d4
+ (void)removeCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038f916
+ (id)_cloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038f8f8
+ (id)insertOrUpdateCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038f70a
+ (id)databaseTable;	// IMP=0x001000000038f6fd
- (id)_commonDictionaryFoDatabaseWithScope:(long long)arg1 containerName:(id)arg2;	// IMP=0x004000000038fdc4
- (id)databaseSubscription;	// IMP=0x001000000038fd5d
- (id)cloudStoreZones;	// IMP=0x001000000038fcf5
- (_Bool)deleteFromDatabase;	// IMP=0x001000000038f958
- (void)updateWithDatabaseSubscription:(id)arg1;	// IMP=0x001000000038f8a2
- (void)updateWithContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x001000000038f84d
- (id)initWithCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038f7c8

@end
