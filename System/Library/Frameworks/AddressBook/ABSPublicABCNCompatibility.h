//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ABSPublicABCNCompatibility : NSObject
{
}

+ (id)contactStoreForPublicAddressBook:(void *)arg1;	// IMP=0x000000000001b150
+ (id)createAddressBookForConversion;	// IMP=0x000000000001b123
+ (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 contactStore:(id)arg4;	// IMP=0x000000000001af98
+ (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000001af83
+ (void *)publicABPersonFromContact:(id)arg1 contactStore:(id)arg2 publicAddressBook:(const void **)arg3;	// IMP=0x000000000001ae09
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;	// IMP=0x000000000001ad56
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;	// IMP=0x000000000001aca1
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;	// IMP=0x000000000001abc2
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000001abad
+ (_Bool)overwritePublicABPerson:(void *)arg1 withContact:(id)arg2;	// IMP=0x000000000001a972
+ (_Bool)updateNewPublicABPerson:(void *)arg1 withSavedContact:(id)arg2 inAddressBook:(void *)arg3;	// IMP=0x000000000001a811

@end
