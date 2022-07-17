//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSaveRequestVerifier : NSObject
{
}

+ (_Bool)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000096a9e
+ (_Bool)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000096791
+ (_Bool)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000096406
+ (_Bool)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000962c3
+ (_Bool)isValidSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000096051
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)arg1;	// IMP=0x0000000000095e84

@end
