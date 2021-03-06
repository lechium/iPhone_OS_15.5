//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOVLMetadataTile : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _purposeDenylists;	// 16 = 0x10
    NSMutableArray *_builds;	// 40 = 0x28
    GEOTileCoordinate *_coord;	// 48 = 0x30
    NSMutableArray *_precisions;	// 56 = 0x38
    NSMutableArray *_tiles;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_purposeDenylists:1;
        unsigned int read_builds:1;
        unsigned int read_coord:1;
        unsigned int read_precisions:1;
        unsigned int read_tiles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dc4a02
+ (Class)tileType;	// IMP=0x0000000000dc2e69
+ (Class)precisionType;	// IMP=0x0000000000dc2c04
+ (Class)buildType;	// IMP=0x0000000000dc299f
- (void).cxx_destruct;	// IMP=0x0000000000dc6359
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dc5f76
- (unsigned long long)hash;	// IMP=0x0000000000dc5ecf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dc5d5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dc57f9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dc5513
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dc5078
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dc5069
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dc441b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dc4409
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dc3ae3
- (id)jsonRepresentation;	// IMP=0x0000000000dc3ad4
- (id)dictionaryRepresentation;	// IMP=0x0000000000dc32be
- (id)description;	// IMP=0x0000000000dc320f
- (int)StringAsPurposeDenylists:(id)arg1;	// IMP=0x0000000000dc3160
- (id)purposeDenylistsAsString:(int)arg1;	// IMP=0x0000000000dc30e0
- (void)setPurposeDenylists:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dc30be
- (int)purposeDenylistAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dc2fe8
- (void)addPurposeDenylist:(int)arg1;	// IMP=0x0000000000dc2faf
- (void)clearPurposeDenylists;	// IMP=0x0000000000dc2f93
@property(readonly, nonatomic) int *purposeDenylists;
@property(readonly, nonatomic) unsigned long long purposeDenylistsCount;
- (id)tileAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dc2e38
- (unsigned long long)tilesCount;	// IMP=0x0000000000dc2e0c
- (void)addTile:(id)arg1;	// IMP=0x0000000000dc2d58
- (void)clearTiles;	// IMP=0x0000000000dc2d30
@property(retain, nonatomic) NSMutableArray *tiles;
- (id)precisionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dc2bd3
- (unsigned long long)precisionsCount;	// IMP=0x0000000000dc2ba7
- (void)addPrecision:(id)arg1;	// IMP=0x0000000000dc2af3
- (void)clearPrecisions;	// IMP=0x0000000000dc2acb
@property(retain, nonatomic) NSMutableArray *precisions;
- (id)buildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dc296e
- (unsigned long long)buildsCount;	// IMP=0x0000000000dc2942
- (void)addBuild:(id)arg1;	// IMP=0x0000000000dc288e
- (void)clearBuilds;	// IMP=0x0000000000dc2866
@property(retain, nonatomic) NSMutableArray *builds;
@property(retain, nonatomic) GEOTileCoordinate *coord;
@property(readonly, nonatomic) _Bool hasCoord;
- (void)dealloc;	// IMP=0x0000000000dc19ef
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dc1993
- (id)init;	// IMP=0x0000000000dc1937

@end

