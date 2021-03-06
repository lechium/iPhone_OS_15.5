//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNInstantMessageAddressesDescription <CNAbstractPropertyDescription>
{
}

- (id)summarizationKeys;	// IMP=0x000000000003ec47
- (CDUnknownBlockType)fromDictionaryTransform;	// IMP=0x000000000003ec2e
- (CDUnknownBlockType)dictionaryTransform;	// IMP=0x000000000003ec15
- (Class)labeledValueClass;	// IMP=0x000000000003ec04
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000003e9e1
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000003e9cc
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000003e9b7
- (_Bool)isNonnull;	// IMP=0x000000000003e9af
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003e85e
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003e834
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000003e722
- (id)init;	// IMP=0x000000000003e6f8
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x00000000000af05a
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x00000000000aed0d
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000aecf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

