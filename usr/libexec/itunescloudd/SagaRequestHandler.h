//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudUpdateLibraryOperation, ICConnectionConfiguration, ML3MusicLibrary, NSMutableArray, NSString, SagaArtworkImporter, SagaLibrary;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper, OS_dispatch_queue, OS_dispatch_source;

@interface SagaRequestHandler : NSObject
{
    SagaLibrary *_library;	// 8 = 0x8
    SagaArtworkImporter *_artworkImporter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uploadItemPropertiesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uploadPlaylistPropertiesQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateCloudLibraryQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    CloudUpdateLibraryOperation *_updateCloudLibraryOperation;	// 56 = 0x38
    NSMutableArray *_updateLibraryCompletionHandlers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_itemPropertiesCoalescingTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_playlistPropertiesCoalescingTimer;	// 80 = 0x50
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 88 = 0x58
    ICConnectionConfiguration *_configuration;	// 96 = 0x60
    ML3MusicLibrary *_musicLibrary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000006474c
- (void)_handleCloudLibraryUpdateOperationFinishedWithError:(id)arg1;	// IMP=0x00100000000645c9
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000063cc7
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063bfa
- (id)_library;	// IMP=0x0010000000063b9a
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x0010000000063a0d
- (float)updateProgress;	// IMP=0x0010000000063978
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000635d2
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063393
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062dc2
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062a76
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062714
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000626f9
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000626de
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000626c3
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000625a4
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062485
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062366
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x001000000006229a
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062042
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061dee
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061ba9
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006197b
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006152e
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000612a6
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061067
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060e25
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060be3
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000609aa
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000606d6
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000604a9
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060259
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005fdab
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005fad5
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005f7da
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005f50e
- (void)uploadPlaylistPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x001000000005f474
- (void)uploadItemPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x001000000005f3da
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f224
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f06e
- (void)increasePriorityForAllOperations;	// IMP=0x001000000005ef09
- (void)decreasePriorityForAllOperations;	// IMP=0x001000000005eda4
- (void)cancelOperations;	// IMP=0x001000000005ecd5
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ebc7
- (void)cancelPendingChanges;	// IMP=0x001000000005ebb3
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ea51
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005e9d3
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005e955
- (id)initWithConfiguration:(id)arg1 progressObserver:(id)arg2;	// IMP=0x001000000005e647
- (id)init;	// IMP=0x001000000005e605
- (void)dealloc;	// IMP=0x001000000005e46c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
