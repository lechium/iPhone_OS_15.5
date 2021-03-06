//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class JaliscoRequestHandler, NSMutableDictionary, NSObject, NSOperationQueue, NSString, SagaRequestHandler;
@protocol OS_dispatch_queue;

@interface ICDCloudMusicLibraryRequestHandler
{
    SagaRequestHandler *_sagaRequestHandler;	// 8 = 0x8
    JaliscoRequestHandler *_jaliscoRequestHandler;	// 16 = 0x10
    long long _musicSubscriptionCheckStatus;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    NSOperationQueue *;	// 48 = 0x30
    NSOperationQueue *_retryQueue;	// 56 = 0x38
    int _autoEnableFailureCount;	// 64 = 0x40
    int _subscriptionStatusFailureCount;	// 68 = 0x44
    int _autoRetryCloudAuthenticateFailureCount;	// 72 = 0x48
    int _sagaImportFailureCount;	// 76 = 0x4c
    int _deauthOperationCount;	// 80 = 0x50
    _Bool _havePendingSubscriptionStatusCheck;	// 84 = 0x54
    _Bool _havePendingAutoEnableICMLCheck;	// 85 = 0x55
    _Bool _havePendingCloudUpdateLibraryCheck;	// 86 = 0x56
    _Bool _didAdjustMergePreference;	// 87 = 0x57
    _Bool _havePendingSagaUpdate;	// 88 = 0x58
    _Bool _didManuallyReloadCloudLibrary;	// 89 = 0x59
    _Bool _isPendingAuthentication;	// 90 = 0x5a
    _Bool _isHandlerActive;	// 91 = 0x5b
    _Bool _didHandleStartupNotificationReason;	// 92 = 0x5c
    NSMutableDictionary *_syncProgressDictionary;	// 96 = 0x60
}

+ (id)handler;	// IMP=0x0020000000018b9f
+ (id)handlers;	// IMP=0x0010000000018b6f
- (void).cxx_destruct;	// IMP=0x002000000000a85b
- (void)_handleSagaAuthentication:(id)arg1 finishedForReason:(long long)arg2 explicitUserAction:(_Bool)arg3 shouldStartInitialImport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a3df
- (id)_prepareLibraryLoadErrorWithJaliscoError:(id)arg1 sagaError:(id)arg2;	// IMP=0x001000000000a2e4
- (void)_postLibraryUpdateProgressChangedForLibraryType:(long long)arg1;	// IMP=0x001000000000a222
- (void)_performInitialSagaImportWithClientIdentity:(id)arg1 allowingNoisyAuthPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009ffc
- (void)_performJaliscoImportWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009ea0
- (void)_performInitialJaliscoImportWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009c38
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000009a6e
- (void)_runDisableCloudLibraryOperationWithClientIdentity:(id)arg1 byDeletingDatabase:(_Bool)arg2 disableActiveLockerAccount:(_Bool)arg3 removeSourcePurchaseHistory:(_Bool)arg4 isHandlerDeactivating:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000943c
- (void)_runSagaAuthenticateOperationWithClientIdentity:(id)arg1 mergePreference:(id)arg2 allowNoisyPrompt:(_Bool)arg3 cloudLibraryEnableReason:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000090c4
- (void)_tryEnablingCloudMusicLibraryForReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008fe8
- (void)_tryEnablingICMLOnDevicesSupportingSideLoadedContentWithProperties:(id)arg1 reason:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008b0a
- (void)_authenticateAndStartInitialImportWithMergePreference:(id)arg1 userIdentityProperties:(id)arg2 enableReason:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000089f9
- (void)_registerDeviceAndPerformInitialImportWithUserIdentityProperties:(id)arg1 cloudLibraryEnableReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000082dd
- (long long)_shouldHandleDaemonStartupOrAccountChangedNotificationWithProperties:(id)arg1;	// IMP=0x0010000000007f89
- (void)_adjustMergePreferenceWithUserIdentityProperties:(id)arg1;	// IMP=0x00100000000079ac
- (_Bool)_wasRestoredFromCloudBackup:(id)arg1;	// IMP=0x0010000000007768
- (long long)_canEnableCloudMusicLibraryOnPlatformsWithSideLoadedMediaContentWithProperties:(id)arg1 includeLocalContentCheck:(_Bool)arg2;	// IMP=0x00100000000070d7
- (long long)_getCurrentSubscriptionStatusForReason:(long long)arg1;	// IMP=0x00100000000070a8
- (void)_retryEnablingCloudMusicLibraryForReason:(long long)arg1;	// IMP=0x0010000000006f01
- (void)_reloadSubscriptionStatusAndEnableCloudMusicLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006c8a
- (void)_enqueueCloudUpdateLibraryOperationForReason:(long long)arg1;	// IMP=0x0010000000006b6f
- (void)_enqueueSubscriptionStatusCheckForReason:(long long)arg1;	// IMP=0x001000000000690e
- (void)_runSubscriptionStatusCheckOperationWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006877
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000000065b4
- (_Bool)_isNativeMusicAppInstalled;	// IMP=0x00100000000064b6
- (void)_resetInternalCloudLibraryState;	// IMP=0x0010000000006477
- (void)_deactivateJaliscoLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006357
- (void)_deactivateSagaLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005eab
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005bec
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005b4f
- (void)becomeActive;	// IMP=0x0010000000005afd
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0010000000005a1f
- (void)scheduleBackgroundTaskToUpdateLibraryType:(long long)arg1;	// IMP=0x00100000000059a5
- (void)setUpdateProgress:(float)arg1 forLibraryType:(long long)arg2;	// IMP=0x001000000000594a
- (void)finishedUpdateOperationForLibraryType:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000000058ad
- (void)startingUpdateOperationForLibraryType:(long long)arg1 isInitialImport:(_Bool)arg2;	// IMP=0x0010000000005854
- (_Bool)shouldIncludeMediaKindSongForJaliscoImport;	// IMP=0x0010000000005559
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000546e
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000053dc
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000052f1
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 clientIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005226
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000513b
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005050
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004f58
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004e9a
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000004e44
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000004dee
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004d23
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004c58
- (void)loadLastKnownEnableICMLStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004804
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004719
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000462e
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004543
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004478
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000436e
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000042b0
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000041f2
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000040fa
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004002
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003f37
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003e12
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003d27
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003c0c
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003b14
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000039ef
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003915
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003812
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000036b4
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000035e9
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000034fe
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003413
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003348
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000031ea
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000030c5
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000000306f
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000003019
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000002fc3
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002ef8
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002e2d
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002d62
- (void)updateProgressForLibraryType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002cc5
- (void)cancelPendingChangesForLibraryType:(long long)arg1;	// IMP=0x0010000000002c6f
- (void)addBackgroundOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0010000000002bc9
- (void)addOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0010000000002b23
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002a58
- (void)updateSagaLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000296d
- (void)updateCloudLibraryProgressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002947
- (void)isUpdatingCloudLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000028b5
- (_Bool)isUpdatingCloudLibrary;	// IMP=0x0010000000002820
- (void)disableCloudLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001e7f
- (void)enableCloudLibraryWithClientIdentity:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000001d65
- (void)handleMusicAppInstalled;	// IMP=0x0010000000001d13
- (void)handleMusicAppRemovedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001c01
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000018be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

