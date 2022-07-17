//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDPhotoPosition, PBDataReader;

@interface GEOPDStorefrontView : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    unsigned long long _imdataId;	// 16 = 0x10
    GEOPDGeographicCoordinate *_lookAtGeo;	// 24 = 0x18
    GEOPDOrientedPosition *_lookAt;	// 32 = 0x20
    GEOPDPhotoPosition *_photoPosition;	// 40 = 0x28
    GEOPDGeographicCoordinate *_viewpointGeo;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_imdataId:1;
        unsigned int read_lookAtGeo:1;
        unsigned int read_lookAt:1;
        unsigned int read_photoPosition:1;
        unsigned int read_viewpointGeo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009ac6ff
- (void).cxx_destruct;	// IMP=0x00000000009ad000
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009acece
- (unsigned long long)hash;	// IMP=0x00000000009ace16
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009acc89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009aca44
- (void)copyTo:(id)arg1;	// IMP=0x00000000009ac914
- (void)writeTo:(id)arg1;	// IMP=0x00000000009ac71b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009ac70c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009ac5f3
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009ac5e1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009ac250
- (id)jsonRepresentation;	// IMP=0x00000000009ac241
- (id)dictionaryRepresentation;	// IMP=0x00000000009abf45
- (id)description;	// IMP=0x00000000009abe96
@property(retain, nonatomic) GEOPDGeographicCoordinate *viewpointGeo;
@property(readonly, nonatomic) _Bool hasViewpointGeo;
@property(retain, nonatomic) GEOPDGeographicCoordinate *lookAtGeo;
@property(readonly, nonatomic) _Bool hasLookAtGeo;
@property(retain, nonatomic) GEOPDOrientedPosition *lookAt;
@property(readonly, nonatomic) _Bool hasLookAt;
@property(nonatomic) _Bool hasImdataId;
@property(nonatomic) unsigned long long imdataId;
@property(retain, nonatomic) GEOPDPhotoPosition *photoPosition;
@property(readonly, nonatomic) _Bool hasPhotoPosition;
- (id)initWithData:(id)arg1;	// IMP=0x00000000009ab10d
- (id)init;	// IMP=0x00000000009ab0b1

@end
