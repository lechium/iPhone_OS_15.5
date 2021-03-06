//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableChartTimePeriodSeriesDataSourceData : PBCodable <NSCopying>
{
    NSMutableArray *_dateIntervalsToTotals;	// 8 = 0x8
    NSMutableArray *_intervalCounts;	// 16 = 0x10
    HKCodableDateComponents *_statisticsInterval;	// 24 = 0x18
}

+ (Class)intervalCountsType;	// IMP=0x00000000001be774
+ (Class)dateIntervalsToTotalsType;	// IMP=0x00000000001be6a2
- (void).cxx_destruct;	// IMP=0x00000000001bf9d5
@property(retain, nonatomic) NSMutableArray *intervalCounts; // @synthesize intervalCounts=_intervalCounts;
@property(retain, nonatomic) NSMutableArray *dateIntervalsToTotals; // @synthesize dateIntervalsToTotals=_dateIntervalsToTotals;
@property(retain, nonatomic) HKCodableDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bf6e7
- (unsigned long long)hash;	// IMP=0x00000000001bf67a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bf582
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bf276
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bf0f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001beec7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001beeba
- (id)dictionaryRepresentation;	// IMP=0x00000000001be834
- (id)description;	// IMP=0x00000000001be785
- (id)intervalCountsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001be757
- (unsigned long long)intervalCountsCount;	// IMP=0x00000000001be73a
- (void)addIntervalCounts:(id)arg1;	// IMP=0x00000000001be6d0
- (void)clearIntervalCounts;	// IMP=0x00000000001be6b3
- (id)dateIntervalsToTotalsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001be685
- (unsigned long long)dateIntervalsToTotalsCount;	// IMP=0x00000000001be668
- (void)addDateIntervalsToTotals:(id)arg1;	// IMP=0x00000000001be5fe
- (void)clearDateIntervalsToTotals;	// IMP=0x00000000001be5e1
@property(readonly, nonatomic) _Bool hasStatisticsInterval;

@end

