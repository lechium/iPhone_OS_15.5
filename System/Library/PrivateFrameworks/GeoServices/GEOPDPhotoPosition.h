//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGeographicCoordinate, GEOPDGroundDataBuild, GEOPDOrientedPosition, GEOPDOrientedTilePosition, GEOPDRigMetrics, GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDPhotoPosition : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _cameraMetadataIndexs;	// 16 = 0x10
    GEOPDGroundDataBuild *_build;	// 40 = 0x28
    NSMutableArray *_cameraMetadatas;	// 48 = 0x30
    unsigned long long _imageryTimestamp;	// 56 = 0x38
    unsigned long long _imdataId;	// 64 = 0x40
    GEOTileCoordinate *_parentTile;	// 72 = 0x48
    GEOPDGeographicCoordinate *_positionGeo;	// 80 = 0x50
    GEOPDOrientedPosition *_position;	// 88 = 0x58
    GEOPDRigMetrics *_rigMetrics;	// 96 = 0x60
    GEOPDOrientedTilePosition *_tilePosition;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    unsigned int _buildTableIndex;	// 124 = 0x7c
    int _revision;	// 128 = 0x80
    struct {
        unsigned int has_imageryTimestamp:1;
        unsigned int has_imdataId:1;
        unsigned int has_buildTableIndex:1;
        unsigned int has_revision:1;
        unsigned int read_cameraMetadataIndexs:1;
        unsigned int read_build:1;
        unsigned int read_cameraMetadatas:1;
        unsigned int read_parentTile:1;
        unsigned int read_positionGeo:1;
        unsigned int read_position:1;
        unsigned int read_rigMetrics:1;
        unsigned int read_tilePosition:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001045bd7
+ (Class)cameraMetadataType;	// IMP=0x0000000001043652
- (void).cxx_destruct;	// IMP=0x0000000001047d69
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001047469
- (unsigned long long)hash;	// IMP=0x00000000010472b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001046fd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001046b3d
- (void)copyTo:(id)arg1;	// IMP=0x0000000001046856
- (void)writeTo:(id)arg1;	// IMP=0x0000000001046407
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010463f8
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010455f0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010455de
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001044a2e
- (id)jsonRepresentation;	// IMP=0x0000000001044a1f
- (id)dictionaryRepresentation;	// IMP=0x0000000001044232
- (id)description;	// IMP=0x0000000001044183
@property(retain, nonatomic) GEOPDRigMetrics *rigMetrics;
@property(readonly, nonatomic) _Bool hasRigMetrics;
@property(retain, nonatomic) GEOTileCoordinate *parentTile;
@property(readonly, nonatomic) _Bool hasParentTile;
@property(retain, nonatomic) GEOPDOrientedTilePosition *tilePosition;
@property(readonly, nonatomic) _Bool hasTilePosition;
- (void)setCameraMetadataIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001043d9a
- (unsigned int)cameraMetadataIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001043cc4
- (void)addCameraMetadataIndex:(unsigned int)arg1;	// IMP=0x0000000001043c89
- (void)clearCameraMetadataIndexs;	// IMP=0x0000000001043c6b
@property(readonly, nonatomic) unsigned int *cameraMetadataIndexs;
@property(readonly, nonatomic) unsigned long long cameraMetadataIndexsCount;
@property(retain, nonatomic) GEOPDGroundDataBuild *build;
@property(readonly, nonatomic) _Bool hasBuild;
@property(nonatomic) _Bool hasBuildTableIndex;
@property(nonatomic) unsigned int buildTableIndex;
@property(retain, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property(readonly, nonatomic) _Bool hasPositionGeo;
@property(nonatomic) _Bool hasImageryTimestamp;
@property(nonatomic) unsigned long long imageryTimestamp;
@property(nonatomic) _Bool hasRevision;
@property(nonatomic) int revision;
@property(retain, nonatomic) GEOPDOrientedPosition *position;
@property(readonly, nonatomic) _Bool hasPosition;
- (id)cameraMetadataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001043621
- (unsigned long long)cameraMetadatasCount;	// IMP=0x00000000010435f5
- (void)addCameraMetadata:(id)arg1;	// IMP=0x000000000104353f
- (void)clearCameraMetadatas;	// IMP=0x0000000001043515
@property(retain, nonatomic) NSMutableArray *cameraMetadatas;
@property(nonatomic) _Bool hasImdataId;
@property(nonatomic) unsigned long long imdataId;
- (void)dealloc;	// IMP=0x00000000010422c5
- (id)initWithData:(id)arg1;	// IMP=0x0000000001042269
- (id)init;	// IMP=0x000000000104220d

@end

