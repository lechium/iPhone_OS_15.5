//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics
{
    HKHeartRateSummaryReading *_finalReading;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000208317
- (void).cxx_destruct;	// IMP=0x00000000002087b0
@property(retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading; // @synthesize finalReading=_finalReading;
- (unsigned long long)hash;	// IMP=0x000000000020871e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002085ad
- (id)description;	// IMP=0x0000000000208437
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020839c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020831f

@end

