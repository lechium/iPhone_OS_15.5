//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerChineseCalendar : NSCalendar
{
    NSCalendar *realCalendar;	// 8 = 0x8
}

+ (id)cyclicalFromRelated:(id)arg1;	// IMP=0x0000000000c47fae
+ (id)relatedFromCyclical:(id)arg1;	// IMP=0x0000000000c47e28
@property NSCalendar *realCalendar; // @synthesize realCalendar;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x0000000000c48451
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000c48434
- (id)calendarIdentifier;	// IMP=0x0000000000c48417
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x0000000000c48385
- (void)setTimeZone:(id)arg1;	// IMP=0x0000000000c48368
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x0000000000c482fb
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000c4824d
- (id)dateFromComponents:(id)arg1;	// IMP=0x0000000000c481fd
- (id)initWithCalendar:(id)arg1;	// IMP=0x0000000000c48197

@end

