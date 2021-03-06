//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>
#import <MobileTimer/MTSleepCoordinatorStateMachineDelegate-Protocol.h>
#import <MobileTimer/MTSleepCoordinatorStateMachineInfoProvider-Protocol.h>
#import <MobileTimer/MTSource-Protocol.h>
#import <MobileTimer/MTTimeObserver-Protocol.h>

@class MTAlarm, MTObserverStore, MTSleepCoordinatorStateMachine, MTSleepModeMonitor, MTXPCScheduler, NAFuture, NSDate, NSString;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepCoordinator : NSObject <MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate>
{
    MTSleepCoordinatorStateMachine *_stateMachine;	// 8 = 0x8
    MTAlarm *_cachedSleepAlarm;	// 16 = 0x10
    id <NAScheduler> _serializer;	// 24 = 0x18
    NAFuture *_sleepStateResolved;	// 32 = 0x20
    MTObserverStore *_observers;	// 40 = 0x28
    id <MTAlarmStorage> _alarmStorage;	// 48 = 0x30
    MTXPCScheduler *_alarmTimeoutScheduler;	// 56 = 0x38
    MTSleepModeMonitor *_sleepModeMonitor;	// 64 = 0x40
    CDUnknownBlockType _currentDateProvider;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000042eba
@property(copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor; // @synthesize sleepModeMonitor=_sleepModeMonitor;
@property(retain, nonatomic) MTXPCScheduler *alarmTimeoutScheduler; // @synthesize alarmTimeoutScheduler=_alarmTimeoutScheduler;
@property(copy, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) MTObserverStore *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *sleepStateResolved; // @synthesize sleepStateResolved=_sleepStateResolved;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTAlarm *cachedSleepAlarm; // @synthesize cachedSleepAlarm=_cachedSleepAlarm;
@property(retain, nonatomic) MTSleepCoordinatorStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (id)gatherDiagnostics;	// IMP=0x0000000000042d44
- (void)printDiagnostics;	// IMP=0x0000000000042c38
- (id)sourceIdentifier;	// IMP=0x0000000000042c2b
- (void)pairedDevicePreferencesChanged:(id)arg1;	// IMP=0x0000000000042b88
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042a77
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;	// IMP=0x0000000000042a5b
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000429b8
- (void)handleSleepSessionEndedForAlarm:(id)arg1 date:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00000000000427ee
- (void)handleDismissForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x0000000000042572
- (void)handleSnoozeForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x00000000000423a2
- (void)handleWakeUpAlarmForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x000000000004216c
- (void)handleWakeUpTimeForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x0000000000041f09
- (void)handleBedtimeForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x0000000000041ca6
- (void)handleSnoozeOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x0000000000041ae7
- (void)handleConfirmationOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x00000000000418b1
- (void)handleBedtimeReminderForAlarm:(id)arg1 date:(id)arg2;	// IMP=0x00000000000416f2
- (void)sleepSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;	// IMP=0x0000000000041613
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;	// IMP=0x0000000000041499
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;	// IMP=0x00000000000413f0
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;	// IMP=0x00000000000413ea
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;	// IMP=0x00000000000412d7
- (void)notifyObserversForSleepAlarmChangeIfNecessary:(id)arg1;	// IMP=0x0000000000041066
- (void)_notifyObserversForSleepAlarmChange:(id)arg1;	// IMP=0x0000000000040f7a
- (void)notifyObserversForSleepAlarmChange:(id)arg1;	// IMP=0x0000000000040ec7
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;	// IMP=0x0000000000040e44
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;	// IMP=0x0000000000040d5e
- (void)source:(id)arg1 didAddAlarms:(id)arg2;	// IMP=0x0000000000040c57
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000040c41
- (void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;	// IMP=0x0000000000040b93
- (void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;	// IMP=0x0000000000040a2d
- (void)stateMachineUserWokeUp:(id)arg1;	// IMP=0x0000000000040878
- (void)stateMachineUserWentToBed:(id)arg1;	// IMP=0x00000000000406c3
@property(readonly, nonatomic) unsigned long long sleepTimeOutMinutes;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm;
- (_Bool)isSleepModeOn;	// IMP=0x000000000004063a
- (_Bool)isUserAsleep;	// IMP=0x000000000004044e
- (void)updateSleepStateWithSleepAlarm:(id)arg1;	// IMP=0x0000000000040346
- (void)updateSleepState;	// IMP=0x00000000000402f6
- (id)initWithAlarmStorage:(id)arg1 currentDateProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000000400f5
- (id)initWithAlarmStorage:(id)arg1;	// IMP=0x0000000000040093

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

