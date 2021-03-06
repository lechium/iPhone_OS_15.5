//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSURL, NSUUID;
@protocol ACXRemoteAppListCommunications, OS_dispatch_queue, OS_dispatch_source;

@interface ACXRemoteAppList : NSObject
{
    _Bool _remoteIsConnected;	// 8 = 0x8
    _Bool _performingResync;	// 9 = 0x9
    _Bool _syncPending;	// 10 = 0xa
    NSDictionary *_appList;	// 16 = 0x10
    NSUUID *_currentDBUUID;	// 24 = 0x18
    unsigned long long _lastSequenceNumber;	// 32 = 0x20
    NSURL *_storageBaseURL;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_syncTimeout;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_resyncThrottleTimer;	// 56 = 0x38
    id <ACXRemoteAppListCommunications> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
    NSDictionary *_appInstallRecordsToFetch;	// 80 = 0x50
    NSSet *_bundleIDsToFetch;	// 88 = 0x58
    NSMutableSet *_observers;	// 96 = 0x60
    NSMutableDictionary *_attemptsPerBundleID;	// 104 = 0x68
    unsigned long long _resyncAttempts;	// 112 = 0x70
}

+ (id)remoteAppListForStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x0020000000043fe8
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000043bc0
- (void).cxx_destruct;	// IMP=0x002000000004c1b8
@property(nonatomic) _Bool syncPending; // @synthesize syncPending=_syncPending;
@property(nonatomic) unsigned long long resyncAttempts; // @synthesize resyncAttempts=_resyncAttempts;
@property(retain, nonatomic) NSMutableDictionary *attemptsPerBundleID; // @synthesize attemptsPerBundleID=_attemptsPerBundleID;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool performingResync; // @synthesize performingResync=_performingResync;
@property(retain, nonatomic) NSSet *bundleIDsToFetch; // @synthesize bundleIDsToFetch=_bundleIDsToFetch;
@property(retain, nonatomic) NSDictionary *appInstallRecordsToFetch; // @synthesize appInstallRecordsToFetch=_appInstallRecordsToFetch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ACXRemoteAppListCommunications> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *resyncThrottleTimer; // @synthesize resyncThrottleTimer=_resyncThrottleTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *syncTimeout; // @synthesize syncTimeout=_syncTimeout;
@property(nonatomic) _Bool remoteIsConnected; // @synthesize remoteIsConnected=_remoteIsConnected;
@property(retain, nonatomic) NSURL *storageBaseURL; // @synthesize storageBaseURL=_storageBaseURL;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *currentDBUUID; // @synthesize currentDBUUID=_currentDBUUID;
@property(retain, nonatomic) NSDictionary *appList; // @synthesize appList=_appList;
- (void)getCurrentDBUUID:(id *)arg1 sequenceNumber:(unsigned long long *)arg2;	// IMP=0x001000000004be97
- (id)appBundleIDForCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004baca
- (_Bool)applicationIsInstalledWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b757
- (id)applicationWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b392
- (_Bool)applicationIsInstalledWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b0c5
- (id)applicationForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004adc8
- (id)bundleIDsTrackedWithError:(id *)arg1;	// IMP=0x001000000004ab52
@property(readonly, nonatomic) _Bool databaseIsSynced;
- (_Bool)_onQueue_databaseIsSynced;	// IMP=0x001000000004a9eb
- (_Bool)startDatabaseSyncIfNeeded;	// IMP=0x001000000004a83d
- (void)appsRemoved:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004a2a8
- (void)appsAdded:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000049905
- (void)reportAppEvents:(id)arg1 forDBUUID:(id)arg2 startingSequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000048fe6
- (void)updateAppInfoWithRecords:(id)arg1 currentRemoteDBUUID:(id)arg2;	// IMP=0x0010000000047d6e
- (void)updateBundleIDList:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000047b94
- (void)reportCurrentDBUUID:(id)arg1 lastSequenceNumber:(unsigned long long)arg2;	// IMP=0x0010000000047833
- (void)remoteDeviceConnected;	// IMP=0x001000000004776e
- (void)remoteDeviceDisconnected;	// IMP=0x0010000000047699
- (void)removeObserver:(id)arg1 queue:(id)arg2;	// IMP=0x001000000004730e
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000047188
- (void)_onQueue_databaseResynced;	// IMP=0x0010000000046f3a
- (void)_onQueue_appsRemoved:(id)arg1;	// IMP=0x0010000000046c80
- (void)_onQueue_appsUpdated:(id)arg1;	// IMP=0x00100000000469c6
- (void)_onQueue_appsAdded:(id)arg1;	// IMP=0x001000000004670c
- (void)_onQueue_acknowledgeAppEvents;	// IMP=0x0010000000046531
- (void)_onQueue_fetchOutstandingAppEvents;	// IMP=0x0010000000046391
- (void)_onQueue_fetchAppsForAppInstallRecords;	// IMP=0x0010000000045e98
- (void)_onQueue_fetchRemainingBundleIDs;	// IMP=0x00100000000458c5
- (void)reportTotalSyncFailureForError:(id)arg1;	// IMP=0x00100000000457d1
- (void)_onQueue_reSync;	// IMP=0x0010000000045565
- (void)_onQueue_stopResyncThrottleTimer;	// IMP=0x00100000000454af
- (void)_onQueue_startResyncThrottleTimer;	// IMP=0x00100000000451c1
- (void)_onQueue_stopSyncTimer;	// IMP=0x001000000004510b
- (void)_onQueue_startSyncTimer;	// IMP=0x0010000000044e35
- (void)_onQueue_saveData;	// IMP=0x0010000000044ae1
- (void)_onQueue_purgeSavedData;	// IMP=0x00100000000448c3
- (void)_resetLastSequenceNumberTo:(unsigned long long)arg1;	// IMP=0x001000000004471a
- (id)queue;	// IMP=0x0010000000044666
- (id)initWithStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000043ee8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000043e3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000043c1f
- (void)_initCommonReliabilityState;	// IMP=0x0010000000043bc8

@end

