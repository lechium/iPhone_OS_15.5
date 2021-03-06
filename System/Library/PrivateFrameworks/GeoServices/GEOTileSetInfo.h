//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTileSetInfo : PBCodable <NSCopying>
{
    unsigned int _count;	// 8 = 0x8
    int _style;	// 12 = 0xc
    unsigned int _uncertainty;	// 16 = 0x10
    unsigned int _zoom;	// 20 = 0x14
    struct {
        unsigned int has_count:1;
        unsigned int has_style:1;
        unsigned int has_uncertainty:1;
        unsigned int has_zoom:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000154a0e8
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000154a4d0
- (unsigned long long)hash;	// IMP=0x000000000154a439
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000154a30a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000154a25b
- (void)copyTo:(id)arg1;	// IMP=0x000000000154a1b3
- (void)writeTo:(id)arg1;	// IMP=0x000000000154a104
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000154a0f5
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000154a088
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000154a07b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001549366
- (id)jsonRepresentation;	// IMP=0x000000000154935c
- (id)dictionaryRepresentation;	// IMP=0x0000000001548cd5
- (id)description;	// IMP=0x0000000001548c26
@property(nonatomic) _Bool hasUncertainty;
@property(nonatomic) unsigned int uncertainty;
@property(nonatomic) _Bool hasZoom;
@property(nonatomic) unsigned int zoom;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsStyle:(id)arg1;	// IMP=0x0000000001548140
- (id)styleAsString:(int)arg1;	// IMP=0x0000000001547c4e
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style;

@end

