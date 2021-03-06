//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding>
{
    struct SGUnixTimestamp_ _start;	// 8 = 0x8
    struct SGUnixTimestamp_ _end;	// 16 = 0x10
    NSTimeZone *_startTimeZone;	// 24 = 0x18
    NSTimeZone *_endTimeZone;	// 32 = 0x20
    _Bool _floating;	// 40 = 0x28
    long long _startUTCOffsetSeconds;	// 48 = 0x30
    long long _endUTCOffsetSeconds;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006a7eb
+ (id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;	// IMP=0x000000000006a767
+ (id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000006a6aa
+ (id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;	// IMP=0x000000000006a665
+ (id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000006a5bb
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2;	// IMP=0x000000000006a59e
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2 timeZone:(id)arg3;	// IMP=0x000000000006a581
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;	// IMP=0x000000000006a4fe
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2 timeZone:(id)arg3;	// IMP=0x000000000006a4e2
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;	// IMP=0x000000000006a3b9
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 startTimeZone:(id)arg2 end:(struct SGUnixTimestamp_)arg3 endTimeZone:(id)arg4;	// IMP=0x000000000006a2cc
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;	// IMP=0x0000000000069d4e
+ (_Bool)hasYearMonthDayComponents:(id)arg1;	// IMP=0x0000000000069cda
+ (_Bool)isAllDayComponents:(id)arg1;	// IMP=0x0000000000069cb4
+ (id)dateFromGregorianComponents:(id)arg1;	// IMP=0x0000000000069aea
+ (struct SGUnixTimestamp_)fromFloatingTime:(struct SGUnixTimestamp_)arg1;	// IMP=0x0000000000069ab2
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1 withDSTAmbiguityPreferences:(id)arg2;	// IMP=0x000000000006966b
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1;	// IMP=0x0000000000069556
- (void).cxx_destruct;	// IMP=0x000000000006952e
@property(readonly, nonatomic, getter=isFloating) _Bool floating; // @synthesize floating=_floating;
@property(readonly, nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property(readonly, nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;
@property(readonly, nonatomic) struct SGUnixTimestamp_ end; // @synthesize end=_end;
@property(readonly, nonatomic) struct SGUnixTimestamp_ start; // @synthesize start=_start;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006940e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000692b9
- (unsigned long long)hash;	// IMP=0x000000000006925e
- (_Bool)isEqualToSimpleTimeRange:(id)arg1;	// IMP=0x0000000000069199
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069131
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069126
- (void)applyToEKEvent:(id)arg1 isAllDay:(_Bool)arg2 isFloating:(_Bool)arg3;	// IMP=0x0000000000068c4e
- (_Bool)startedMoreThan24HoursAgo;	// IMP=0x0000000000068b83
- (_Bool)isValidAllDayRange;	// IMP=0x0000000000068a42
- (id)endDateComponents;	// IMP=0x00000000000689bf
- (id)startDateComponents;	// IMP=0x000000000006893c
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000006881a
@property(readonly, nonatomic) NSTimeZone *endTimeZone;
@property(readonly, nonatomic) NSTimeZone *startTimeZone;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)stableStringRepresentation;	// IMP=0x000000000006855a
- (id)absoluteRange;	// IMP=0x0000000000068493
- (id)initWithStart:(struct SGUnixTimestamp_)arg1 startUTCOffsetSeconds:(long long)arg2 end:(struct SGUnixTimestamp_)arg3 endUTCOffsetSeconds:(long long)arg4;	// IMP=0x0000000000068429
- (id)initUTCFloatingWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;	// IMP=0x00000000000683d3

@end

