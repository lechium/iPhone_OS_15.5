//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDConditionRecordEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x00000000004980be
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000498090
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x0000000000498039
+ (_Bool)isConcreteEntity;	// IMP=0x0000000000498031
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000497b1a
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000497b06
+ (id)databaseTable;	// IMP=0x0000000000497af9

@end
