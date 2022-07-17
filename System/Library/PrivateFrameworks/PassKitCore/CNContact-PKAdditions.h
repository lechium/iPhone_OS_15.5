//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class CRRecentContact;

@interface CNContact (PKAdditions)
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;	// IMP=0x000000000000dd3e
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;	// IMP=0x000000000000dd25
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;	// IMP=0x000000000000b5d0
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;	// IMP=0x000000000000b49e
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;	// IMP=0x000000000000b2d8
+ (id)contactWithPkDictionary:(id)arg1;	// IMP=0x000000000000a7d4
+ (id)contactWithABRecordRef:(void *)arg1;	// IMP=0x000000000000a748
+ (id)pkPassbookRequiredKeys;	// IMP=0x000000000000a67c
- (void *)ABPerson;	// IMP=0x000000000000dd57
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;	// IMP=0x000000000000d590
- (id)pkDeconstructContactUsingKey:(id)arg1;	// IMP=0x000000000000d315
- (id)pk_displayName;	// IMP=0x000000000000d283
- (id)pkContactWithCleanedUpCountryCode;	// IMP=0x000000000000d011
- (id)contactWithCleanedUpDistrict;	// IMP=0x000000000000cedc
- (id)sanitizedContact;	// IMP=0x000000000000c919
- (id)nameComponents;	// IMP=0x000000000000c552
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x000000000000c447
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x000000000000c374
- (id)pkFullAndPhoneticName;	// IMP=0x000000000000c232
- (id)pkPhoneticName;	// IMP=0x000000000000c1ce
- (id)pkFullName;	// IMP=0x000000000000c16a
- (id)pkFullyQualifiedName;	// IMP=0x000000000000c106
@property(nonatomic) _Bool recentFromContactInformation;
- (_Bool)isSubsetOfMeCard;	// IMP=0x000000000000baff
@property(nonatomic) unsigned long long contactSource;
@property(retain, nonatomic) CRRecentContact *recentContact;
- (id)pkSingleLineFormattedContactAddress;	// IMP=0x000000000000b962
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1 showName:(_Bool)arg2;	// IMP=0x000000000000b70b
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1;	// IMP=0x000000000000b6f4
- (id)pkFormattedContactAddressWithoutName;	// IMP=0x000000000000b6de
- (id)pkFormattedContactAddress;	// IMP=0x000000000000b6ca
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;	// IMP=0x000000000000b5be
- (id)pkDictionaryForProperty:(id)arg1;	// IMP=0x000000000000ad00
@end
