//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _cameraNumber;	// 16 = 0x10
    int _loadStatus;	// 20 = 0x14
    unsigned int _lod;	// 24 = 0x18
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_loadStatus:1;
        unsigned int has_lod:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000473fd2
- (void).cxx_destruct;	// IMP=0x0000000000474451
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000047440b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000474369
- (unsigned long long)hash;	// IMP=0x00000000004742ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004741de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000474126
- (void)copyTo:(id)arg1;	// IMP=0x0000000000474099
- (void)writeTo:(id)arg1;	// IMP=0x0000000000473fee
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000473fdf
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000473f72
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000473f60
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000473d02
- (id)jsonRepresentation;	// IMP=0x0000000000473bf0
- (id)dictionaryRepresentation;	// IMP=0x0000000000473907
- (id)description;	// IMP=0x0000000000473858
- (int)StringAsLoadStatus:(id)arg1;	// IMP=0x00000000004737c6
- (id)loadStatusAsString:(int)arg1;	// IMP=0x0000000000473760
@property(nonatomic) _Bool hasLoadStatus;
@property(nonatomic) int loadStatus;
@property(nonatomic) _Bool hasLod;
@property(nonatomic) unsigned int lod;
@property(nonatomic) _Bool hasCameraNumber;
@property(nonatomic) unsigned int cameraNumber;

@end
