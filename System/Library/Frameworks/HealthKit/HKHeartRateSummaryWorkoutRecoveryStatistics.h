//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics
{
    unsigned long long _workoutActivityType;	// 56 = 0x38
    NSDictionary *_perMinuteReadings;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000207d1a
- (void).cxx_destruct;	// IMP=0x000000000001e53c
@property(retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings; // @synthesize perMinuteReadings=_perMinuteReadings;
@property(readonly, nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (unsigned long long)hash;	// IMP=0x0000000000208250
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002080c0
- (id)description;	// IMP=0x0000000000207eed
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000207dc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000207d22
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;	// IMP=0x0000000000207cc2

@end
