//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriod : PBCodable <NSCopying>
{
    HKCodableDateInterval *_dateInterval;	// 8 = 0x8
    NSMutableArray *_segments;	// 16 = 0x10
}

+ (Class)segmentType;	// IMP=0x0000000000148a02
- (void).cxx_destruct;	// IMP=0x000000000014966a
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) HKCodableDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014948f
- (unsigned long long)hash;	// IMP=0x0000000000149442
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014937a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001491a1
- (void)copyTo:(id)arg1;	// IMP=0x00000000001490b7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000148f6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000148f5e
- (id)dictionaryRepresentation;	// IMP=0x0000000000148ac2
- (id)description;	// IMP=0x0000000000148a13
- (id)segmentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001489e5
- (unsigned long long)segmentsCount;	// IMP=0x00000000001489c8
- (void)addSegment:(id)arg1;	// IMP=0x000000000014895e
- (void)clearSegments;	// IMP=0x0000000000148941
@property(readonly, nonatomic) _Bool hasDateInterval;

@end

