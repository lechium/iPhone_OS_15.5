//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/MTSleepCoordinatorStateMachineEventHandler-Protocol.h>

@class NSString;

@interface MTSleepCoordinatorStateMachineState <MTSleepCoordinatorStateMachineEventHandler>
{
}

- (void)wakeUpAlarmTimedOut;	// IMP=0x000000000001641b
- (void)userWakeUpAlarmFired;	// IMP=0x00000000000162d5
- (void)userWakeTimeReached:(id)arg1;	// IMP=0x000000000001614a
- (void)userBedTimeReached:(id)arg1;	// IMP=0x00000000000160a7
- (void)userWentToBed;	// IMP=0x000000000001601b
- (void)userWokeUp;	// IMP=0x0000000000015f8f
- (id)determineNextStateForSleepAlarm:(id)arg1;	// IMP=0x00000000000154de
- (void)updateStateForSleepAlarm:(id)arg1;	// IMP=0x000000000001546e
- (void)updateState;	// IMP=0x00000000000153ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

