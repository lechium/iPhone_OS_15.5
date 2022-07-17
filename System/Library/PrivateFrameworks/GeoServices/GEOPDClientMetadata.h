//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, GEOLocalizationCapabilities, GEOLocation, GEOPDMapsSuggestionsTouristInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _clientRevisions;	// 24 = 0x18
    CDStruct_95bda58d _knownClientResolvedTypeDeprecateds;	// 48 = 0x30
    CDStruct_95bda58d _knownClientResolvedTypes;	// 72 = 0x48
    CDStruct_95bda58d _supportedMapsResultTypes;	// 96 = 0x60
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;	// 120 = 0x78
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;	// 128 = 0x80
    NSMutableArray *_businessChatPreflightIdentifiers;	// 136 = 0x88
    NSString *_debugApiKey;	// 144 = 0x90
    NSString *_deviceCountryCode;	// 152 = 0x98
    NSString *_deviceDisplayLanguage;	// 160 = 0xa0
    GEOLocation *_deviceExtendedLocation;	// 168 = 0xa8
    NSMutableArray *_deviceHistoricalLocations;	// 176 = 0xb0
    NSString *_deviceKeyboardLanguage;	// 184 = 0xb8
    NSString *_deviceSku;	// 192 = 0xc0
    NSString *_deviceSpokenLanguage;	// 200 = 0xc8
    NSString *_displayRegion;	// 208 = 0xd0
    GEOLocalizationCapabilities *_localizationCapabilities;	// 216 = 0xd8
    GEOPDMapsSuggestionsTouristInfo *_mapsSuggestionsTouristInfo;	// 224 = 0xe0
    NSString *_preferredDisplayCurrencySymbol;	// 232 = 0xe8
    unsigned int _readerMarkPos;	// 240 = 0xf0
    unsigned int _readerMarkLength;	// 244 = 0xf4
    struct os_unfair_lock_s _readerLock;	// 248 = 0xf8
    int _clientRevision;	// 252 = 0xfc
    unsigned int _dayOfWeek;	// 256 = 0x100
    unsigned int _hourOfDay;	// 260 = 0x104
    int _requiredVersion;	// 264 = 0x108
    int _resultListAttributionSupport;	// 268 = 0x10c
    unsigned int _timeSinceMapEnteredForeground;	// 272 = 0x110
    _Bool _enablePreflightVenues;	// 276 = 0x114
    _Bool _siriUserConsentsForAnalysis;	// 277 = 0x115
    struct {
        unsigned int has_clientRevision:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_hourOfDay:1;
        unsigned int has_requiredVersion:1;
        unsigned int has_resultListAttributionSupport:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_enablePreflightVenues:1;
        unsigned int has_siriUserConsentsForAnalysis:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientRevisions:1;
        unsigned int read_knownClientResolvedTypeDeprecateds:1;
        unsigned int read_knownClientResolvedTypes:1;
        unsigned int read_supportedMapsResultTypes:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_businessChatPreflightIdentifiers:1;
        unsigned int read_debugApiKey:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceDisplayLanguage:1;
        unsigned int read_deviceExtendedLocation:1;
        unsigned int read_deviceHistoricalLocations:1;
        unsigned int read_deviceKeyboardLanguage:1;
        unsigned int read_deviceSku:1;
        unsigned int read_deviceSpokenLanguage:1;
        unsigned int read_displayRegion:1;
        unsigned int read_localizationCapabilities:1;
        unsigned int read_mapsSuggestionsTouristInfo:1;
        unsigned int read_preferredDisplayCurrencySymbol:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 280 = 0x118
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ddcde3
+ (Class)businessChatPreflightIdentifierType;	// IMP=0x0000000000dd7ffa
+ (Class)deviceHistoricalLocationType;	// IMP=0x0000000000dd71f6
- (void).cxx_destruct;	// IMP=0x0000000000de0ac0
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000de0774
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ddff37
- (unsigned long long)hash;	// IMP=0x0000000000ddfba4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ddf601
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ddee39
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dde7e4
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000dde664
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000dde2a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ddd9df
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ddd9d0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ddc8dc
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ddc8ca
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dda942
- (id)jsonRepresentation;	// IMP=0x0000000000dda830
- (id)dictionaryRepresentation;	// IMP=0x0000000000dd9336
- (id)description;	// IMP=0x0000000000dd9287
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(retain, nonatomic) NSString *preferredDisplayCurrencySymbol;
@property(readonly, nonatomic) _Bool hasPreferredDisplayCurrencySymbol;
- (int)StringAsClientRevisions:(id)arg1;	// IMP=0x0000000000dd8e68
- (id)clientRevisionsAsString:(int)arg1;	// IMP=0x0000000000dd8d8a
- (void)setClientRevisions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd8d65
- (int)clientRevisionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd8c8f
- (void)addClientRevisions:(int)arg1;	// IMP=0x0000000000dd8c53
- (void)clearClientRevisions;	// IMP=0x0000000000dd8c34
@property(readonly, nonatomic) int *clientRevisions;
@property(readonly, nonatomic) unsigned long long clientRevisionsCount;
@property(retain, nonatomic) GEOPDMapsSuggestionsTouristInfo *mapsSuggestionsTouristInfo;
@property(readonly, nonatomic) _Bool hasMapsSuggestionsTouristInfo;
- (int)StringAsSupportedMapsResultTypes:(id)arg1;	// IMP=0x0000000000dd88e8
- (id)supportedMapsResultTypesAsString:(int)arg1;	// IMP=0x0000000000dd884e
- (void)setSupportedMapsResultTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd8829
- (int)supportedMapsResultTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd8753
- (void)addSupportedMapsResultType:(int)arg1;	// IMP=0x0000000000dd8717
- (void)clearSupportedMapsResultTypes;	// IMP=0x0000000000dd86f8
@property(readonly, nonatomic) int *supportedMapsResultTypes;
@property(readonly, nonatomic) unsigned long long supportedMapsResultTypesCount;
@property(nonatomic) _Bool hasSiriUserConsentsForAnalysis;
@property(nonatomic) _Bool siriUserConsentsForAnalysis;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) _Bool hasDeviceSku;
@property(retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property(readonly, nonatomic) _Bool hasLocalizationCapabilities;
- (int)StringAsClientRevision:(id)arg1;	// IMP=0x0000000000dd8158
- (id)clientRevisionAsString:(int)arg1;	// IMP=0x0000000000dd807a
@property(nonatomic) _Bool hasClientRevision;
@property(nonatomic) int clientRevision;
- (id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd7fc9
- (unsigned long long)businessChatPreflightIdentifiersCount;	// IMP=0x0000000000dd7f9d
- (void)addBusinessChatPreflightIdentifier:(id)arg1;	// IMP=0x0000000000dd7ee6
- (void)clearBusinessChatPreflightIdentifiers;	// IMP=0x0000000000dd7ebb
@property(retain, nonatomic) NSMutableArray *businessChatPreflightIdentifiers;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;	// IMP=0x0000000000dd7c84
- (id)knownClientResolvedTypesAsString:(int)arg1;	// IMP=0x0000000000dd7bdf
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd7bba
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd7ae4
- (void)addKnownClientResolvedType:(int)arg1;	// IMP=0x0000000000dd7aa8
- (void)clearKnownClientResolvedTypes;	// IMP=0x0000000000dd7a89
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property(nonatomic) _Bool hasEnablePreflightVenues;
@property(nonatomic) _Bool enablePreflightVenues;
- (int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1;	// IMP=0x0000000000dd77dc
- (id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1;	// IMP=0x0000000000dd7736
- (void)setKnownClientResolvedTypeDeprecateds:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd7711
- (int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd763b
- (void)addKnownClientResolvedTypeDeprecated:(int)arg1;	// IMP=0x0000000000dd75ff
- (void)clearKnownClientResolvedTypeDeprecateds;	// IMP=0x0000000000dd75e0
@property(readonly, nonatomic) int *knownClientResolvedTypeDeprecateds;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypeDeprecatedsCount;
@property(retain, nonatomic) NSString *debugApiKey;
@property(readonly, nonatomic) _Bool hasDebugApiKey;
- (int)StringAsRequiredVersion:(id)arg1;	// IMP=0x0000000000dd72e4
- (id)requiredVersionAsString:(int)arg1;	// IMP=0x0000000000dd727d
@property(nonatomic) _Bool hasRequiredVersion;
@property(nonatomic) int requiredVersion;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd71c5
- (unsigned long long)deviceHistoricalLocationsCount;	// IMP=0x0000000000dd7199
- (void)addDeviceHistoricalLocation:(id)arg1;	// IMP=0x0000000000dd70e2
- (void)clearDeviceHistoricalLocations;	// IMP=0x0000000000dd70b7
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property(retain, nonatomic) GEOLocation *deviceExtendedLocation;
@property(readonly, nonatomic) _Bool hasDeviceExtendedLocation;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) unsigned int dayOfWeek;
@property(nonatomic) _Bool hasHourOfDay;
@property(nonatomic) unsigned int hourOfDay;
- (int)StringAsResultListAttributionSupport:(id)arg1;	// IMP=0x0000000000dd6d2a
- (id)resultListAttributionSupportAsString:(int)arg1;	// IMP=0x0000000000dd6cd5
@property(nonatomic) _Bool hasResultListAttributionSupport;
@property(nonatomic) int resultListAttributionSupport;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground;
@property(retain, nonatomic) NSString *deviceSpokenLanguage;
@property(readonly, nonatomic) _Bool hasDeviceSpokenLanguage;
@property(retain, nonatomic) NSString *deviceKeyboardLanguage;
@property(readonly, nonatomic) _Bool hasDeviceKeyboardLanguage;
@property(retain, nonatomic) NSString *deviceDisplayLanguage;
@property(readonly, nonatomic) _Bool hasDeviceDisplayLanguage;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (void)dealloc;	// IMP=0x0000000000dd42aa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dd424e
- (id)init;	// IMP=0x0000000000dd41f2
- (id)initWithTraits:(id)arg1;	// IMP=0x00000000012591cc
- (void)clearLocations;	// IMP=0x00000000012889ba

@end
