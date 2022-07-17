//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPSleepFocusModeBridgeDelegate-Protocol.h>
#import <Sleep/HKSPXPCConnectionProviderDelegate-Protocol.h>

@class HKHealthStore, HKSPAnalyticsManager, HKSPObserverSet, HKSPSleepFocusConfiguration, HKSPSleepStoreCache, HKSPSleepStoreExportedObject, HKSPThrottler, HKSPXPCConnectionProvider, HKSleepHealthStore, NSString;
@protocol HKSPSleepFocusModeBridge, HKSPSyncAnchor, NAScheduler;

@interface HKSPSleepStore : NSObject <HKSPSleepFocusModeBridgeDelegate, HKSPXPCConnectionProviderDelegate>
{
    struct os_unfair_lock_s _syncLock;	// 8 = 0x8
    id <HKSPSyncAnchor> _syncAnchor;	// 16 = 0x10
    HKSPAnalyticsManager *_analyticsManager;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    HKSleepHealthStore *_sleepHealthStore;	// 40 = 0x28
    unsigned long long _options;	// 48 = 0x30
    HKSPObserverSet *_observers;	// 56 = 0x38
    HKSPXPCConnectionProvider *_connectionProvider;	// 64 = 0x40
    HKSPSleepStoreCache *_sleepStoreCache;	// 72 = 0x48
    id <NAScheduler> _callbackScheduler;	// 80 = 0x50
    HKSPThrottler *_reconnectThrottler;	// 88 = 0x58
    CDUnknownBlockType _currentDateProvider;	// 96 = 0x60
    id <HKSPSleepFocusModeBridge> _sleepFocusModeBridge;	// 104 = 0x68
    HKSPSleepStoreExportedObject *_sleepStoreExportedObject;	// 112 = 0x70
}

+ (id)_widgetReloadDescription:(unsigned long long)arg1;	// IMP=0x0000000000033f66
+ (_Bool)_shouldForceWidgetReload:(unsigned long long)arg1;	// IMP=0x0000000000033f56
+ (id)_updatedHistoricalSleepGoalForSleepSchedule:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x000000000002ccf5
+ (id)_updatedHistoricalSleepSchedulesFromSleepSchedule:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x000000000002c620
- (void).cxx_destruct;	// IMP=0x0000000000034ff5
@property(readonly, nonatomic) HKSPSleepStoreExportedObject *sleepStoreExportedObject; // @synthesize sleepStoreExportedObject=_sleepStoreExportedObject;
@property(readonly, nonatomic) id <HKSPSleepFocusModeBridge> sleepFocusModeBridge; // @synthesize sleepFocusModeBridge=_sleepFocusModeBridge;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(readonly, nonatomic) HKSPThrottler *reconnectThrottler; // @synthesize reconnectThrottler=_reconnectThrottler;
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler; // @synthesize callbackScheduler=_callbackScheduler;
@property(readonly, nonatomic) HKSPSleepStoreCache *sleepStoreCache; // @synthesize sleepStoreCache=_sleepStoreCache;
@property(readonly, nonatomic) HKSPXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) HKSleepHealthStore *sleepHealthStore; // @synthesize sleepHealthStore=_sleepHealthStore;
@property(readonly, nonatomic) struct os_unfair_lock_s syncLock; // @synthesize syncLock=_syncLock;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HKSPAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
- (_Bool)_observeSleepFocusMode;	// IMP=0x0000000000034f67
@property(readonly, nonatomic) HKSPSleepFocusConfiguration *sleepFocusConfiguration;
@property(readonly, nonatomic) _Bool hasSleepFocusMode;
- (void)sleepFocusModeBridge:(id)arg1 didUpdateSleepFocusConfiguration:(id)arg2;	// IMP=0x0000000000034bc8
- (void)dealloc;	// IMP=0x0000000000034af3
- (void)_notifyObserversForChangedSleepScheduleState:(unsigned long long)arg1;	// IMP=0x0000000000034992
- (void)_notifyObserversForSleepEvent:(id)arg1;	// IMP=0x000000000003481a
- (void)_notifyObserversForChangedSleepMode:(long long)arg1;	// IMP=0x00000000000346d3
- (void)_notifyObserversForChangedSleepEventRecord:(id)arg1;	// IMP=0x0000000000034473
- (void)_notifyObserversForChangedSleepSettings:(id)arg1;	// IMP=0x00000000000341ff
- (void)_notifyObserversForChangedSleepSchedule:(id)arg1;	// IMP=0x0000000000033f9f
- (void)reloadWidgetIfNecessaryWithReason:(unsigned long long)arg1 reloader:(id)arg2;	// IMP=0x0000000000033b1d
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033821
- (void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033525
- (void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033229
- (id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003318a
- (id)nextEventWithIdentifierFuture:(id)arg1 dueAfterDate:(id)arg2;	// IMP=0x0000000000033005
- (id)nextEventDueAfterDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000032f7c
- (id)nextEventDueAfterDateFuture:(id)arg1;	// IMP=0x0000000000032e26
- (void)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032ceb
- (void)nextEventDueAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032bb5
- (void)publishWakeUpResultsNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032a94
- (id)_publishWakeUpResultsNotificationOnServer;	// IMP=0x000000000003263c
- (void)clearWidgetOverrideWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032556
- (id)_clearWidgetOverrideOnServer;	// IMP=0x00000000000320bf
- (void)setWidgetOverrideState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031fd3
- (id)_setWidgetOverrideStateOnServerWithState:(long long)arg1;	// IMP=0x0000000000031b00
- (void)deleteSleepFocusModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031873
- (void)createSleepFocusModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000315e6
- (void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000314e0
- (id)_setLockScreenOverrideStateOnServerWithState:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000030fc8
- (void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030eb0
- (id)_publishNotificationOnServerWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000030999
- (void)setWakeUpAlarmEnabled:(_Bool)arg1 resolvedOccurrence:(id)arg2 date:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030639
- (void)setUpcomingWakeUpAlarmEnabled:(_Bool)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000304e8
- (void)skipUpcomingWakeUpAlarmForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000304ce
- (id)_sleepAlarmWasModifiedOnServer;	// IMP=0x0000000000030037
- (void)sleepAlarmWasModifiedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ff51
- (void)sleepAlarmWasModified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ff3c
- (id)_sleepAlarmWasSnoozedUntilDateOnServer:(id)arg1;	// IMP=0x000000000002fa61
- (void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f975
- (id)_sleepAlarmWasDismissedOnDateOnServer:(id)arg1;	// IMP=0x000000000002f49a
- (void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f3ae
- (void)dismissSleepLockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f2c8
- (id)_dismissSleepLockOnServer;	// IMP=0x000000000002ee31
- (void)dismissGoodMorningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ed4b
- (id)_dismissGoodMorningOnServer;	// IMP=0x000000000002e8b4
- (void)confirmAwakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e7ce
- (id)_confirmAwakeOnServer;	// IMP=0x000000000002e337
- (void)setSleepModeOn:(_Bool)arg1 reason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e156
- (void)setSleepModeOn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e13c
- (id)_setSleepModeOnServer:(long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000002dc2e
- (void)saveCurrentSleepEventRecord:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002db47
- (void)saveCurrentSleepEventRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002db30
- (id)saveCurrentSleepEventRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002dacc
- (id)saveCurrentSleepEventRecord:(id)arg1;	// IMP=0x000000000002dab8
- (id)_saveCurrentSleepEventRecordOnServer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002d5d9
- (id)_prepareObjectForSave:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002d539
- (void)saveCurrentSleepSettings:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d452
- (void)saveCurrentSleepSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d43b
- (id)saveCurrentSleepSettings:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002d3d7
- (id)saveCurrentSleepSettings:(id)arg1;	// IMP=0x000000000002d3c3
- (id)_saveCurrentSleepSettingsOnServer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002cee4
- (id)_writeHistoricalSchedule:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002c315
- (void)saveCurrentSleepSchedule:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002c229
- (void)saveCurrentSleepSchedule:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c211
- (void)saveCurrentSleepSchedule:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c1fa
- (id)_sendScheduleChangedAnalyticsWithContext:(id)arg1;	// IMP=0x000000000002bedf
- (id)saveCurrentSleepSchedule:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x000000000002bc54
- (id)saveCurrentSleepSchedule:(id)arg1;	// IMP=0x000000000002bc3d
- (id)_saveCurrentSleepScheduleOnServer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002b75e
- (unsigned long long)currentSleepScheduleStateWithError:(id *)arg1;	// IMP=0x000000000002b642
- (void)currentSleepScheduleStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b50a
- (id)currentSleepScheduleStateFuture;	// IMP=0x000000000002b4f4
- (id)_getSleepScheduleStateOnDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x000000000002b426
- (id)_getSleepScheduleStateFromServerDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x000000000002af87
- (long long)sleepWidgetStateWithError:(id *)arg1;	// IMP=0x000000000002ae6d
- (void)sleepWidgetStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ad28
- (id)sleepWidgetStateFuture;	// IMP=0x000000000002ad14
- (id)_getSleepWidgetStateDoSync:(_Bool)arg1;	// IMP=0x000000000002ad02
- (id)_getSleepWidgetStateFromServerDoSync:(_Bool)arg1;	// IMP=0x000000000002a892
- (_Bool)sleepModeOnWithError:(id *)arg1;	// IMP=0x000000000002a879
- (long long)sleepModeWithError:(id *)arg1;	// IMP=0x000000000002a75d
- (void)sleepModeOnWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a618
- (void)sleepModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a4d3
- (id)sleepModeOnFuture;	// IMP=0x000000000002a3d5
- (id)sleepModeFuture;	// IMP=0x000000000002a3bf
- (id)_getSleepModeDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x000000000002a2f1
- (id)_getSleepModeFromServerDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000029e52
- (id)sleepScheduleModelWithError:(id *)arg1;	// IMP=0x0000000000029cfe
- (id)sleepScheduleModelFuture;	// IMP=0x00000000000299f5
- (void)sleepScheduleModelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029987
- (id)currentSleepEventRecordWithError:(id *)arg1;	// IMP=0x00000000000297a6
- (id)currentSleepEventRecordFuture;	// IMP=0x0000000000029790
- (void)currentSleepEventRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029660
- (id)_getSleepEventRecordDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000029592
- (id)_getSleepEventRecordFromServerDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000290f6
- (id)currentSleepSettingsWithError:(id *)arg1;	// IMP=0x0000000000028f15
- (id)currentSleepSettingsFuture;	// IMP=0x0000000000028eff
- (void)currentSleepSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028dcf
- (id)_getSleepSettingsDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000028d01
- (id)_getSleepSettingsFromServerDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000028865
- (id)upcomingScheduleOccurrenceAfterDateFuture:(id)arg1;	// IMP=0x000000000002870f
- (void)upcomingScheduleOccurrenceAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285d9
- (id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg1 alarmStatus:(long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000028505
- (id)upcomingScheduleOccurrenceAfterDate:(id)arg1 alarmStatus:(long long *)arg2 error:(id *)arg3;	// IMP=0x00000000000284b5
- (id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002849e
- (id)upcomingScheduleOccurrenceAfterDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002844e
- (id)currentSleepScheduleWithError:(id *)arg1;	// IMP=0x000000000002820a
- (id)currentSleepScheduleFuture;	// IMP=0x00000000000281f4
- (void)currentSleepScheduleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000280c4
- (id)_getSleepScheduleDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000027ff6
- (id)_getSleepScheduleFromServerDoSync:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000027b5a
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (void)_checkInWithCurrentSyncAnchor;	// IMP=0x0000000000027887
- (void)connect;	// IMP=0x000000000002745e
- (void)reconnect;	// IMP=0x00000000000273ba
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000273a4
- (void)addObserver:(id)arg1;	// IMP=0x000000000002738e
@property(readonly, copy) NSString *description;
- (void)updateSyncAnchor:(id)arg1;	// IMP=0x0000000000027133
@property(readonly, copy, nonatomic) id <HKSPSyncAnchor> syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (_Bool)_cachingEnabled;	// IMP=0x000000000002700c
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026fcf
- (id)initWithConnectionProviderProvider:(CDUnknownBlockType)arg1 identifier:(id)arg2 healthStore:(id)arg3 options:(unsigned long long)arg4 analyticsManager:(id)arg5 throttlerProvider:(CDUnknownBlockType)arg6 callbackScheduler:(id)arg7 sleepFocusModeBridgeProvider:(CDUnknownBlockType)arg8 currentDateProvider:(CDUnknownBlockType)arg9;	// IMP=0x0000000000026b58
- (id)initWithConnectionProviderProvider:(CDUnknownBlockType)arg1 identifier:(id)arg2 healthStore:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000026919
- (id)initWithIdentifier:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000267e2
- (id)initWithIdentifier:(id)arg1 healthStore:(id)arg2;	// IMP=0x00000000000267cd
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000026764
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000026750
- (id)init;	// IMP=0x0000000000026644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
