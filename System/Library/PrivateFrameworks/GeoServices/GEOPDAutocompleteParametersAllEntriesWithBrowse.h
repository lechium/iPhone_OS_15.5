//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDRetainedSearchMetadata, GEOPDSSearchEvChargingParameters, GEOPDVenueIdentifier, GEOPDViewportInfo, NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _knownRefinementTypes;	// 24 = 0x18
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;	// 48 = 0x30
    CDStruct_95bda58d _supportedHighlightTypes;	// 72 = 0x48
    CDStruct_95bda58d _supportedListTypes;	// 96 = 0x60
    CDStruct_95bda58d _supportedPlaceSummaryFormatTypes;	// 120 = 0x78
    NSData *_categorySuggestionEntryMetadata;	// 144 = 0x90
    GEOPDAutocompleteEntry *_categorySuggestionEntry;	// 152 = 0x98
    GEOPDSSearchEvChargingParameters *_evChargingParameters;	// 160 = 0xa0
    GEOPDAutocompleteEntry *_querySuggestionEntry;	// 168 = 0xa8
    NSString *_query;	// 176 = 0xb0
    GEOPDRetainedSearchMetadata *_retainedSearch;	// 184 = 0xb8
    GEOPDVenueIdentifier *_venueIdentifier;	// 192 = 0xc0
    GEOPDViewportInfo *_viewportInfo;	// 200 = 0xc8
    unsigned int _readerMarkPos;	// 208 = 0xd0
    unsigned int _readerMarkLength;	// 212 = 0xd4
    struct os_unfair_lock_s _readerLock;	// 216 = 0xd8
    int _maxQueryBuilderSuggestions;	// 220 = 0xdc
    int _maxResults;	// 224 = 0xe0
    int _placeSummaryRevision;	// 228 = 0xe4
    _Bool _highlightDiff;	// 232 = 0xe8
    _Bool _interleaveCategorySuggestions;	// 233 = 0xe9
    _Bool _supportClientRankingFeatureMetadata;	// 234 = 0xea
    _Bool _supportDirectionIntentSuggestions;	// 235 = 0xeb
    _Bool _supportRapAffordance;	// 236 = 0xec
    _Bool _supportSectionHeader;	// 237 = 0xed
    _Bool _supportUnresolvedDirectionIntent;	// 238 = 0xee
    struct {
        unsigned int has_maxQueryBuilderSuggestions:1;
        unsigned int has_maxResults:1;
        unsigned int has_placeSummaryRevision:1;
        unsigned int has_highlightDiff:1;
        unsigned int has_interleaveCategorySuggestions:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentSuggestions:1;
        unsigned int has_supportRapAffordance:1;
        unsigned int has_supportSectionHeader:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_knownRefinementTypes:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedHighlightTypes:1;
        unsigned int read_supportedListTypes:1;
        unsigned int read_supportedPlaceSummaryFormatTypes:1;
        unsigned int read_categorySuggestionEntryMetadata:1;
        unsigned int read_categorySuggestionEntry:1;
        unsigned int read_evChargingParameters:1;
        unsigned int read_querySuggestionEntry:1;
        unsigned int read_query:1;
        unsigned int read_retainedSearch:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 240 = 0xf0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004da31c
- (void).cxx_destruct;	// IMP=0x00000000004dc141
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004dc037
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004dba65
- (unsigned long long)hash;	// IMP=0x00000000004db73a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004db23d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004dadbc
- (void)copyTo:(id)arg1;	// IMP=0x00000000004da885
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000004da7f1
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000004da7df
- (void)writeTo:(id)arg1;	// IMP=0x00000000004da338
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004da329
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004da210
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004da1fe
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004d87ca
- (id)jsonRepresentation;	// IMP=0x00000000004d86b8
- (id)dictionaryRepresentation;	// IMP=0x00000000004d7453
- (id)description;	// IMP=0x00000000004d73a4
- (int)StringAsSupportedHighlightTypes:(id)arg1;	// IMP=0x00000000004d7312
- (id)supportedHighlightTypesAsString:(int)arg1;	// IMP=0x00000000004d72ac
- (void)setSupportedHighlightTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d7287
- (int)supportedHighlightTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d71b1
- (void)addSupportedHighlightType:(int)arg1;	// IMP=0x00000000004d7175
- (void)clearSupportedHighlightTypes;	// IMP=0x00000000004d7156
@property(readonly, nonatomic) int *supportedHighlightTypes;
@property(readonly, nonatomic) unsigned long long supportedHighlightTypesCount;
@property(retain, nonatomic) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property(readonly, nonatomic) _Bool hasEvChargingParameters;
- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)arg1;	// IMP=0x00000000004d6e2c
- (id)supportedPlaceSummaryFormatTypesAsString:(int)arg1;	// IMP=0x00000000004d6da1
- (void)setSupportedPlaceSummaryFormatTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d6d7c
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d6ca6
- (void)addSupportedPlaceSummaryFormatType:(int)arg1;	// IMP=0x00000000004d6c6a
- (void)clearSupportedPlaceSummaryFormatTypes;	// IMP=0x00000000004d6c4b
@property(readonly, nonatomic) int *supportedPlaceSummaryFormatTypes;
@property(readonly, nonatomic) unsigned long long supportedPlaceSummaryFormatTypesCount;
- (int)StringAsPlaceSummaryRevision:(id)arg1;	// IMP=0x00000000004d67e8
- (id)placeSummaryRevisionAsString:(int)arg1;	// IMP=0x00000000004d663a
@property(nonatomic) _Bool hasPlaceSummaryRevision;
@property(nonatomic) int placeSummaryRevision;
- (int)StringAsKnownRefinementTypes:(id)arg1;	// IMP=0x00000000004d64d8
- (id)knownRefinementTypesAsString:(int)arg1;	// IMP=0x00000000004d6440
- (void)setKnownRefinementTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d641b
- (int)knownRefinementTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d6345
- (void)addKnownRefinementType:(int)arg1;	// IMP=0x00000000004d6309
- (void)clearKnownRefinementTypes;	// IMP=0x00000000004d62ea
@property(readonly, nonatomic) int *knownRefinementTypes;
@property(readonly, nonatomic) unsigned long long knownRefinementTypesCount;
@property(nonatomic) _Bool hasSupportRapAffordance;
@property(nonatomic) _Bool supportRapAffordance;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;	// IMP=0x00000000004d60a0
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;	// IMP=0x00000000004d6014
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d5fef
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d5f19
- (void)addSupportedAutocompleteResultCellType:(int)arg1;	// IMP=0x00000000004d5edd
- (void)clearSupportedAutocompleteResultCellTypes;	// IMP=0x00000000004d5ebe
@property(readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
@property(nonatomic) _Bool hasSupportSectionHeader;
@property(nonatomic) _Bool supportSectionHeader;
@property(nonatomic) _Bool hasMaxQueryBuilderSuggestions;
@property(nonatomic) int maxQueryBuilderSuggestions;
@property(nonatomic) _Bool hasSupportClientRankingFeatureMetadata;
@property(nonatomic) _Bool supportClientRankingFeatureMetadata;
@property(retain, nonatomic) GEOPDAutocompleteEntry *querySuggestionEntry;
@property(readonly, nonatomic) _Bool hasQuerySuggestionEntry;
- (int)StringAsSupportedListTypes:(id)arg1;	// IMP=0x00000000004d5a91
- (id)supportedListTypesAsString:(int)arg1;	// IMP=0x00000000004d5a2b
- (void)setSupportedListTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d5a06
- (int)supportedListTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d5930
- (void)addSupportedListType:(int)arg1;	// IMP=0x00000000004d58f4
- (void)clearSupportedListTypes;	// IMP=0x00000000004d58d5
@property(readonly, nonatomic) int *supportedListTypes;
@property(readonly, nonatomic) unsigned long long supportedListTypesCount;
@property(nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property(nonatomic) _Bool supportUnresolvedDirectionIntent;
@property(retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property(readonly, nonatomic) _Bool hasRetainedSearch;
@property(nonatomic) _Bool hasSupportDirectionIntentSuggestions;
@property(nonatomic) _Bool supportDirectionIntentSuggestions;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property(readonly, nonatomic) _Bool hasVenueIdentifier;
@property(nonatomic) _Bool hasInterleaveCategorySuggestions;
@property(nonatomic) _Bool interleaveCategorySuggestions;
@property(retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property(readonly, nonatomic) _Bool hasCategorySuggestionEntry;
@property(retain, nonatomic) NSData *categorySuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasCategorySuggestionEntryMetadata;
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (void)dealloc;	// IMP=0x00000000004d2ed3
- (id)initWithData:(id)arg1;	// IMP=0x00000000004d2e77
- (id)init;	// IMP=0x00000000004d2e1b

@end

