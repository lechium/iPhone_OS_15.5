//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHSharedAddressBook
{
    NSMutableDictionary *_addressBookCache;	// 8 = 0x8
}

+ (id)get;	// IMP=0x0000000000033498
- (void).cxx_destruct;	// IMP=0x0000000000033e85
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (id)description;	// IMP=0x0000000000033ceb
- (unsigned long long)cachedCount;	// IMP=0x0000000000033bef
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;	// IMP=0x0000000000033a44
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000338d4
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;	// IMP=0x00000000000337a0
- (void)revertAddressBook:(id)arg1;	// IMP=0x00000000000336e2
- (void)cleanUpAddressBookCache_sync;	// IMP=0x00000000000336a5
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;	// IMP=0x000000000003368e
- (void)registerForContactsNotifications;	// IMP=0x00000000000335da
- (void)dealloc;	// IMP=0x0000000000033565
- (id)init;	// IMP=0x0000000000033501

@end
