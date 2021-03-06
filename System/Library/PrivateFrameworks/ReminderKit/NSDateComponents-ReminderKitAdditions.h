//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (ReminderKitAdditions)
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(_Bool)arg7 timeZone:(id)arg8;	// IMP=0x0000000000037a5f
+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x0000000000037a4f
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;	// IMP=0x00000000000377d0
+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(_Bool)arg3;	// IMP=0x0000000000037662
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00000000000374f7
- (id)rem_stringRepresentation;	// IMP=0x00000000000387c4
- (long long)rem_compare:(id)arg1;	// IMP=0x0000000000038266
- (_Bool)rem_isWeekendDateComponents;	// IMP=0x00000000000380a8
- (_Bool)rem_isAllDayDateComponents;	// IMP=0x0000000000038037
- (_Bool)rem_isValidDateComponents;	// IMP=0x0000000000037ee3
- (id)rem_allDayDateComponents;	// IMP=0x0000000000037e69
- (id)rem_strippingTimeZone;	// IMP=0x0000000000037e33
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;	// IMP=0x0000000000037d05
- (id)rem_gregorianEquivalent;	// IMP=0x0000000000037b6f
@end

