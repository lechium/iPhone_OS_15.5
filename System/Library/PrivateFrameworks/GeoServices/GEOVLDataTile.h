//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTileCoordinate, PBDataReader;

@interface GEOVLDataTile : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _buildIndexs;	// 16 = 0x10
    CDStruct_9f2792e4 _precisionIndexs;	// 40 = 0x28
    CDStruct_95bda58d _purposeDenylists;	// 64 = 0x40
    GEOTileCoordinate *_coord;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int read_buildIndexs:1;
        unsigned int read_precisionIndexs:1;
        unsigned int read_purposeDenylists:1;
        unsigned int read_coord:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dc0a9e
- (void).cxx_destruct;	// IMP=0x0000000000dc1906
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dc177c
- (unsigned long long)hash;	// IMP=0x0000000000dc16fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dc15f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dc143c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dc1215
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dc0fdb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dc0fcc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dc07eb
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dc07d9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dc00d3
- (id)jsonRepresentation;	// IMP=0x0000000000dc00c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000dbfdee
- (id)description;	// IMP=0x0000000000dbfd3f
- (int)StringAsPurposeDenylists:(id)arg1;	// IMP=0x0000000000dbfc90
- (id)purposeDenylistsAsString:(int)arg1;	// IMP=0x0000000000dbfc11
- (void)setPurposeDenylists:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dbfbef
- (int)purposeDenylistAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dbfb19
- (void)addPurposeDenylist:(int)arg1;	// IMP=0x0000000000dbfae0
- (void)clearPurposeDenylists;	// IMP=0x0000000000dbfac4
@property(readonly, nonatomic) int *purposeDenylists;
@property(readonly, nonatomic) unsigned long long purposeDenylistsCount;
- (void)setPrecisionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dbf989
- (unsigned int)precisionIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dbf8b3
- (void)addPrecisionIndex:(unsigned int)arg1;	// IMP=0x0000000000dbf87a
- (void)clearPrecisionIndexs;	// IMP=0x0000000000dbf85e
@property(readonly, nonatomic) unsigned int *precisionIndexs;
@property(readonly, nonatomic) unsigned long long precisionIndexsCount;
- (void)setBuildIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dbf723
- (unsigned int)buildIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dbf64d
- (void)addBuildIndex:(unsigned int)arg1;	// IMP=0x0000000000dbf614
- (void)clearBuildIndexs;	// IMP=0x0000000000dbf5f8
@property(readonly, nonatomic) unsigned int *buildIndexs;
@property(readonly, nonatomic) unsigned long long buildIndexsCount;
@property(retain, nonatomic) GEOTileCoordinate *coord;
@property(readonly, nonatomic) _Bool hasCoord;
- (void)dealloc;	// IMP=0x0000000000dbe994
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dbe938
- (id)init;	// IMP=0x0000000000dbe8dc

@end

