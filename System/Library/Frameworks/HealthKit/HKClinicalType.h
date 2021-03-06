//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKClinicalType
{
}

+ (id)coverageRecordType;	// IMP=0x00000000001ad1af
+ (id)vitalSignRecordType;	// IMP=0x00000000001ad193
+ (id)procedureRecordType;	// IMP=0x00000000001ad177
+ (id)medicationRecordType;	// IMP=0x00000000001ad15b
+ (id)labResultRecordType;	// IMP=0x00000000001ad13f
+ (id)immunizationRecordType;	// IMP=0x00000000001ad123
+ (id)conditionRecordType;	// IMP=0x00000000001ad107
+ (id)allergyRecordType;	// IMP=0x00000000001ad0eb
+ (id)allTypes;	// IMP=0x00000000001ace94
+ (id)sampleTypesForResourceType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a8e0f
- (_Bool)_requiresPerObjectAuthorization;	// IMP=0x00000000001ad1e0
- (_Bool)_requiresAuthorization;	// IMP=0x00000000001ad1cb
- (_Bool)isClinicalType;	// IMP=0x0000000000113ea0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000113e07

@end

