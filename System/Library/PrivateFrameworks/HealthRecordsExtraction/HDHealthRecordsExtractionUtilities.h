//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HDHealthRecordsExtractionUtilities : NSObject
{
}

+ (id)localeFromLanguage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e52a
+ (id)wasEnteredInError:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e395
+ (id)enteredInErrorWithStatusString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e2e8
+ (_Bool)_determineEnteredInError:(id)arg1;	// IMP=0x000000000000e1f1
+ (id)stringWithRTF:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000df54
+ (id)preferredNameWithHumanNames:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000de73
+ (id)referencedMedicationStatementActorTypeWithString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dcc1
+ (id)_medicalDateIntervalWithDosage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000db12
+ (id)medicationDosagesWithDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000daf3
+ (id)medicationDosagesWithOrderDosageInstructionArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dad4
+ (id)medicationDosagesWithDispenseDosageInstructionArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dab5
+ (id)medicationDosagesWithStatementDosageInstructionArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000da96
+ (id)_medicationDosagesWithDosageArray:(id)arg1 FHIRRelease:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d68a
+ (id)earliestDosageDateWithDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d678
+ (id)earliestDosageDateWithMedicationDispenseDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d666
+ (id)earliestDosageDateWithMedicationOrderDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d654
+ (id)earliestDosageDateWithMedicationStatementDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d642
+ (id)_earliestDosageDateWithMedicationDosageArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d1b8
+ (id)medicalDateIntervalWithPeriod:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cf9d
+ (id)timeSinceMidnightWithTimeString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cd86
+ (id)medicalDateWithInstantString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ccb3
+ (id)medicalDateWithDateString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cabe
+ (id)medicalDateWithDateTimeString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c9ae
+ (id)_medicalDateWithOnlyDateString:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;	// IMP=0x000000000000c609
+ (id)_medicalDateWithDateTimeString:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;	// IMP=0x000000000000c3e6
+ (long long)_integerFromTextCheckingResult:(id)arg1 string:(id)arg2 index:(long long)arg3;	// IMP=0x000000000000c359
+ (id)inspectableValueCollectionWithPeriod:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c2c4
+ (id)inspectableValueCollectionWithTime:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c22f
+ (id)inspectableValueCollectionWithDateTime:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c19a
+ (id)inspectableValueCollectionWithObservationValues:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bec3
+ (id)inspectableValueCollectionWithObservationComponents:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bbed
+ (id)inspectableValueCollectionWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bb56
+ (id)inspectableValueCollectionWithString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ba93
+ (id)inspectableValueCollectionWithRatio:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b9fc
+ (id)inspectableValueCollectionWithQuantity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b965
+ (id)codedValueWithObservationComponent:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b77a
+ (id)identifierFromReference:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b5f6
+ (id)identifiersWithReferences:(id)arg1 parentResource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b381
+ (id)identifierWithReference:(id)arg1 parentResource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b210
+ (id)allergyReactionsWithAllergyIntoleranceReaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000af7e
+ (id)enteredInErrorWithAllergyIntoleranceVerificationStatusCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000aed3
+ (id)allergyIntoleranceVerificationStatusCodingWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ae17
+ (id)allergyIntoleranceClinicalStatusCodingWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ad5b
+ (id)medicalCodingWithR4AllergyIntoleranceCriticalityCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000acbf
+ (id)medicalCodingWithAllergyIntoleranceTypeCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ac23
+ (id)medicalCodingWithAllergyIntoleranceSeverityCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ab87
+ (id)medicalCodingWithAllergyIntoleranceCriticalityCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000aaeb
+ (id)medicalCodingWithAllergyIntoleranceCategoryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000aa4f
+ (id)medicalCodingWithAllergyIntoleranceStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a9b3
+ (id)medicalCodingWithProcedureStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a917
+ (id)medicalCodingWithR4MedicationRequestStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a87b
+ (id)medicalCodingWithMedicationOrderStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a7df
+ (id)medicalCodingWithR4MedicationDispenseStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a743
+ (id)medicalCodingWithMedicationDispenseStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a6a7
+ (id)medicalCodingWithMedicationAdminStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a60b
+ (id)medicalCodingWithImmunizationStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a56f
+ (id)medicalCodingWithEventStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a4d3
+ (id)medicalCodingWithDiagnosticReportStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a437
+ (id)medicalCodingWithGoalStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a39b
+ (id)medicalCodingWithCarePlanStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a2ff
+ (id)medicalCodingWithDeviceStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a263
+ (id)coverageClassificationWithClassElements:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a05e
+ (id)medicalCodingWithCoverageStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009fc2
+ (id)enteredInErrorWithConditionVerificationStatusCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009f17
+ (id)conditionVerificationStatusCodingWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009e5b
+ (id)conditionClinicalStatusCodingWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009d9f
+ (id)inspectableValueWithOnsetValue:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000099a9
+ (id)medicalCodingWithConditionVerificationStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000990d
+ (id)medicalCodingWithConditionClinicalStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009871
+ (id)inspectableValueWithAbatementValue:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000009313
+ (id)inspectableValueWithObservationValues:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000889a
+ (id)resourceReferencedBy:(id)arg1 containedIn:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000087b0
+ (id)medicalCodingsWithReference:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008621
+ (id)booleanNotTakenFromStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008552
+ (id)booleanNotDoneFromStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008483
+ (id)medicalCodingWithMedicationStatementStatusCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000083b4
+ (id)medicalCodingWithObservationStatus:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000082e5
+ (id)referenceRangeWithObservationReferenceRange:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007df4
+ (id)referenceRangesWithObservationReferenceRanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007bb1
+ (id)preferredSupporedCategory:(id)arg1 unsupportedCategories:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000079fd
+ (id)observationCategoryWithObservationCategories:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000745d
+ (id)observationCategoryWithObservationCategory:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000070ca
+ (id)stringWithAttachment:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006d6d
+ (id)ratioValueWithRatio:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006c07
+ (id)codedQuantityWithQuantity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000068ae
+ (id)medicalCodingWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000067b0
+ (id)medicalCodingsArrayWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006725
+ (id)medicalCodingsWithCodeableConcepts:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000066ae
+ (id)medicalCodingCollectionArrayWithCodeableConcepts:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000662b
+ (id)_transformArray:(id)arg1 error:(id *)arg2 transformBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000063e2
+ (id)medicalCodingsWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005fee
+ (id)medicalCodingCollectionWithCodeableConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005f8e
+ (id)medicalCodingWithCoding:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005d60
+ (id)stringArrayWithStrings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005b7c
+ (id)wrapInArray:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005aed
+ (id)_firstCodingForSystem:(id)arg1 inCodeableConcept:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000592a
+ (id)_FHIRMedicalCodingWithCode:(id)arg1 medicalCodingSystem:(id)arg2 codingVersion:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005859

@end

