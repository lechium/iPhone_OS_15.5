//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAllergyRecordType, HKConcept, HKMedicalCoding, HKMedicalCodingCollection, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKAllergyRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    HKMedicalCodingCollection *_allergyCodingCollection;	// 8 = 0x8
    HKMedicalDate *_onsetDate;	// 16 = 0x10
    NSString *_asserter;	// 24 = 0x18
    NSArray *_reactions;	// 32 = 0x20
    HKMedicalCoding *_criticalityCoding;	// 40 = 0x28
    HKMedicalDate *_lastOccurrenceDate;	// 48 = 0x30
    HKMedicalDate *_recordedDate;	// 56 = 0x38
    HKMedicalCoding *_verificationStatusCoding;	// 64 = 0x40
    HKMedicalCoding *_clinicalStatusCoding;	// 72 = 0x48
    HKMedicalCoding *_allergyTypeCoding;	// 80 = 0x50
    HKMedicalCoding *_categoryCoding;	// 88 = 0x58
    HKConcept *_allergy;	// 96 = 0x60
    HKConcept *_criticality;	// 104 = 0x68
    HKConcept *_verificationStatus;	// 112 = 0x70
    HKConcept *_clinicalStatus;	// 120 = 0x78
    HKConcept *_allergyType;	// 128 = 0x80
    HKConcept *_category;	// 136 = 0x88
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000001f49bf
+ (_Bool)supportsEquivalence;	// IMP=0x00000000001f2922
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f21f0
+ (id)_newAllergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodingCollection:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurrenceDate:(id)arg18 recordedDate:(id)arg19 verificationStatusCoding:(id)arg20 clinicalStatusCoding:(id)arg21 allergyTypeCoding:(id)arg22 categoryCoding:(id)arg23 config:(CDUnknownBlockType)arg24;	// IMP=0x00000000001f197f
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodingCollection:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurrenceDate:(id)arg18 recordedDate:(id)arg19 verificationStatusCoding:(id)arg20 clinicalStatusCoding:(id)arg21 allergyTypeCoding:(id)arg22 categoryCoding:(id)arg23;	// IMP=0x00000000001f18e1
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x000000000003e87e
+ (id)defaultDisplayString;	// IMP=0x0000000000043511
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 allergyCodingCollection:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurrenceDate:(id)arg17 recordedDate:(id)arg18 verificationStatusCoding:(id)arg19 clinicalStatusCoding:(id)arg20 allergyTypeCoding:(id)arg21 categoryCoding:(id)arg22;	// IMP=0x000000000005c27e
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x00000000000abe88
+ (id)indexableConceptKeyPaths;	// IMP=0x00000000000abcce
- (void).cxx_destruct;	// IMP=0x00000000001f49d9
@property(readonly, copy) HKAllergyRecordType *allergyRecordType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001f48fe
- (void)_setCategory:(id)arg1;	// IMP=0x00000000001f48ca
@property(readonly, copy) HKConcept *category;
- (void)_setAllergyType:(id)arg1;	// IMP=0x00000000001f4803
@property(readonly, copy) HKConcept *allergyType;
- (void)_setClinicalStatus:(id)arg1;	// IMP=0x00000000001f473c
@property(readonly, copy) HKConcept *clinicalStatus;
- (void)_setVerificationStatus:(id)arg1;	// IMP=0x00000000001f4675
@property(readonly, copy) HKConcept *verificationStatus;
- (void)_setCriticality:(id)arg1;	// IMP=0x00000000001f45ae
@property(readonly, copy) HKConcept *criticality;
- (void)_setAllergy:(id)arg1;	// IMP=0x00000000001f4499
@property(readonly, copy) HKConcept *allergy;
- (void)_setCategoryCoding:(id)arg1;	// IMP=0x00000000001f4365
@property(readonly, copy) HKMedicalCoding *categoryCoding;
- (void)_setAllergyTypeCoding:(id)arg1;	// IMP=0x00000000001f429d
@property(readonly, copy) HKMedicalCoding *allergyTypeCoding;
- (void)_setClinicalStatusCoding:(id)arg1;	// IMP=0x00000000001f41d5
@property(readonly, copy) HKMedicalCoding *clinicalStatusCoding;
- (void)_setVerificationStatusCoding:(id)arg1;	// IMP=0x00000000001f410d
@property(readonly, copy) HKMedicalCoding *verificationStatusCoding;
- (void)_setRecordedDate:(id)arg1;	// IMP=0x00000000001f40c4
@property(readonly, copy) HKMedicalDate *recordedDate;
- (void)_setLastOccurrenceDate:(id)arg1;	// IMP=0x00000000001f407b
@property(readonly, copy) HKMedicalDate *lastOccurrenceDate;
- (void)_setCriticalityCoding:(id)arg1;	// IMP=0x00000000001f3fb3
@property(readonly, copy) HKMedicalCoding *criticalityCoding;
- (void)_setReactions:(id)arg1;	// IMP=0x00000000001f3f6a
@property(readonly, copy) NSArray *reactions;
- (void)_setAsserter:(id)arg1;	// IMP=0x00000000001f3f21
@property(readonly, copy) NSString *asserter;
- (void)_setOnsetDate:(id)arg1;	// IMP=0x00000000001f3ed8
@property(readonly, copy) HKMedicalDate *onsetDate;
- (void)_setAllergyCodingCollection:(id)arg1;	// IMP=0x00000000001f3e26
@property(readonly, copy) HKMedicalCodingCollection *allergyCodingCollection;
- (id)categoryCodingCollection;	// IMP=0x00000000001f3d80
- (id)allergyTypeCodingCollection;	// IMP=0x00000000001f3cef
- (id)clinicalStatusCodingCollection;	// IMP=0x00000000001f3c5e
- (id)verificationStatusCodingCollection;	// IMP=0x00000000001f3bcd
- (id)criticalityCodingCollection;	// IMP=0x00000000001f3b3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f3b31
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000001f292a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f242c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f21f8
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000001f1fef
- (id)medicalRecordCodings;	// IMP=0x00000000000434c1
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ac534
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000abec6
@property(readonly, nonatomic) long long recordCategoryType;

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end

