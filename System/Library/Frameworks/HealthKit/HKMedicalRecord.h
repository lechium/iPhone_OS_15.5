//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCodedSample-Protocol.h>
#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/HKMedicalRecordCodings-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKFHIRIdentifier, HKMedicalRecordOriginIdentifier, HKMedicalType, HKSemanticDate, NSArray, NSDate, NSLocale, NSString, NSUUID;

@interface HKMedicalRecord <HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying>
{
    HKConcept *_primaryConcept;	// 8 = 0x8
    _Bool _enteredInError;	// 16 = 0x10
    NSString *_note;	// 24 = 0x18
    NSDate *_modifiedDate;	// 32 = 0x20
    HKMedicalRecordOriginIdentifier *_originIdentifier;	// 40 = 0x28
    NSLocale *_locale;	// 48 = 0x30
    long long _extractionVersion;	// 56 = 0x38
    HKSemanticDate *_sortDate;	// 64 = 0x40
    NSString *_country;	// 72 = 0x48
    unsigned long long _state;	// 80 = 0x50
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000000d27c5
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000d25d2
+ (_Bool)supportsEquivalence;	// IMP=0x00000000000d1cb6
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d18bf
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 config:(CDUnknownBlockType)arg13;	// IMP=0x00000000000d1358
+ (id)defaultDisplayString;	// IMP=0x0000000000042fd0
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x000000000010c921
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x0000000000182c46
+ (id)indexableConceptKeyPaths;	// IMP=0x0000000000182bdc
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x0000000000182b4f
- (void).cxx_destruct;	// IMP=0x00000000000d2879
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) HKSemanticDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) long long extractionVersion; // @synthesize extractionVersion=_extractionVersion;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) HKMedicalRecordOriginIdentifier *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
@property(readonly, copy, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) _Bool enteredInError; // @synthesize enteredInError=_enteredInError;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000000d245f
- (void)_setState:(unsigned long long)arg1;	// IMP=0x00000000000d244e
- (void)_setCountry:(id)arg1;	// IMP=0x00000000000d241a
- (void)_setPrimaryConcept:(id)arg1;	// IMP=0x00000000000d23af
- (void)_setSortDate:(id)arg1;	// IMP=0x00000000000d237b
- (void)_setExtractionVersion:(long long)arg1;	// IMP=0x00000000000d236a
- (void)_setLocale:(id)arg1;	// IMP=0x00000000000d2336
- (void)_setOriginIdentifier:(id)arg1;	// IMP=0x00000000000d2302
- (void)_setModifiedDate:(id)arg1;	// IMP=0x00000000000d22ce
- (void)_setEnteredInError:(_Bool)arg1;	// IMP=0x00000000000d22be
- (void)_setNote:(id)arg1;	// IMP=0x00000000000d228a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d227f
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000000d1cbe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d1a4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d18c7
@property(readonly, nonatomic) HKConcept *primaryConcept;
@property(readonly, nonatomic) unsigned long long medicalRecordOriginType;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *FHIRIdentifier;
@property(readonly, copy, nonatomic) HKMedicalType *medicalType;
- (id)_init;	// IMP=0x00000000000d1308
- (id)fallbackDisplayString;	// IMP=0x0000000000042fb6
@property(readonly, nonatomic) NSArray *medicalRecordCodings;
@property(readonly, nonatomic) long long recordCategoryType;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000182e07
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000182cb0

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSDate *endDate; // @dynamic endDate;
@property(readonly) unsigned long long hash;
@property(readonly) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;

@end

