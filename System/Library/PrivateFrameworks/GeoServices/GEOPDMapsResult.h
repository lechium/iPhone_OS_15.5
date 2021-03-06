//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDBatchReverseGeocodeResult, GEOPDCollectionResult, GEOPDPlace, GEOPDPlaceQuestionnaireResult, GEOPDPublisherResult, PBDataReader, PBUnknownFields;

@interface GEOPDMapsResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDBatchReverseGeocodeResult *_batchReverseGeocode;	// 24 = 0x18
    GEOPDCollectionResult *_collection;	// 32 = 0x20
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;	// 40 = 0x28
    GEOPDPlace *_place;	// 48 = 0x30
    GEOPDPublisherResult *_publisher;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _resultType;	// 76 = 0x4c
    struct {
        unsigned int has_resultType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_batchReverseGeocode:1;
        unsigned int read_collection:1;
        unsigned int read_placeQuestionnaire:1;
        unsigned int read_place:1;
        unsigned int read_publisher:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b76716
- (void).cxx_destruct;	// IMP=0x0000000000b78bfb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b787a3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b780e9
- (unsigned long long)hash;	// IMP=0x0000000000b78001
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b77e40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b77bc4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b77a74
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000b775c0
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000b772d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b76fcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b76fc0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b761f4
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b761e2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b750ca
- (id)jsonRepresentation;	// IMP=0x0000000000b74fb8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b74ada
- (id)description;	// IMP=0x0000000000b74a2b
@property(retain, nonatomic) GEOPDBatchReverseGeocodeResult *batchReverseGeocode;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocode;
@property(retain, nonatomic) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property(readonly, nonatomic) _Bool hasPlaceQuestionnaire;
@property(retain, nonatomic) GEOPDPublisherResult *publisher;
@property(readonly, nonatomic) _Bool hasPublisher;
@property(retain, nonatomic) GEOPDCollectionResult *collection;
@property(readonly, nonatomic) _Bool hasCollection;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (int)StringAsResultType:(id)arg1;	// IMP=0x0000000000b73890
- (id)resultTypeAsString:(int)arg1;	// IMP=0x0000000000b737f6
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b73733
- (id)init;	// IMP=0x0000000000b736d7

@end

