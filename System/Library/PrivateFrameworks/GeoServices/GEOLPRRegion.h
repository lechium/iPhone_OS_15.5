//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLPRBoundingBoxE7, GEOLPRRegionInfo, NSMutableArray, PBDataReader;

@interface GEOLPRRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_displayNames;	// 16 = 0x10
    GEOLPRRegionInfo *_info;	// 24 = 0x18
    GEOLPRBoundingBoxE7 *_regionBoundingBox;	// 32 = 0x20
    NSMutableArray *_subRegions;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_displayNames:1;
        unsigned int read_info:1;
        unsigned int read_regionBoundingBox:1;
        unsigned int read_subRegions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000101ccc7
+ (Class)subRegionsType;	// IMP=0x000000000101b9bd
+ (Class)displayNameType;	// IMP=0x000000000101b758
- (void).cxx_destruct;	// IMP=0x000000000101e306
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000101e034
- (unsigned long long)hash;	// IMP=0x000000000101dfa1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000101de4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000101d9d4
- (void)copyTo:(id)arg1;	// IMP=0x000000000101d7c7
- (void)writeTo:(id)arg1;	// IMP=0x000000000101d2bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000101d2ac
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000101c86d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000101c85b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000101c2a2
- (id)jsonRepresentation;	// IMP=0x000000000101c293
- (id)dictionaryRepresentation;	// IMP=0x000000000101bcfb
- (id)description;	// IMP=0x000000000101bc4c
@property(retain, nonatomic) GEOLPRBoundingBoxE7 *regionBoundingBox;
@property(readonly, nonatomic) _Bool hasRegionBoundingBox;
@property(retain, nonatomic) GEOLPRRegionInfo *info;
@property(readonly, nonatomic) _Bool hasInfo;
- (id)subRegionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000101b98c
- (unsigned long long)subRegionsCount;	// IMP=0x000000000101b960
- (void)addSubRegions:(id)arg1;	// IMP=0x000000000101b8ac
- (void)clearSubRegions;	// IMP=0x000000000101b884
@property(retain, nonatomic) NSMutableArray *subRegions;
- (id)displayNameAtIndex:(unsigned long long)arg1;	// IMP=0x000000000101b727
- (unsigned long long)displayNamesCount;	// IMP=0x000000000101b6fb
- (void)addDisplayName:(id)arg1;	// IMP=0x000000000101b647
- (void)clearDisplayNames;	// IMP=0x000000000101b61f
@property(retain, nonatomic) NSMutableArray *displayNames;
- (id)initWithData:(id)arg1;	// IMP=0x000000000101ab6e
- (id)init;	// IMP=0x000000000101ab12

@end
