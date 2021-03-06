//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUnifiedContacts : NSObject
{
}

+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004d28f
+ (_Bool)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004d11d
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004cf1a
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000004ca23
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000004c6e4
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000004c5b3
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004c2c0
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004c0e8
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004bfa7
+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2;	// IMP=0x000000000004bd74
+ (_Bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x000000000004bd2c
+ (_Bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000004bc16
+ (_Bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000004b9be
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;	// IMP=0x000000000004b2b9
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x000000000004b097
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;	// IMP=0x000000000004af3a
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x000000000004ae96
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x000000000004aca9
+ (id)unifyAvailableKeysOfContacts:(id)arg1;	// IMP=0x000000000004a9e9
+ (id)makeNonNameSingleValuePropertiesByKey;	// IMP=0x000000000004a729
+ (id)nonNameSingleValuePropertiesByKey;	// IMP=0x000000000004a66e
+ (id)imageValuePropertyKeys;	// IMP=0x000000000004a57b
+ (id)imageValuePropertiesByKey;	// IMP=0x000000000004a357
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1;	// IMP=0x0000000000049f3b

@end

