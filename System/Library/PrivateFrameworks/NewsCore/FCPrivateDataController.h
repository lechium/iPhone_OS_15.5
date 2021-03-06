//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCCKZonePruningAssistant-Protocol.h>
#import <NewsCore/FCCKZoneRestorationSource-Protocol.h>
#import <NewsCore/FCCommandQueueDelegate-Protocol.h>
#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/FCPrivateRecordSyncManagerDelegate-Protocol.h>
#import <NewsCore/FCPrivateZoneSyncManagerDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCCommandQueue, FCKeyValueStore, FCPushNotificationCenter, NSArray, NSHashTable, NSString;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving>
{
    _Bool _waitingForFirstSync;	// 8 = 0x8
    _Bool _preparedForUse;	// 9 = 0x9
    _Bool _syncingEnabled;	// 10 = 0xa
    FCPushNotificationCenter *_pushNotificationCenter;	// 16 = 0x10
    NSString *_storeDirectory;	// 24 = 0x18
    FCCommandQueue *_commandQueue;	// 32 = 0x20
    NSArray *_syncManagers;	// 40 = 0x28
    unsigned long long _changeCount;	// 48 = 0x30
    FCAsyncSerialQueue *_syncQueue;	// 56 = 0x38
    NSHashTable *_stateObservers;	// 64 = 0x40
    FCCloudContext *_context;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
    FCKeyValueStore *_localStore;	// 88 = 0x58
}

+ (_Bool)isLocalStoreKeyInternal:(id)arg1;	// IMP=0x00000000000c0baa
+ (id)internalLocalStoreKeys;	// IMP=0x00000000000c0b0b
+ (id)desiredKeys;	// IMP=0x00000000000c09c6
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;	// IMP=0x00000000000c047d
+ (long long)commandQueueUrgency;	// IMP=0x00000000000c0338
+ (id)commandStoreFileName;	// IMP=0x00000000000c01f3
+ (void)populateLocalStoreClassRegistry:(id)arg1;	// IMP=0x00000000000c01d9
+ (unsigned long long)localStoreVersion;	// IMP=0x00000000000c0094
+ (id)localStoreFilename;	// IMP=0x00000000000bff4f
+ (id)backingRecordIDs;	// IMP=0x00000000000bfe0a
+ (id)backingRecordZoneIDs;	// IMP=0x00000000000bfcc5
+ (_Bool)requiresHighPriorityFirstSync;	// IMP=0x00000000000bfb80
+ (_Bool)requiresBatchedSync;	// IMP=0x00000000000bfa3b
+ (_Bool)requiresPushNotificationSupport;	// IMP=0x00000000000bf8f6
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;	// IMP=0x00000000000c45ba
- (void).cxx_destruct;	// IMP=0x00000000000c2cf2
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property(readonly, getter=isWaitingForFirstSync) _Bool waitingForFirstSync;
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x00000000000c16b9
- (long long)qualityOfServiceForNextCommandInCommandQueue:(id)arg1;	// IMP=0x00000000000c1662
- (void)recordSyncManagerNotifyObservers:(id)arg1;	// IMP=0x00000000000c1658
- (void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000000c1187
- (void)zoneSyncManagerNotifyObservers:(id)arg1;	// IMP=0x00000000000c1028
- (void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000000c0c65
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;	// IMP=0x00000000000c0c5d
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;	// IMP=0x00000000000c0c54
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;	// IMP=0x00000000000c0c3e
- (_Bool)canHelpPruneZoneName:(id)arg1;	// IMP=0x00000000000c0c36
- (id)recordsForRestoringZoneName:(id)arg1;	// IMP=0x00000000000c0c29
- (_Bool)canHelpRestoreZoneName:(id)arg1;	// IMP=0x00000000000c0c21
- (void)loadLocalCachesFromStore;	// IMP=0x00000000000c0881
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;	// IMP=0x00000000000c0733
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;	// IMP=0x00000000000c05d8
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1;	// IMP=0x00000000000c01ed
- (void)handleSyncCompletion;	// IMP=0x00000000000c01e7
- (id)localStoreMigrator;	// IMP=0x00000000000c01df
- (void)markAsDirty;	// IMP=0x00000000000bf8e7
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
- (void)addCommandToCommandQueue:(id)arg1;	// IMP=0x00000000000bf69a
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000bf540
- (void)addObserver:(id)arg1;	// IMP=0x00000000000bf2e5
- (_Bool)isBackedByAnyRecordZoneIDsInSet:(id)arg1;	// IMP=0x00000000000bf243
- (void)removeStateObserver:(id)arg1;	// IMP=0x00000000000bf0f8
- (void)addStateObserver:(id)arg1;	// IMP=0x00000000000beec8
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bee56
- (void)performFirstSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bed9f
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be9bf
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be7aa
- (void)syncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be53e
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be43b
- (void)dealloc;	// IMP=0x00000000000bde5c
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;	// IMP=0x00000000000bda45
- (id)init;	// IMP=0x00000000000bda16
- (void)_possiblySimulateCrashWithMessage:(id)arg1;	// IMP=0x00000000000c43f7
- (void)assertReadyForUse;	// IMP=0x00000000000c42da
- (void)prepareForUse;	// IMP=0x00000000000c374c
- (void)mergeLocalStoreWithCloudWithPrivateDataDirectory:(id)arg1;	// IMP=0x00000000000c3438
- (void)createLocalStore;	// IMP=0x00000000000c3210
- (void)disableSyncing;	// IMP=0x00000000000c2f8f
- (void)enableSyncing;	// IMP=0x00000000000c2d67
- (id)jsonEncodableObject;	// IMP=0x00000000000c456a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

