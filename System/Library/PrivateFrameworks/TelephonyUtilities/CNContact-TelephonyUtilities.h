//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

#import <TelephonyUtilities/TUSearchResult-Protocol.h>

@class NSArray, NSPersonNameComponents, NSString, NSURL;

@interface CNContact (TelephonyUtilities) <TUSearchResult>
+ (id)keysToFetchForFaceTime;	// IMP=0x0000000000025bfa
+ (id)tu_contactHandlesForHandle:(id)arg1;	// IMP=0x00000000000cb1b0
- (id)allTUHandles;	// IMP=0x000000000000cb70
- (id)tuHandlesForEmailAddresses;	// IMP=0x000000000000c93f
- (id)tuHandlesForPhoneNumbers;	// IMP=0x000000000000c69a
- (id)tu_labeledValueForSocialProfileWithUsername:(id)arg1;	// IMP=0x000000000000c441
- (id)tu_labeledValueForPhoneNumber:(id)arg1;	// IMP=0x000000000000c206
- (id)tu_labeledValueForHandle:(id)arg1;	// IMP=0x000000000000c00d
- (id)tu_labeledValueForEmailAddress:(id)arg1;	// IMP=0x000000000000bdd2
@property(readonly, copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property(readonly, nonatomic) NSArray *emailAddressStrings;
@property(readonly, nonatomic) NSArray *phoneNumberStrings;
@property(readonly, nonatomic) NSURL *faceTimeQuicklookURL;
@property(readonly, nonatomic) NSString *anyDestinationID;
@property(readonly, nonatomic) NSArray *allIDSDestinations;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) _Bool mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *isoCountryCode;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactIdentifier;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *callerId;
@property(readonly) NSString *displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

