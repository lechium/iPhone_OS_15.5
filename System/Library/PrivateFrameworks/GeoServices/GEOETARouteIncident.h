//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteIncident, PBUnknownFields;

@interface GEOETARouteIncident : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEORouteIncident *_routeIncident;	// 16 = 0x10
    unsigned int _distanceFromStartCm;	// 24 = 0x18
    struct {
        unsigned int has_distanceFromStartCm:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008831d2
- (void).cxx_destruct;	// IMP=0x0000000000883e3d
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000883dd7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000883d36
- (unsigned long long)hash;	// IMP=0x0000000000883cd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000883bd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000883b28
- (void)copyTo:(id)arg1;	// IMP=0x0000000000883ab3
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000883a96
- (void)writeTo:(id)arg1;	// IMP=0x0000000000883a17
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000883a08
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000882c6d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000882c5b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000882ac4
- (id)jsonRepresentation;	// IMP=0x00000000008829b2
- (id)dictionaryRepresentation;	// IMP=0x0000000000882741
- (id)description;	// IMP=0x0000000000882692
@property(nonatomic) _Bool hasDistanceFromStartCm;
@property(nonatomic) unsigned int distanceFromStartCm;
@property(retain, nonatomic) GEORouteIncident *routeIncident;
@property(readonly, nonatomic) _Bool hasRouteIncident;

@end

