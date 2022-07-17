//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKAverageTimeIntervalEventStatistic
{
    long long _scale;	// 8 = 0x8
    double _startInterval;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    double _cumulativeInterval;	// 32 = 0x20
    double _value;	// 40 = 0x28
}

+ (id)statisticWithLabel:(id)arg1 scale:(long long)arg2;	// IMP=0x0040000000057812
@property(nonatomic) double value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000057b99
- (void)end;	// IMP=0x0010000000057b2d
- (void)begin;	// IMP=0x0010000000057afd
- (void)reset;	// IMP=0x0010000000057a86
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000005793a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000578ba
- (unsigned long long)hash;	// IMP=0x0010000000057860

@end
