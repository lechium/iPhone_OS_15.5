//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDeletedSampleEntity
{
}

+ (_Bool)insertCodableDeletedSamples:(id)arg1 provenance:(id)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000636e93
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x0000000000636e7e
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000082a74
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;	// IMP=0x000000000004fe3a
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;	// IMP=0x0000000000082770
+ (_Bool)isConcreteEntity;	// IMP=0x0000000000636e76
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x0000000000636da5
+ (long long)protectionClass;	// IMP=0x00000000000092f0
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000636d8c
+ (id)databaseTable;	// IMP=0x0000000000636d73
+ (Class)_entityClassForDeletion;	// IMP=0x0000000000636d62
+ (_Bool)enumerateDeletedSamplesWithTypes:(id)arg1 profile:(id)arg2 restrictedSourceEntities:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000000063673b
+ (id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 persistStartAndEndDates:(_Bool)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7 inDatabase:(id)arg8 error:(id *)arg9;	// IMP=0x00000000006362ea

@end
