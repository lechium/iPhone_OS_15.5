//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, GEOPDPlace, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _distance;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 32 = 0x20
    unsigned long long _muid;	// 40 = 0x28
    GEOPDPlace *_place;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _resultProviderId;	// 68 = 0x44
    struct {
        unsigned int has_distance:1;
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapsId:1;
        unsigned int read_place:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000063707d
- (void).cxx_destruct;	// IMP=0x0000000000637c5f
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000637bc6
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006379c8
- (unsigned long long)hash;	// IMP=0x000000000063780c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000637688
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000637459
- (void)copyTo:(id)arg1;	// IMP=0x0000000000637331
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000006372c3
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000006372b1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000637099
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063708a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000636f71
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000636f5f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000636c52
- (id)jsonRepresentation;	// IMP=0x0000000000636b40
- (id)dictionaryRepresentation;	// IMP=0x00000000006367b9
- (id)description;	// IMP=0x000000000063670a
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) _Bool hasMapsId;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) double distance;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
@property(nonatomic) _Bool hasResultProviderId;
@property(nonatomic) int resultProviderId;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000635a5c
- (id)init;	// IMP=0x0000000000635a00

@end

