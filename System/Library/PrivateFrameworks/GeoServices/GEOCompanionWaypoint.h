//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOMapItemStorage, GEOWaypointTyped, NSString, PBDataReader;

@interface GEOCompanionWaypoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOMapItemStorage *_mapItem;	// 16 = 0x10
    NSString *_searchString;	// 24 = 0x18
    GEOWaypointTyped *_waypointTyped;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _isCurrentLocation;	// 52 = 0x34
    struct {
        unsigned int has_isCurrentLocation:1;
        unsigned int read_mapItem:1;
        unsigned int read_searchString:1;
        unsigned int read_waypointTyped:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000077a779
- (void).cxx_destruct;	// IMP=0x000000000077afee
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000077af0b
- (unsigned long long)hash;	// IMP=0x000000000077ae6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000077ad11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000077ab02
- (void)copyTo:(id)arg1;	// IMP=0x000000000077a9f2
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000077a984
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000077a972
- (void)writeTo:(id)arg1;	// IMP=0x000000000077a795
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000077a786
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000077a66d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000077a65b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000077a3cd
- (id)jsonRepresentation;	// IMP=0x000000000077a3be
- (id)dictionaryRepresentation;	// IMP=0x000000000077a1b8
- (id)description;	// IMP=0x000000000077a109
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) _Bool hasSearchString;
@property(nonatomic) _Bool hasIsCurrentLocation;
@property(nonatomic) _Bool isCurrentLocation;
@property(retain, nonatomic) GEOWaypointTyped *waypointTyped;
@property(readonly, nonatomic) _Bool hasWaypointTyped;
@property(retain, nonatomic) GEOMapItemStorage *mapItem;
@property(readonly, nonatomic) _Bool hasMapItem;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000779612
- (id)init;	// IMP=0x00000000007795b6
@property(readonly, nonatomic) GEOLocation *location;
- (id)initWithComposedWaypoint:(id)arg1;	// IMP=0x0000000000cf6813

@end

