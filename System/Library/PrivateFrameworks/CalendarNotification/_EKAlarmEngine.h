//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CLLocationManagerDelegate-Protocol.h>

@class EKTimedEventStorePurger, NSDate, NSDateFormatter, NSString, NSTimer, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate>
{
    int _lastDBSequence;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDate *_nextFireDate;	// 24 = 0x18
    NSDate *_lastCheckpoint;	// 32 = 0x20
    _Bool _populating;	// 40 = 0x28
    NSDate *_populateStart;	// 48 = 0x30
    NSTimer *_syncTimer;	// 56 = 0x38
    _Bool _pendingChanges;	// 64 = 0x40
    _Bool _needsAlarmTablePopulation;	// 65 = 0x41
    NSDateFormatter *_dateFormatter;	// 72 = 0x48
    RTRoutineManager *_routineManager;	// 80 = 0x50
    NSDate *_tomorrow;	// 88 = 0x58
    _Bool _shouldUpdateWithForceForAlarmTable;	// 96 = 0x60
    EKTimedEventStorePurger *_timedEventStorePurger;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x000000000003ed69
+ (id)requestedDarwinNotifications;	// IMP=0x000000000003ec8d
- (void).cxx_destruct;	// IMP=0x000000000004410b
- (void)_calendarNotificationSettingChanged;	// IMP=0x0000000000044081
- (void)_timeDidChangeSignificantly;	// IMP=0x0000000000043fa5
- (void)_syncDidEnd;	// IMP=0x0000000000043eff
- (void)_syncDidStart;	// IMP=0x0000000000043e7a
- (void)_syncTimerFired:(id)arg1;	// IMP=0x0000000000043df5
- (void)_killSyncTimer;	// IMP=0x0000000000043dc3
- (void)_resetSyncTimer;	// IMP=0x0000000000043ca3
- (_Bool)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;	// IMP=0x0000000000043bff
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;	// IMP=0x0000000000043b18
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;	// IMP=0x0000000000043a31
- (void)_timerFired;	// IMP=0x0000000000041eb0
- (void)_notifyAlarmsFired:(id)arg1;	// IMP=0x0000000000041cd6
- (void)_installTimerWithFireDate:(id)arg1;	// IMP=0x00000000000419be
- (void)_rescheduleTimer;	// IMP=0x00000000000413f8
- (id)_dateFormatter;	// IMP=0x0000000000041391
- (void)_killTimer;	// IMP=0x0000000000041377
- (void)_populateFinished;	// IMP=0x00000000000411bd
- (_Bool)_populateAlarmTable:(id)arg1;	// IMP=0x0000000000040708
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;	// IMP=0x000000000003fdef
- (void)_simulatedOffsetChanged:(id)arg1;	// IMP=0x000000000003fd65
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x000000000003fcdb
- (_Bool)_haveAlarmsChanged:(id)arg1;	// IMP=0x000000000003fb17
- (void)_databaseChanged;	// IMP=0x000000000003fa90
- (void)_updateWithForceForAlarmTable:(_Bool)arg1;	// IMP=0x000000000003f81c
- (id)_eventStore;	// IMP=0x000000000003f801
- (_Bool)_isDataProtected;	// IMP=0x000000000003f7c6
- (void)_protectedDataDidBecomeAvailable;	// IMP=0x000000000003f6de
- (void)receivedAlarmNamed:(id)arg1;	// IMP=0x000000000003f416
- (void)didRegisterForAlarms;	// IMP=0x000000000003f32c
- (void)handleDarwinNotification:(id)arg1;	// IMP=0x000000000003f1b6
- (void)start;	// IMP=0x000000000003ef93
- (void)dealloc;	// IMP=0x000000000003ee8a
- (id)init;	// IMP=0x000000000003edd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
