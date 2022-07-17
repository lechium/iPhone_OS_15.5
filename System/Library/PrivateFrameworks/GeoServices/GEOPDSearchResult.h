//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDDirectionIntent, GEOPDPlaceSummaryLayoutMetadata, GEOPDRelatedSearchSuggestion, GEOPDResolvedItem, GEOPDResultRefinementGroup, GEOPDSSearchAutoRedoThreshold, GEOPDSearchClientBehavior, GEOPDSearchSectionList, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;	// 24 = 0x18
    GEOPDResolvedItem *_clientResolvedResult;	// 32 = 0x20
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;	// 40 = 0x28
    GEOPDDirectionIntent *_directionIntent;	// 48 = 0x30
    NSMutableArray *_disambiguationLabels;	// 56 = 0x38
    NSMutableArray *_displayHeaderSubstitutes;	// 64 = 0x40
    GEOMapRegion *_displayMapRegion;	// 72 = 0x48
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;	// 80 = 0x50
    NSMutableArray *_relatedEntitySections;	// 88 = 0x58
    NSMutableArray *_relatedSearchSuggestions;	// 96 = 0x60
    NSMutableArray *_resultDetourInfos;	// 104 = 0x68
    NSString *_resultDisplayHeader;	// 112 = 0x70
    GEOPDResultRefinementGroup *_resultRefinementGroup;	// 120 = 0x78
    NSMutableArray *_retainSearchs;	// 128 = 0x80
    GEOPDSearchClientBehavior *_searchClientBehavior;	// 136 = 0x88
    NSMutableArray *_searchResultSections;	// 144 = 0x90
    NSMutableArray *_searchTierMetadatas;	// 152 = 0x98
    GEOPDSearchSectionList *_sectionList;	// 160 = 0xa0
    unsigned int _readerMarkPos;	// 168 = 0xa8
    unsigned int _readerMarkLength;	// 172 = 0xac
    struct os_unfair_lock_s _readerLock;	// 176 = 0xb0
    unsigned int _dymSuggestionVisibleTime;	// 180 = 0xb4
    unsigned int _retainSearchTime;	// 184 = 0xb8
    int _searchResultType;	// 188 = 0xbc
    _Bool _disableAddingAdditionalPaddingOnViewport;	// 192 = 0xc0
    _Bool _enablePartialClientization;	// 193 = 0xc1
    _Bool _isChainResultSet;	// 194 = 0xc2
    _Bool _showDymSuggestionCloseButton;	// 195 = 0xc3
    struct {
        unsigned int has_dymSuggestionVisibleTime:1;
        unsigned int has_retainSearchTime:1;
        unsigned int has_searchResultType:1;
        unsigned int has_disableAddingAdditionalPaddingOnViewport:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int has_showDymSuggestionCloseButton:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autoRedoSearchThreshold:1;
        unsigned int read_clientResolvedResult:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_directionIntent:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayHeaderSubstitutes:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_placeSummaryLayoutMetadata:1;
        unsigned int read_relatedEntitySections:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_resultDisplayHeader:1;
        unsigned int read_resultRefinementGroup:1;
        unsigned int read_retainSearchs:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int read_searchResultSections:1;
        unsigned int read_searchTierMetadatas:1;
        unsigned int read_sectionList:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 196 = 0xc4
}

- (void).cxx_destruct;	// IMP=0x00000000005fb966
- (unsigned long long)hash;	// IMP=0x00000000005fb621
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005fb079
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005fa3a2
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f9905
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f98f6
- (id)jsonRepresentation;	// IMP=0x00000000005f97e4
- (id)dictionaryRepresentation;	// IMP=0x00000000005f7be0
- (id)description;	// IMP=0x00000000005f7b31
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f3c2f
- (id)init;	// IMP=0x00000000005f3bd3

@end
