//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)
+ (id)_CNKeyFromABKey:(id)arg1;	// IMP=0x000000000042fda8
+ (id)_ABKeyFromCNKey:(id)arg1;	// IMP=0x000000000042fc4e
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)arg1;	// IMP=0x000000000042f932
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;	// IMP=0x000000000042f677
- (id)_countryCodeForCountryName:(id)arg1;	// IMP=0x000000000042f438
- (id)suggestedCountryCode;	// IMP=0x000000000042f3d9
- (id)redactedPostalAddress;	// IMP=0x000000000042f1c7
- (id)redactedStreetAddress;	// IMP=0x000000000042f173
- (id)webServiceDictionaryRepresentation;	// IMP=0x000000000042eed5
- (id)backwardsCompatibleDictionaryRepresentation;	// IMP=0x000000000042ebc4
@end
