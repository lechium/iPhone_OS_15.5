//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDECGSampleEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x00000000006e8ced
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000006e8cbf
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x00000000006e8caa
+ (_Bool)isConcreteEntity;	// IMP=0x00000000006e8ca2
+ (_Bool)_insertECGWithCodableBinarySample:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 provenance:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006e8404
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006e801c
+ (id)foreignKeys;	// IMP=0x00000000006e7f71
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000006e7f5d
+ (id)databaseTable;	// IMP=0x00000000006e7f50

@end
