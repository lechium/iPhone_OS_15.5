//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDListUserDomainConceptEntity
{
}

+ (id)deduplicateUserDomainConcept:(id)arg1 with:(id)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000415352
+ (id)predicateMatchingSemanticDuplicatesOf:(id)arg1;	// IMP=0x0000000000415130
+ (Class)userDomainConceptClass;	// IMP=0x000000000041511f
+ (_Bool)willDeleteConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000415117
+ (_Bool)updateConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000414faa
+ (_Bool)insertConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000414e3b
+ (id)privateDataEntities;	// IMP=0x0000000000414e2e
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x0000000000414d5d
+ (long long)protectionClass;	// IMP=0x0000000000414d52
+ (id)foreignKeys;	// IMP=0x0000000000414caa
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000414c96
+ (id)databaseTable;	// IMP=0x0000000000414c89

@end
