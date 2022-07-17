//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying>
{
    long long _count;	// 8 = 0x8
    long long _dataTypeCode;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    long long _persistentID;	// 32 = 0x20
    long long _seriesIndex;	// 40 = 0x28
    long long _sourceID;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _value;	// 64 = 0x40
    NSData *_quantitySample;	// 72 = 0x48
    NSData *_uuid;	// 80 = 0x50
    struct {
        unsigned int count:1;
        unsigned int dataTypeCode:1;
        unsigned int endTime:1;
        unsigned int persistentID:1;
        unsigned int seriesIndex:1;
        unsigned int sourceID:1;
        unsigned int startTime:1;
        unsigned int value:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001486cc
@property(retain, nonatomic) NSData *quantitySample; // @synthesize quantitySample=_quantitySample;
@property(nonatomic) long long seriesIndex; // @synthesize seriesIndex=_seriesIndex;
@property(nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long dataTypeCode; // @synthesize dataTypeCode=_dataTypeCode;
@property(nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014849b
- (unsigned long long)hash;	// IMP=0x000000000014805c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000147e23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147c91
- (void)copyTo:(id)arg1;	// IMP=0x0000000000147b35
- (void)writeTo:(id)arg1;	// IMP=0x00000000001479c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001479b8
- (id)dictionaryRepresentation;	// IMP=0x00000000001470d6
- (id)description;	// IMP=0x0000000000147027
@property(readonly, nonatomic) _Bool hasQuantitySample;
@property(nonatomic) _Bool hasSeriesIndex;
@property(nonatomic) _Bool hasSourceID;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasUuid;
@property(nonatomic) _Bool hasDataTypeCode;
@property(nonatomic) _Bool hasPersistentID;

@end
