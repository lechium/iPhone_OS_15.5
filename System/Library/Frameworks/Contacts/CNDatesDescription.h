//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNDatesDescription <CNAbstractPropertyDescription>
{
}

- (CDUnknownBlockType)fromPlistTransform;	// IMP=0x000000000003bae4
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003bacb
- (Class)labeledValueClass;	// IMP=0x000000000003baba
- (id)standardLabels;	// IMP=0x000000000003ba3c
- (_Bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;	// IMP=0x000000000003b9ca
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000003b7f1
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000003b7dc
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000003b7c7
- (_Bool)isNonnull;	// IMP=0x000000000003b7bf
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003b66e
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003b644
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000003b532
- (id)init;	// IMP=0x000000000003b508
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000580e3
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x00000000000aebe3
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x00000000000aebca
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000aebae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

