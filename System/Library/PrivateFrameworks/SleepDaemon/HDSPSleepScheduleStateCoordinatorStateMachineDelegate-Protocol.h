//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPStateMachineDelegate-Protocol.h>

@class HDSPSleepScheduleStateCoordinatorStateMachineContext;

@protocol HDSPSleepScheduleStateCoordinatorStateMachineDelegate <HKSPStateMachineDelegate>
- (void)snoozeFireDateShouldBeReset;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 context:(HDSPSleepScheduleStateCoordinatorStateMachineContext *)arg3;
@end

