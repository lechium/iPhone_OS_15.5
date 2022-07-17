//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADBackgroundContextCache, ADDeviceCircleManager, ADDeviceProximityManager, ADHomeAnnouncementContextAdaptor, ADLocalContextStore, ADRemoteContextStore, AFAnalytics, AFInstanceContext, AFWatchdogTimer, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSXPCListener;
@protocol ADContextManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADContextManager : NSObject
{
    id <ADContextManagerDelegate> _delegate;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    ADDeviceProximityManager *_deviceProximityManager;	// 24 = 0x18
    _Bool _alertContextIsDirty;	// 32 = 0x20
    _Bool _bgContextIsDirty;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_bgContextQueue;	// 40 = 0x28
    _Bool _registeredForContextUpdates;	// 48 = 0x30
    ADBackgroundContextCache *_bgContext;	// 56 = 0x38
    AFAnalytics *_analytics;	// 64 = 0x40
    unsigned long long _ignoreNowPlayingUpdatesAfterTimestamp;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_nowPlayingCoalescingTimer;	// 80 = 0x50
    NSMutableSet *_coalescedNowPlayingUpdateSources;	// 88 = 0x58
    int _deviceProblemsRegistrationToken;	// 96 = 0x60
    int _musicPersonalizationTokenRegistrationToken;	// 100 = 0x64
    ADHomeAnnouncementContextAdaptor *_homeAnnouncementContextAdaptor;	// 104 = 0x68
    NSMutableArray *_queuedContextSnapshotCompletions;	// 112 = 0x70
    NSMutableSet *_contextSnapshotsReadUUIDs;	// 120 = 0x78
    long long _contextSnapshotFetchTimedOut;	// 128 = 0x80
    NSArray *_currentContextSnapshot;	// 136 = 0x88
    NSUUID *_currentRequestInfoUUID;	// 144 = 0x90
    NSDate *_currentRequestDate;	// 152 = 0x98
    AFWatchdogTimer *_contextSnapshotTimer;	// 160 = 0xa0
    NSMutableArray *_contextHistory;	// 168 = 0xa8
    AFWatchdogTimer *_contextRefreshTimer;	// 176 = 0xb0
    NSMutableDictionary *_contextSnapshotByForeignRequestID;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_queue;	// 192 = 0xc0
    AFInstanceContext *_instanceContext;	// 200 = 0xc8
    NSXPCListener *_deviceContextServiceListener;	// 208 = 0xd0
    NSMutableSet *_deviceContextConnections;	// 216 = 0xd8
    _Bool _collectingContext;	// 224 = 0xe0
    ADLocalContextStore *_localContextStore;	// 232 = 0xe8
    ADRemoteContextStore *_remoteContextStore;	// 240 = 0xf0
}

+ (_Bool)_isResumableThirdPartyGenreID:(id)arg1;	// IMP=0x00200000000dcef4
+ (_Bool)_isResumableFirstPartyBundleID:(id)arg1;	// IMP=0x00100000000dce34
- (void).cxx_destruct;	// IMP=0x00200000000e97b0
@property(nonatomic, getter=_isCollectingContext, setter=_setCollectingContext:) _Bool collectingContext; // @synthesize collectingContext=_collectingContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <ADContextManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ADRemoteContextStore *remoteContextStore; // @synthesize remoteContextStore=_remoteContextStore;
@property(readonly, nonatomic) ADLocalContextStore *localContextStore; // @synthesize localContextStore=_localContextStore;
- (void)_enumerateDeviceContextConnectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e96c6
- (void)_removeDeviceContextConnection:(id)arg1;	// IMP=0x00100000000e9670
- (void)_addDeviceContextConnection:(id)arg1;	// IMP=0x00100000000e960a
- (void)_handleHomeAnnouncementSnapshotUpdate:(id)arg1;	// IMP=0x00000000000e9523
- (void)_updateHomeAnnouncementWithContext:(id)arg1 supplementalSnapshot:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e9052
- (void)pushMyriadAdvertismentContextToContextCollector:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e89a7
- (void)_callStateDidChange:(id)arg1;	// IMP=0x00100000000e88c1
- (_Bool)_inlineUpdatePhoneState;	// IMP=0x00100000000e879c
- (void)updateBackgroundContextIfNowPlayingInfoChanged;	// IMP=0x00100000000e8713
- (void)_reallyUpdateBackgroundContextIfNowPlayingInfoChangedForReason:(id)arg1;	// IMP=0x00100000000e856d
- (void)_updateNowPlayingInfoWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8213
- (void)_scheduleNowPlayingRefreshForReason:(id)arg1 isPlaying:(id)arg2;	// IMP=0x00100000000e7dfa
- (void)_cancelNowPlayingCoalescingTimer;	// IMP=0x00100000000e7da8
- (void)nowPlayingObserverNowPlayingInfoDidChange:(id)arg1;	// IMP=0x00100000000e7c71
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;	// IMP=0x00100000000e7a35
- (void)navStatusDidChange:(id)arg1;	// IMP=0x00100000000e794f
- (void)_updateNavStatusWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7327
- (void)updateBackgroundContextIfHomeKitInfoChanged;	// IMP=0x00100000000e7241
- (_Bool)_inlineUpdateCurrentHomeKitHome;	// IMP=0x00100000000e70b4
- (void)_updateBackgroundContextIfMusicPersonalizationTokenChanged;	// IMP=0x00100000000e6ce7
- (void)_updateMusicPersonalizationTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e66b2
- (void)_updateMultiUserPersonalizationTokensWithSingleUserTokenChanged:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e5d45
- (id)_makeUserTokenStatusWithICTokenStatus:(id)arg1 icError:(id)arg2;	// IMP=0x00100000000e5b92
- (void)_updateSingleUserMusicPersonalizationTokenFromKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5a80
- (void)_handleContextSnapshotPush:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e5295
- (void)_handlePushContextMessage:(id)arg1 fromDeviceWithPeerInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4646
- (void)localContextStore:(id)arg1 didUpdateDeviceContext:(id)arg2;	// IMP=0x00100000000e44f2
- (void)contextCollectorChangedToDevicesWithIdentifiers:(id)arg1 localDeviceIsCollector:(_Bool)arg2;	// IMP=0x00100000000e4332
- (void)deviceContextConnection:(id)arg1 donateSerializedContextMapByPrivacyClass:(id)arg2 withMetadataMap:(id)arg3 forType:(id)arg4 pushToRemote:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e42f4
- (void)deviceContextConnection:(id)arg1 getLocalDeviceContextWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e42d6
- (void)deviceContextConnectionDidInvalidate:(id)arg1;	// IMP=0x00100000000e422b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000e40f5
- (id)_dataSourceInfoWithProximity:(long long)arg1 deviceContext:(id)arg2;	// IMP=0x00100000000e3f5a
- (id)_alarmAceObjectFromAlarm:(id)arg1 withProximity:(long long)arg2 inDeviceContext:(id)arg3;	// IMP=0x00100000000e3b64
- (id)_timerAceObjectFromTimer:(id)arg1 withProximity:(long long)arg2 inDeviceContext:(id)arg3;	// IMP=0x00100000000e3800
- (void)_unregisterForBGUpdates;	// IMP=0x00100000000e35aa
- (void)_registerForBGUpdates;	// IMP=0x00100000000e318d
- (void)getBackgroundContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e304b
- (void)preheatBackgroundContext;	// IMP=0x00100000000e2fad
- (void)_getBackgroundContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e265f
- (void)_updateSimpleThingsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e24b4
- (void)_logFetchLocalContextEnded:(id)arg1;	// IMP=0x00100000000e22f5
- (void)_logFetchLocalContextStarted:(id)arg1;	// IMP=0x00100000000e2136
- (void)_logContextCollectorFetchFailed:(id)arg1;	// IMP=0x00100000000e1f77
- (void)_logContextCollectorFetchEnded:(id)arg1 numDeviceContextsFetched:(unsigned long long)arg2;	// IMP=0x00100000000e1d9c
- (void)_logContextCollectorFetchStarted:(id)arg1;	// IMP=0x00100000000e1bdd
- (void)_stopPeriodicContextFetchFromNearbyDevices;	// IMP=0x00100000000e1b7d
- (void)_startPeriodicContextFetchFromNearbyDevices;	// IMP=0x00100000000e1956
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e185e
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e1858
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e162a
- (void)getContextSnapshotForForeignRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1506
- (void)pushContextSnapshotForCurrentRequestWithID:(id)arg1 toDevice:(id)arg2;	// IMP=0x00100000000e14c3
- (void)getContextSnapshotForCurrentRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0f77
- (void)_fetchContextSnapshotForCurrentRequest;	// IMP=0x00100000000df4aa
- (void)_getDevicesWithContexts:(id)arg1 passingTest:(CDUnknownBlockType)arg2 capabilitesPassingTest:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000deeda
- (void)getDeviceContextsForKeys:(id)arg1 forForeignRequestID:(id)arg2 includesNearbyDevices:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000de380
- (id)localContextWithPrivacyClass:(long long)arg1;	// IMP=0x00100000000de367
- (void)getLocalContextWithPrivacyClass:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000de347
- (void)getContextIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 timeOut:(double)arg3 localContextCompletion:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000dcf8a
- (void)getContextIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 timeOut:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000dcf6f
- (void)_getNowPlayingMediaIsResumable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dcac5
- (void)getNowPlayingMediaIsResumable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dca1d
- (void)getDomainObjectFromMessageContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dc905
- (void)markBulletinAsAcknolwedgedForDomainObject:(id)arg1;	// IMP=0x00100000000dc653
- (void)getAlertContextWithBulletins:(id)arg1 externalAlarmSnapshot:(id)arg2 timerSnapshot:(id)arg3 nlAlertContextCompletion:(CDUnknownBlockType)arg4 fullAlertContextCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000da94c
- (void)_getCurrentUserActivityOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da061
- (void)getAppContextForDeviceState:(long long)arg1 applicationInfos:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d8ddb
- (id)_appInfoWithBundleID:(id)arg1;	// IMP=0x00100000000d8d50
- (id)_filteredApplicationInfosForLockedStark:(id)arg1;	// IMP=0x00100000000d8b44
- (void)clearBackgroundContextDirtyState;	// IMP=0x00100000000d8b3a
- (_Bool)backgroundContextIsDirty;	// IMP=0x00100000000d8b31
- (void)setBackgroundContextDirty;	// IMP=0x00100000000d8b27
- (void)clearAlertContextDirtyState;	// IMP=0x00100000000d8b1d
- (_Bool)alertContextIsDirty;	// IMP=0x00100000000d8b14
- (void)setAlertContextDirty;	// IMP=0x00100000000d8b0a
- (void)keepReportingNowPlayingTimingEventsHeuristically;	// IMP=0x00100000000d8a54
- (void)dealloc;	// IMP=0x00100000000d895e
- (void)_setDelegate:(id)arg1;	// IMP=0x00100000000d881c
- (void)_initialize;	// IMP=0x00100000000d87c9
- (void)reset;	// IMP=0x00100000000d86ed
- (id)_configuredRemoteContextStoreWithRapportLink:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d867d
- (id)_configuredLocalContextStoreWithInstanceContext:(id)arg1 rapportLink:(id)arg2 queue:(id)arg3;	// IMP=0x00100000000d85dd
- (id)_initWithDelegate:(id)arg1 deviceCircleManager:(id)arg2 deviceProximityManager:(id)arg3;	// IMP=0x00100000000d7e75
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000d7dcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
