//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CNMultiValuePropertyDescription
{
}

- (id)localizedStringForLabel:(id)arg1;	// IMP=0x00000000000c1208
@property(readonly, nonatomic) NSArray *managedLabels;
@property(readonly, nonatomic) NSArray *standardLabels;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000c1131
@property(readonly, nonatomic) CDUnknownBlockType fromPlistTransform;
@property(readonly, nonatomic) CDUnknownBlockType plistTransform;
- (id)valueWithResetIdentifiers:(id)arg1;	// IMP=0x00000000000c0ea0
- (id)stringForIndexingForContact:(id)arg1;	// IMP=0x00000000000c0c37
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0bd6
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c08c5
- (void)assertValueType:(id)arg1;	// IMP=0x00000000000c04f1
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000c0450
@property(readonly, nonatomic) Class labeledValueClass;
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) _Bool isSingleValue;
@property(readonly, nonatomic) _Bool isMultiValue;
- (_Bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;	// IMP=0x000000000005760f
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;	// IMP=0x000000000005754e
- (_Bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;	// IMP=0x0000000000057470
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000057423
- (id)CNMutableValueForABMultivalue;	// IMP=0x000000000005740a
- (void *)ABMutableMultiValueForABPerson:(void *)arg1;	// IMP=0x00000000000adb93
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2;	// IMP=0x00000000000ada3f
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3;	// IMP=0x00000000000ad94c
- (struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1;	// IMP=0x00000000000ad8d1
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x00000000000ad8c8
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)arg1;	// IMP=0x00000000000ad862
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x00000000000ad855
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x00000000000ad660
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x00000000000ad348
- (unsigned int)abPropertyType;	// IMP=0x00000000000ad33d

@end

