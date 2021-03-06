//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDMedicalUserDomainConceptMappingEntity
{
}

+ (id)unitTest_userDomainConceptIDsForMedicalRecordID:(unsigned long long)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000410399
+ (id)unitTest_medicalRecordIDsForUserDomainConceptID:(unsigned long long)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000410200
+ (_Bool)updateMappingFromRecordWithPersistentID:(long long)arg1 withMapToUDCWithPersistentID:(long long)arg2 toMapToUDCWithPersistentID:(long long)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x00000000004100fc
+ (_Bool)migrateMappingsFromUserDomainConceptID:(long long)arg1 toUserDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x000000000041000e
+ (_Bool)insertUserDomainConceptID:(long long)arg1 medicalRecordID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x000000000040ff20
+ (long long)protectionClass;	// IMP=0x000000000040ff15
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x000000000040fc82
+ (id)foreignKeys;	// IMP=0x000000000040fb95
+ (id)uniquedColumns;	// IMP=0x000000000040fb88
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x000000000040fb74
+ (id)databaseTable;	// IMP=0x000000000040fb67

@end

