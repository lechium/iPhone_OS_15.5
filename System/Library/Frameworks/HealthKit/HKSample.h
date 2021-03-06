//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/_HKDateBounded-Protocol.h>

@class HKSampleType, NSDate, NSString;

@interface HKSample <NSCopying, _HKDateBounded>
{
    HKSampleType *_sampleType;	// 8 = 0x8
    double _startTimestamp;	// 16 = 0x10
    double _endTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsEquivalence;	// IMP=0x00000000001e4791
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e4789
+ (id)_enumerateValidIntervalsWithStartDate:(id)arg1 endDate:(id)arg2 sampleType:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e3e77
+ (id)_newSampleFromDatesWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 config:(CDUnknownBlockType)arg6;	// IMP=0x00000000001e3c88
+ (id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(CDUnknownBlockType)arg6;	// IMP=0x000000000000ac80
- (void).cxx_destruct;	// IMP=0x000000000000cd58
@property(nonatomic, getter=_endTimestamp, setter=_setEndTimestamp:) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic, getter=_startTimestamp, setter=_setStartTimestamp:) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001e4a84
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000001e4799
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d840
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009e56
@property(readonly, copy) NSString *description;
@property(readonly) _Bool hasUndeterminedDuration;
- (void)_setEndDate:(id)arg1;	// IMP=0x00000000001e46dd
- (void)_setStartDate:(id)arg1;	// IMP=0x00000000001e469f
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
- (void)_setType:(id)arg1;	// IMP=0x00000000001e466b
@property(readonly, copy) HKSampleType *sampleType;
- (void)_setSampleType:(id)arg1;	// IMP=0x0000000000010352
- (long long)_externalSyncObjectCode;	// IMP=0x0000000000010407
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001e40ba
- (id)_timeZone;	// IMP=0x00000000001e400f
- (_Bool)_requiresPrivateEntitlementForQueries;	// IMP=0x00000000001e3e6f
- (id)_init;	// IMP=0x000000000000af2f
- (CDStruct_ef5fcbe6)hk_morningIndexRangeWithCalendarWithCalendar:(id)arg1;	// IMP=0x000000000007b136
- (void)_enumerateTimePeriodsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f086e
- (CDStruct_ef5fcbe6)hk_dayIndexRangeWithCalendar:(id)arg1;	// IMP=0x00000000001fd050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

