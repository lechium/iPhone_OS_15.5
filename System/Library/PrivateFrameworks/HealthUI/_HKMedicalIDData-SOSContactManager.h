//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (SOSContactManager)
+ (id)contactKeysToLoadForMedicalID;	// IMP=0x00000000001181bf
- (_Bool)consolidateSOSAndEmergencyContacts;	// IMP=0x000000000006e60f
- (id)_contactKeysToFetch;	// IMP=0x00000000001198d9
- (_Bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000011900c
- (_Bool)_autopopulateEmergencyContactsForSecondaryProfile;	// IMP=0x0000000000118d0f
- (_Bool)_updateExistingEmergencyContacts;	// IMP=0x00000000001185e6
- (_Bool)updateEmergencyContactsAutopopulateForSecondaryProfileIfEmpty:(_Bool)arg1;	// IMP=0x00000000001184be
- (_Bool)updateEmergencyContacts;	// IMP=0x0000000000118450
- (void)loadDataFromCNContact:(id)arg1;	// IMP=0x0000000000118303
@end

