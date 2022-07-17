//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EKFrozenReminderReminder
{
}

+ (Class)meltedClass;	// IMP=0x00000000000083f2
- (_Bool)defaultAlarmWasDeleted;	// IMP=0x000000000000b81a
- (_Bool)defaultAlarmRemoved;	// IMP=0x000000000000b812
- (id)ekExceptionDates;	// IMP=0x000000000000b80a
- (id)detachedItems;	// IMP=0x000000000000b802
- (id)attachmentsSet;	// IMP=0x000000000000b7fa
- (id)travelStartLocation;	// IMP=0x000000000000b7f2
- (id)originalItem;	// IMP=0x000000000000b7ea
- (id)selfAttendee;	// IMP=0x000000000000b7e2
- (id)organizer;	// IMP=0x000000000000b7da
- (id)clientLocation;	// IMP=0x000000000000b7d2
- (id)recurrenceRulesSet;	// IMP=0x000000000000b522
- (id)attendeesRaw;	// IMP=0x000000000000b51a
- (_Bool)hasNotes;	// IMP=0x000000000000b4d2
- (_Bool)hasAttendees;	// IMP=0x000000000000b4ca
- (_Bool)hasRecurrenceRules;	// IMP=0x000000000000b482
- (id)structuredLocationWithoutPrediction;	// IMP=0x000000000000b470
- (id)uniqueID;	// IMP=0x000000000000b45e
- (id)UUID;	// IMP=0x000000000000b44c
- (id)actionString;	// IMP=0x000000000000b341
- (id)appLinkData;	// IMP=0x000000000000b256
- (unsigned long long)priority;	// IMP=0x000000000000b15e
- (id)completionDate;	// IMP=0x000000000000b0a8
- (id)timeZone;	// IMP=0x000000000000b0a0
- (id)dueDateComponents;	// IMP=0x000000000000afa2
- (id)startDateComponents;	// IMP=0x000000000000aea4
- (id)alarms;	// IMP=0x000000000000a72f
- (id)allAlarmsSet;	// IMP=0x000000000000a71d
- (id)creationDate;	// IMP=0x000000000000a667
- (id)lastModifiedDate;	// IMP=0x000000000000a5b1
- (id)URLString;	// IMP=0x000000000000a4d1
- (id)notes;	// IMP=0x000000000000a41b
- (id)structuredLocation;	// IMP=0x000000000000a3f3
- (id)title;	// IMP=0x000000000000a33d
- (id)calendarItemExternalIdentifier;	// IMP=0x000000000000a287
- (id)calendar;	// IMP=0x000000000000a178
- (id)calendarItemIdentifier;	// IMP=0x000000000000a071
- (void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2;	// IMP=0x00000000000097c2
- (id)_copyToNewList:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009575
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000093b8
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008415
- (id)uniqueIdentifier;	// IMP=0x0000000000008403
- (id)remObjectID;	// IMP=0x000000000000830a
- (id)_reminder;	// IMP=0x00000000000082f2
- (id)initNewReminderInStore:(id)arg1;	// IMP=0x000000000000812a

@end
