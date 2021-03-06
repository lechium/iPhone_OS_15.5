//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPStateMachineInfoProvider-Protocol.h>

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate;

@protocol HDSPWakeDetectionStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property(readonly, nonatomic) _Bool inDetectionWindow;
@property(readonly, nonatomic) _Bool isWatch;
@property(readonly, nonatomic) _Bool sleepModeIsOff;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property(readonly, nonatomic) NSDate *currentDate;
- (NSDate *)upcomingStartDetectionDateAfterDate:(NSDate *)arg1;
- (NSDate *)nextWakeUpAfterDate:(NSDate *)arg1;
@end

