//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar, NSDate, NSLocale, NSTimeZone;

@interface _NSAutoCalendar
{
    NSCalendar *cal;	// 8 = 0x8
    NSLocale *changedLocale;	// 16 = 0x10
    NSTimeZone *changedTimeZone;	// 24 = 0x18
    unsigned long long changedFirstWeekday;	// 32 = 0x20
    unsigned long long changedMinimumDaysinFirstWeek;	// 40 = 0x28
    NSDate *changedGregorianStartDate;	// 48 = 0x30
    unsigned long long combinedNoteCount;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
}

@end

