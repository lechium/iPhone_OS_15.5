//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientMetrics, GEOPDDatasetABStatus, GEOPDPlaceGlobalResult, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlaceResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOClientMetrics *_clientMetrics;	// 24 = 0x18
    GEOPDDatasetABStatus *_datasetAbStatus;	// 32 = 0x20
    NSString *_debugApiKey;	// 40 = 0x28
    unsigned long long _debugLatencyMs;	// 48 = 0x30
    NSMutableArray *_displayLanguages;	// 56 = 0x38
    NSString *_displayRegion;	// 64 = 0x40
    NSMutableArray *_dotPlaces;	// 72 = 0x48
    GEOPDPlaceGlobalResult *_globalResult;	// 80 = 0x50
    NSMutableArray *_mapsResults;	// 88 = 0x58
    NSMutableArray *_legacyPlaceResults;	// 96 = 0x60
    NSMutableArray *_spokenLanguages;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    int _requestType;	// 124 = 0x7c
    int _status;	// 128 = 0x80
    struct {
        unsigned int has_debugLatencyMs:1;
        unsigned int has_requestType:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugApiKey:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_displayRegion:1;
        unsigned int read_dotPlaces:1;
        unsigned int read_globalResult:1;
        unsigned int read_mapsResults:1;
        unsigned int read_legacyPlaceResults:1;
        unsigned int read_spokenLanguages:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000005cf016
+ (Class)dotPlaceType;	// IMP=0x00000000005cc4be
+ (Class)mapsResultType;	// IMP=0x00000000005cc254
+ (Class)spokenLanguageType;	// IMP=0x00000000005cbd68
+ (Class)displayLanguageType;	// IMP=0x00000000005cb9bc
+ (Class)legacyPlaceResultType;	// IMP=0x00000000005cb751
- (void).cxx_destruct;	// IMP=0x00000000005d441c
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool hasClientMetrics;
@property(nonatomic) _Bool hasDebugLatencyMs;
@property(nonatomic) unsigned long long debugLatencyMs;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000005d3f07
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000005d379b
- (unsigned long long)hash;	// IMP=0x00000000005d35f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d32d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005d29dd
- (void)copyTo:(id)arg1;	// IMP=0x00000000005d2558
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000005d04b2
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000005cfee8
- (void)writeTo:(id)arg1;	// IMP=0x00000000005cf497
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005cf488
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000005ced63
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000005ced51
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000005cd692
- (id)jsonRepresentation;	// IMP=0x00000000005cd580
- (id)dictionaryRepresentation;	// IMP=0x00000000005cc57e
- (id)description;	// IMP=0x00000000005cc4cf
- (id)dotPlaceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005cc48d
- (unsigned long long)dotPlacesCount;	// IMP=0x00000000005cc461
- (void)addDotPlace:(id)arg1;	// IMP=0x00000000005cc3ac
- (void)clearDotPlaces;	// IMP=0x00000000005cc383
@property(retain, nonatomic) NSMutableArray *dotPlaces;
- (id)mapsResultAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005cc223
- (unsigned long long)mapsResultsCount;	// IMP=0x00000000005cc1f7
- (void)addMapsResult:(id)arg1;	// IMP=0x00000000005cc142
- (void)clearMapsResults;	// IMP=0x00000000005cc119
@property(retain, nonatomic) NSMutableArray *mapsResults;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
@property(retain, nonatomic) NSString *debugApiKey;
@property(readonly, nonatomic) _Bool hasDebugApiKey;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005cbd37
- (unsigned long long)spokenLanguagesCount;	// IMP=0x00000000005cbd0b
- (void)addSpokenLanguage:(id)arg1;	// IMP=0x00000000005cbc56
- (void)clearSpokenLanguages;	// IMP=0x00000000005cbc2d
@property(retain, nonatomic) NSMutableArray *spokenLanguages;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005cb98b
- (unsigned long long)displayLanguagesCount;	// IMP=0x00000000005cb95f
- (void)addDisplayLanguage:(id)arg1;	// IMP=0x00000000005cb8a9
- (void)clearDisplayLanguages;	// IMP=0x00000000005cb87f
@property(retain, nonatomic) NSMutableArray *displayLanguages;
- (id)legacyPlaceResultAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005cb720
- (unsigned long long)legacyPlaceResultsCount;	// IMP=0x00000000005cb6f4
- (void)addLegacyPlaceResult:(id)arg1;	// IMP=0x00000000005cb63f
- (void)clearLegacyPlaceResults;	// IMP=0x00000000005cb616
@property(retain, nonatomic) NSMutableArray *legacyPlaceResults;
@property(retain, nonatomic) GEOPDPlaceGlobalResult *globalResult;
@property(readonly, nonatomic) _Bool hasGlobalResult;
- (int)StringAsRequestType:(id)arg1;	// IMP=0x00000000005c993c
- (id)requestTypeAsString:(int)arg1;	// IMP=0x00000000005c95af
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000005c93e4
- (id)statusAsString:(int)arg1;	// IMP=0x00000000005c930c
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
- (id)initWithData:(id)arg1;	// IMP=0x00000000005c923d
- (id)init;	// IMP=0x00000000005c91e1
- (id)_disambiguationLabels;	// IMP=0x0000000000714ef5
- (id)resultsWithResultType:(int)arg1;	// IMP=0x0000000000c562ac
- (unsigned long long)resultsCountWithResultType:(int)arg1;	// IMP=0x0000000000c5603c
- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;	// IMP=0x0000000000c55f30

@end
