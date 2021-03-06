//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/ASDJobManagerObserver-Protocol.h>
#import <StoreKitUI/SSDownloadManagerObserver-Protocol.h>

@class ASDJobManager, ASDSoftwareUpdatesStore, NSCountedSet, NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SKUIStoreItemRelationshipCounsellor, SSAppPurchaseHistoryDatabase, SSDownloadManager, SSSoftwareUpdatesStore;
@protocol OS_dispatch_queue;

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver, ASDJobManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    BOOL _appInstallRestricted;	// 16 = 0x10
    ASDSoftwareUpdatesStore *_appstoredUpdatesStore;	// 24 = 0x18
    ASDJobManager *_jobManager;	// 32 = 0x20
    BOOL _canAccessAppUpdates;	// 40 = 0x28
    BOOL _canAccessPurchaseHistory;	// 41 = 0x29
    SSDownloadManager *_downloadManager;	// 48 = 0x30
    NSMutableArray *_finishLoadBlocks;	// 56 = 0x38
    long long _gratisState;	// 64 = 0x40
    NSDate *_gratisStateLastUpdate;	// 72 = 0x48
    long long _loadCount;	// 80 = 0x50
    NSMutableDictionary *_itemStates;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_mediaLibraryQueue;	// 96 = 0x60
    NSMutableArray *_mediaLibraries;	// 104 = 0x68
    NSCountedSet *_observedLibraryItems;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_observerQueue;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    long long _parentalControlsRank;	// 136 = 0x88
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;	// 144 = 0x90
    SKUIStoreItemRelationshipCounsellor *_relationshipCouncellor;	// 152 = 0x98
    BOOL _runningInStoreDemoMode;	// 160 = 0xa0
}

+ (id)defaultCenter;	// IMP=0x000000000002c6e5
- (void).cxx_destruct;	// IMP=0x000000000003f230
- (_Bool)_isPurchaseForOffDeviceContent:(id)arg1;	// IMP=0x000000000003f213
- (void)_updatesSoftwarePurchasingItemsForPurchases:(id)arg1 purchaseWasSuccessful:(_Bool)arg2;	// IMP=0x000000000003ee96
- (id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x000000000003ec69
- (id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x000000000003e8ca
- (void)_setFirstPartyRemovableItemsIdentifiers:(id)arg1;	// IMP=0x000000000003e7f5
- (void)_setPurchaseHistoryVPPItemsWithIdentifiers:(id)arg1;	// IMP=0x000000000003e720
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;	// IMP=0x000000000003e643
- (void)_setInstalledItems:(id)arg1;	// IMP=0x000000000003db98
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x000000000003da6c
- (void)_setJobs:(id)arg1;	// IMP=0x000000000003d2fa
- (void)_setDownloads:(id)arg1;	// IMP=0x000000000003c4a4
- (void)_setAvailableAppstoredUpdatesWithUpdates:(id)arg1 decrementLoadCount:(_Bool)arg2;	// IMP=0x000000000003bd57
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;	// IMP=0x000000000003bb31
- (id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;	// IMP=0x000000000003ba6a
- (void)_removePurchasingItemsForPurchases:(id)arg1;	// IMP=0x000000000003b7af
- (void)_reloadSoftwareLibrary;	// IMP=0x000000000003b653
- (void)_reloadPurchaseHistory;	// IMP=0x000000000003ad33
- (void)_reloadMediaLibraryStateForItems:(id)arg1;	// IMP=0x000000000003a1bc
- (void)_reloadJobManager;	// IMP=0x000000000003a075
- (void)_reloadDownloadManager;	// IMP=0x0000000000039f2e
- (void)_reloadAppUpdatesStore;	// IMP=0x0000000000039d69
- (id)_purchaseHistoryDatabase;	// IMP=0x0000000000039c6f
- (void)_performSoftwarePurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000396b1
- (void)_performPurchases:(id)arg1 hasBundlePurchase:(_Bool)arg2 withClientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038b14
- (void)_notifyObserversOfSoftwarePurchasesResponses:(id)arg1;	// IMP=0x0000000000038706
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;	// IMP=0x00000000000382f8
- (void)_notifyObserversOfStateChanges:(id)arg1;	// IMP=0x0000000000037f53
- (void)_notifyObserversOfRestrictionsChange;	// IMP=0x0000000000037c22
- (void)_notifyObserversOfStateChange:(id)arg1;	// IMP=0x0000000000037ba5
- (void)_notifyObserversOfMediaLibraryChange;	// IMP=0x0000000000037874
- (id)_newPurchasesWithItems:(id)arg1;	// IMP=0x00000000000375dd
- (id)_newPurchasesForSoftwareWithBundleItem:(id)arg1 bundleOffer:(id)arg2;	// IMP=0x00000000000371a4
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;	// IMP=0x0000000000036d5f
- (id)_newSoftwarePurchaseWithItem:(id)arg1 offer:(id)arg2;	// IMP=0x000000000003688c
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;	// IMP=0x00000000000361d2
- (id)_downloadPhaseForJobPhase:(long long)arg1;	// IMP=0x00000000000361a2
- (_Bool)_gratisStateIsValid;	// IMP=0x000000000003612e
- (void)_fireFinishLoadBlocksIfNecessary;	// IMP=0x0000000000035f5f
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035c60
- (id)_copyItemsStatesForLibraryItems:(id)arg1;	// IMP=0x00000000000359c2
- (id)_appstoredUpdatesStore;	// IMP=0x0000000000035917
- (id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;	// IMP=0x0000000000035698
- (void)_updatesStoreChangeNotification:(id)arg1;	// IMP=0x0000000000035686
- (void)_storefrontDidChangeNotification:(id)arg1;	// IMP=0x0000000000035622
- (void)_restrictionsChangedNotification:(id)arg1;	// IMP=0x0000000000035586
- (void)_mediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000035525
- (void)_reloadStateForObservedMediaLibraryItems;	// IMP=0x000000000003463c
- (void)_appstoredUpdatesStoreChangeNotification:(id)arg1;	// IMP=0x000000000003462a
- (void)downloadManagerDownloadsDidChange:(id)arg1;	// IMP=0x0000000000034618
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x0000000000033d71
- (void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2;	// IMP=0x00000000000336c3
- (void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2;	// IMP=0x0000000000033249
- (void)jobManager:(id)arg1 completedJobs:(id)arg2;	// IMP=0x000000000003248d
- (void)jobManager:(id)arg1 changedJobs:(id)arg2;	// IMP=0x000000000003247b
- (void)removeRelationshipsForParentAdamId:(id)arg1;	// IMP=0x0000000000032391
- (void)addRelationshipForParentAdamId:(id)arg1 withChildAdamIds:(id)arg2;	// IMP=0x00000000000320d0
- (void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031c77
- (id)gratisEligibleItemIdentifiers;	// IMP=0x0000000000031ac2
- (void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030fdd
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030fd7
- (void)reloadSoftwareUpdatesFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030ea9
- (void)performActionForLibraryItem:(id)arg1;	// IMP=0x00000000000309ec
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000309e6
- (void)getSoftwareUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000308d5
- (void)endObservingLibraryItems:(id)arg1;	// IMP=0x00000000000305fe
- (void)evaluatePurchaseResponseForRentals:(id)arg1;	// IMP=0x0000000000030299
- (void)beginObservingLibraryItems:(id)arg1;	// IMP=0x000000000002fe94
@property(readonly) SSSoftwareUpdatesStore *appUpdatesStore;
@property(readonly) ASDSoftwareUpdatesStore *appstoredUpdatesStore;
- (void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2;	// IMP=0x000000000002f9a7
- (void)addDownloads:(id)arg1;	// IMP=0x000000000002f98f
- (id)stateForItemWithStoreIdentifier:(id)arg1;	// IMP=0x000000000002f7b0
- (id)stateForItemWithIdentifier:(long long)arg1;	// IMP=0x000000000002f63c
- (void)removeObserver:(id)arg1;	// IMP=0x000000000002f58e
- (void)removeMediaLibrary:(id)arg1;	// IMP=0x000000000002f4e5
- (void)reloadMediaLibrary:(id)arg1;	// IMP=0x000000000002f416
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000002f0c8
- (void)reloadFromServer;	// IMP=0x000000000002f0b2
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ee9f
- (void)purchaseItems:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ee88
- (void)purchaseSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002eaf5
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e72a
- (id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e439
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e18d
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000002e072
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002dfbd
- (id)performActionForItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dfa6
@property(readonly) long long parentalControlsRank;
- (id)metricsActionTypeForItem:(id)arg1;	// IMP=0x000000000002dd4f
@property(readonly, getter=isRunningInStoreDemoMode) _Bool runningInStoreDemoMode;
- (_Bool)isItemRestrictedWithParentalControlsRank:(long long)arg1;	// IMP=0x000000000002dc10
@property(readonly, nonatomic, getter=isGratisEligible) _Bool gratisEligible;
@property(readonly, getter=isApplicationInstallRestricted) _Bool applicationInstallRestricted;
- (void)finishLoadingWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d855
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;	// IMP=0x000000000002c944
- (void)addObserver:(id)arg1;	// IMP=0x000000000002c845
- (void)addMediaLibrary:(id)arg1;	// IMP=0x000000000002c776
- (void)dealloc;	// IMP=0x000000000002c591
- (id)_jobManager;	// IMP=0x000000000002c4e9
- (id)init;	// IMP=0x000000000002c0d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

