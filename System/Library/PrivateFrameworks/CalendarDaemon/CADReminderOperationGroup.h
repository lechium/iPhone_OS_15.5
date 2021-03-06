//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADReminderInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADReminderOperationGroup <CADReminderInterface>
{
}

+ (_Bool)requiresReminderAccess;	// IMP=0x0000000000031bd3
+ (_Bool)requiresEventAccess;	// IMP=0x0000000000031bcb
+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x0000000000031bc3
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032650
- (void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000322ff
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000320cc
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;	// IMP=0x0000000000031f4b
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031bdb

@end

