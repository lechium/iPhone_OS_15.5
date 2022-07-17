//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalCodingCollection, HKMedicalDate, HKProcedureRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKProcedureRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    HKMedicalCodingCollection *_procedureCodingCollection;	// 8 = 0x8
    NSArray *_performers;	// 16 = 0x10
    HKMedicalDate *_executionStartDate;	// 24 = 0x18
    HKMedicalDate *_executionEndDate;	// 32 = 0x20
    _Bool _notPerformed;	// 40 = 0x28
    HKMedicalCoding *_statusCoding;	// 48 = 0x30
    HKMedicalCodingCollection *_categoryCodingCollection;	// 56 = 0x38
    NSArray *_reasonCodingCollections;	// 64 = 0x40
    NSArray *_reasonsNotPerformedCodingCollections;	// 72 = 0x48
    HKMedicalCodingCollection *_outcomeCodingCollection;	// 80 = 0x50
    NSArray *_complicationsCodingCollections;	// 88 = 0x58
    NSArray *_followUpsCodingCollections;	// 96 = 0x60
    NSArray *_bodySitesCodingCollections;	// 104 = 0x68
    HKConcept *_procedure;	// 112 = 0x70
    HKConcept *_status;	// 120 = 0x78
    HKConcept *_category;	// 128 = 0x80
    NSArray *_reason;	// 136 = 0x88
    NSArray *_reasonsNotPerformed;	// 144 = 0x90
    HKConcept *_outcome;	// 152 = 0x98
    NSArray *_complications;	// 160 = 0xa0
    NSArray *_followUps;	// 168 = 0xa8
    NSArray *_bodySites;	// 176 = 0xb0
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x00000000001ef445
+ (_Bool)supportsEquivalence;	// IMP=0x00000000001ecd41
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ebfb2
+ (id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(_Bool)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25 config:(CDUnknownBlockType)arg26;	// IMP=0x00000000001eb656
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(_Bool)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25;	// IMP=0x00000000001eb5ac
+ (id)defaultDisplayString;	// IMP=0x00000000000433f7
+ (id)cachedConceptRelationshipKeyPaths;	// IMP=0x00000000000dc849
+ (id)indexableConceptKeyPaths;	// IMP=0x00000000000dc696
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 procedureCodingCollection:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(_Bool)arg16 statusCoding:(id)arg17 categoryCodingCollection:(id)arg18 reasonCodingCollections:(id)arg19 reasonsNotPerformedCodingCollections:(id)arg20 outcomeCodingCollection:(id)arg21 complicationsCodingCollections:(id)arg22 followUpsCodingCollections:(id)arg23 bodySitesCodingCollections:(id)arg24;	// IMP=0x000000000010e44d
+ (_Bool)groupsByUserDomainConcept;	// IMP=0x0000000000215155
- (void).cxx_destruct;	// IMP=0x00000000001ef45f
@property(readonly, copy) HKProcedureRecordType *procedureRecordType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001ef349
- (void)_setBodySites:(id)arg1;	// IMP=0x00000000001ef315
@property(readonly, copy) NSArray *bodySites;
- (void)_setFollowUps:(id)arg1;	// IMP=0x00000000001ef240
@property(readonly, copy) NSArray *followUps;
- (void)_setComplications:(id)arg1;	// IMP=0x00000000001ef16b
@property(readonly, copy) NSArray *complications;
- (void)_setOutcome:(id)arg1;	// IMP=0x00000000001ef096
@property(readonly, copy) HKConcept *outcome;
- (void)_setReasonsNotPerformed:(id)arg1;	// IMP=0x00000000001eefcf
@property(readonly, copy) NSArray *reasonsNotPerformed;
- (void)_setReason:(id)arg1;	// IMP=0x00000000001eeefa
@property(readonly, copy) NSArray *reason;
- (void)_setCategory:(id)arg1;	// IMP=0x00000000001eee25
@property(readonly, copy) HKConcept *category;
- (void)_setStatus:(id)arg1;	// IMP=0x00000000001eed10
@property(readonly, copy) HKConcept *status;
- (void)_setProcedure:(id)arg1;	// IMP=0x00000000001eec0d
@property(readonly, copy) HKConcept *procedure;
- (void)_setBodySitesCodingCollections:(id)arg1;	// IMP=0x00000000001eeabf
@property(readonly, copy) NSArray *bodySitesCodingCollections;
- (void)_setFollowUpsCodingCollections:(id)arg1;	// IMP=0x00000000001ee9dd
@property(readonly, copy) NSArray *followUpsCodingCollections;
- (void)_setComplicationsCodingCollections:(id)arg1;	// IMP=0x00000000001ee8fb
@property(readonly, copy) NSArray *complicationsCodingCollections;
- (void)_setOutcomeCodingCollection:(id)arg1;	// IMP=0x00000000001ee833
@property(readonly, copy) HKMedicalCodingCollection *outcomeCodingCollection;
- (void)_setReasonsNotPerformedCodingCollections:(id)arg1;	// IMP=0x00000000001ee751
@property(readonly, copy) NSArray *reasonsNotPerformedCodingCollections;
- (void)_setReasonCodingCollections:(id)arg1;	// IMP=0x00000000001ee66f
@property(readonly, copy) NSArray *reasonCodingCollections;
- (void)_setCategoryCodingCollection:(id)arg1;	// IMP=0x00000000001ee5a7
@property(readonly, copy) HKMedicalCodingCollection *categoryCodingCollection;
- (void)_setStatusCoding:(id)arg1;	// IMP=0x00000000001ee4f5
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setNotPerformed:(_Bool)arg1;	// IMP=0x00000000001ee4d0
@property(readonly) _Bool notPerformed;
- (void)_setExecutionEndDate:(id)arg1;	// IMP=0x00000000001ee48c
@property(readonly, copy) HKMedicalDate *executionEndDate;
- (void)_setExecutionStartDate:(id)arg1;	// IMP=0x00000000001ee443
@property(readonly, copy) HKMedicalDate *executionStartDate;
- (void)_setPerformers:(id)arg1;	// IMP=0x00000000001ee3fa
@property(readonly, copy) NSArray *performers;
- (void)_setProcedureCodingCollection:(id)arg1;	// IMP=0x00000000001ee348
@property(readonly, copy) HKMedicalCodingCollection *procedureCodingCollection;
- (id)statusCodingCollection;	// IMP=0x00000000001ee2d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ee2c5
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000001ecd49
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ec27a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ebfba
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000001ebd6e
- (id)medicalRecordCodings;	// IMP=0x00000000000433a7
@property(readonly, nonatomic) long long recordCategoryType;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dcd7b
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dc887

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end
