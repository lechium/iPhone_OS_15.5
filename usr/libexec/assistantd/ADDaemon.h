//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADClientLiteListener, ADExternalRequestListener, ADPeerLocationRemote, ADSiriConnectionRemote, ADSiriTetherListener, AFInstanceContext, MISSING_TYPE, NSCountedSet, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ADDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_analyticsListener;	// 16 = 0x10
    NSXPCListener *_analyticsObservationListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
    NSXPCListener *_dictationListener;	// 40 = 0x28
    NSXPCListener *_settingsListener;	// 48 = 0x30
    NSXPCListener *_synapseSyncListener;	// 56 = 0x38
    MISSING_TYPE *_managedStorageListener;	// 64 = 0x40
    NSXPCListener *_securityListener;	// 72 = 0x48
    NSXPCListener *_notificationServiceListener;	// 80 = 0x50
    NSXPCListener *_audioSessionAssertionServiceListener;	// 88 = 0x58
    NSObject<OS_xpc_object> *_syncListener;	// 96 = 0x60
    ADExternalRequestListener *_externalRequestListener;	// 104 = 0x68
    ADClientLiteListener *_clientLiteListener;	// 112 = 0x70
    ADSiriTetherListener *_siriTetherListener;	// 120 = 0x78
    unsigned long long _lastSyncRequested;	// 128 = 0x80
    NSMutableSet *_syncReasonsQueued;	// 136 = 0x88
    _Bool _syncActivityRegistered;	// 144 = 0x90
    _Bool _syncUrgentActivityRegistered;	// 145 = 0x91
    ADSiriConnectionRemote *_proxyRemote;	// 152 = 0x98
    ADPeerLocationRemote *_peerLocationManagerRemote;	// 160 = 0xa0
    _Bool _unlockedWorkQueueIsSuspended;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_unlockedWorkQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_dictationListenerQueue;	// 184 = 0xb8
    NSCountedSet *_dictationPidSet;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_trialExperimentsQueue;	// 200 = 0xc8
    struct MGNotificationTokenStruct *_mg_notification_token;	// 208 = 0xd0
    AFInstanceContext *_instanceContext;	// 216 = 0xd8
}

+ (unsigned long long)processLaunchMachTime;	// IMP=0x00200000000b77f4
+ (double)processLaunchTime;	// IMP=0x00100000000b77e6
+ (id)sharedDaemon;	// IMP=0x00100000000b773b
- (void).cxx_destruct;	// IMP=0x00200000000bde87
- (void)_setupOfflineDictationStatusObserver;	// IMP=0x00100000000bde65
- (void)scheduleUnlockedWork:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bdd33
- (void)scheduleValidationRefreshForInterval:(double)arg1;	// IMP=0x00100000000bdd29
- (void)unscheduleDestroyJob;	// IMP=0x00100000000bdd1f
- (void)scheduleDestroyJob;	// IMP=0x00100000000bdd15
- (void)_syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000bd9ec
- (void)syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000bd934
- (void)_syncCoalesced;	// IMP=0x00100000000bd73c
- (void)_syncUrgently:(id)arg1;	// IMP=0x00100000000bd4f6
- (void)_setupSessionLanguage;	// IMP=0x00100000000bd4b2
- (void)_daemonWillShutdown;	// IMP=0x00100000000bd3b9
- (void)_daemonDidLaunchWithContext:(id)arg1;	// IMP=0x00100000000bcc63
- (void)_setupAudioSessionAssertionAcquisitionService;	// IMP=0x00100000000bcbfb
- (void)_setupCacheDelete;	// IMP=0x00100000000bc4fa
- (void)_setupNanoPreferences;	// IMP=0x00100000000bc4f4
- (void)_setupWirelessCoexManagerSubscription;	// IMP=0x00100000000bc4ee
- (void)_setupMemoryPressureObservation;	// IMP=0x00100000000bc4e8
- (void)_setupMultiUserCloudSyncer;	// IMP=0x00100000000bc4e2
- (void)_setupCloudKit;	// IMP=0x00100000000bc4dc
- (void)_setupHomeKit;	// IMP=0x00100000000bc498
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00100000000bc2a8
- (void)_setupPairedSync;	// IMP=0x00100000000bc24c
- (void)_setupClientLiteListener;	// IMP=0x00100000000bc212
- (void)_setupExternalRequestListener;	// IMP=0x00100000000bc1d3
- (void)_setupTetherListener;	// IMP=0x00100000000bc199
- (void)_registerForSyncNotifications;	// IMP=0x00100000000bc05e
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000bc015
- (void)_setupSyncListener;	// IMP=0x00100000000bbdd9
- (void)_setupMobileGestaltNotificationHandlers;	// IMP=0x00100000000bbccb
- (void)_setupDistributedNotificationHandlers;	// IMP=0x00100000000bba93
- (void)_setupNotifyHandlers;	// IMP=0x00100000000bb39e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000bb2a2
- (void)_setupAnnouncementSpeakingStatePublisher;	// IMP=0x00100000000bb280
- (_Bool)_audioSessionAssertionServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000bae54
- (void)_setupAudioSessionAssertionServiceListener;	// IMP=0x00100000000baded
- (_Bool)_notificationServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000baa51
- (void)_setupNotificationServiceListener;	// IMP=0x00100000000ba9d2
- (_Bool)_securityListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000ba695
- (void)_setupSecurityListener;	// IMP=0x00100000000ba62e
- (_Bool)_analyticsObservationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000ba2b5
- (void)_setupAnalyticsObservationListener;	// IMP=0x00100000000ba24e
- (_Bool)_analyticsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b9db2
- (void)_setupAnalyticsListener;	// IMP=0x00100000000b9cc9
- (void)_setupSiriAnalyticsListener;	// IMP=0x00100000000b9c85
- (void)_setupContextListener;	// IMP=0x00100000000b9c7b
- (_Bool)_managedStorageListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b99fc
- (void)_setupManagedStorageListener;	// IMP=0x00100000000b9995
- (_Bool)_synapseSyncListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b9558
- (id)_synapseAppBundleIDFromPossibleDeamonBundleID:(id)arg1;	// IMP=0x00100000000b94e2
- (void)_bundleID:(id *)arg1 andPath:(id *)arg2 forXPCConnection:(id)arg3;	// IMP=0x00100000000b92a3
- (void)_setupSynapseSyncListener;	// IMP=0x00100000000b923c
- (void)_setupSettingsListener;	// IMP=0x00100000000b9190
- (_Bool)_settingsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b8df3
- (void)_setupDictationListener;	// IMP=0x00100000000b8cf3
- (_Bool)_dictationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b8796
- (void)startUISpeechRequest;	// IMP=0x00100000000b876d
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00100000000b86b8
- (_Bool)_clientListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b7f8c
- (void)_setupClientListener;	// IMP=0x00100000000b7e83
- (id)_peerLocationService;	// IMP=0x00100000000b7db9
- (id)_proxyService;	// IMP=0x00100000000b7cef
- (void)_setupIDSServices;	// IMP=0x00100000000b7bfb
- (void)_setupRapportServices;	// IMP=0x00100000000b7bf5
- (void)_setupInternal;	// IMP=0x00100000000b7b26
- (void)keepAlive;	// IMP=0x00100000000b7a23
- (void)shutdown;	// IMP=0x00100000000b7a0b
- (void)runWithLaunchContext:(id)arg1;	// IMP=0x00100000000b797f
- (void)dealloc;	// IMP=0x00100000000b78c0
- (id)init;	// IMP=0x00100000000b7801

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

