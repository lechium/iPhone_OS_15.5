//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_mapRegion;	// 24 = 0x18
    NSMutableArray *_namedFeatures;	// 32 = 0x20
    NSString *_nearbySectionHeader;	// 40 = 0x28
    NSMutableArray *_placeResults;	// 48 = 0x30
    NSMutableArray *_suggestionEntryLists;	// 56 = 0x38
    NSData *_suggestionMetadata;	// 64 = 0x40
    double _turnaroundTime;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _statusCodeInfo;	// 92 = 0x5c
    int _status;	// 96 = 0x60
    _Bool _isChainResultSet;	// 100 = 0x64
    struct {
        unsigned int has_turnaroundTime:1;
        unsigned int has_statusCodeInfo:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapRegion:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_nearbySectionHeader:1;
        unsigned int read_placeResults:1;
        unsigned int read_suggestionEntryLists:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f03f60
+ (Class)namedFeaturesType;	// IMP=0x0000000000f00dca
+ (Class)suggestionEntryListsType;	// IMP=0x0000000000f00a1d
+ (Class)placeResultType;	// IMP=0x0000000000f00672
- (void).cxx_destruct;	// IMP=0x0000000000f06f7a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f0694e
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f0641e
- (unsigned long long)hash;	// IMP=0x0000000000f061da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f05f67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f058ed
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f055c7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000f051e7
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000f04f2c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f048c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f048b4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f03a3e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f03a2c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f01e8e
- (id)jsonRepresentation;	// IMP=0x0000000000f01d7c
- (id)dictionaryRepresentation;	// IMP=0x0000000000f0123c
- (id)description;	// IMP=0x0000000000f0118d
@property(nonatomic) _Bool hasIsChainResultSet;
@property(nonatomic) _Bool isChainResultSet;
@property(retain, nonatomic) NSString *nearbySectionHeader;
@property(readonly, nonatomic) _Bool hasNearbySectionHeader;
@property(nonatomic) _Bool hasTurnaroundTime;
@property(nonatomic) double turnaroundTime;
- (int)StringAsStatusCodeInfo:(id)arg1;	// IMP=0x0000000000f00ed0
- (id)statusCodeInfoAsString:(int)arg1;	// IMP=0x0000000000f00e50
@property(nonatomic) _Bool hasStatusCodeInfo;
@property(nonatomic) int statusCodeInfo;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f00d99
- (unsigned long long)namedFeaturesCount;	// IMP=0x0000000000f00d6d
- (void)addNamedFeatures:(id)arg1;	// IMP=0x0000000000f00cb7
- (void)clearNamedFeatures;	// IMP=0x0000000000f00c8d
@property(retain, nonatomic) NSMutableArray *namedFeatures;
@property(retain, nonatomic) NSData *suggestionMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f009ec
- (unsigned long long)suggestionEntryListsCount;	// IMP=0x0000000000f009c0
- (void)addSuggestionEntryLists:(id)arg1;	// IMP=0x0000000000f0090b
- (void)clearSuggestionEntryLists;	// IMP=0x0000000000f008e2
@property(retain, nonatomic) NSMutableArray *suggestionEntryLists;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (id)placeResultAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f00641
- (unsigned long long)placeResultsCount;	// IMP=0x0000000000f00615
- (void)addPlaceResult:(id)arg1;	// IMP=0x0000000000f0055f
- (void)clearPlaceResults;	// IMP=0x0000000000f00535
@property(retain, nonatomic) NSMutableArray *placeResults;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000eff21c
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000eff142
@property(nonatomic) int status;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000eff0ba
- (id)init;	// IMP=0x0000000000eff05e

@end
