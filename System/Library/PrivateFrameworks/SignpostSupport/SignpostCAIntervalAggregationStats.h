//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/NSCopying-Protocol.h>

@interface SignpostCAIntervalAggregationStats : NSObject <NSCopying>
{
    float _maxIntervalDurationNs;	// 8 = 0x8
    unsigned long long _intervalCount;	// 16 = 0x10
    unsigned long long _totalIntervalDurationNs;	// 24 = 0x18
}

@property(readonly, nonatomic) float maxIntervalDurationNs; // @synthesize maxIntervalDurationNs=_maxIntervalDurationNs;
@property(readonly, nonatomic) unsigned long long totalIntervalDurationNs; // @synthesize totalIntervalDurationNs=_totalIntervalDurationNs;
@property(readonly, nonatomic) unsigned long long intervalCount; // @synthesize intervalCount=_intervalCount;
- (id)debugDescription;	// IMP=0x0000000000016fdc
- (id)description;	// IMP=0x0000000000016f21
- (void)_addDurationNsToAggregation:(unsigned long long)arg1;	// IMP=0x0000000000016ec1
@property(readonly, nonatomic) float averageIntervalDurationNs;
- (void)_addAggregationStats:(id)arg1;	// IMP=0x0000000000016d83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016d30

@end
