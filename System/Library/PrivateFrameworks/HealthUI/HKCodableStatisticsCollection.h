//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableStatisticsCollection : PBCodable <NSCopying>
{
    NSMutableArray *_statistics;	// 8 = 0x8
    HKCodableDateComponents *_statisticsInterval;	// 16 = 0x10
}

+ (Class)statisticsType;	// IMP=0x0000000000087091
- (void).cxx_destruct;	// IMP=0x0000000000087cf9
@property(retain, nonatomic) NSMutableArray *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) HKCodableDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000087b1e
- (unsigned long long)hash;	// IMP=0x0000000000087ad1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087a09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000087830
- (void)copyTo:(id)arg1;	// IMP=0x0000000000087746
- (void)writeTo:(id)arg1;	// IMP=0x00000000000875fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000875ed
- (id)dictionaryRepresentation;	// IMP=0x0000000000087151
- (id)description;	// IMP=0x00000000000870a2
- (id)statisticsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000087074
- (unsigned long long)statisticsCount;	// IMP=0x0000000000087057
- (void)addStatistics:(id)arg1;	// IMP=0x0000000000086fed
- (void)clearStatistics;	// IMP=0x0000000000086fd0
@property(readonly, nonatomic) _Bool hasStatisticsInterval;

@end
