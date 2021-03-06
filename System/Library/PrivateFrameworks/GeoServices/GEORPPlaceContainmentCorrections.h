//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPContainmentCorrection, PBDataReader, PBUnknownFields;

@interface GEORPPlaceContainmentCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPContainmentCorrection *_childContainment;	// 24 = 0x18
    GEORPContainmentCorrection *_parentContainment;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_childContainment:1;
        unsigned int read_parentContainment:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004799f2
- (void).cxx_destruct;	// IMP=0x000000000047a40a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000047a371
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000047a1d8
- (unsigned long long)hash;	// IMP=0x000000000047a17c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047a08b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000479ec9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000479dfb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000479be1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000479bd2
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000047973f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000047972d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000479584
- (id)jsonRepresentation;	// IMP=0x0000000000479472
- (id)dictionaryRepresentation;	// IMP=0x00000000004791f5
- (id)description;	// IMP=0x0000000000479146
@property(retain, nonatomic) GEORPContainmentCorrection *childContainment;
@property(readonly, nonatomic) _Bool hasChildContainment;
@property(retain, nonatomic) GEORPContainmentCorrection *parentContainment;
@property(readonly, nonatomic) _Bool hasParentContainment;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000478815
- (id)init;	// IMP=0x00000000004787b9

@end

