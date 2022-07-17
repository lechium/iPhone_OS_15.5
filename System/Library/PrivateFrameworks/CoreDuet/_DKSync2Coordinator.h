//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/APSConnectionDelegate-Protocol.h>
#import <CoreDuet/_DKKnowledgeStorageEventNotificationDelegate-Protocol.h>
#import <CoreDuet/_DKSyncCoordinator-Protocol.h>
#import <CoreDuet/_DKSyncRemoteKnowledgeStorageFetchDelegate-Protocol.h>

@class APSConnection, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID, _CDMutablePerfMetric, _CDPeriodicSchedulerJob, _DKDataProtectionStateMonitor, _DKKnowledgeStorage, _DKSync2State, _DKSyncToggle, _DKSyncType, _DKThrottledActivity;
@protocol NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKSync2Coordinator <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator>
{
    _DKThrottledActivity *_activityThrottler;	// 8 = 0x8
    id <NSObject> _observerToken;	// 16 = 0x10
    NSMutableSet *_busyTransactions;	// 24 = 0x18
    NSMutableArray *_insertedSyncedEvents;	// 32 = 0x20
    NSMutableArray *_deletedSyncedEvents;	// 40 = 0x28
    NSMutableSet *_activatedPeers;	// 48 = 0x30
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;	// 56 = 0x38
    _Bool _hasRegisteredOptionalObservers;	// 64 = 0x40
    _Bool _isEnabled;	// 65 = 0x41
    NSString *_triggeredSyncDelayActivityName;	// 72 = 0x48
    NSString *_syncActivityName;	// 80 = 0x50
    _DKSync2State *_syncState;	// 88 = 0x58
    double _periodicJobInterval;	// 96 = 0x60
    _Bool _databaseObserversRegistered;	// 104 = 0x68
    _Bool _cloudDeviceCountChangedObserverRegistered;	// 105 = 0x69
    _Bool _cloudSyncAvailablityObserverRegistered;	// 106 = 0x6a
    _Bool _rapportAvailablityObserverRegistered;	// 107 = 0x6b
    _Bool _siriSyncEnabledObserverRegistered;	// 108 = 0x6c
    _Bool _syncPolicyChangedObserverRegistered;	// 109 = 0x6d
    APSConnection *_connection;	// 112 = 0x70
    NSMutableSet *_streamNamesObservedForAdditions;	// 120 = 0x78
    NSMutableSet *_streamNamesObservedForDeletions;	// 128 = 0x80
    _CDMutablePerfMetric *_perfMetric;	// 136 = 0x88
    struct _CDPerfEvent _perfEvent;	// 144 = 0x90
    _DKSyncToggle *_syncEnabledToggler;	// 160 = 0xa0
    _DKSyncToggle *_someTransportIsAvailableToggler;	// 168 = 0xa8
    _DKSyncToggle *_cloudIsAvailableToggler;	// 176 = 0xb0
    _DKSyncToggle *_rapportIsAvailableToggler;	// 184 = 0xb8
    _CDPeriodicSchedulerJob *_periodicJob;	// 192 = 0xc0
    _Bool _triggeredSyncActivityRegistered;	// 200 = 0xc8
    NSObject<OS_xpc_object> *_triggeredSyncActivity;	// 208 = 0xd0
    _Bool _isBusy;	// 216 = 0xd8
    _Bool _hasSyncedUpHistoryToCloud;	// 217 = 0xd9
    _DKKnowledgeStorage *_storage;	// 224 = 0xe0
    id <_DKKeyValueStore> _keyValueStore;	// 232 = 0xe8
    id <_DKSyncLocalKnowledgeStorage> _localStorage;	// 240 = 0xf0
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudDown;	// 248 = 0xf8
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudUp;	// 256 = 0x100
    id <_DKSyncRemoteKnowledgeStorage> _transportRapport;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x000000000001f15a
- (void)_syncPolicyDidChange:(id)arg1;	// IMP=0x000000000001d674
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;	// IMP=0x000000000001d3d4
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019abc
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001949d
- (void)syncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018ff1
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;	// IMP=0x000000000001841f
- (id)policyForSyncTransportType:(long long)arg1;	// IMP=0x00000000000171a3
- (void)start;	// IMP=0x0000000000017020
- (void)setupStorage;	// IMP=0x0000000000016a9a
- (void)_rapportIsUnavailableToggle;	// IMP=0x000000000001688f
- (void)_rapportIsAvailableToggle;	// IMP=0x0000000000016849
- (void)_cloudIsUnavailableToggle;	// IMP=0x000000000001671d
- (void)_cloudIsAvailableToggle;	// IMP=0x00000000000161ed
- (void)_noTransportIsAvailableToggle;	// IMP=0x0000000000015fe4
- (void)_someTransportIsAvailableToggle;	// IMP=0x0000000000015c1d
- (void)_syncDisabledToggle;	// IMP=0x00000000000159d6
- (void)_syncEnabledToggle;	// IMP=0x0000000000015246
@property(readonly, nonatomic) NSUUID *deviceUUID;
- (void)dealloc;	// IMP=0x0000000000015136
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000013fc2
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000000001f39a
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000001f323
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;	// IMP=0x000000000001fcec
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;	// IMP=0x000000000001f641
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;	// IMP=0x000000000001f63b
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;	// IMP=0x000000000001f635
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;	// IMP=0x000000000001f62f
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;	// IMP=0x000000000001f609
@property(readonly, nonatomic) _DKSyncType *syncType;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001ffac
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;	// IMP=0x000000000001febd
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;	// IMP=0x000000000001fdf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
