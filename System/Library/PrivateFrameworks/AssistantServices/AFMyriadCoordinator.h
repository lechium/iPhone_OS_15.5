//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>

@class AFMyriadAdvertisementContextManager, AFMyriadAdvertisementContextRecord, AFMyriadContext, AFMyriadEmergencyCallPunchout, AFMyriadGoodnessScoreEvaluator, AFMyriadInstrumentation, AFMyriadPreferences, AFMyriadRecord, AFMyriadSession, AFNotifyObserver, AFNotifyStatePublisher, AFPowerAssertionManager, AFWatchdogTimer, AWAttentionAwarenessClient, NSData, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSUUID, SFDiagnostics;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMyriadCoordinator : NSObject <AFNotifyObserverDelegate>
{
    unsigned long long _myriadState;	// 8 = 0x8
    unsigned long long _nextState;	// 16 = 0x10
    unsigned long long _previousState;	// 24 = 0x18
    NSData *_previousAdvertisedData;	// 32 = 0x20
    NSMutableDictionary *_replies;	// 40 = 0x28
    NSMutableDictionary *_replyCounts;	// 48 = 0x30
    NSMutableDictionary *_repliesBeforeDecision;	// 56 = 0x38
    NSMutableDictionary *_previousTrumps;	// 64 = 0x40
    NSMutableDictionary *_incomingTrumps;	// 72 = 0x48
    NSMutableDictionary *_multipleContinuations;	// 80 = 0x50
    id _delegate;	// 88 = 0x58
    NSString *_deviceClassName;	// 96 = 0x60
    unsigned char _deviceClass;	// 104 = 0x68
    unsigned char _productType;	// 105 = 0x69
    NSString *_productTypeName;	// 112 = 0x70
    int _deviceAdjust;	// 120 = 0x78
    double _deviceDelay;	// 128 = 0x80
    double _deviceTrumpDelay;	// 136 = 0x88
    double _deviceVTEndtimeDistanceThreshold;	// 144 = 0x90
    double _deviceInEarDelay;	// 152 = 0x98
    double _deviceInEarInterval;	// 160 = 0xa0
    unsigned char _deviceGroup;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_myriadAdvertisementContextQueue;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_myriadAttentionQueue;	// 192 = 0xc0
    NSString *_timerLabel;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_timer;	// 208 = 0xd0
    NSUUID *_eventToken;	// 216 = 0xd8
    AFWatchdogTimer *_overallTimeout;	// 224 = 0xe0
    AFPowerAssertionManager *_powerAssertionManager;	// 232 = 0xe8
    struct __CFNotificationCenter *_center;	// 240 = 0xf0
    AFMyriadRecord *_triggerRecord;	// 248 = 0xf8
    long long _recordType;	// 256 = 0x100
    unsigned long long _voiceTriggerTime;	// 264 = 0x108
    float _delayTarget;	// 272 = 0x110
    float _advertInterval;	// 276 = 0x114
    int _nTimesContinued;	// 280 = 0x118
    int _nTimesExtended;	// 284 = 0x11c
    unsigned char _incomingAdjustment;	// 288 = 0x120
    AFMyriadRecord *_overrideMyriadRecord;	// 296 = 0x128
    int _slowdownMsecs;	// 304 = 0x130
    int _testInducedSlowdownMsecs;	// 308 = 0x134
    AFMyriadRecord *_maxSlowdownRecord;	// 312 = 0x138
    _Bool _BTLEReady;	// 320 = 0x140
    _Bool _inTask;	// 321 = 0x141
    _Bool _inSetupMode;	// 322 = 0x142
    _Bool _ducking;	// 323 = 0x143
    _Bool _stateMachineEncounteredError;	// 324 = 0x144
    _Bool _listenTimerIsRunning;	// 325 = 0x145
    _Bool _coordinationEnabled;	// 326 = 0x146
    _Bool _BLEActivityEnabled;	// 327 = 0x147
    _Bool _clientIsDirectActivating;	// 328 = 0x148
    _Bool _clientIsInEarActivation;	// 329 = 0x149
    _Bool _clientRecentlyLostElection;	// 330 = 0x14a
    _Bool _clientLostDueToTrumping;	// 331 = 0x14b
    _Bool _clientIsListeningAfterRecentWin;	// 332 = 0x14c
    _Bool _clientIsWatchActivation;	// 333 = 0x14d
    _Bool _clientIsWatchTrumpPromote;	// 334 = 0x14e
    _Bool _clientIsRespondingToSlowdown;	// 335 = 0x14f
    _Bool _clientDoneRespondingToSlowdown;	// 336 = 0x150
    _Bool _clientRespondingToCarPlay;	// 337 = 0x151
    _Bool _clientIsDeciding;	// 338 = 0x152
    int _constantGoodness;	// 340 = 0x154
    NSObject<OS_dispatch_source> *_timerSource;	// 344 = 0x158
    NSDateFormatter *_dateFormat;	// 352 = 0x160
    NSUUID *_designatedSelfID;	// 360 = 0x168
    NSDate *_triggerTime;	// 368 = 0x170
    int _nDeltaTs;	// 376 = 0x178
    AFMyriadEmergencyCallPunchout *_callPunchout;	// 384 = 0x180
    unsigned long long _lastDecisionTime;	// 392 = 0x188
    _Bool _lastDecision;	// 400 = 0x190
    unsigned short _lastPHash;	// 402 = 0x192
    double _lastEmergencyAttempt;	// 408 = 0x198
    _Bool _wasEmergency;	// 416 = 0x1a0
    _Bool _suppressLateTrigger;	// 417 = 0x1a1
    _Bool _ignoreInTaskTimer;	// 418 = 0x1a2
    SFDiagnostics *_sfdiagnostics;	// 424 = 0x1a8
    AFWatchdogTimer *_sfDiagnosticsTimer;	// 432 = 0x1b0
    struct {
        _Bool didRequestForBTLEScan;
        _Bool didRequestForBTLEAdvertisement;
    } _heySiriBTLEState;	// 440 = 0x1b8
    struct {
        NSObject<OS_dispatch_source> *waitTimer;
        CDUnknownBlockType waitBlock;
        _Bool isWaitTimerSuspended;
    } _wiproxReadinessTimer;	// 448 = 0x1c0
    struct {
        NSDate *advertTriggerAdvStartTime;
        NSDate *advertTriggerEndTime;
    } _advTiming;	// 472 = 0x1d8
    AFMyriadAdvertisementContextManager *_advContextManager;	// 488 = 0x1e8
    AFMyriadAdvertisementContextRecord *_contextRecord;	// 496 = 0x1f0
    AFMyriadGoodnessScoreEvaluator *_goodnessScoreEvaluator;	// 504 = 0x1f8
    AFMyriadSession *_myriadSession;	// 512 = 0x200
    AFNotifyStatePublisher *_electionBeginPublisher;	// 520 = 0x208
    AFNotifyStatePublisher *_electionWinPublisher;	// 528 = 0x210
    AFNotifyStatePublisher *_electionLossPublisher;	// 536 = 0x218
    AFNotifyStatePublisher *_electionRepostWinDecisionPublisher;	// 544 = 0x220
    AFNotifyObserver *_preferencesChangedNotification;	// 552 = 0x228
    unsigned long long _electionPublisherState;	// 560 = 0x230
    AFMyriadPreferences *_preferences;	// 568 = 0x238
    AWAttentionAwarenessClient *_attentionClient;	// 576 = 0x240
    CDUnknownBlockType _waitForWiproxReadinessToScan;	// 584 = 0x248
    unsigned long long _latestRecordReceivedTime;	// 592 = 0x250
    AFMyriadContext *_currentMyriadContext;	// 600 = 0x258
    AFMyriadInstrumentation *_myriadInstrumentation;	// 608 = 0x260
}

+ (void)clearCurrentCoordinator;	// IMP=0x00000000001076bd
+ (void)didChangeDefaults;	// IMP=0x000000000010769a
+ (id)currentCoordinator;	// IMP=0x0000000000107689
- (void).cxx_destruct;	// IMP=0x000000000011903d
- (void)resetMyriadCoordinator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118f7e
- (void)myriadSession:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118f63
- (id)stateAsString:(unsigned long long)arg1;	// IMP=0x0000000000118f51
- (void)updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;	// IMP=0x0000000000118f3f
- (unsigned char)deviceGroup;	// IMP=0x0000000000118f32
- (unsigned char)deviceClass;	// IMP=0x0000000000118f28
- (void)setupActionWindows;	// IMP=0x0000000000118f16
- (float)deviceTrumpDelay;	// IMP=0x0000000000118f08
- (void)startAdvertisingEmergencySignal;	// IMP=0x0000000000118f02
- (void)startListeningToEmergencySignal;	// IMP=0x0000000000118efc
- (void)injectAdvertisementForTesting:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000118ef6
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x0000000000118dd9
- (void)_signalEmergencyCallHandled;	// IMP=0x0000000000118ceb
- (void)_triggerABCForType:(id)arg1 context:(id)arg2;	// IMP=0x0000000000118ce5
- (void)_leaveBLEDiagnosticMode;	// IMP=0x0000000000118b5d
- (void)_enterBLEDiagnosticMode;	// IMP=0x00000000001187ab
- (void)_waitWiProxAndExecute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118791
- (void)waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;	// IMP=0x00000000001186d6
- (void)_waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118278
- (void)_createWaitWiProxTimer:(long long)arg1 waitBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118063
- (void)_clearWiProxReadinessTimer;	// IMP=0x0000000000117fb5
- (void)_suspendWiProxReadinessTimer;	// IMP=0x0000000000117f0d
- (void)_resumeWiProxReadinessTimer;	// IMP=0x0000000000117eea
- (void)_initializeWiProxReadinessTimer;	// IMP=0x0000000000117e0a
- (void)_ageWedgeFilter;	// IMP=0x0000000000117c9c
- (_Bool)_testAndUpdateWedgeFilter:(id)arg1;	// IMP=0x00000000001179b9
- (unsigned long long)_nextElectionPublisherState;	// IMP=0x000000000011796c
- (void)notifyCurrentDecisionResult;	// IMP=0x0000000000117746
- (void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;	// IMP=0x000000000011740e
- (_Bool)_inTaskTriggerWasTooSoon;	// IMP=0x000000000011702f
- (id)_sortedReplies:(id)arg1;	// IMP=0x0000000000116c6a
- (id)_sortedReplies;	// IMP=0x0000000000116c54
- (_Bool)_isAPhone:(unsigned char)arg1;	// IMP=0x0000000000116c48
- (_Bool)_shouldHandleEmergency;	// IMP=0x0000000000116872
- (_Bool)_shouldContinueFor:(id)arg1;	// IMP=0x000000000011645c
- (id)emptyRecord;	// IMP=0x0000000000116399
- (id)slowdownRecord:(unsigned short)arg1;	// IMP=0x0000000000116226
- (id)responseObject:(unsigned short)arg1;	// IMP=0x000000000011615f
- (id)emergencyHandledRecord;	// IMP=0x000000000011609b
- (id)emergencyRecord;	// IMP=0x0000000000115fd7
- (id)continuationRecord;	// IMP=0x0000000000115f13
- (id)lateSuppressionRecord;	// IMP=0x0000000000115e3c
- (id)directTriggerRecord;	// IMP=0x0000000000115caf
- (id)_phsSetupRecord;	// IMP=0x0000000000115bdb
- (id)voiceTriggerRecord;	// IMP=0x0000000000115a43
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(CDUnknownBlockType)arg4;	// IMP=0x0000000000115118
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x0000000000114f97
- (void)advertiseWith:(id)arg1;	// IMP=0x0000000000114ed0
- (void)_startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x0000000000114e60
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x0000000000114d8d
- (void)_advertiseIndefinite:(id)arg1;	// IMP=0x0000000000114d87
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;	// IMP=0x0000000000114cd1
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;	// IMP=0x0000000000114cb4
- (void)_advertiseSuppressTriggerInOutput;	// IMP=0x0000000000114ace
- (_Bool)_okayToSuppressOnOutput;	// IMP=0x0000000000114aad
- (void)_advertiseSlowdown;	// IMP=0x000000000011475d
- (void)_advertiseTrigger;	// IMP=0x0000000000113f18
- (void)_resetAdvertisementTimings;	// IMP=0x0000000000113ed3
- (void)setupAdvIntervalsInDelay:(float *)arg1 interval:(float *)arg2 withSlowdown:(int)arg3;	// IMP=0x0000000000113b9a
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;	// IMP=0x0000000000113ab4
- (void)_duringNextWindowExecute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000113878
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;	// IMP=0x0000000000113730
- (void)_resetActionWindows;	// IMP=0x00000000001136fe
- (void)_setupActionWindows;	// IMP=0x0000000000113686
- (void)_resetAudioData;	// IMP=0x0000000000113666
- (void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(double)arg1 advertisementDelay:(double)arg2;	// IMP=0x00000000001127c8
- (void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(double)arg1 adverisementDispatchTime:(double)arg2;	// IMP=0x0000000000112414
- (id)_testAndFilterAdvertisementsFromContextCollector:(id)arg1 voiceTriggerEndTime:(double)arg2 advertisementDispatchTime:(double)arg3 advertisement:(id)arg4;	// IMP=0x0000000000111ea4
- (_Bool)_shouldUseContextCollector;	// IMP=0x0000000000111e8a
- (double)_contextFetchDelayForAdvertimentInterval:(double)arg1 advertisementDelay:(double)arg2;	// IMP=0x0000000000111e7c
- (void)_handleStateMachineErrorIfNeeded;	// IMP=0x0000000000111ce5
- (void)_unduck;	// IMP=0x0000000000111c3a
- (void)_stopAdvertisingAndListening;	// IMP=0x0000000000111b2b
- (void)stopListening:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111a80
- (void)stopListening;	// IMP=0x0000000000111a1a
- (void)_stopListening:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111935
- (void)_stopAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111850
- (_Bool)_shouldStopListeningBeforeAdvertising;	// IMP=0x000000000011182e
- (void)startListening:(CDUnknownBlockType)arg1;	// IMP=0x0000000000111783
- (void)startListening;	// IMP=0x000000000011171d
- (void)_startListeningAfterWiProxIsReady:(_Bool)arg1 inState:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001114c6
- (void)_startListening:(CDUnknownBlockType)arg1;	// IMP=0x00000000001113e1
- (void)resetReplies;	// IMP=0x000000000011135d
- (void)_enteringIntoState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x000000000011133c
- (id)_stateAsString:(unsigned long long)arg1;	// IMP=0x000000000011124a
- (id)_stateAsString;	// IMP=0x0000000000111234
- (void)enterState:(unsigned long long)arg1;	// IMP=0x00000000001111c5
- (void)_enterState:(unsigned long long)arg1;	// IMP=0x0000000000110089
- (void)_cancelOverallTimeout;	// IMP=0x000000000010ff5b
- (void)_setOverallTimeout;	// IMP=0x000000000010fd8e
- (void)_cancelTimer;	// IMP=0x000000000010fc68
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;	// IMP=0x000000000010fb3c
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f90e
- (void)_startListenTimer;	// IMP=0x000000000010f8eb
- (void)_createDispatchTimerForEvent:(id)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f855
- (void)_createDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f7fc
- (void)_createDispatchTimerWithTime:(unsigned long long)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f5b2
- (void)_initializeTimer;	// IMP=0x000000000010f4ac
- (void)_clearMyriadSession;	// IMP=0x000000000010f22b
- (void)_createMyriadSessionIfRequired;	// IMP=0x000000000010efe9
- (void)_addElectionAdvertisementDataToMyriadSession:(id)arg1;	// IMP=0x000000000010ec79
- (id)_myriadSession;	// IMP=0x000000000010ec68
- (void)_loseElection;	// IMP=0x000000000010e9d7
- (void)_winElection;	// IMP=0x000000000010e7e0
- (_Bool)_deviceShouldContinue:(id)arg1;	// IMP=0x000000000010e5a4
- (void)instrumentationUpdateBoost:(unsigned char)arg1 value:(unsigned int)arg2;	// IMP=0x000000000010e540
- (void)setupEnabled:(_Bool)arg1;	// IMP=0x000000000010e3a0
- (void)setInTask:(_Bool)arg1;	// IMP=0x000000000010e2a7
- (_Bool)inTask;	// IMP=0x000000000010e1a4
- (void)endTask;	// IMP=0x000000000010e09c
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;	// IMP=0x000000000010dff1
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;	// IMP=0x000000000010dc9e
- (id)_endAdvertisingAnalyticsContext:(_Bool)arg1;	// IMP=0x000000000010c9d1
- (void)endAdvertising;	// IMP=0x000000000010c9bd
- (void)endAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c912
- (void)_endAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c8c1
- (void)endAdvertisingAfterDelay:(float)arg1;	// IMP=0x000000000010c758
- (void)startAdvertisingSlowdown:(unsigned short)arg1;	// IMP=0x000000000010c62a
- (void)startResponseAdvertising:(unsigned short)arg1;	// IMP=0x000000000010c4e6
- (void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1;	// IMP=0x000000000010c0a6
- (void)startAdvertisingFromAlertFiringVoiceTrigger;	// IMP=0x000000000010c092
- (void)startAdvertisingFromInTaskVoiceTrigger;	// IMP=0x000000000010c07e
- (void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1;	// IMP=0x000000000010bfb9
- (void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1;	// IMP=0x000000000010bfa7
- (void)_startAdvertisingFromInTaskVoiceTrigger;	// IMP=0x000000000010bb63
- (void)startAdvertisingEmergency;	// IMP=0x000000000010b8b5
- (void)startAdvertisingEmergencyHandled;	// IMP=0x000000000010b79d
- (void)startAdvertisingFromCarPlayTrigger;	// IMP=0x000000000010b4e3
- (void)startAdvertisingFromInEarTrigger;	// IMP=0x000000000010b218
- (void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1;	// IMP=0x000000000010add8
- (void)startAdvertisingFromOutgoingTrigger;	// IMP=0x000000000010adc4
- (void)startAdvertisingFromDirectTriggerWithContext:(id)arg1;	// IMP=0x000000000010a984
- (void)startAdvertisingFromDirectTrigger;	// IMP=0x000000000010a970
- (void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1;	// IMP=0x000000000010a524
- (void)startWatchAdvertisingFromDirectTrigger;	// IMP=0x000000000010a510
- (void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1;	// IMP=0x0000000000109f26
- (void)startWatchAdvertisingFromVoiceTrigger;	// IMP=0x0000000000109f12
- (void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000001094cf
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1 withContext:(id)arg2;	// IMP=0x0000000000109396
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;	// IMP=0x0000000000109382
- (void)resetStateMachine;	// IMP=0x000000000010936e
- (void)_startAdvertisingFromVoiceTrigger;	// IMP=0x0000000000108f6d
- (void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1;	// IMP=0x0000000000108c1b
- (void)startAdvertisingFromVoiceTrigger;	// IMP=0x0000000000108c07
- (void)startAdvertisingForPHSSetupAfterDelay:(float)arg1 maxInterval:(float)arg2;	// IMP=0x0000000000108b05
- (void)preheatWiProx;	// IMP=0x00000000001089c5
- (void)_setMyriadContext:(id)arg1;	// IMP=0x0000000000108992
- (void)_initDeviceClassAndAdjustments;	// IMP=0x0000000000108587
- (void)_readDefaults;	// IMP=0x00000000001082d7
- (void)readDefaults;	// IMP=0x0000000000108271
- (void)dealloc;	// IMP=0x000000000010821a
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001076da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
