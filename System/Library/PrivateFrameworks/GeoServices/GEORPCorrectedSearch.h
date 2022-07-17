//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString, PBDataReader;

@interface GEORPCorrectedSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDPlaceRequest *_placeRequest;	// 16 = 0x10
    GEOPDPlaceResponse *_placeResponse;	// 24 = 0x18
    GEOPlaceSearchRequest *_placeSearchRequest;	// 32 = 0x20
    GEOPlaceSearchResponse *_placeSearchResponse;	// 40 = 0x28
    NSString *_preferredSearchDisplayLocation;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _correctedSearchResultIndex;	// 68 = 0x44
    unsigned int _originalSearchResultIndex;	// 72 = 0x48
    struct {
        unsigned int has_correctedSearchResultIndex:1;
        unsigned int has_originalSearchResultIndex:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_placeSearchResponse:1;
        unsigned int read_preferredSearchDisplayLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e246e2
- (void).cxx_destruct;	// IMP=0x0000000000e25a52
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e258e4
- (unsigned long long)hash;	// IMP=0x0000000000e257d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e255e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e25356
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e251e7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e25130
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e24d33
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e24a4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e24a3c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e2442f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e2441d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e23f95
- (id)jsonRepresentation;	// IMP=0x0000000000e23f86
- (id)dictionaryRepresentation;	// IMP=0x0000000000e23bd2
- (id)description;	// IMP=0x0000000000e23b23
@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property(readonly, nonatomic) _Bool hasPlaceResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
@property(retain, nonatomic) NSString *preferredSearchDisplayLocation;
@property(readonly, nonatomic) _Bool hasPreferredSearchDisplayLocation;
@property(nonatomic) _Bool hasCorrectedSearchResultIndex;
@property(nonatomic) unsigned int correctedSearchResultIndex;
@property(nonatomic) _Bool hasOriginalSearchResultIndex;
@property(nonatomic) unsigned int originalSearchResultIndex;
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property(readonly, nonatomic) _Bool hasPlaceSearchResponse;
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property(readonly, nonatomic) _Bool hasPlaceSearchRequest;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e22ac1
- (id)init;	// IMP=0x0000000000e22a65
- (_Bool)containsReportableData;	// IMP=0x0000000001289729

@end
