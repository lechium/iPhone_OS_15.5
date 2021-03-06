//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLocation *_location;	// 16 = 0x10
    unsigned long long _radius;	// 24 = 0x18
    NSMutableArray *_tiles;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int has_radius:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a17a13
+ (Class)tilesType;	// IMP=0x0000000000a16c2f
- (void).cxx_destruct;	// IMP=0x0000000000a18b73
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a1899b
- (unsigned long long)hash;	// IMP=0x0000000000a1891a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a187fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a184c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a18358
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000a18327
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000a181c5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a17eb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a17ea2
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a17456
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a17444
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a170b5
- (id)jsonRepresentation;	// IMP=0x0000000000a170a6
- (id)dictionaryRepresentation;	// IMP=0x0000000000a16d49
- (id)description;	// IMP=0x0000000000a16c9a
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned long long radius;
- (id)tilesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a16bfe
- (unsigned long long)tilesCount;	// IMP=0x0000000000a16bd2
- (void)addTiles:(id)arg1;	// IMP=0x0000000000a16b1e
- (void)clearTiles;	// IMP=0x0000000000a16af6
@property(retain, nonatomic) NSMutableArray *tiles;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a160dc
- (id)init;	// IMP=0x0000000000a16080

@end

