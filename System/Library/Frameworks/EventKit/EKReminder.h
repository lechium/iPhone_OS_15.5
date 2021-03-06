//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKObjectID, NSDate, NSDateComponents, NSTimeZone;

@interface EKReminder
{
    NSDateComponents *_startDateComponents;	// 8 = 0x8
    NSDateComponents *_dueDateComponents;	// 16 = 0x10
    EKObjectID *_parentID;	// 24 = 0x18
}

+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;	// IMP=0x00000000000718d1
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;	// IMP=0x0000000000070bcf
+ (id)reminderWithEventStore:(id)arg1;	// IMP=0x000000000006fdfc
+ (id)knownSingleValueKeysForComparison;	// IMP=0x000000000006fd00
+ (Class)frozenClass;	// IMP=0x000000000006fcef
- (void).cxx_destruct;	// IMP=0x00000000000719d0
@property(retain, nonatomic) EKObjectID *parentID; // @synthesize parentID=_parentID;
@property(copy, nonatomic) NSDateComponents *dueDateComponents; // @synthesize dueDateComponents=_dueDateComponents;
@property(copy, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
- (id)startDateForRecurrence;	// IMP=0x00000000000718bf
- (id)bestDisplayAlarm;	// IMP=0x00000000000710cc
- (_Bool)_reset;	// IMP=0x0000000000070a96
- (id)_generateNewUniqueID;	// IMP=0x0000000000070a2a
- (_Bool)validate:(id *)arg1;	// IMP=0x0000000000070794
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;	// IMP=0x000000000007045b
- (void)clearParentID;	// IMP=0x0000000000070447
@property(nonatomic, getter=isCompleted) _Bool completed;
- (id)description;	// IMP=0x0000000000070265
- (void)setDisplayOrder:(unsigned long long)arg1;	// IMP=0x000000000007020b
- (unsigned long long)displayOrder;	// IMP=0x00000000000701c0
- (void)setFirstAlertDate:(id)arg1;	// IMP=0x00000000000701a7
- (id)firstAlertDate;	// IMP=0x000000000007018e
@property(copy, nonatomic) NSDate *completionDate;
- (id)externalURI;	// IMP=0x000000000006ff4c
- (id)reminderIdentifier;	// IMP=0x000000000006ff3a
- (id)init;	// IMP=0x000000000006ff2c
- (unsigned long long)entityType;	// IMP=0x000000000006ff21
- (id)initWithPersistentObject:(id)arg1;	// IMP=0x000000000006fe4f
- (void)forceUpdateFrozenCalendar:(id)arg1;	// IMP=0x000000000000b822
- (_Bool)refresh;	// IMP=0x00000000000cdcf0
- (void)rollback;	// IMP=0x00000000000cdca8
- (void)reset;	// IMP=0x00000000000cdc60
- (_Bool)isAllDay;	// IMP=0x00000000000cdc4e
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1;	// IMP=0x00000000000cd9ed
- (void)setAllDay:(_Bool)arg1;	// IMP=0x00000000000cd8dc
- (void)setStartTimeZone:(id)arg1;	// IMP=0x00000000000cd8ca
- (id)startTimeZone;	// IMP=0x00000000000cd8b8
- (id)timeZone;	// IMP=0x00000000000cd83d
- (void)setTimeZone:(id)arg1;	// IMP=0x00000000000cd5ea
- (void)setDueDate:(id)arg1;	// IMP=0x00000000000ccfdc
- (id)dueDate;	// IMP=0x00000000000ccef4
- (_Bool)dueDateAllDay;	// IMP=0x00000000000cce99
@property(readonly, nonatomic) NSTimeZone *dueDateTimeZone;
- (id)startDateComponentsRaw;	// IMP=0x00000000000cce2d
- (void)setStartDateAllDay:(_Bool)arg1;	// IMP=0x00000000000cc847
- (_Bool)startDateAllDay;	// IMP=0x00000000000cc835
- (void)setStartDateTimeZone:(id)arg1;	// IMP=0x00000000000cc82f
- (id)startDateTimeZone;	// IMP=0x00000000000cc81d

// Remaining properties
@property(nonatomic) unsigned long long priority; // @dynamic priority;

@end

