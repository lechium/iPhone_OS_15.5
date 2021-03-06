//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEOVLFLocation : PBCodable <NSCopying>
{
    struct GEOECEFCoordinate _ecefLocation;	// 8 = 0x8
    double _heading;	// 40 = 0x28
    double _horizontalAccuracy;	// 48 = 0x30
    GEOLatLng *_location;	// 56 = 0x38
    double _verticalAccuracy;	// 64 = 0x40
    int _type;	// 72 = 0x48
    _Bool _isFused;	// 76 = 0x4c
    struct {
        unsigned int has_ecefLocation:1;
        unsigned int has_heading:1;
        unsigned int has_horizontalAccuracy:1;
        unsigned int has_verticalAccuracy:1;
        unsigned int has_type:1;
        unsigned int has_isFused:1;
    } _flags;	// 80 = 0x50
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000155c4d2
- (void).cxx_destruct;	// IMP=0x000000000155cf82
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000155ce54
- (unsigned long long)hash;	// IMP=0x000000000155ca87
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000155c896
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000155c75c
- (void)copyTo:(id)arg1;	// IMP=0x000000000155c645
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000155c628
- (void)writeTo:(id)arg1;	// IMP=0x000000000155c4ee
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000155c4df
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000155c472
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000155c460
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000155bfd7
- (id)jsonRepresentation;	// IMP=0x000000000155bfc8
- (id)dictionaryRepresentation;	// IMP=0x000000000155bc66
- (id)description;	// IMP=0x000000000155bbb7
@property(nonatomic) _Bool hasIsFused;
@property(nonatomic) _Bool isFused;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000155baa8
- (id)typeAsString:(int)arg1;	// IMP=0x000000000155ba28
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) double heading;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) double horizontalAccuracy;
@property(nonatomic) _Bool hasEcefLocation;
@property(nonatomic) struct GEOECEFCoordinate ecefLocation;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

