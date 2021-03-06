//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPIndoorPressure : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    float _pressure;	// 16 = 0x10
    float _temperature;	// 20 = 0x14
    struct {
        unsigned int timestamp:1;
        unsigned int pressure:1;
        unsigned int temperature:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002a9bb
- (unsigned long long)hash;	// IMP=0x000000000002a6ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a5c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a523
- (void)copyTo:(id)arg1;	// IMP=0x000000000002a4a4
- (void)writeTo:(id)arg1;	// IMP=0x000000000002a40e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a401
- (id)dictionaryRepresentation;	// IMP=0x000000000002a2ac
- (id)description;	// IMP=0x000000000002a1fd
@property(nonatomic) _Bool hasTemperature;
@property(nonatomic) _Bool hasPressure;
@property(nonatomic) _Bool hasTimestamp;

@end

