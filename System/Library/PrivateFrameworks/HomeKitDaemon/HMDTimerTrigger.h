//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, NSTimer;

@interface HMDTimerTrigger
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDate *currentFireDate;	// 16 = 0x10
    NSDate *_currentFireDate;	// 24 = 0x18
    NSDate *_fireDate;	// 32 = 0x20
    NSTimeZone *_fireDateTimeZone;	// 40 = 0x28
    NSString *_significantEvent;	// 48 = 0x30
    NSDateComponents *_significantEventOffset;	// 56 = 0x38
    NSDateComponents *_fireRepeatInterval;	// 64 = 0x40
    NSArray *_recurrences;	// 72 = 0x48
    NSString *_timerID;	// 80 = 0x50
    NSTimer *_timer;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029d737
+ (id)getCalendar:(id)arg1;	// IMP=0x000000000029d6b3
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;	// IMP=0x000000000029d546
+ (id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3;	// IMP=0x000000000029ca8a
+ (id)validateRecurrences:(id)arg1;	// IMP=0x000000000029c490
+ (id)validateSignificantOffset:(id)arg1;	// IMP=0x000000000029c488
+ (id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3;	// IMP=0x000000000029c2e4
+ (id)logCategory;	// IMP=0x000000000029c2b4
- (void).cxx_destruct;	// IMP=0x000000000029b536
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)timerFired:(id)arg1;	// IMP=0x000000000029b2bc
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000029b2b6
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000029b17b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029af90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029ac9f
- (id)getFireInterval;	// IMP=0x000000000029abc0
- (id)getCalendar;	// IMP=0x000000000029ab5d
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;	// IMP=0x000000000029a07e
- (void)_reactiveTriggerAfterDelay;	// IMP=0x0000000000299f98
- (void)_timerTriggered;	// IMP=0x0000000000299deb
- (_Bool)_shouldExecuteActionSet;	// IMP=0x000000000029999e
- (id)_nextSignificantEventFireDate;	// IMP=0x0000000000298ef2
- (id)_nextFireDate;	// IMP=0x0000000000298d49
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000298c33
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x0000000000298bc1
- (void)_disableTimerOffReactivationFailure;	// IMP=0x0000000000298b8f
- (_Bool)_reactivateSignificantEventTrigger;	// IMP=0x00000000002989cd
- (_Bool)_reactivateFireDateTrigger;	// IMP=0x00000000002987aa
- (_Bool)_reactivateTrigger;	// IMP=0x000000000029874e
- (id)_serializeForAdd;	// IMP=0x000000000029833a
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000002982aa
- (id)emptyModelObject;	// IMP=0x00000000002981f1
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000297f10
- (void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x0000000000297e92
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000297a44
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;	// IMP=0x000000000029785f
- (void)_registerForMessages;	// IMP=0x00000000002976d7
- (void)_stopTimer;	// IMP=0x0000000000297646
- (void)_startTimer:(id)arg1;	// IMP=0x00000000002972af
- (void)_startTimerWithSignificantEventDate:(id)arg1;	// IMP=0x000000000029729d
- (void)_startTimerWithFireDate:(id)arg1;	// IMP=0x000000000029701d
- (void)nsTimerTriggered:(id)arg1;	// IMP=0x0000000000296f47
- (void)timerTriggered;	// IMP=0x0000000000296de3
- (void)dealloc;	// IMP=0x0000000000296d1d
- (void)completeConfiguration;	// IMP=0x0000000000296cac
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x000000000029696b
- (void)setCurrentFireDate:(id)arg1;	// IMP=0x0000000000296917
@property(readonly) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
- (unsigned long long)triggerType;	// IMP=0x00000000002968c6
- (id)dumpState;	// IMP=0x000000000029660e
- (id)description;	// IMP=0x0000000000296424
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000296240
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000029616e

@end
