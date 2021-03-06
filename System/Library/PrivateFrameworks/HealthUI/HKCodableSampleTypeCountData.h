//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@interface HKCodableSampleTypeCountData : PBCodable <NSCopying>
{
    long long _count;	// 8 = 0x8
    double _endDate;	// 16 = 0x10
    double _startDate;	// 24 = 0x18
    struct {
        unsigned int count:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000206dbf
- (unsigned long long)hash;	// IMP=0x0000000000206b7e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000206a9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002069ff
- (void)copyTo:(id)arg1;	// IMP=0x0000000000206982
- (void)writeTo:(id)arg1;	// IMP=0x00000000002068ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002068e0
- (id)dictionaryRepresentation;	// IMP=0x00000000002064d2
- (id)description;	// IMP=0x0000000000206423
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end

