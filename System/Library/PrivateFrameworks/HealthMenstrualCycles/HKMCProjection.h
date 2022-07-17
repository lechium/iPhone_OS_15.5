//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/HKRedactedDescription-Protocol.h>
#import <HealthMenstrualCycles/NSCopying-Protocol.h>
#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKMCProjection : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>
{
    _Bool _partiallyLogged;	// 8 = 0x8
    long long _daysOffsetFromCalendarMethod;	// 16 = 0x10
    double _startMean;	// 24 = 0x18
    double _startStandardDeviation;	// 32 = 0x20
    double _endMean;	// 40 = 0x28
    double _endStandardDeviation;	// 48 = 0x30
    CDStruct_ef5fcbe6 _allDays;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001812b
@property(readonly) double endStandardDeviation; // @synthesize endStandardDeviation=_endStandardDeviation;
@property(readonly) double endMean; // @synthesize endMean=_endMean;
@property(readonly) double startStandardDeviation; // @synthesize startStandardDeviation=_startStandardDeviation;
@property(readonly) double startMean; // @synthesize startMean=_startMean;
@property(readonly, nonatomic) long long daysOffsetFromCalendarMethod; // @synthesize daysOffsetFromCalendarMethod=_daysOffsetFromCalendarMethod;
@property(readonly, nonatomic, getter=isPartiallyLogged) _Bool partiallyLogged; // @synthesize partiallyLogged=_partiallyLogged;
@property(readonly, nonatomic) CDStruct_ef5fcbe6 allDays; // @synthesize allDays=_allDays;
- (unsigned long long)hash;	// IMP=0x0000000000018680
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018561
@property(readonly, copy) NSString *hk_redactedDescription;
- (id)description;	// IMP=0x0000000000018422
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018417
- (long long)_dayIndexFromMean:(double)arg1 standardDeviation:(double)arg2 coefficient:(double)arg3;	// IMP=0x00000000000183ff
- (CDStruct_ef5fcbe6)startDayRange;	// IMP=0x00000000000183d4
- (long long)dayIndexFromEndWithCoefficient:(double)arg1;	// IMP=0x00000000000183b5
- (long long)dayIndexFromStartWithCoefficient:(double)arg1;	// IMP=0x0000000000018396
@property(readonly, nonatomic) CDStruct_ef5fcbe6 mostLikelyDays;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018231
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018133
- (id)initWithStartMean:(double)arg1 startStandardDeviation:(double)arg2 endMean:(double)arg3 endStandardDeviation:(double)arg4 allDays:(CDStruct_ef5fcbe6)arg5 partiallyLogged:(_Bool)arg6 daysOffsetFromCalendarMethod:(long long)arg7;	// IMP=0x0000000000017f27

@end
