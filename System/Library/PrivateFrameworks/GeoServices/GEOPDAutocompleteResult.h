//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteSessionData, GEOPDParsecQueryRankingFeatures, GEOPDPlaceSummaryLayoutMetadata, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAutocompleteSessionData *_autocompleteSessionData;	// 24 = 0x18
    NSMutableArray *_clientRankingFeatureMetadatas;	// 32 = 0x20
    GEOPDParsecQueryRankingFeatures *_parsecQueryRankingFeatures;	// 40 = 0x28
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;	// 48 = 0x30
    NSMutableArray *_sections;	// 56 = 0x38
    NSMutableArray *_sortPriorityMappings;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _clientResolvedTypeSetupPrompt;	// 84 = 0x54
    int _highlightType;	// 88 = 0x58
    unsigned int _retainSearchTime;	// 92 = 0x5c
    _Bool _enableRap;	// 96 = 0x60
    _Bool _isNoResultFromNegativeCache;	// 97 = 0x61
    _Bool _isTopSectionTypeQuery;	// 98 = 0x62
    _Bool _shouldDifferentiateClientAndServerResults;	// 99 = 0x63
    _Bool _shouldDisplayNoResults;	// 100 = 0x64
    _Bool _shouldEnableGrayscaleHighlighting;	// 101 = 0x65
    _Bool _shouldUseDistanceFeatureServerResults;	// 102 = 0x66
    struct {
        unsigned int has_clientResolvedTypeSetupPrompt:1;
        unsigned int has_highlightType:1;
        unsigned int has_retainSearchTime:1;
        unsigned int has_enableRap:1;
        unsigned int has_isNoResultFromNegativeCache:1;
        unsigned int has_isTopSectionTypeQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int has_shouldDisplayNoResults:1;
        unsigned int has_shouldEnableGrayscaleHighlighting:1;
        unsigned int has_shouldUseDistanceFeatureServerResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_clientRankingFeatureMetadatas:1;
        unsigned int read_parsecQueryRankingFeatures:1;
        unsigned int read_placeSummaryLayoutMetadata:1;
        unsigned int read_sections:1;
        unsigned int read_sortPriorityMappings:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000004f106d
- (unsigned long long)hash;	// IMP=0x00000000004f0e05
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004f0a27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004f0372
- (void)writeTo:(id)arg1;	// IMP=0x00000000004ef647
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004ef638
- (id)jsonRepresentation;	// IMP=0x00000000004eec88
- (id)dictionaryRepresentation;	// IMP=0x00000000004eddb0
- (id)description;	// IMP=0x00000000004edd01
- (id)initWithData:(id)arg1;	// IMP=0x00000000004ebd5f
- (id)init;	// IMP=0x00000000004ebd03

@end

