//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitScheduleLookupParameters, GEOPDAddressObjectGeocodingParameters, GEOPDAirportEntityPlaceLookupParameters, GEOPDAllCollectionsViewParameters, GEOPDAllGuidesLocationsViewParameters, GEOPDAutocompleteParameters, GEOPDBatchCategoryLookupParameters, GEOPDBatchMerchantLookupBrandParameters, GEOPDBatchPopularNearbySearchParameters, GEOPDBatchReverseGeocodingParameters, GEOPDBatchSpatialLookupParameters, GEOPDBrandLookupParameters, GEOPDCanonicalLocationSearchParameters, GEOPDCategorySearchParameters, GEOPDChildPlaceLookupByCategoryParameters, GEOPDCollectionSuggestionParameters, GEOPDExtendedGeoLookupParameters, GEOPDExternalTransitLookupParameters, GEOPDFeatureIdGeocodingParameters, GEOPDGeocodingParameters, GEOPDGroundViewLabelParameters, GEOPDGuidesHomeParameters, GEOPDIpGeoLookupParameters, GEOPDLocationDirectedSearchParameters, GEOPDMapsHomeParameters, GEOPDMapsIdentifierPlaceLookupParameters, GEOPDMapsSearchHomeParameters, GEOPDMerchantLookupParameters, GEOPDNearbySearchParameters, GEOPDPlaceCollectionLookupParameters, GEOPDPlaceLookupParameters, GEOPDPlaceQuestionnaireLookupParameters, GEOPDPlaceRefinementParameters, GEOPDPopularNearbySearchParameters, GEOPDPublisherViewParameters, GEOPDReverseGeocodingParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDSearchFieldPlaceholderParameters, GEOPDSearchParameters, GEOPDSearchZeroKeywordCategorySuggestionParameters, GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters, GEOPDSiriSearchParameters, GEOPDTerritoryLookupParameters, GEOPDTransitNearbyScheduleLookupParameters, GEOPDTransitVehiclePositionParameters, GEOPDVendorSpecificPlaceRefinementParameters, GEOPDWifiFingerprintParameters, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAddressObjectGeocodingParameters *_addressObjectGeocodingParameters;	// 24 = 0x18
    GEOPDAirportEntityPlaceLookupParameters *_airportEntityPlaceLookupParameters;	// 32 = 0x20
    GEOPDAllCollectionsViewParameters *_allCollectionsViewParameters;	// 40 = 0x28
    GEOPDAllGuidesLocationsViewParameters *_allGuidesLocationsViewParameters;	// 48 = 0x30
    GEOPDAutocompleteParameters *_autocompleteParameters;	// 56 = 0x38
    GEOPDBatchCategoryLookupParameters *_batchCategoryLookupParameters;	// 64 = 0x40
    GEOPDBatchMerchantLookupBrandParameters *_batchMerchantLookupBrandParameters;	// 72 = 0x48
    GEOPDBatchPopularNearbySearchParameters *_batchPopularNearbySearchParameters;	// 80 = 0x50
    GEOPDBatchReverseGeocodingParameters *_batchReverseGeocodingParameters;	// 88 = 0x58
    GEOPDBatchSpatialLookupParameters *_batchSpatialLookupParameters;	// 96 = 0x60
    GEOPDBrandLookupParameters *_brandLookupParameters;	// 104 = 0x68
    GEOPDSearchBrowseCategorySuggestionParameters *_browseCategorySuggestionParameters;	// 112 = 0x70
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;	// 120 = 0x78
    GEOPDCategorySearchParameters *_categorySearchParameters;	// 128 = 0x80
    GEOPDChildPlaceLookupByCategoryParameters *_childPlaceLookupByCategoryParameters;	// 136 = 0x88
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;	// 144 = 0x90
    GEOPDExtendedGeoLookupParameters *_extendedGeoLookupParameters;	// 152 = 0x98
    GEOPDExternalTransitLookupParameters *_externalTransitLookupParameters;	// 160 = 0xa0
    GEOPDFeatureIdGeocodingParameters *_featureIdGeocodingParameters;	// 168 = 0xa8
    GEOPDGeocodingParameters *_geocodingParameters;	// 176 = 0xb0
    GEOPDGroundViewLabelParameters *_groundViewLabelParameters;	// 184 = 0xb8
    GEOPDGuidesHomeParameters *_guidesHomeParameters;	// 192 = 0xc0
    GEOPDIpGeoLookupParameters *_ipGeoLookupParameters;	// 200 = 0xc8
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;	// 208 = 0xd0
    GEOPDMapsHomeParameters *_mapsHomeParameters;	// 216 = 0xd8
    GEOPDMapsIdentifierPlaceLookupParameters *_mapsIdentifierPlaceLookupParameters;	// 224 = 0xe0
    GEOPDMapsSearchHomeParameters *_mapsSearchHomeParameters;	// 232 = 0xe8
    GEOPDMerchantLookupParameters *_merchantLookupParameters;	// 240 = 0xf0
    GEOPDNearbySearchParameters *_nearbySearchParameters;	// 248 = 0xf8
    GEOPDPlaceCollectionLookupParameters *_placeCollectionLookupParameter;	// 256 = 0x100
    GEOPDPlaceLookupParameters *_placeLookupParameters;	// 264 = 0x108
    GEOPDPlaceQuestionnaireLookupParameters *_placeQuestionnaireLookupParameters;	// 272 = 0x110
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;	// 280 = 0x118
    GEOPDPopularNearbySearchParameters *_popularNearbySearchParameters;	// 288 = 0x120
    GEOPDPublisherViewParameters *_publisherViewParameters;	// 296 = 0x128
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;	// 304 = 0x130
    GEOPDSearchFieldPlaceholderParameters *_searchFieldPlaceholderParameters;	// 312 = 0x138
    GEOPDSearchParameters *_searchParameters;	// 320 = 0x140
    GEOPDSearchZeroKeywordCategorySuggestionParameters *_searchZeroKeywordCategorySuggestionParameters;	// 328 = 0x148
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *_searchZeroKeywordWithSearchResultsSuggestionParameters;	// 336 = 0x150
    GEOPDSiriSearchParameters *_siriSearchParameters;	// 344 = 0x158
    GEOPDTerritoryLookupParameters *_territoryLookupParameters;	// 352 = 0x160
    GEOPDTransitNearbyScheduleLookupParameters *_transitNearbyScheduleLookupParameters;	// 360 = 0x168
    GEOPBTransitScheduleLookupParameters *_transitScheduleLookupParameter;	// 368 = 0x170
    GEOPDTransitVehiclePositionParameters *_transitVehiclePositionParameters;	// 376 = 0x178
    GEOPDVendorSpecificPlaceRefinementParameters *_vendorSpecificPlaceRefinementParameters;	// 384 = 0x180
    GEOPDWifiFingerprintParameters *_wifiFingerprintParameters;	// 392 = 0x188
    unsigned int _readerMarkPos;	// 400 = 0x190
    unsigned int _readerMarkLength;	// 404 = 0x194
    struct os_unfair_lock_s _readerLock;	// 408 = 0x198
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressObjectGeocodingParameters:1;
        unsigned int read_airportEntityPlaceLookupParameters:1;
        unsigned int read_allCollectionsViewParameters:1;
        unsigned int read_allGuidesLocationsViewParameters:1;
        unsigned int read_autocompleteParameters:1;
        unsigned int read_batchCategoryLookupParameters:1;
        unsigned int read_batchMerchantLookupBrandParameters:1;
        unsigned int read_batchPopularNearbySearchParameters:1;
        unsigned int read_batchReverseGeocodingParameters:1;
        unsigned int read_batchSpatialLookupParameters:1;
        unsigned int read_brandLookupParameters:1;
        unsigned int read_browseCategorySuggestionParameters:1;
        unsigned int read_canonicalLocationSearchParameters:1;
        unsigned int read_categorySearchParameters:1;
        unsigned int read_childPlaceLookupByCategoryParameters:1;
        unsigned int read_collectionSuggestionParameters:1;
        unsigned int read_extendedGeoLookupParameters:1;
        unsigned int read_externalTransitLookupParameters:1;
        unsigned int read_featureIdGeocodingParameters:1;
        unsigned int read_geocodingParameters:1;
        unsigned int read_groundViewLabelParameters:1;
        unsigned int read_guidesHomeParameters:1;
        unsigned int read_ipGeoLookupParameters:1;
        unsigned int read_locationDirectedSearchParameters:1;
        unsigned int read_mapsHomeParameters:1;
        unsigned int read_mapsIdentifierPlaceLookupParameters:1;
        unsigned int read_mapsSearchHomeParameters:1;
        unsigned int read_merchantLookupParameters:1;
        unsigned int read_nearbySearchParameters:1;
        unsigned int read_placeCollectionLookupParameter:1;
        unsigned int read_placeLookupParameters:1;
        unsigned int read_placeQuestionnaireLookupParameters:1;
        unsigned int read_placeRefinementParameters:1;
        unsigned int read_popularNearbySearchParameters:1;
        unsigned int read_publisherViewParameters:1;
        unsigned int read_reverseGeocodingParameters:1;
        unsigned int read_searchFieldPlaceholderParameters:1;
        unsigned int read_searchParameters:1;
        unsigned int read_searchZeroKeywordCategorySuggestionParameters:1;
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionParameters:1;
        unsigned int read_siriSearchParameters:1;
        unsigned int read_territoryLookupParameters:1;
        unsigned int read_transitNearbyScheduleLookupParameters:1;
        unsigned int read_transitScheduleLookupParameter:1;
        unsigned int read_transitVehiclePositionParameters:1;
        unsigned int read_vendorSpecificPlaceRefinementParameters:1;
        unsigned int read_wifiFingerprintParameters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 412 = 0x19c
}

- (void).cxx_destruct;	// IMP=0x00000000005c8e91
- (unsigned long long)hash;	// IMP=0x00000000005c894b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005c7f49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c766b
- (void)writeTo:(id)arg1;	// IMP=0x00000000005c63c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005c63b5
- (id)jsonRepresentation;	// IMP=0x00000000005b3766
- (id)dictionaryRepresentation;	// IMP=0x00000000005b1476
- (id)description;	// IMP=0x00000000005b13c7
- (id)initWithData:(id)arg1;	// IMP=0x00000000005aa389
- (id)init;	// IMP=0x00000000005aa32d
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;	// IMP=0x000000000125d6e6
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;	// IMP=0x000000000125d601
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000125d542
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 filters:(id)arg7 traits:(id)arg8 error:(id *)arg9;	// IMP=0x000000000125d252
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;	// IMP=0x000000000125d0e6
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;	// IMP=0x000000000125d04c
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;	// IMP=0x000000000125cfd5
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;	// IMP=0x000000000125cf5e
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;	// IMP=0x000000000125cea8
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;	// IMP=0x000000000125ce2b
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;	// IMP=0x000000000125cd62
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;	// IMP=0x000000000125cc99
- (id)initWithBatchReverseGeocodeLocations:(id)arg1 additionalPlaceTypes:(int *)arg2 additionalPlaceTypesCount:(unsigned long long)arg3 traits:(id)arg4;	// IMP=0x000000000125cb9f
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 preserveOriginalLocation:(_Bool)arg2;	// IMP=0x000000000125cb88
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000125cb74
- (id)initWithReverseGeocodeLocation:(id)arg1 preserveOriginalLocation:(_Bool)arg2 placeTypeLimit:(int)arg3;	// IMP=0x000000000125ca77
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 preserveOriginalLocation:(_Bool)arg2 floorOrdinal:(int)arg3;	// IMP=0x000000000125c97f
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4;	// IMP=0x000000000125c6ee
- (id)initWithAirportCode:(id)arg1 terminalCode:(id)arg2 gateCode:(id)arg3 traits:(id)arg4;	// IMP=0x000000000125c60f
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 relyingPartyIdentifier:(id)arg3 industryCategory:(id)arg4 industryCode:(id)arg5 paymentNetwork:(id)arg6 transactionDate:(id)arg7 transactionLocation:(id)arg8 terminalId:(id)arg9 transactionCurrencyCode:(id)arg10 transactionType:(int)arg11 transactionId:(id)arg12 warsawMerchantDomain:(id)arg13 warsawMerchantName:(id)arg14 warsawMerchantId:(id)arg15 adamId:(id)arg16 merchantId:(id)arg17 merchantDoingBizAsName:(id)arg18 merchantEnhancedName:(id)arg19 merchantCity:(id)arg20 merchantRawCity:(id)arg21 merchantState:(id)arg22 merchantRawState:(id)arg23 merchantZip:(id)arg24 merchantAddress:(id)arg25 merchantRawAddress:(id)arg26 merchantCountryCode:(id)arg27 merchantType:(id)arg28 merchantCleanConfidenceLevel:(id)arg29 merchantAdditionalData:(id)arg30 merchantCanl:(id)arg31 brandFallbackSupported:(_Bool)arg32 isSettlement:(_Bool)arg33 isRefund:(_Bool)arg34 fuzzyMatched:(id)arg35 coarseLocationUsed:(id)arg36;	// IMP=0x000000000125b901
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;	// IMP=0x000000000125b842
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;	// IMP=0x000000000125b79a
- (void)clearLocations;	// IMP=0x0000000001288a08

@end

