//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTLogFacility, NDTMessaging;

@interface NEKRPCEndpoint : NSObject
{
    NDTMessaging *_messaging;	// 8 = 0x8
    NDTLogFacility *_messageLogging;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002a764
- (void)_recvSetReminderKitAlarmSnoozeEndpoint:(id)arg1;	// IMP=0x0010000000029e2a
- (void)_recvSetEventKitAlarmSnoozeEndpoint:(id)arg1;	// IMP=0x00100000000293b3
- (_Bool)_calendarItem:(id)arg1 snoozeAlarmID:(id)arg2 withTimeIntervalFromNow:(double)arg3;	// IMP=0x001000000002918c
- (void)_recvDeleteEventEndpoint:(id)arg1;	// IMP=0x001000000002881d
- (void)_recvSetReminderKitReminderCompletedEndpoint:(id)arg1;	// IMP=0x00100000000282fa
- (void)_recvSetEventKitReminderCompletedEndpoint:(id)arg1;	// IMP=0x0010000000027779
- (void)_recvSetParticipantStatusEndpoint:(id)arg1;	// IMP=0x00100000000272e2
- (void)sendSetEventAlarmSnooze:(double)arg1 calendarName:(id)arg2 storeId:(id)arg3 eventId:(id)arg4 alarmIdentifier:(id)arg5;	// IMP=0x00100000000272dc
- (void)sendSetReminderAlarmSnooze:(double)arg1 calendarName:(id)arg2 title:(id)arg3 externalIdentifier:(id)arg4 alarmIdentifier:(id)arg5;	// IMP=0x00100000000272d6
- (void)sendSetCompleted:(_Bool)arg1 calendarName:(id)arg2 title:(id)arg3 externalIdentifier:(id)arg4;	// IMP=0x00100000000272d0
- (void)sendDeleteEventId:(id)arg1 title:(id)arg2 start:(double)arg3 inCalendarId:(id)arg4 title:(id)arg5 inSource:(id)arg6 span:(long long)arg7;	// IMP=0x00100000000272ca
- (void)sendSetParticipantStatus:(long long)arg1 span:(long long)arg2 storeId:(id)arg3 eventId:(id)arg4;	// IMP=0x00100000000272c4
- (_Bool)_disableMutation;	// IMP=0x001000000002728d
- (id)initWithReminderKitEnabled:(_Bool)arg1;	// IMP=0x0010000000026f68

@end

