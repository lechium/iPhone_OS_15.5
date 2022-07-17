//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOLatLng : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _elevationM;	// 16 = 0x10
    double _lat;	// 24 = 0x18
    double _lng;	// 32 = 0x20
    _Bool _gtLog;	// 40 = 0x28
    struct {
        unsigned int has_elevationM:1;
        unsigned int has_gtLog:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010e45ae
- (void).cxx_destruct;	// IMP=0x00000000010e501c
@property(nonatomic) _Bool hasGtLog;
@property(nonatomic) _Bool gtLog;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010e4f7d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010e4ece
- (unsigned long long)hash;	// IMP=0x00000000010e4b8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010e4a5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010e4996
- (void)copyTo:(id)arg1;	// IMP=0x00000000010e48fc
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000010e48d9
- (void)writeTo:(id)arg1;	// IMP=0x00000000010e4818
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010e4809
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010e41ac
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010e419a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010e3f61
- (id)jsonRepresentation;	// IMP=0x00000000010e3e4f
- (id)dictionaryRepresentation;	// IMP=0x00000000010e3b91
- (id)description;	// IMP=0x00000000010e3ae2
@property(nonatomic) _Bool hasElevationM;
@property(nonatomic) double elevationM;
@property(nonatomic) double lng;
@property(nonatomic) double lat;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000d82ffb
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0000000000d82f74

@end
