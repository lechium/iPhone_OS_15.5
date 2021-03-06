//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableStatisticsCollection;

@interface HKCodableChartQuantityDataSourceQueryData : PBCodable <NSCopying>
{
    HKCodableStatisticsCollection *_statisticsCollection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000359d5
@property(retain, nonatomic) HKCodableStatisticsCollection *statisticsCollection; // @synthesize statisticsCollection=_statisticsCollection;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000035956
- (unsigned long long)hash;	// IMP=0x0000000000035939
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003589f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035827
- (void)copyTo:(id)arg1;	// IMP=0x00000000000357fd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000357d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000357cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000035581
- (id)description;	// IMP=0x00000000000354d2
@property(readonly, nonatomic) _Bool hasStatisticsCollection;

@end

