//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDFitnessFriendAchievementEntity
{
}

+ (_Bool)enumerateAchievementsWithPredicate:(id)arg1 anchor:(id *)arg2 profile:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003bc868
+ (_Bool)isConcreteEntity;	// IMP=0x00000000003bc860
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000003bc832
+ (id)codableObjectsFromObjectCollection:(id)arg1;	// IMP=0x00000000003bc81d
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000030a71
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x00000000003bc74c
+ (long long)protectionClass;	// IMP=0x000000000003402e
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000003bc738
+ (id)databaseTable;	// IMP=0x00000000000741e0

@end

