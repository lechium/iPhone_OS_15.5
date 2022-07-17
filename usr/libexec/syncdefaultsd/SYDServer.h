//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSLock, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, SYDDeviceStateManager, SYDPerformBlock, SYDPersistenceManager, SYDPushManager, SYDWriteTracker;
@protocol OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface SYDServer : NSObject
{
    _Bool _exitsBecauseOfIdle;	// 8 = 0x8
    _Bool _someSchedulerIsSynchronizing;	// 9 = 0x9
    MISSING_TYPE *_needsSaving;	// 10 = 0xa
    _Bool _shuttingDown;	// 11 = 0xb
    _Bool _tracksUsage;	// 12 = 0xc
    _Bool _tracksUsageInited;	// 13 = 0xd
    int _isHandlingMemoryWarning;	// 16 = 0x10
    SYDPersistenceManager *_persistenceManager;	// 24 = 0x18
    NSMutableDictionary *_appByBundleIdentifier;	// 32 = 0x20
    NSMutableDictionary *_appByAdditionalStoreByBundleIdentifier;	// 40 = 0x28
    NSMutableDictionary *_appsByStoreIdentifier;	// 48 = 0x30
    NSMutableSet *_peers;	// 56 = 0x38
    NSMutableDictionary *_schedulersByIdentifier;	// 64 = 0x40
    SYDWriteTracker *_writeTracker;	// 72 = 0x48
    SYDPushManager *_pushManager;	// 80 = 0x50
    SYDDeviceStateManager *_deviceStateManager;	// 88 = 0x58
    double _startupTime;	// 96 = 0x60
    NSObject<OS_xpc_object> *_listener;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_mwSource;	// 112 = 0x70
    NSLock *_cloudLock;	// 120 = 0x78
    SYDPerformBlock *_loggedWhoLaunchedUsBlock;	// 128 = 0x80
    NSMutableOrderedSet *_queuedSchedulerIdentifiers;	// 136 = 0x88
    NSObject<OS_os_transaction> *_mainTransaction;	// 144 = 0x90
    SYDPerformBlock *_postExternalChangeNotificationRequest;	// 152 = 0x98
    SYDPerformBlock *_delayStoreIdentifiersRefresh;	// 160 = 0xa0
    SYDPerformBlock *_storeAppsOnDiskRequest;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x002000000003c596
@property int isHandlingMemoryWarning; // @synthesize isHandlingMemoryWarning=_isHandlingMemoryWarning;
@property(retain, nonatomic) SYDPerformBlock *storeAppsOnDiskRequest; // @synthesize storeAppsOnDiskRequest=_storeAppsOnDiskRequest;
@property(retain, nonatomic) SYDPerformBlock *delayStoreIdentifiersRefresh; // @synthesize delayStoreIdentifiersRefresh=_delayStoreIdentifiersRefresh;
@property(retain, nonatomic) SYDPerformBlock *postExternalChangeNotificationRequest; // @synthesize postExternalChangeNotificationRequest=_postExternalChangeNotificationRequest;
@property(retain, nonatomic) NSObject<OS_os_transaction> *mainTransaction; // @synthesize mainTransaction=_mainTransaction;
@property(retain, nonatomic) NSMutableOrderedSet *queuedSchedulerIdentifiers; // @synthesize queuedSchedulerIdentifiers=_queuedSchedulerIdentifiers;
@property(nonatomic) _Bool tracksUsageInited; // @synthesize tracksUsageInited=_tracksUsageInited;
@property(nonatomic) _Bool tracksUsage; // @synthesize tracksUsage=_tracksUsage;
@property(retain, nonatomic) SYDPerformBlock *loggedWhoLaunchedUsBlock; // @synthesize loggedWhoLaunchedUsBlock=_loggedWhoLaunchedUsBlock;
@property(nonatomic) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(nonatomic) _Bool needsSaving; // @synthesize needsSaving=_needsSaving;
@property(retain, nonatomic) NSLock *cloudLock; // @synthesize cloudLock=_cloudLock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *mwSource; // @synthesize mwSource=_mwSource;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(nonatomic) double startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) SYDDeviceStateManager *deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(retain, nonatomic) SYDPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) SYDWriteTracker *writeTracker; // @synthesize writeTracker=_writeTracker;
@property(retain, nonatomic) NSMutableDictionary *schedulersByIdentifier; // @synthesize schedulersByIdentifier=_schedulersByIdentifier;
@property(retain, nonatomic) NSMutableSet *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSMutableDictionary *appsByStoreIdentifier; // @synthesize appsByStoreIdentifier=_appsByStoreIdentifier;
@property(retain, nonatomic) NSMutableDictionary *appByAdditionalStoreByBundleIdentifier; // @synthesize appByAdditionalStoreByBundleIdentifier=_appByAdditionalStoreByBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *appByBundleIdentifier; // @synthesize appByBundleIdentifier=_appByBundleIdentifier;
@property(retain, nonatomic) SYDPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(nonatomic) _Bool someSchedulerIsSynchronizing; // @synthesize someSchedulerIsSynchronizing=_someSchedulerIsSynchronizing;
@property(nonatomic) _Bool exitsBecauseOfIdle; // @synthesize exitsBecauseOfIdle=_exitsBecauseOfIdle;
- (_Bool)isCloudSyncAllowedForApp:(id)arg1;	// IMP=0x001000000003bbdf
- (_Bool)_isCloudSyncAllowedForApp:(id)arg1 peer:(id)arg2;	// IMP=0x001000000003b9f6
- (void)_didReceiveMemoryWarning;	// IMP=0x001000000003b815
- (void)_createMemoryWarningSource;	// IMP=0x001000000003b694
- (void)peerDisconnected:(id)arg1;	// IMP=0x001000000003b572
- (void)peerConnected:(id)arg1;	// IMP=0x001000000003b45e
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x001000000003b09b
- (void)_handleNewConnection:(id)arg1;	// IMP=0x001000000003aff2
- (void)_createListener;	// IMP=0x001000000003ae19
- (void)_applicationDidChange:(id)arg1;	// IMP=0x001000000003ad9a
- (void)_postExternalChangeNotification:(id)arg1;	// IMP=0x001000000003ad23
- (void)_cancelRequestForPostExternalChangeNotification;	// IMP=0x001000000003acdc
- (void)_requestPostExternalChangeNotification;	// IMP=0x001000000003ab68
- (void)setPersistentStateNeedsSaving;	// IMP=0x001000000003aaba
- (void)_requestStoreAppsOnDiskImmediate:(_Bool)arg1;	// IMP=0x001000000003a8b9
- (void)shutdownWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039ce0
- (void)noteSchedulerIsIdle:(id)arg1;	// IMP=0x0010000000039caf
- (void)noteSchedulerCancelWillIdle:(id)arg1;	// IMP=0x0010000000039c38
- (void)noteSchedulerWillIdle:(id)arg1;	// IMP=0x0010000000039aa5
- (void)printDebugDescriptionWithMessage:(id)arg1;	// IMP=0x0010000000039888
- (void)allApplicationInfoWithMessage:(id)arg1;	// IMP=0x0010000000039775
- (void)migrateForceWithMessage:(id)arg1;	// IMP=0x001000000003975e
- (void)migrateWithMessage:(id)arg1;	// IMP=0x001000000003974a
- (void)migrateWithMessage:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000039295
- (id)migrateApplication:(id)arg1 withBundleIdentifier:(id)arg2 force:(_Bool)arg3;	// IMP=0x0010000000038c88
- (_Bool)migrateSyncedPreferencesFile:(id)arg1 additionalStoreName:(id)arg2 systemBase:(id)arg3 containerBase:(id)arg4 force:(_Bool)arg5;	// IMP=0x0010000000038439
- (void)deviceUnlockedSinceBootChange;	// IMP=0x0010000000038308
- (void)passwordChangeWithMessage:(id)arg1;	// IMP=0x00100000000381d7
- (void)accountChangeWithMessage:(id)arg1;	// IMP=0x00100000000380a6
- (void)pingWithMessage:(id)arg1;	// IMP=0x001000000003808a
- (void)getConfigurationWithMessage:(id)arg1;	// IMP=0x0010000000037ffa
- (void)discardJournalEntriesWithMessage:(id)arg1;	// IMP=0x0010000000037df1
- (void)trackSynchronizeRemoteWithMessage:(id)arg1;	// IMP=0x00100000000377e4
- (void)synchronizeRemoteWithMessage:(id)arg1;	// IMP=0x0010000000037562
- (void)helpWithMessage:(id)arg1;	// IMP=0x0010000000037374
- (void)shutdownWithMessage:(id)arg1;	// IMP=0x00100000000372d6
- (void)simulatememorywarningWithMessage:(id)arg1;	// IMP=0x0010000000037280
- (void)resetwritetrackingWithMessage:(id)arg1;	// IMP=0x00100000000371f0
- (void)disablewritetrackingWithMessage:(id)arg1;	// IMP=0x0010000000037150
- (void)enablewritetrackingWithMessage:(id)arg1;	// IMP=0x00100000000370d6
- (void)resetusageWithMessage:(id)arg1;	// IMP=0x0010000000037061
- (void)usageWithMessage:(id)arg1;	// IMP=0x0010000000036f20
- (void)enableusagetrackingWithMessage:(id)arg1;	// IMP=0x0010000000036ea6
- (void)disableusagetrackingWithMessage:(id)arg1;	// IMP=0x0010000000036e2f
- (void)enablethrottlingWithMessage:(id)arg1;	// IMP=0x0010000000036db8
- (void)disablethrottlingWithMessage:(id)arg1;	// IMP=0x0010000000036d3e
- (void)disablefulljournalWithMessage:(id)arg1;	// IMP=0x0010000000036cc7
- (void)enablefulljournalWithMessage:(id)arg1;	// IMP=0x0010000000036c4d
- (void)disablesyncindicatorWithMessage:(id)arg1;	// IMP=0x0010000000036c31
- (void)enablesyncindicatorWithMessage:(id)arg1;	// IMP=0x0010000000036c15
- (void)serverlimitsWithMessage:(id)arg1;	// IMP=0x0010000000036aca
- (void)setDefaultsConfigWithMessage:(id)arg1;	// IMP=0x00100000000368fb
- (void)lastrequestWithMessage:(id)arg1;	// IMP=0x0010000000036761
- (void)statusWithMessage:(id)arg1;	// IMP=0x001000000003647e
- (void)refetchconfigurationWithMessage:(id)arg1;	// IMP=0x0010000000036409
- (void)resetupdatesWithMessage:(id)arg1;	// IMP=0x0010000000036394
- (void)resetappsWithMessage:(id)arg1;	// IMP=0x001000000003631f
- (_Bool)_enumerateSchedulersFromMessage:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000360b3
- (void)diagnoseappWithMessage:(id)arg1;	// IMP=0x0010000000035c32
- (void)unregisterWithMessage:(id)arg1;	// IMP=0x001000000003588c
- (void)registerWithMessage:(id)arg1;	// IMP=0x001000000003535d
- (id)registeredApplicationsForStoreIdentifier:(id)arg1;	// IMP=0x001000000003532b
- (id)registeredApplications;	// IMP=0x00100000000350bd
- (id)registeredApplicationsForScheduler:(id)arg1;	// IMP=0x0010000000034f86
- (void)synchronizeWithMessage:(id)arg1;	// IMP=0x0010000000034bcb
- (void)endDebuggingApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000034b9d
- (void)beginDebuggingApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000034b6f
- (void)enumerateAppsWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003495d
- (void)enumerateAppsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003455f
- (id)applicationForBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x0010000000034208
- (void)performSyncForNextQueuedScheduler;	// IMP=0x0010000000034016
- (void)queueSyncForSchedulerIdentifier:(id)arg1;	// IMP=0x0010000000033fd1
- (void)_storeAppsOnDisk:(id)arg1;	// IMP=0x0010000000033f82
- (void)_storeAppsOnDiskHelper:(id)arg1;	// IMP=0x00100000000338fa
- (void)_loadAppsFromDisk;	// IMP=0x001000000003260b
- (void)_installedAppsDidChange;	// IMP=0x00100000000324b1
- (void)_refreshStoreIdentifiers:(id)arg1;	// IMP=0x0010000000032462
- (void)_refreshStoreIdentifiersHelper:(id)arg1;	// IMP=0x0010000000030b79
- (void)_appendApp:(id)arg1 new:(_Bool)arg2;	// IMP=0x0010000000030438
- (_Bool)isGlobalIdentifier:(id)arg1;	// IMP=0x00100000000303a4
- (id)schedulerWithIdentifier:(id)arg1;	// IMP=0x001000000003038e
- (id)defaultScheduler;	// IMP=0x0010000000030328
- (void)noteScheduler:(id)arg1 receivedBackgroundJobNotification:(id)arg2;	// IMP=0x0010000000030271
- (void)noteScheduler:(id)arg1 receivedNotificationForStores:(id)arg2;	// IMP=0x0010000000030185
- (void)_logWhoLaunchedUsWithMessage:(id)arg1 administrativeMessage:(_Bool)arg2;	// IMP=0x001000000002feed
- (void)_logWhoLaunchedUs:(id)arg1 toScheduler:(id)arg2;	// IMP=0x001000000002fe55
- (void)_noMessageReceived;	// IMP=0x001000000002fe02
- (void)dealloc;	// IMP=0x001000000002fd8d
- (id)init;	// IMP=0x001000000002faea

@end
