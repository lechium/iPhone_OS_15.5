//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSyncStoreEntity
{
}

+ (long long)protectionClass;	// IMP=0x0000000000034023
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x000000000027ac89
+ (id)databaseTable;	// IMP=0x000000000027ac7c
+ (id)recreateSyncStoreWithUUID:(id)arg1 type:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x000000000027a916
+ (id)allSyncStoreEntitiesOfType:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027a799
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027a643
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;	// IMP=0x000000000027a0cc
- (long long)syncProvenance;	// IMP=0x000000000027ac6a

@end

