//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOARInfo, GEOEVChargingInfo, GEOLatLng, GEOPBTransitArtwork, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOARInfo *_arInfo;	// 24 = 0x18
    GEOPBTransitArtwork *_artwork;	// 32 = 0x20
    GEOEVChargingInfo *_evChargingInfo;	// 40 = 0x28
    unsigned long long _muid;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    GEOLatLng *_position;	// 64 = 0x40
    GEOStyleAttributes *_styleAttributes;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arInfo:1;
        unsigned int read_artwork:1;
        unsigned int read_evChargingInfo:1;
        unsigned int read_name:1;
        unsigned int read_position:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000098d3a8
- (void).cxx_destruct;	// IMP=0x000000000098e0a9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000098dfc8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000098dd49
- (unsigned long long)hash;	// IMP=0x000000000098dc45
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098da4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000098d7af
- (void)copyTo:(id)arg1;	// IMP=0x000000000098d63f
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000098d60e
- (void)writeTo:(id)arg1;	// IMP=0x000000000098d3c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000098d3b5
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000098d29c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000098d28a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000098cdf1
- (id)jsonRepresentation;	// IMP=0x000000000098ccdf
- (id)dictionaryRepresentation;	// IMP=0x000000000098c82d
- (id)description;	// IMP=0x000000000098c77e
@property(retain, nonatomic) GEOARInfo *arInfo;
@property(readonly, nonatomic) _Bool hasArInfo;
@property(retain, nonatomic) GEOEVChargingInfo *evChargingInfo;
@property(readonly, nonatomic) _Bool hasEvChargingInfo;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(retain, nonatomic) GEOLatLng *position;
@property(readonly, nonatomic) _Bool hasPosition;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;	// IMP=0x000000000098b3fd
- (id)init;	// IMP=0x000000000098b3a1

@end
