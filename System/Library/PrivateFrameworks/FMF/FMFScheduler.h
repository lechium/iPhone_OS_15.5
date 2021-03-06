//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMXPCTimer, NSArray;
@protocol FMFSchedulerDelegate;

@interface FMFScheduler : NSObject
{
    id <FMFSchedulerDelegate> _delegate;	// 8 = 0x8
    NSArray *_schedules;	// 16 = 0x10
    FMXPCTimer *_timer;	// 24 = 0x18
}

+ (id)_nextStartOrEndDateFrom:(id)arg1 forSchedules:(id)arg2;	// IMP=0x0000000000028698
- (void).cxx_destruct;	// IMP=0x0000000000028a29
@property(retain, nonatomic) FMXPCTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *schedules; // @synthesize schedules=_schedules;
@property(readonly, nonatomic) id <FMFSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_significantTimeChange:(id)arg1;	// IMP=0x00000000000289b0
- (void)_registerForSignificantTimeChangeNotifications;	// IMP=0x00000000000287e4
- (void)_updateScheduleTimer;	// IMP=0x0000000000028461
- (void)scheduleTimerFired;	// IMP=0x000000000002834b
@property(readonly, nonatomic) NSArray *currentSchedules;
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000028184

@end

