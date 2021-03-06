//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;	// IMP=0x000000000002991a
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;	// IMP=0x0000000000029821
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x000000000002949f
+ (id)dateWithResolution:(unsigned long long)arg1;	// IMP=0x0000000000029411
+ (id)dateFormatter;	// IMP=0x000000000002933e
+ (id)stringFromTimestamp:(double)arg1;	// IMP=0x00000000000292e7
+ (id)endOfDay;	// IMP=0x0000000000028f1e
+ (id)startOfDay;	// IMP=0x0000000000028e15
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;	// IMP=0x0000000000029758
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x00000000000296db
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x0000000000029597
- (id)dateReducedToResolution:(unsigned long long)arg1;	// IMP=0x000000000002952c
- (id)stringFromDate;	// IMP=0x0000000000029231
- (id)weekdayStringFromDate;	// IMP=0x0000000000029186
- (unsigned long long)weekday;	// IMP=0x000000000002911d
- (unsigned long long)minute;	// IMP=0x00000000000290be
- (unsigned long long)hour;	// IMP=0x000000000002905f
- (id)endOfDay;	// IMP=0x0000000000028f6e
- (id)startOfDay;	// IMP=0x0000000000028e65
- (id)dateOfTimestampForCurrentCalendar;	// IMP=0x0000000000028daf
- (id)dateOfTimestampForCalendar:(id)arg1;	// IMP=0x0000000000028d2d
- (_Bool)isOnOrAfter:(id)arg1;	// IMP=0x0000000000028d13
- (_Bool)isAfterDate:(id)arg1;	// IMP=0x0000000000028cf9
- (_Bool)isOnOrBefore:(id)arg1;	// IMP=0x0000000000028cdf
- (_Bool)isBeforeDate:(id)arg1;	// IMP=0x0000000000028cc5
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x0000000000028c07
@end

