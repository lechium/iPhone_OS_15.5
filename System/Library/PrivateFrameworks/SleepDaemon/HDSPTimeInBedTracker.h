//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPSleepScheduleStateObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepTracker-Protocol.h>

@class HDSPEnvironment, HKSPSleepScheduleModel, NSString;
@protocol HDSPSleepTrackerDelegate, HKSPQueueBackedScheduler;

@interface HDSPTimeInBedTracker : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepTracker>
{
    HDSPEnvironment *_environment;	// 8 = 0x8
    id <HDSPSleepTrackerDelegate> _delegate;	// 16 = 0x10
    id <HKSPQueueBackedScheduler> _sleepIntervalScheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000007df8
@property(readonly, nonatomic) id <HKSPQueueBackedScheduler> sleepIntervalScheduler; // @synthesize sleepIntervalScheduler=_sleepIntervalScheduler;
@property(nonatomic) __weak id <HDSPSleepTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)processedSessionForSession:(id)arg1;	// IMP=0x00000000000079d0
- (id)_computeSessionMetadataForInterval:(id)arg1;	// IMP=0x000000000000749b
- (id)computeSleepIntervalsForInterval:(id)arg1;	// IMP=0x0000000000007392
- (id)_computeSleepSessionStartBeforeDate:(id)arg1;	// IMP=0x0000000000007152
- (id)_createSleepSessionWithEndDate:(id)arg1 endReason:(unsigned long long)arg2;	// IMP=0x0000000000006f9e
- (void)_endSleepSessionWithReason:(unsigned long long)arg1;	// IMP=0x0000000000006df4
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x0000000000006c58
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) _Bool isTimeInBedTrackingEnabled;
- (void)environmentWillBecomeReady:(id)arg1;	// IMP=0x00000000000069e0
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000000691f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

