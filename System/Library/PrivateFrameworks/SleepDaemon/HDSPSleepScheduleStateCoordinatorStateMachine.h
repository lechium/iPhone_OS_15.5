//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider-Protocol.h>

@class HDSPSleepScheduleStateCoordinatorBedtimeState, HDSPSleepScheduleStateCoordinatorDelayedWakeUpState, HDSPSleepScheduleStateCoordinatorDisabledState, HDSPSleepScheduleStateCoordinatorInitialState, HDSPSleepScheduleStateCoordinatorWakeUpState, HDSPSleepScheduleStateCoordinatorWindDownState, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, NSString;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>
{
    HDSPSleepScheduleStateCoordinatorDisabledState *_disabledState;	// 8 = 0x8
    HDSPSleepScheduleStateCoordinatorWakeUpState *_wakeUpState;	// 16 = 0x10
    HDSPSleepScheduleStateCoordinatorBedtimeState *_bedtimeState;	// 24 = 0x18
    HDSPSleepScheduleStateCoordinatorWindDownState *_windDownState;	// 32 = 0x20
    HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *_delayedWakeUpState;	// 40 = 0x28
    HDSPSleepScheduleStateCoordinatorInitialState *_initialState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006285b
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorInitialState *initialState; // @synthesize initialState=_initialState;
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *delayedWakeUpState; // @synthesize delayedWakeUpState=_delayedWakeUpState;
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWindDownState *windDownState; // @synthesize windDownState=_windDownState;
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorBedtimeState *bedtimeState; // @synthesize bedtimeState=_bedtimeState;
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWakeUpState *wakeUpState; // @synthesize wakeUpState=_wakeUpState;
@property(readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDisabledState *disabledState; // @synthesize disabledState=_disabledState;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) _Bool sleepFeaturesEnabled;
@property(readonly, nonatomic) _Bool isAppleWatch;
- (void)snoozeFireDateShouldBeReset;	// IMP=0x000000000006264f
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x000000000006258b
- (void)scheduleModelChanged:(id)arg1;	// IMP=0x0000000000062519
- (void)timeZoneChange;	// IMP=0x00000000000624dc
- (void)significantTimeChange;	// IMP=0x000000000006249f
- (void)wakeUpConfirmed;	// IMP=0x0000000000062462
- (void)wakeTimeReached;	// IMP=0x0000000000062425
- (void)bedtimeReached;	// IMP=0x00000000000623e8
- (void)windDownReached;	// IMP=0x00000000000623ab
- (unsigned long long)loggingCategory;	// IMP=0x00000000000623a0
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000062067

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPSleepScheduleStateCoordinatorStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end
