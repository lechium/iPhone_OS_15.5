//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOPBTransitArtwork, PBDataReader, PBUnknownFields;

@interface GEOTransitBanner : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPBTransitArtwork *_artwork;	// 24 = 0x18
    GEOFormattedString *_primaryText;	// 32 = 0x20
    GEOFormattedString *_secondaryText;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000391080
- (void).cxx_destruct;	// IMP=0x0000000000391bea
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000391b3b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000039196b
- (unsigned long long)hash;	// IMP=0x00000000003918ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003917ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003915e3
- (void)copyTo:(id)arg1;	// IMP=0x00000000003914f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003912a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000391292
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000390dcd
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000390dbb
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000390b52
- (id)jsonRepresentation;	// IMP=0x0000000000390a40
- (id)dictionaryRepresentation;	// IMP=0x0000000000390740
- (id)description;	// IMP=0x0000000000390691
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(retain, nonatomic) GEOFormattedString *secondaryText;
@property(readonly, nonatomic) _Bool hasSecondaryText;
@property(retain, nonatomic) GEOFormattedString *primaryText;
@property(readonly, nonatomic) _Bool hasPrimaryText;
- (id)initWithData:(id)arg1;	// IMP=0x000000000038fb00
- (id)init;	// IMP=0x000000000038faa4

@end
