//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDFitnessFriendActivitySnapshotEntity
{
}

+ (_Bool)enumerateSnapshotsWithPredicate:(id)arg1 anchor:(id *)arg2 profile:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000354ff8
+ (_Bool)isConcreteEntity;	// IMP=0x0000000000354ff0
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000354fc2
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x0000000000354fad
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000354af0
+ (_Bool)supportsObjectMerging;	// IMP=0x0000000000354ae8
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;	// IMP=0x000000000002f33a
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x0000000000354a17
+ (long long)protectionClass;	// IMP=0x0000000000034039
+ (id)uniquedColumns;	// IMP=0x000000000035499a
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000354986
+ (id)databaseTable;	// IMP=0x0000000000072d86

@end
