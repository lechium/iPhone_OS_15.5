//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOLocation, GEOMapRegion, GEOPDResultRefinementQuery, GEOPDVenueIdentifier, GEOPDViewportInfo, GEOTraitsTransitScheduleFilter, GEOTransitOptions, GEOWalkingOptions, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapServiceTraits : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _engineTypes;	// 24 = 0x18
    CDStruct_95bda58d _knownClientResolvedTypes;	// 48 = 0x30
    CDStruct_95bda58d _knownRefinementTypes;	// 72 = 0x48
    CDStruct_95bda58d _supportedAutocompleteListTypes;	// 96 = 0x60
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;	// 120 = 0x78
    CDStruct_95bda58d _supportedChildActions;	// 144 = 0x90
    CDStruct_95bda58d _supportedPlaceSummaryFormatTypes;	// 168 = 0xa8
    CDStruct_95bda58d _supportedSearchTierTypes;	// 192 = 0xc0
    CDStruct_95bda58d _transportTypes;	// 216 = 0xd8
    struct GEOSessionID _sessionId;	// 240 = 0xf0
    NSString *_analyticsAppIdentifier;	// 256 = 0x100
    NSString *_appIdentifier;	// 264 = 0x108
    NSString *_appMajorVersion;	// 272 = 0x110
    NSString *_appMinorVersion;	// 280 = 0x118
    GEOAutomobileOptions *_automobileOptions;	// 288 = 0x120
    NSString *_carHeadunitManufacturer;	// 296 = 0x128
    NSString *_carHeadunitModel;	// 304 = 0x130
    double _carHeadunitPixelHeight;	// 312 = 0x138
    double _carHeadunitPixelWidth;	// 320 = 0x140
    NSString *_currentLocaleCurrencySymbol;	// 328 = 0x148
    GEOCyclingOptions *_cyclingOptions;	// 336 = 0x150
    GEOLocation *_deviceLocation;	// 344 = 0x158
    NSMutableArray *_deviceDisplayLanguages;	// 352 = 0x160
    NSString *_deviceKeyboardLocale;	// 360 = 0x168
    NSString *_deviceSpokenLocale;	// 368 = 0x170
    NSString *_displayRegion;	// 376 = 0x178
    NSMutableArray *_evChargingPorts;	// 384 = 0x180
    NSMutableArray *_historicalLocations;	// 392 = 0x188
    double _isTourist;	// 400 = 0x190
    GEOMapRegion *_mapRegion;	// 408 = 0x198
    double _mapZoomLevel;	// 416 = 0x1a0
    NSMutableArray *_photoSizes;	// 424 = 0x1a8
    GEOPDViewportInfo *_previousSearchViewport;	// 432 = 0x1b0
    NSString *_providerID;	// 440 = 0x1b8
    GEOPDResultRefinementQuery *_resultRefinementQuery;	// 448 = 0x1c0
    NSMutableArray *_reviewUserPhotoSizes;	// 456 = 0x1c8
    double _sessionRelativeTimestamp;	// 464 = 0x1d0
    GEOTransitOptions *_transitOptions;	// 472 = 0x1d8
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;	// 480 = 0x1e0
    GEOTraitsTransitScheduleFilter *_transitTripStopTimeFilter;	// 488 = 0x1e8
    GEOPDVenueIdentifier *_venueIdentifier;	// 496 = 0x1f0
    GEOWalkingOptions *_walkingOptions;	// 504 = 0x1f8
    unsigned int _readerMarkPos;	// 512 = 0x200
    unsigned int _readerMarkLength;	// 516 = 0x204
    struct os_unfair_lock_s _readerLock;	// 520 = 0x208
    unsigned int _auxiliaryTierNumResults;	// 524 = 0x20c
    int _carHeadunitConnectionType;	// 528 = 0x210
    int _carHeadunitInteractionModel;	// 532 = 0x214
    int _deviceBatteryState;	// 536 = 0x218
    int _deviceInterfaceOrientation;	// 540 = 0x21c
    unsigned int _httpRequestPriority;	// 544 = 0x220
    int _mode;	// 548 = 0x224
    int _navigationTransportType;	// 552 = 0x228
    unsigned int _photoAlbumCount;	// 556 = 0x22c
    unsigned int _photosCount;	// 560 = 0x230
    unsigned int _placeSummaryRevision;	// 564 = 0x234
    unsigned int _ratingsCount;	// 568 = 0x238
    unsigned int _relatedPlaceItemCount;	// 572 = 0x23c
    int _requestPurpose;	// 576 = 0x240
    unsigned int _reviewUserPhotosCount;	// 580 = 0x244
    int _searchRequestType;	// 584 = 0x248
    unsigned int _sequenceNumber;	// 588 = 0x24c
    int _source;	// 592 = 0x250
    unsigned int _timeSinceMapEnteredForeground;	// 596 = 0x254
    unsigned int _timeSinceMapViewportChanged;	// 600 = 0x258
    _Bool _appDarkMode;	// 604 = 0x25c
    _Bool _autocompleteRequestSupportsSectionHeader;	// 605 = 0x25d
    _Bool _deviceDarkMode;	// 606 = 0x25e
    _Bool _deviceInVehicle;	// 607 = 0x25f
    _Bool _isAPICall;	// 608 = 0x260
    _Bool _isRefund;	// 609 = 0x261
    _Bool _isSettlement;	// 610 = 0x262
    _Bool _isWidgetRequest;	// 611 = 0x263
    _Bool _navigating;	// 612 = 0x264
    _Bool _supportAutocompleteGuideResults;	// 613 = 0x265
    _Bool _supportAutocompletePublisherResults;	// 614 = 0x266
    _Bool _supportAutocompleteRapAffordance;	// 615 = 0x267
    _Bool _supportChildItems;	// 616 = 0x268
    _Bool _supportClientRankingFeatureMetadata;	// 617 = 0x269
    _Bool _supportDirectionIntentAutocomplete;	// 618 = 0x26a
    _Bool _supportDirectionIntentSearch;	// 619 = 0x26b
    _Bool _supportDymSuggestion;	// 620 = 0x26c
    _Bool _supportUnresolvedDirectionIntent;	// 621 = 0x26d
    _Bool _supportsBrandFallback;	// 622 = 0x26e
    _Bool _useBackgroundUrl;	// 623 = 0x26f
    _Bool _wantsBrandIcon;	// 624 = 0x270
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_carHeadunitPixelHeight:1;
        unsigned int has_carHeadunitPixelWidth:1;
        unsigned int has_isTourist:1;
        unsigned int has_mapZoomLevel:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_auxiliaryTierNumResults:1;
        unsigned int has_carHeadunitConnectionType:1;
        unsigned int has_carHeadunitInteractionModel:1;
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_httpRequestPriority:1;
        unsigned int has_mode:1;
        unsigned int has_navigationTransportType:1;
        unsigned int has_photoAlbumCount:1;
        unsigned int has_photosCount:1;
        unsigned int has_placeSummaryRevision:1;
        unsigned int has_ratingsCount:1;
        unsigned int has_relatedPlaceItemCount:1;
        unsigned int has_requestPurpose:1;
        unsigned int has_reviewUserPhotosCount:1;
        unsigned int has_searchRequestType:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_source:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_timeSinceMapViewportChanged:1;
        unsigned int has_appDarkMode:1;
        unsigned int has_autocompleteRequestSupportsSectionHeader:1;
        unsigned int has_deviceDarkMode:1;
        unsigned int has_deviceInVehicle:1;
        unsigned int has_isAPICall:1;
        unsigned int has_isRefund:1;
        unsigned int has_isSettlement:1;
        unsigned int has_isWidgetRequest:1;
        unsigned int has_navigating:1;
        unsigned int has_supportAutocompleteGuideResults:1;
        unsigned int has_supportAutocompletePublisherResults:1;
        unsigned int has_supportAutocompleteRapAffordance:1;
        unsigned int has_supportChildItems:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentAutocomplete:1;
        unsigned int has_supportDirectionIntentSearch:1;
        unsigned int has_supportDymSuggestion:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int has_supportsBrandFallback:1;
        unsigned int has_useBackgroundUrl:1;
        unsigned int has_wantsBrandIcon:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_knownClientResolvedTypes:1;
        unsigned int read_knownRefinementTypes:1;
        unsigned int read_supportedAutocompleteListTypes:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedChildActions:1;
        unsigned int read_supportedPlaceSummaryFormatTypes:1;
        unsigned int read_supportedSearchTierTypes:1;
        unsigned int read_transportTypes:1;
        unsigned int read_analyticsAppIdentifier:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_carHeadunitManufacturer:1;
        unsigned int read_carHeadunitModel:1;
        unsigned int read_currentLocaleCurrencySymbol:1;
        unsigned int read_cyclingOptions:1;
        unsigned int read_deviceLocation:1;
        unsigned int read_deviceDisplayLanguages:1;
        unsigned int read_deviceKeyboardLocale:1;
        unsigned int read_deviceSpokenLocale:1;
        unsigned int read_displayRegion:1;
        unsigned int read_evChargingPorts:1;
        unsigned int read_historicalLocations:1;
        unsigned int read_mapRegion:1;
        unsigned int read_photoSizes:1;
        unsigned int read_previousSearchViewport:1;
        unsigned int read_providerID:1;
        unsigned int read_resultRefinementQuery:1;
        unsigned int read_reviewUserPhotoSizes:1;
        unsigned int read_transitOptions:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 628 = 0x274
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f83287
+ (Class)evChargingPortType;	// IMP=0x0000000000f7891b
+ (Class)historicalLocationsType;	// IMP=0x0000000000f75857
+ (Class)reviewUserPhotoSizesType;	// IMP=0x0000000000f74110
+ (Class)photoSizesType;	// IMP=0x0000000000f73d9a
+ (Class)deviceDisplayLanguageType;	// IMP=0x0000000000f731d4
- (void).cxx_destruct;	// IMP=0x0000000000f8ccca
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f8c7b3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f8b3b0
- (unsigned long long)hash;	// IMP=0x0000000000f8a295
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f890c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f87e26
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f86d3b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000f86b32
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000f86770
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f8531c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f8530d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f82b02
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f82af0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f7db7a
- (id)jsonRepresentation;	// IMP=0x0000000000f7da68
- (id)dictionaryRepresentation;	// IMP=0x0000000000f7a066
- (id)description;	// IMP=0x0000000000f79fb7
- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)arg1;	// IMP=0x0000000000f79eec
- (id)supportedPlaceSummaryFormatTypesAsString:(int)arg1;	// IMP=0x0000000000f79e5f
- (void)setSupportedPlaceSummaryFormatTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f79e23
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f79d4d
- (void)addSupportedPlaceSummaryFormatType:(int)arg1;	// IMP=0x0000000000f79cfd
- (void)clearSupportedPlaceSummaryFormatTypes;	// IMP=0x0000000000f79cca
@property(readonly, nonatomic) int *supportedPlaceSummaryFormatTypes;
@property(readonly, nonatomic) unsigned long long supportedPlaceSummaryFormatTypesCount;
@property(retain, nonatomic) NSString *currentLocaleCurrencySymbol;
@property(readonly, nonatomic) _Bool hasCurrentLocaleCurrencySymbol;
- (int)StringAsSearchRequestType:(id)arg1;	// IMP=0x0000000000f799d6
- (id)searchRequestTypeAsString:(int)arg1;	// IMP=0x0000000000f79970
@property(nonatomic) _Bool hasSearchRequestType;
@property(nonatomic) int searchRequestType;
@property(nonatomic) _Bool hasRelatedPlaceItemCount;
@property(nonatomic) unsigned int relatedPlaceItemCount;
@property(retain, nonatomic) GEOPDResultRefinementQuery *resultRefinementQuery;
@property(readonly, nonatomic) _Bool hasResultRefinementQuery;
@property(nonatomic) _Bool hasPhotoAlbumCount;
@property(nonatomic) unsigned int photoAlbumCount;
@property(retain, nonatomic) GEOPDViewportInfo *previousSearchViewport;
@property(readonly, nonatomic) _Bool hasPreviousSearchViewport;
@property(nonatomic) _Bool hasSupportAutocompleteGuideResults;
@property(nonatomic) _Bool supportAutocompleteGuideResults;
@property(nonatomic) _Bool hasSupportAutocompletePublisherResults;
@property(nonatomic) _Bool supportAutocompletePublisherResults;
- (int)StringAsKnownRefinementTypes:(id)arg1;	// IMP=0x0000000000f79284
- (id)knownRefinementTypesAsString:(int)arg1;	// IMP=0x0000000000f791f9
- (void)setKnownRefinementTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f791bd
- (int)knownRefinementTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f790e7
- (void)addKnownRefinementType:(int)arg1;	// IMP=0x0000000000f79097
- (void)clearKnownRefinementTypes;	// IMP=0x0000000000f79064
@property(readonly, nonatomic) int *knownRefinementTypes;
@property(readonly, nonatomic) unsigned long long knownRefinementTypesCount;
@property(nonatomic) _Bool hasIsTourist;
@property(nonatomic) double isTourist;
@property(nonatomic) _Bool hasPlaceSummaryRevision;
@property(nonatomic) unsigned int placeSummaryRevision;
@property(nonatomic) _Bool hasAuxiliaryTierNumResults;
@property(nonatomic) unsigned int auxiliaryTierNumResults;
- (int)StringAsSupportedSearchTierTypes:(id)arg1;	// IMP=0x0000000000f78ce6
- (id)supportedSearchTierTypesAsString:(int)arg1;	// IMP=0x0000000000f78c80
- (void)setSupportedSearchTierTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f78c44
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f78b6e
- (void)addSupportedSearchTierType:(int)arg1;	// IMP=0x0000000000f78b1e
- (void)clearSupportedSearchTierTypes;	// IMP=0x0000000000f78aeb
@property(readonly, nonatomic) int *supportedSearchTierTypes;
@property(readonly, nonatomic) unsigned long long supportedSearchTierTypesCount;
@property(nonatomic) _Bool hasIsWidgetRequest;
@property(nonatomic) _Bool isWidgetRequest;
- (id)evChargingPortAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f788ea
- (unsigned long long)evChargingPortsCount;	// IMP=0x0000000000f788be
- (void)addEvChargingPort:(id)arg1;	// IMP=0x0000000000f787ed
- (void)clearEvChargingPorts;	// IMP=0x0000000000f787a8
@property(retain, nonatomic) NSMutableArray *evChargingPorts;
@property(nonatomic) _Bool hasRatingsCount;
@property(nonatomic) unsigned int ratingsCount;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property(readonly, nonatomic) _Bool hasCyclingOptions;
- (int)StringAsNavigationTransportType:(id)arg1;	// IMP=0x0000000000f7836c
- (id)navigationTransportTypeAsString:(int)arg1;	// IMP=0x0000000000f782c6
@property(nonatomic) _Bool hasNavigationTransportType;
@property(nonatomic) int navigationTransportType;
@property(nonatomic) _Bool hasSupportAutocompleteRapAffordance;
@property(nonatomic) _Bool supportAutocompleteRapAffordance;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;	// IMP=0x0000000000f780ac
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;	// IMP=0x0000000000f78022
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f77fe6
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f77f10
- (void)addSupportedAutocompleteResultCellType:(int)arg1;	// IMP=0x0000000000f77ec0
- (void)clearSupportedAutocompleteResultCellTypes;	// IMP=0x0000000000f77e8d
@property(readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
@property(nonatomic) _Bool hasAutocompleteRequestSupportsSectionHeader;
@property(nonatomic) _Bool autocompleteRequestSupportsSectionHeader;
@property(nonatomic) _Bool hasIsRefund;
@property(nonatomic) _Bool isRefund;
@property(nonatomic) _Bool hasSupportChildItems;
@property(nonatomic) _Bool supportChildItems;
- (int)StringAsSupportedChildActions:(id)arg1;	// IMP=0x0000000000f77a5c
- (id)supportedChildActionsAsString:(int)arg1;	// IMP=0x0000000000f779a8
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f7796c
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f77896
- (void)addSupportedChildAction:(int)arg1;	// IMP=0x0000000000f77846
- (void)clearSupportedChildActions;	// IMP=0x0000000000f77813
@property(readonly, nonatomic) int *supportedChildActions;
@property(readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property(nonatomic) _Bool hasSupportClientRankingFeatureMetadata;
@property(nonatomic) _Bool supportClientRankingFeatureMetadata;
@property(retain, nonatomic) GEOTraitsTransitScheduleFilter *transitTripStopTimeFilter;
@property(readonly, nonatomic) _Bool hasTransitTripStopTimeFilter;
@property(nonatomic) _Bool hasIsSettlement;
@property(nonatomic) _Bool isSettlement;
- (int)StringAsSupportedAutocompleteListTypes:(id)arg1;	// IMP=0x0000000000f773c6
- (id)supportedAutocompleteListTypesAsString:(int)arg1;	// IMP=0x0000000000f77360
- (void)setSupportedAutocompleteListTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f77324
- (int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f7724e
- (void)addSupportedAutocompleteListType:(int)arg1;	// IMP=0x0000000000f771fe
- (void)clearSupportedAutocompleteListTypes;	// IMP=0x0000000000f771cb
@property(readonly, nonatomic) int *supportedAutocompleteListTypes;
@property(readonly, nonatomic) unsigned long long supportedAutocompleteListTypesCount;
- (int)StringAsRequestPurpose:(id)arg1;	// IMP=0x0000000000f7704c
- (id)requestPurposeAsString:(int)arg1;	// IMP=0x0000000000f76ff7
@property(nonatomic) _Bool hasRequestPurpose;
@property(nonatomic) int requestPurpose;
@property(nonatomic) _Bool hasSupportsBrandFallback;
@property(nonatomic) _Bool supportsBrandFallback;
@property(nonatomic) _Bool hasAppDarkMode;
@property(nonatomic) _Bool appDarkMode;
@property(nonatomic) _Bool hasDeviceDarkMode;
@property(nonatomic) _Bool deviceDarkMode;
@property(nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property(nonatomic) _Bool supportUnresolvedDirectionIntent;
@property(nonatomic) _Bool hasSupportDirectionIntentAutocomplete;
@property(nonatomic) _Bool supportDirectionIntentAutocomplete;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(retain, nonatomic) NSString *analyticsAppIdentifier;
@property(readonly, nonatomic) _Bool hasAnalyticsAppIdentifier;
@property(nonatomic) _Bool hasHttpRequestPriority;
@property(nonatomic) unsigned int httpRequestPriority;
@property(nonatomic) _Bool hasUseBackgroundUrl;
@property(nonatomic) _Bool useBackgroundUrl;
@property(nonatomic) _Bool hasDeviceInVehicle;
@property(nonatomic) _Bool deviceInVehicle;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property(readonly, nonatomic) _Bool hasVenueIdentifier;
@property(nonatomic) _Bool hasWantsBrandIcon;
@property(nonatomic) _Bool wantsBrandIcon;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;	// IMP=0x0000000000f76540
- (id)knownClientResolvedTypesAsString:(int)arg1;	// IMP=0x0000000000f76499
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f7645d
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f76387
- (void)addKnownClientResolvedType:(int)arg1;	// IMP=0x0000000000f76337
- (void)clearKnownClientResolvedTypes;	// IMP=0x0000000000f76304
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property(nonatomic) _Bool hasSupportDymSuggestion;
@property(nonatomic) _Bool supportDymSuggestion;
@property(nonatomic) _Bool hasSupportDirectionIntentSearch;
@property(nonatomic) _Bool supportDirectionIntentSearch;
- (int)StringAsEngineTypes:(id)arg1;	// IMP=0x0000000000f75fd8
- (id)engineTypesAsString:(int)arg1;	// IMP=0x0000000000f75f4e
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f75f12
- (int)engineTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f75e3c
- (void)addEngineType:(int)arg1;	// IMP=0x0000000000f75dec
- (void)clearEngineTypes;	// IMP=0x0000000000f75db9
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f75826
- (unsigned long long)historicalLocationsCount;	// IMP=0x0000000000f757fa
- (void)addHistoricalLocations:(id)arg1;	// IMP=0x0000000000f75729
- (void)clearHistoricalLocations;	// IMP=0x0000000000f756e4
@property(retain, nonatomic) NSMutableArray *historicalLocations;
@property(nonatomic) _Bool hasNavigating;
@property(nonatomic) _Bool navigating;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;	// IMP=0x0000000000f75459
- (id)carHeadunitConnectionTypeAsString:(int)arg1;	// IMP=0x0000000000f753f3
@property(nonatomic) _Bool hasCarHeadunitConnectionType;
@property(nonatomic) int carHeadunitConnectionType;
- (int)StringAsDeviceBatteryState:(id)arg1;	// IMP=0x0000000000f7529c
- (id)deviceBatteryStateAsString:(int)arg1;	// IMP=0x0000000000f7521c
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;	// IMP=0x0000000000f750a4
- (id)deviceInterfaceOrientationAsString:(int)arg1;	// IMP=0x0000000000f7501a
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation;
@property(retain, nonatomic) NSString *providerID;
@property(readonly, nonatomic) _Bool hasProviderID;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (int)StringAsMode:(id)arg1;	// IMP=0x0000000000f74bc4
- (id)modeAsString:(int)arg1;	// IMP=0x0000000000f74b38
@property(nonatomic) _Bool hasMode;
@property(nonatomic) int mode;
@property(nonatomic) _Bool hasMapZoomLevel;
@property(nonatomic) double mapZoomLevel;
@property(retain, nonatomic) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property(readonly, nonatomic) _Bool hasTransitScheduleFilter;
@property(nonatomic) _Bool hasCarHeadunitPixelHeight;
@property(nonatomic) double carHeadunitPixelHeight;
@property(nonatomic) _Bool hasCarHeadunitPixelWidth;
@property(nonatomic) double carHeadunitPixelWidth;
@property(retain, nonatomic) NSString *carHeadunitModel;
@property(readonly, nonatomic) _Bool hasCarHeadunitModel;
@property(retain, nonatomic) NSString *carHeadunitManufacturer;
@property(readonly, nonatomic) _Bool hasCarHeadunitManufacturer;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;	// IMP=0x0000000000f7440f
- (id)carHeadunitInteractionModelAsString:(int)arg1;	// IMP=0x0000000000f743a8
@property(nonatomic) _Bool hasCarHeadunitInteractionModel;
@property(nonatomic) int carHeadunitInteractionModel;
@property(nonatomic) _Bool hasTimeSinceMapViewportChanged;
@property(nonatomic) unsigned int timeSinceMapViewportChanged;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground;
@property(nonatomic) _Bool hasReviewUserPhotosCount;
@property(nonatomic) unsigned int reviewUserPhotosCount;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f740df
- (unsigned long long)reviewUserPhotoSizesCount;	// IMP=0x0000000000f740b3
- (void)addReviewUserPhotoSizes:(id)arg1;	// IMP=0x0000000000f73fe2
- (void)clearReviewUserPhotoSizes;	// IMP=0x0000000000f73f9d
@property(retain, nonatomic) NSMutableArray *reviewUserPhotoSizes;
@property(nonatomic) _Bool hasPhotosCount;
@property(nonatomic) unsigned int photosCount;
- (id)photoSizesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f73d69
- (unsigned long long)photoSizesCount;	// IMP=0x0000000000f73d3d
- (void)addPhotoSizes:(id)arg1;	// IMP=0x0000000000f73c6c
- (void)clearPhotoSizes;	// IMP=0x0000000000f73c27
@property(retain, nonatomic) NSMutableArray *photoSizes;
- (int)StringAsSource:(id)arg1;	// IMP=0x0000000000f73788
- (id)sourceAsString:(int)arg1;	// IMP=0x0000000000f735db
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source;
@property(nonatomic) _Bool hasIsAPICall;
@property(nonatomic) _Bool isAPICall;
@property(retain, nonatomic) NSString *deviceSpokenLocale;
@property(readonly, nonatomic) _Bool hasDeviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale;
@property(readonly, nonatomic) _Bool hasDeviceKeyboardLocale;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f731a3
- (unsigned long long)deviceDisplayLanguagesCount;	// IMP=0x0000000000f73177
- (void)addDeviceDisplayLanguage:(id)arg1;	// IMP=0x0000000000f730bf
- (void)clearDeviceDisplayLanguages;	// IMP=0x0000000000f73093
@property(retain, nonatomic) NSMutableArray *deviceDisplayLanguages;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (int)StringAsTransportTypes:(id)arg1;	// IMP=0x0000000000f72cdc
- (id)transportTypesAsString:(int)arg1;	// IMP=0x0000000000f72c38
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000f72bfc
- (int)transportTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f72b26
- (void)addTransportType:(int)arg1;	// IMP=0x0000000000f72ad6
- (void)clearTransportTypes;	// IMP=0x0000000000f72aa3
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
@property(retain, nonatomic) GEOLocation *deviceLocation;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;
- (void)dealloc;	// IMP=0x0000000000f6c70e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f6c6b2
- (id)init;	// IMP=0x0000000000f6c656
- (void)updateAnalyticsShortSession;	// IMP=0x00000000009ceec4
- (void)_internal_incrementSessionCounters;	// IMP=0x00000000011e79fb
- (id)copyByIncrementingSessionCounters;	// IMP=0x00000000011e79cb
- (void)clearLocations;	// IMP=0x000000000128896c
- (void)clearSessionId;	// IMP=0x000000000128891f

@end

