//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDETAFilter, GEOPDRecentRouteInfo, GEOPDResultRefinementQuery, GEOPDSSearchEvChargingParameters, GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _knownRefinementTypes;	// 24 = 0x18
    CDStruct_95bda58d _supportedPlaceSummaryFormatTypes;	// 48 = 0x30
    CDStruct_95bda58d _supportedRelatedEntitySectionTypes;	// 72 = 0x48
    CDStruct_95bda58d _supportedSearchSectionTypes;	// 96 = 0x60
    CDStruct_95bda58d _supportedSearchTierTypes;	// 120 = 0x78
    GEOPDETAFilter *_etaFilter;	// 144 = 0x90
    GEOPDSSearchEvChargingParameters *_evChargingParameters;	// 152 = 0x98
    GEOPDViewportInfo *_previousSearchViewport;	// 160 = 0xa0
    GEOPDRecentRouteInfo *_recentRouteInfo;	// 168 = 0xa8
    GEOPDResultRefinementQuery *_resultRefinementQuery;	// 176 = 0xb0
    NSData *_suggestionEntryMetadata;	// 184 = 0xb8
    GEOPDViewportInfo *_viewportInfo;	// 192 = 0xc0
    unsigned int _readerMarkPos;	// 200 = 0xc8
    unsigned int _readerMarkLength;	// 204 = 0xcc
    struct os_unfair_lock_s _readerLock;	// 208 = 0xd0
    unsigned int _auxiliaryTierNumResults;	// 212 = 0xd4
    unsigned int _blurredHourOfDay;	// 216 = 0xd8
    unsigned int _dayOfWeek;	// 220 = 0xdc
    unsigned int _maxResults;	// 224 = 0xe0
    int _placeSummaryRevision;	// 228 = 0xe4
    int _searchType;	// 232 = 0xe8
    _Bool _supportCategorySearchResultSection;	// 236 = 0xec
    struct {
        unsigned int has_auxiliaryTierNumResults:1;
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxResults:1;
        unsigned int has_placeSummaryRevision:1;
        unsigned int has_searchType:1;
        unsigned int has_supportCategorySearchResultSection:1;
        unsigned int read_unknownFields:1;
        unsigned int read_knownRefinementTypes:1;
        unsigned int read_supportedPlaceSummaryFormatTypes:1;
        unsigned int read_supportedRelatedEntitySectionTypes:1;
        unsigned int read_supportedSearchSectionTypes:1;
        unsigned int read_supportedSearchTierTypes:1;
        unsigned int read_etaFilter:1;
        unsigned int read_evChargingParameters:1;
        unsigned int read_previousSearchViewport:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_resultRefinementQuery:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000005099f3
- (unsigned long long)hash;	// IMP=0x000000000050951c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000509156
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000508d61
- (void)writeTo:(id)arg1;	// IMP=0x000000000050885f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000508850
- (id)jsonRepresentation;	// IMP=0x0000000000507fe0
- (id)dictionaryRepresentation;	// IMP=0x0000000000506d44
- (id)description;	// IMP=0x0000000000506c95
- (void)dealloc;	// IMP=0x000000000050444b
- (id)initWithData:(id)arg1;	// IMP=0x00000000005043ef
- (id)init;	// IMP=0x0000000000504393

@end

