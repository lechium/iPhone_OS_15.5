//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNFavorites, NSArray, NSDictionary, NSLock;
@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationContactsCache : NSObject
{
    NSDictionary *_favoritesMapping;	// 8 = 0x8
    NSLock *_favoritesMappingLock;	// 16 = 0x10
    NSLock *_favoritesEntriesLock;	// 24 = 0x18
    NSLock *_allContactsEntriesLock;	// 32 = 0x20
    _Bool _hasSetupNotifications;	// 40 = 0x28
    NSLock *_hasSetupNotificationsLock;	// 48 = 0x30
    CNContactStore *_contactStore;	// 56 = 0x38
    CNFavorites *_favorites;	// 64 = 0x40
    NSArray *_nonFavoriteValidAllContacts;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

+ (id)sharedCache;	// IMP=0x0000000000266ed5
- (void).cxx_destruct;	// IMP=0x00000000002698b1
- (void)_favoritesEntriesChangedExternally;	// IMP=0x00000000002697df
- (void)_didReceiveDeviceLockStateDidChangeNotification;	// IMP=0x000000000026970d
- (void)_didReceiveFavoritesChangeRelatedNotification;	// IMP=0x000000000026963b
- (void)_didReceiveContactStoreChangedNotification;	// IMP=0x0000000000269569
- (void)_tearDownNotifications;	// IMP=0x0000000000269424
- (void)_setupNotifications;	// IMP=0x00000000002692a1
- (void)_queue_findContactWithFullName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000268d4b
- (void)_queued_loadAllContacts;	// IMP=0x0000000000268c86
- (void)_queued_loadFavoriteContacts;	// IMP=0x0000000000268bfa
- (void)_queued_flushCNFavorites;	// IMP=0x0000000000268b65
- (void)_locked_createFavorites;	// IMP=0x0000000000268b0b
- (void)_queue_flushCNFavoritesReload;	// IMP=0x0000000000268914
- (void)_queue_reloadContacts;	// IMP=0x0000000000268735
- (id)computeNonFavoriteAllContactsWithCount:(unsigned long long)arg1;	// IMP=0x000000000026846f
- (id)_mappedFavoriteContacts;	// IMP=0x0000000000267fc7
- (id)_fetchContactForId:(id)arg1;	// IMP=0x0000000000267eba
- (id)_contactKeysToFetchWithoutThumbnail;	// IMP=0x0000000000267d84
- (id)_contactKeysToFetchWithThumbnail;	// IMP=0x0000000000267cb7
- (_Bool)contactIdentifierIsFavorited:(id)arg1;	// IMP=0x0000000000267c09
- (void)findContactWithFullName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267add
- (id)contactForId:(id)arg1;	// IMP=0x000000000026798b
- (_Bool)checkValidityOfContact:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267826
- (id)abbreviatedNameForContact:(id)arg1;	// IMP=0x00000000002675a2
- (id)fullNameForContact:(id)arg1;	// IMP=0x00000000002674a6
- (id)shortNameForContact:(id)arg1;	// IMP=0x00000000002673a7
- (id)nonFavoriteAllContactsWithCount:(unsigned long long)arg1;	// IMP=0x0000000000267303
- (id)firstNonFavoriteAllContact;	// IMP=0x000000000026725f
- (id)_favoritesMappingLocked;	// IMP=0x00000000002671d3
- (id)favoriteContacts;	// IMP=0x0000000000267159
- (void)setupNotificationsIfNecessary;	// IMP=0x00000000002670cb
- (void)dealloc;	// IMP=0x000000000026708d
- (id)init;	// IMP=0x0000000000266f2a

@end
