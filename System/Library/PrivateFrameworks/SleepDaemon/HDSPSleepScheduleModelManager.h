//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPApplicationWorkspaceObserver-Protocol.h>
#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepEventProvider-Protocol.h>
#import <SleepDaemon/HDSPSleepStorageObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>
#import <SleepDaemon/HDSPTimeChangeObserver-Protocol.h>

@class HDSPEnvironment, HDSPSleepScheduleModelChangeEvaluator, HKSPObserverSet, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepScheduleModel, HKSPSleepSettings, NSString;
@protocol HDSPSleepEventDelegate, HDSPSource;

@interface HDSPSleepScheduleModelManager : NSObject <HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver>
{
    struct os_unfair_lock_s _storeLock;	// 8 = 0x8
    HDSPEnvironment *_environment;	// 16 = 0x10
    HKSPSleepSchedule *_sleepSchedule;	// 24 = 0x18
    HKSPSleepSettings *_sleepSettings;	// 32 = 0x20
    HKSPSleepEventRecord *_sleepEventRecord;	// 40 = 0x28
    id <HDSPSleepEventDelegate> _sleepEventDelegate;	// 48 = 0x30
    HKSPObserverSet *_observers;	// 56 = 0x38
    HDSPSleepScheduleModelChangeEvaluator *_changeEvaluator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006ed78
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluator *changeEvaluator; // @synthesize changeEvaluator=_changeEvaluator;
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) struct os_unfair_lock_s storeLock; // @synthesize storeLock=_storeLock;
@property(nonatomic) __weak id <HDSPSleepEventDelegate> sleepEventDelegate; // @synthesize sleepEventDelegate=_sleepEventDelegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;	// IMP=0x000000000006ec57
- (id)diagnosticDescription;	// IMP=0x000000000006ebeb
- (void)sleepStorageDidChangeExternally:(id)arg1;	// IMP=0x000000000006e89b
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)_turnOffWatchSleepFeatures;	// IMP=0x000000000006e5d7
- (_Bool)_shouldTurnOffWatchSleepFeatures;	// IMP=0x000000000006e4d7
- (void)observedApplicationDidUninstall;	// IMP=0x000000000006e3f8
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (void)significantTimeChangeDetected:(id)arg1;	// IMP=0x000000000006d9d1
- (id)_earliestDateToScheduleEventsForDate:(id)arg1;	// IMP=0x000000000006d931
- (id)upcomingEventsDueAfterDate:(id)arg1;	// IMP=0x000000000006d8b1
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
@property(readonly, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // @synthesize sleepEventRecord=_sleepEventRecord;
- (void)_locked_notifyObserversForSleepEventRecordChange:(id)arg1;	// IMP=0x000000000006d3c1
- (void)notifyObserversForSleepEventRecordChange:(id)arg1;	// IMP=0x000000000006d312
- (id)_locked_applyNecessaryChangesBeforeSaving:(id)arg1;	// IMP=0x000000000006d267
- (_Bool)_locked_canApplyChangesFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006d14b
- (_Bool)_locked_updateModelWithBlock:(CDUnknownBlockType)arg1 persistBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000006cfd8
- (id)_locked_resetSleepEventRecord;	// IMP=0x000000000006cedf
- (id)_locked_setSleepEventRecord:(id)arg1;	// IMP=0x000000000006cb3d
- (void)_locked_applyNecessarySleepSettingsChangesBeforeSavingSleepEventRecord:(id)arg1;	// IMP=0x000000000006c7e5
- (id)_locked_applyNecessaryChangesBeforeSavingSleepEventRecord:(id)arg1;	// IMP=0x000000000006c79a
- (id)_locked_updateSleepEventRecord:(id)arg1;	// IMP=0x000000000006c26f
- (id)_locked_saveSleepEventRecord:(id)arg1;	// IMP=0x000000000006c0fb
- (_Bool)_locked_saveSleepEventRecord:(id)arg1 error:(id *)arg2 preNotifyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006be02
- (_Bool)saveSleepEventRecord:(id)arg1 error:(id *)arg2 preNotifyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006bb35
- (_Bool)_locked_saveSleepEventRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006bb03
- (_Bool)saveSleepEventRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b92c
- (id)_locked_loadSleepEventRecord:(id *)arg1;	// IMP=0x000000000006b76b
- (id)_loadSleepEventRecord:(id *)arg1;	// IMP=0x000000000006b4fb
@property(readonly, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
- (void)_locked_notifyObserversForSleepSettingsChange:(id)arg1;	// IMP=0x000000000006b01d
- (void)notifyObserversForSleepSettingsChange:(id)arg1;	// IMP=0x000000000006af6e
- (id)_locked_resetSleepSettings;	// IMP=0x000000000006ae75
- (id)_locked_updateSleepSettings:(id)arg1;	// IMP=0x000000000006a94a
- (id)_locked_setSleepSettings:(id)arg1;	// IMP=0x000000000006a5a8
- (id)_locked_saveSleepSettings:(id)arg1;	// IMP=0x000000000006a434
- (_Bool)_locked_saveSleepSettings:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a1ea
- (_Bool)saveSleepSettings:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a013
- (id)_locked_loadSleepSettings:(id *)arg1;	// IMP=0x0000000000069e52
- (id)_loadSleepSettings:(id *)arg1;	// IMP=0x0000000000069be2
@property(readonly, nonatomic) HKSPSleepSchedule *sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
- (_Bool)_shouldNotifyObserver:(id)arg1;	// IMP=0x0000000000069a14
- (void)_locked_notifyObserversForSleepScheduleChange:(id)arg1;	// IMP=0x0000000000069647
- (void)notifyObserversForSleepScheduleChange:(id)arg1;	// IMP=0x0000000000069598
- (id)_locked_removeSleepSchedule;	// IMP=0x000000000006920f
- (id)_locked_validateSleepSchedule:(id)arg1 generateValidSchedule:(_Bool)arg2;	// IMP=0x0000000000068e24
- (void)_locked_applyNecessaryEventRecordChangesBeforeSavingSleepSchedule:(id)arg1 validationResult:(id)arg2;	// IMP=0x0000000000068514
- (id)_locked_applyNecessaryChangesBeforeSavingSleepSchedule:(id)arg1 validationResult:(id)arg2;	// IMP=0x000000000006849d
- (id)_locked_updateSleepSchedule:(id)arg1;	// IMP=0x0000000000067edd
- (id)_locked_setSleepSchedule:(id)arg1;	// IMP=0x0000000000067aa5
- (id)_locked_saveSleepSchedule:(id)arg1;	// IMP=0x0000000000067931
- (_Bool)_locked_saveSleepSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000676e7
- (_Bool)saveSleepSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067510
- (id)_locked_loadSleepSchedule:(id *)arg1;	// IMP=0x000000000006708d
- (id)_loadSleepSchedule:(id *)arg1;	// IMP=0x0000000000066e1d
- (id)_locked_sleepScheduleModel;	// IMP=0x0000000000066df5
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
- (void)_locked_notifyObserversForSleepScheduleModelChange:(id)arg1;	// IMP=0x000000000006685f
- (_Bool)removeSleepScheduleModelWithError:(id *)arg1;	// IMP=0x00000000000662f6
- (_Bool)saveSleepScheduleModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000065c10
- (id)_locked_loadSleepScheduleModel:(id *)arg1;	// IMP=0x00000000000658ce
- (id)_loadSleepScheduleModel:(id *)arg1;	// IMP=0x0000000000065639
- (void)environmentDidBecomeReady:(id)arg1;	// IMP=0x00000000000654c0
- (void)environmentWillBecomeReady:(id)arg1;	// IMP=0x0000000000065344
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000065327
- (void)addObserver:(id)arg1;	// IMP=0x000000000006530a
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006529e
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000000000650e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end

