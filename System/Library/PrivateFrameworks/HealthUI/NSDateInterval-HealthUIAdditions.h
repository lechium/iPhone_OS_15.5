//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (HealthUIAdditions)
+ (id)hk_dateIntervalWithValueRange:(id)arg1;	// IMP=0x0000000000099b25
+ (id)hk_julianDayDateIntervalFromOpenUpperBoundDateInterval:(id)arg1 sourceCalendar:(id)arg2 localCalendar:(id)arg3;	// IMP=0x00000000001c2f5e
+ (id)hk_dateIntervalWithCodableDateInterval:(id)arg1 sourceTimeZone:(id)arg2;	// IMP=0x00000000002b9c10
- (id)hk_codableDateInterval;	// IMP=0x00000000002b9d60
@end
