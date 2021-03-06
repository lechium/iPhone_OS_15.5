//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartHealthDaemon/HDDataCollector-Protocol.h>
#import <HeartHealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HeartHealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HeartHealthDaemon/HDHeartRateDataCollector-Protocol.h>

@class CMCatherineFeeder, HDBradycardiaDataAggregator, HDDataCollectorConfiguration, HDDataCollectorState, HDDeviceEntity, HDHeartRateDataAggregator, HDProfile, HDTachycardiaDataAggregator, NSString;
@protocol OS_dispatch_queue;

@interface HDHRHealthLiteDataCollector : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector>
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _heartRateEnabledInPrivacy;	// 24 = 0x18
    int _privacyPreferencesNotificationToken;	// 28 = 0x1c
    int _powerSavingModeNotificationToken;	// 32 = 0x20
    HDHeartRateDataAggregator *_heartRateAggregator;	// 40 = 0x28
    HDTachycardiaDataAggregator *_tachycardiaAggregator;	// 48 = 0x30
    HDBradycardiaDataAggregator *_bradycardiaAggregator;	// 56 = 0x38
    HDDataCollectorConfiguration *_heartRateCollectionConfiguration;	// 64 = 0x40
    HDDataCollectorConfiguration *_tachycardiaCollectionConfiguration;	// 72 = 0x48
    HDDataCollectorConfiguration *_bradycardiaCollectionConfiguration;	// 80 = 0x50
    HDDataCollectorState *_heartRateCollectionState;	// 88 = 0x58
    HDDataCollectorState *_tachycardiaCollectionState;	// 96 = 0x60
    HDDataCollectorState *_bradycardiaCollectionState;	// 104 = 0x68
    CMCatherineFeeder *_catherineFeeder;	// 112 = 0x70
    HDDeviceEntity *_localDeviceEntity;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000000f30c
- (void)_setCatherineFeeder:(id)arg1;	// IMP=0x000000000000f266
- (void)_registerPowerLogEvent:(id)arg1;	// IMP=0x000000000000f218
- (id)diagnosticDescription;	// IMP=0x000000000000f0fe
- (void)_queue_privacyPreferencesDidChange;	// IMP=0x000000000000f041
- (void)_queue_powerSavingModeDidChange;	// IMP=0x000000000000efcf
- (_Bool)_queue_isPowerSavingModePreventingStreaming;	// IMP=0x000000000000ed3a
- (void)_assertionManagerStateChanged:(id)arg1;	// IMP=0x000000000000eb04
- (void)_startObservingAssertionManagerChanges;	// IMP=0x000000000000ea4a
- (void)_workoutManagerStateDidChange;	// IMP=0x000000000000e9e9
- (void)_startObservingCurrentWorkoutChanges;	// IMP=0x000000000000e982
- (void)_queue_createHealthLiteManager;	// IMP=0x000000000000e91e
- (void)_queue_updateBradycardiaCollectionType;	// IMP=0x000000000000e7bf
- (void)_queue_updateTachycardiaCollectionType;	// IMP=0x000000000000e660
- (void)_queue_updateHeartRateCollectionType;	// IMP=0x000000000000e4d5
- (void)_queue_updateAllCollectionTypes;	// IMP=0x000000000000e49a
- (void)dataCollector:(id)arg1 didCollectHeartRate:(id)arg2 device:(id)arg3 source:(id)arg4;	// IMP=0x000000000000e23e
- (id)identifierForDataAggregator:(id)arg1;	// IMP=0x000000000000e231
- (id)sourceForDataAggregator:(id)arg1;	// IMP=0x000000000000e218
- (id)deviceForDataAggregator:(id)arg1;	// IMP=0x000000000000e1ff
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;	// IMP=0x000000000000e09b
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;	// IMP=0x000000000000e095
- (void)daemonReady:(id)arg1;	// IMP=0x000000000000dd5a
- (void)dealloc;	// IMP=0x000000000000dc09
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000000d7ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

