//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDMultiTypeSortedSampleIterator, HDProfile, HKCalendarCache, HKQuantitySample, NSDateInterval, NSMutableDictionary, NSString;

@interface HDSleepDaySummaryEnumerator : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HKCalendarCache *_calendarCache;	// 16 = 0x10
    CDStruct_ef5fcbe6 _morningIndexRange;	// 24 = 0x18
    _Bool _ascending;	// 40 = 0x28
    _Bool _requireSleepAnalysis;	// 41 = 0x29
    _Bool _onlySleepAnalysis;	// 42 = 0x2a
    NSString *_debugIdentifier;	// 48 = 0x30
    HDMultiTypeSortedSampleIterator *_iterator;	// 56 = 0x38
    NSMutableDictionary *_schedulesByWeekday;	// 64 = 0x40
    HKQuantitySample *_sleepDurationGoalSample;	// 72 = 0x48
    NSDateInterval *_rangeDateInterval;	// 80 = 0x50
    long long _cachedFirstDayOfWeek;	// 88 = 0x58
}

+ (id)daySummariesInMorningIndexRange:(CDStruct_ef5fcbe6)arg1 requireSleepAnalysis:(_Bool)arg2 onlySleepAnalysis:(_Bool)arg3 calendarCache:(id)arg4 profile:(id)arg5 error:(id *)arg6;	// IMP=0x000000000065aaa8
+ (id)daySummaryAtMorningIndex:(long long)arg1 requireSleepAnalysis:(_Bool)arg2 onlySleepAnalysis:(_Bool)arg3 calendarCache:(id)arg4 profile:(id)arg5 error:(id *)arg6;	// IMP=0x000000000065a8ed
- (void).cxx_destruct;	// IMP=0x000000000065ac16
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000658bdf
- (id)initWithProfile:(id)arg1 calendarCache:(id)arg2 morningIndexRange:(CDStruct_ef5fcbe6)arg3 ascending:(_Bool)arg4 requireSleepAnalysis:(_Bool)arg5 onlySleepAnalysis:(_Bool)arg6 debugIdentifier:(id)arg7;	// IMP=0x000000000065813a

@end
