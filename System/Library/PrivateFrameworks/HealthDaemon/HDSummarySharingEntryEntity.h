//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSummarySharingEntryEntity
{
}

+ (id)anyWithUUID:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000275eeb
+ (id)codableWithRow:(struct HDSQLiteRow *)arg1;	// IMP=0x0000000000275c29
+ (_Bool)enumerateCodableEntriesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000275940
+ (_Bool)enumerateCodableEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000275725
+ (_Bool)updateNotificationStatusForInvitiationWithUUID:(id)arg1 newNotificationStatus:(long long)arg2 dateModified:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x000000000027545d
+ (_Bool)updateOwnerParticipant:(id)arg1 cloudKitIdentifier:(id)arg2 predicate:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x000000000027517b
+ (_Bool)updateStatus:(long long)arg1 dateModified:(id)arg2 dateAccepted:(id)arg3 predicate:(id)arg4 profile:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000274e1d
+ (_Bool)insertOrReplaceCodableEntry:(id)arg1 CNContactIdentifier:(id)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x000000000027468d
+ (id)propertyForSyncProvenance;	// IMP=0x0000000000274680
+ (id)_propertiesForEntity;	// IMP=0x0000000000274541
+ (long long)protectionClass;	// IMP=0x0000000000274536
+ (id)indices;	// IMP=0x00000000002743b6
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000002743a2
+ (id)databaseTable;	// IMP=0x0000000000274395

@end

