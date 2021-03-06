//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebUI/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>

@class ACAccount, ACMonitoredAccountStore, NSNumber, NSString, OTClique, STManagementState;
@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    ACMonitoredAccountStore *_accountStore;	// 16 = 0x10
    ACAccount *_account;	// 24 = 0x18
    NSNumber *_cachedShouldRequestMoreTime;	// 32 = 0x20
    STManagementState *_managementState;	// 40 = 0x28
    NSNumber *_cachedLocallyRestricted;	// 48 = 0x30
    double _lastRestrictedSettingRequestedTime;	// 56 = 0x38
    OTClique *_keychainClique;	// 64 = 0x40
    NSString *_primaryAccountAltDSID;	// 72 = 0x48
    _Bool _autoFillAvailable;	// 80 = 0x50
    _Bool _bookmarksAvailable;	// 81 = 0x51
    _Bool _readingListAvailable;	// 82 = 0x52
    _Bool _offlineReadingListAvailable;	// 83 = 0x53
    _Bool _cloudSyncAvailable;	// 84 = 0x54
    _Bool _inMemoryBookmarkChangeTrackingAvailable;	// 85 = 0x55
}

+ (_Bool)shouldOfferVirtualCards;	// IMP=0x0000000000003ce6
+ (id)webui_sharedFeatureManager;	// IMP=0x0000000000002fc0
+ (long long)accessLevel;	// IMP=0x0000000000002ee1
- (void).cxx_destruct;	// IMP=0x00000000000042c1
@property(readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) _Bool inMemoryBookmarkChangeTrackingAvailable; // @synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable;
@property(readonly, nonatomic, getter=isCloudSyncAvailable) _Bool cloudSyncAvailable; // @synthesize cloudSyncAvailable=_cloudSyncAvailable;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) _Bool offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic, getter=isReadingListAvailable) _Bool readingListAvailable; // @synthesize readingListAvailable=_readingListAvailable;
@property(readonly, nonatomic, getter=isBookmarksAvailable) _Bool bookmarksAvailable; // @synthesize bookmarksAvailable=_bookmarksAvailable;
@property(readonly, nonatomic, getter=isAutoFillAvailable) _Bool autoFillAvailable; // @synthesize autoFillAvailable=_autoFillAvailable;
- (void)_setAccount:(id)arg1;	// IMP=0x00000000000041be
- (void)accountWasRemoved:(id)arg1;	// IMP=0x0000000000004175
- (void)accountWasModified:(id)arg1;	// IMP=0x0000000000004121
- (void)accountWasAdded:(id)arg1;	// IMP=0x00000000000040cd
- (void)_updateKeychainSyncingStatus;	// IMP=0x0000000000004039
@property(readonly, nonatomic, getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
@property(readonly, nonatomic, getter=isAirDropPasswordsAvailable) _Bool airDropPasswordsAvailable;
- (void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000038ea
- (void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000037e5
@property(readonly, nonatomic, getter=isUserRemotelyManagedAndLocallyRestricted) _Bool userRemotelyManagedAndLocallyRestricted;
- (_Bool)_locallyRestricted;	// IMP=0x00000000000036da
@property(readonly, nonatomic, getter=isPrivateBrowsingAvailable) _Bool privateBrowsingAvailable;
- (_Bool)_isCloudTabsAvailableUsingManagedAppleID:(_Bool)arg1;	// IMP=0x0000000000003633
@property(readonly, nonatomic, getter=isCloudTabsAvailable) _Bool cloudTabsAvailable;
@property(readonly, nonatomic, getter=isCloudHistorySyncAvailable) _Bool cloudHistorySyncAvailable;
@property(readonly, nonatomic, getter=isCloudKitBookmarksAvailable) _Bool cloudKitBookmarksAvailable;
@property(readonly, nonatomic, getter=isCreditCardStorageAvailable) _Bool creditCardStorageAvailable;
- (_Bool)_isUsingManagedAppleID;	// IMP=0x0000000000003440
- (void)_setAccountOnInternalQueue:(id)arg1;	// IMP=0x000000000000329e
- (void)_updateFeatureAvailabilityByAccessLevel;	// IMP=0x0000000000003246
- (void)dealloc;	// IMP=0x00000000000031cc
- (id)init;	// IMP=0x0000000000003015

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

