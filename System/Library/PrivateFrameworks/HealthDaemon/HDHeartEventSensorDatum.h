//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantity, NSArray;

@interface HDHeartEventSensorDatum
{
    NSArray *_associatedSampleUUIDs;	// 8 = 0x8
    HKQuantity *_heartRateThreshold;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006e6d76
- (void).cxx_destruct;	// IMP=0x00000000006e6fc0
@property(readonly, nonatomic) HKQuantity *heartRateThreshold; // @synthesize heartRateThreshold=_heartRateThreshold;
@property(readonly, nonatomic) NSArray *associatedSampleUUIDs; // @synthesize associatedSampleUUIDs=_associatedSampleUUIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006e6eff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e6d7e
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;	// IMP=0x00000000006e6cbb

@end

