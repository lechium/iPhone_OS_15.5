//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSharingRelationshipEntity
{
}

+ (id)entityWithRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000050d0bb
+ (_Bool)deleteEntityWithRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000050cfd3
+ (id)insertOrReplaceWithRecipientIdentifier:(id)arg1 dateModified:(id)arg2 syncProvenance:(long long)arg3 databaseTransaction:(id)arg4 error:(id *)arg5;	// IMP=0x000000000050cdc0
+ (id)propertyForSyncProvenance;	// IMP=0x000000000050cdb3
+ (long long)protectionClass;	// IMP=0x000000000050cda8
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x000000000050cd94
+ (id)databaseTable;	// IMP=0x000000000050cd87
- (_Bool)setDateModified:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000050d2ca
- (id)dateModifiedInDatabaseTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000050d2ab
- (id)recipientIdentifierInDatabaseTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000050d1aa

@end
