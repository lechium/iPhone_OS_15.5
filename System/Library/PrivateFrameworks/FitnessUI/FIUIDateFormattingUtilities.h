//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FIUIDateFormattingUtilities : NSObject
{
}

+ (id)stringWithDayNameAndShortMonthFromDate:(id)arg1;	// IMP=0x0000000000032e13
+ (id)stringWithEitherTodayOrLongStyleDateFromDate:(id)arg1;	// IMP=0x0000000000032c46
+ (id)_localizedTodayFormatterWithTemplate:(id)arg1;	// IMP=0x0000000000032a2f
+ (id)timeRangeStringFromDateInterval:(id)arg1;	// IMP=0x0000000000010c41
+ (id)timeStringWithSpaceRemoved:(id)arg1 date:(id)arg2;	// IMP=0x0000000000010de5
+ (_Bool)_dateStringFits:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000011182
+ (id)timeFormatter;	// IMP=0x000000000001088c
+ (id)stringWithShortStyleDate:(id)arg1;	// IMP=0x00000000000329a3
+ (id)stringWithLongestStyleDate:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000010f81
+ (id)_dateFormatter;	// IMP=0x00000000000110fa

@end

