//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSLocale, NSString, NSTimeZone;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)calendarWithIdentifier:(id)arg1;	// IMP=0x000000000012e3ff
+ (id)currentCalendar;	// IMP=0x000000000012e3cc
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012e3c5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e036
+ (void)initialize;	// IMP=0x000000000012dff5
+ (id)autoupdatingCurrentCalendar;	// IMP=0x000000000012dfcc
- (unsigned char)_diffComponents:(double)arg1:(double)arg2:(unsigned long long)arg3:(const char *)arg4:(struct __va_list_tag [1])arg5;	// IMP=0x0000000000131880
- (unsigned char)_addComponents:(double *)arg1:(unsigned long long)arg2:(const char *)arg3:(struct __va_list_tag [1])arg4;	// IMP=0x000000000013154c
- (unsigned char)_decomposeAbsoluteTime:(double)arg1:(const char *)arg2:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000131128
- (unsigned char)_composeAbsoluteTime:(double *)arg1:(const char *)arg2:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000130e17
- (unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double *)arg2 interval:(double *)arg3 forAT:(double)arg4;	// IMP=0x0000000000130d48
- (long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;	// IMP=0x0000000000130ce5
- (CDStruct_912cb5d2)_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;	// IMP=0x0000000000130c7e
- (CDStruct_912cb5d2)_maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x0000000000130c4f
- (CDStruct_912cb5d2)_minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x0000000000130c20
@property(readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property(readonly, copy) NSArray *standaloneQuarterSymbols;
@property(readonly, copy) NSArray *shortQuarterSymbols;
@property(readonly, copy) NSArray *quarterSymbols;
@property(readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *standaloneWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *standaloneMonthSymbols;
@property(readonly, copy) NSArray *veryShortMonthSymbols;
@property(readonly, copy) NSArray *longEraSymbols;
@property(readonly, copy) NSString *PMSymbol;
@property(readonly, copy) NSString *AMSymbol;
@property(readonly, copy) NSArray *shortWeekdaySymbols;
@property(readonly, copy) NSArray *weekdaySymbols;
@property(readonly, copy) NSArray *shortMonthSymbols;
@property(readonly, copy) NSArray *monthSymbols;
@property(readonly, copy) NSArray *eraSymbols;
- (id)_copyGregorianStartDate;	// IMP=0x000000000013021d
- (void)_setGregorianStartDate:(id)arg1;	// IMP=0x0000000000130210
- (id)_copyTimeZone;	// IMP=0x00000000001301f5
- (id)_copyLocale;	// IMP=0x00000000001301c8
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000019db42
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000019db14
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000019dae6
- (id)dateFromComponents:(id)arg1;	// IMP=0x000000000019dab8
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;	// IMP=0x00000000001301c5
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000019da87
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000019da57
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000019da27
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000019d9f7
- (id)gregorianStartDate;	// IMP=0x00000000001301c0
- (void)setGregorianStartDate:(id)arg1;	// IMP=0x00000000001301bf
@property unsigned long long minimumDaysInFirstWeek;
@property unsigned long long firstWeekday;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSLocale *locale;
@property(readonly, copy) NSString *calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;	// IMP=0x00000000001301b9
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000019d83a
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x000000000019d80c
- (_Bool)isDateInWeekend:(id)arg1;	// IMP=0x000000000019d7de
- (_Bool)date:(id)arg1 matchesComponents:(id)arg2;	// IMP=0x000000000012ffeb
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x000000000012fdfb
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000012fc86
- (id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5;	// IMP=0x000000000012fb5b
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000012fa5f
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000012f957
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000012f8dc
- (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000012f832
- (_Bool)rangeOfWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;	// IMP=0x000000000012f728
- (_Bool)isDateInTomorrow:(id)arg1;	// IMP=0x000000000012f5cd
- (_Bool)isDateInYesterday:(id)arg1;	// IMP=0x000000000012f477
- (_Bool)isDateInToday:(id)arg1;	// IMP=0x000000000012f3ad
- (_Bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;	// IMP=0x000000000012f274
- (_Bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;	// IMP=0x000000000012f13c
- (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;	// IMP=0x000000000012eb70
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;	// IMP=0x000000000012eafb
- (id)startOfDayForDate:(id)arg1;	// IMP=0x000000000012ea9d
- (id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;	// IMP=0x000000000012e997
- (id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;	// IMP=0x000000000012e891
- (long long)component:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000012e7ca
- (void)getHour:(out long long *)arg1 minute:(out long long *)arg2 second:(out long long *)arg3 nanosecond:(out long long *)arg4 fromDate:(id)arg5;	// IMP=0x000000000012e696
- (void)getEra:(out long long *)arg1 yearForWeekOfYear:(out long long *)arg2 weekOfYear:(out long long *)arg3 weekday:(out long long *)arg4 fromDate:(id)arg5;	// IMP=0x000000000012e562
- (void)getEra:(out long long *)arg1 year:(out long long *)arg2 month:(out long long *)arg3 day:(out long long *)arg4 fromDate:(id)arg5;	// IMP=0x000000000012e42e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012e3cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012e3c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e2d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e0dc
- (unsigned long long)hash;	// IMP=0x000000000012e0b1
- (unsigned long long)_cfTypeID;	// IMP=0x000000000012e0ac
- (id)init;	// IMP=0x000000000012e0a9

@end
