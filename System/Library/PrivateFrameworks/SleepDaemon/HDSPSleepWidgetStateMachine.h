//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPSleepWidgetStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepWidgetStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepWidgetStateMachineInfoProvider-Protocol.h>

@class HDSPSleepWidgetBedtimeInProgressState, HDSPSleepWidgetBedtimeState, HDSPSleepWidgetDisabledState, HDSPSleepWidgetGreetingState, HDSPSleepWidgetNotOnboardedState, HDSPSleepWidgetUpcomingState, HDSPSleepWidgetWaitingState, HDSPSleepWidgetWindDownState, HKSPSleepScheduleModel, NSDate, NSString;
@protocol HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, NAScheduler;

@interface HDSPSleepWidgetStateMachine : HKSPPersistentStateMachine <HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineEventHandler>
{
    HDSPSleepWidgetDisabledState *_disabledState;	// 8 = 0x8
    HDSPSleepWidgetWaitingState *_waitingState;	// 16 = 0x10
    HDSPSleepWidgetUpcomingState *_upcomingState;	// 24 = 0x18
    HDSPSleepWidgetWindDownState *_windDownState;	// 32 = 0x20
    HDSPSleepWidgetBedtimeState *_bedtimeState;	// 40 = 0x28
    HDSPSleepWidgetBedtimeInProgressState *_bedtimeInProgressState;	// 48 = 0x30
    HDSPSleepWidgetGreetingState *_greetingState;	// 56 = 0x38
    HDSPSleepWidgetNotOnboardedState *_notOnboardedState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000750b9
@property(readonly, nonatomic) HDSPSleepWidgetNotOnboardedState *notOnboardedState; // @synthesize notOnboardedState=_notOnboardedState;
@property(readonly, nonatomic) HDSPSleepWidgetGreetingState *greetingState; // @synthesize greetingState=_greetingState;
@property(readonly, nonatomic) HDSPSleepWidgetBedtimeInProgressState *bedtimeInProgressState; // @synthesize bedtimeInProgressState=_bedtimeInProgressState;
@property(readonly, nonatomic) HDSPSleepWidgetBedtimeState *bedtimeState; // @synthesize bedtimeState=_bedtimeState;
@property(readonly, nonatomic) HDSPSleepWidgetWindDownState *windDownState; // @synthesize windDownState=_windDownState;
@property(readonly, nonatomic) HDSPSleepWidgetUpcomingState *upcomingState; // @synthesize upcomingState=_upcomingState;
@property(readonly, nonatomic) HDSPSleepWidgetWaitingState *waitingState; // @synthesize waitingState=_waitingState;
@property(readonly, nonatomic) HDSPSleepWidgetDisabledState *disabledState; // @synthesize disabledState=_disabledState;
@property(readonly, nonatomic) _Bool isOnboarded;
@property(readonly, nonatomic) _Bool inUserRequestedSleepMode;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)greetingExpiredEventDue;	// IMP=0x0000000000074e88
- (void)bedtimeExpiredEventDue;	// IMP=0x0000000000074e4b
- (void)upcomingChangeEventDue;	// IMP=0x0000000000074e0e
- (void)unscheduleWidgetStateChange;	// IMP=0x0000000000074de0
- (void)scheduleWidgetStateChange;	// IMP=0x0000000000074db2
- (void)sleepWidgetShouldReload;	// IMP=0x0000000000074d84
- (void)sleepWidgetStateDidChange:(long long)arg1 previousState:(long long)arg2;	// IMP=0x0000000000074d11
- (void)significantTimeChangeOccurred;	// IMP=0x0000000000074cd4
- (void)sleepScheduleModelDidChange:(id)arg1;	// IMP=0x0000000000074c62
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;	// IMP=0x0000000000074c16
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(_Bool)arg2;	// IMP=0x0000000000074bc5
- (unsigned long long)loggingCategory;	// IMP=0x0000000000074bba
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;	// IMP=0x00000000000747f7

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPSleepWidgetStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPSleepWidgetStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end

