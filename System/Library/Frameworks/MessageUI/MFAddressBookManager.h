//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface MFAddressBookManager : NSObject
{
    void *_addressBook;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSHashTable *_clients;	// 24 = 0x18
}

+ (_Bool)isAuthorizedToUseAddressBook;	// IMP=0x000000000000565a
+ (id)sharedManager;	// IMP=0x0000000000005605
- (void).cxx_destruct;	// IMP=0x0000000000005cd3
- (void)removeClient:(id)arg1;	// IMP=0x0000000000005c6b
- (void)addClient:(id)arg1;	// IMP=0x0000000000005c03
- (void)_handleAddressBookPrefsChangeNotification;	// IMP=0x0000000000005ab1
- (void)_handleAddressBookChangeNotification;	// IMP=0x000000000000593e
- (id)_clientsArray;	// IMP=0x00000000000058f8
- (void *)addressBook;	// IMP=0x0000000000005833
- (void)dealloc;	// IMP=0x0000000000005729
- (id)init;	// IMP=0x000000000000569e

@end

