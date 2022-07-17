//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableMetadataDictionary, HKCodableQuantity;

@interface HKCodableSampleChartData : PBCodable <NSCopying>
{
    long long _dataType;	// 8 = 0x8
    double _endDate;	// 16 = 0x10
    long long _int64Value;	// 24 = 0x18
    double _startDate;	// 32 = 0x20
    HKCodableMetadataDictionary *_metadataDictionary;	// 40 = 0x28
    HKCodableQuantity *_quantity;	// 48 = 0x30
    struct {
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int int64Value:1;
        unsigned int startDate:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000d1657
@property(retain, nonatomic) HKCodableQuantity *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d14b9
- (unsigned long long)hash;	// IMP=0x00000000000d1211
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d108d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d0f6c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d0e8c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d0d9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d0d90
- (id)dictionaryRepresentation;	// IMP=0x00000000000d0733
- (id)description;	// IMP=0x00000000000d0684
@property(readonly, nonatomic) _Bool hasQuantity;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasDataType;

@end
