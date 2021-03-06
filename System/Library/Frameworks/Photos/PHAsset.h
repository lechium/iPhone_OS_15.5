//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHResourceChooserAsset-Protocol.h>
#import <Photos/PHThumbnailAsset-Protocol.h>
#import <Photos/_PLImageLoadingAsset-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSNumber, NSSet, NSString, NSURL, PHPhotoLibrary;

@interface PHAsset <PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset>
{
    CLLocation *_cachedLocation;	// 16 = 0x10
    NSString *_cloudAssetGUID;	// 24 = 0x18
    unsigned short _bundleScope;	// 32 = 0x20
    _Bool _hidden;	// 34 = 0x22
    _Bool _favorite;	// 35 = 0x23
    _Bool _syncFailureHidden;	// 36 = 0x24
    _Bool _cloudIsDeletable;	// 37 = 0x25
    _Bool _complete;	// 38 = 0x26
    _Bool _hasAdjustments;	// 39 = 0x27
    _Bool _hasKeywords;	// 40 = 0x28
    _Bool _assetDescriptionWasSet;	// 41 = 0x29
    _Bool _canUseLocationCoordinateForLocation;	// 42 = 0x2a
    _Bool _isPhotoIris;	// 43 = 0x2b
    _Bool _trashed;	// 44 = 0x2c
    short _savedAssetType;	// 46 = 0x2e
    unsigned short _videoCpVisibilityState;	// 48 = 0x30
    unsigned short _playbackVariation;	// 50 = 0x32
    unsigned short _syndicationState;	// 52 = 0x34
    short _faceAnalysisVersion;	// 54 = 0x36
    unsigned short _deferredProcessingNeeded;	// 56 = 0x38
    unsigned short _videoDeferredProcessingNeeded;	// 58 = 0x3a
    int _avalanchePickType;	// 60 = 0x3c
    int _exifOrientation;	// 64 = 0x40
    float _overallAestheticScore;	// 68 = 0x44
    NSDate *_localCreationDate;	// 72 = 0x48
    long long _playbackStyle;	// 80 = 0x50
    long long _mediaType;	// 88 = 0x58
    unsigned long long _mediaSubtypes;	// 96 = 0x60
    unsigned long long _pixelWidth;	// 104 = 0x68
    unsigned long long _pixelHeight;	// 112 = 0x70
    NSDate *_creationDate;	// 120 = 0x78
    NSDate *_modificationDate;	// 128 = 0x80
    double _duration;	// 136 = 0x88
    NSString *_burstIdentifier;	// 144 = 0x90
    NSData *_locationData;	// 152 = 0x98
    NSString *_uniformTypeIdentifier;	// 160 = 0xa0
    unsigned long long _persistenceState;	// 168 = 0xa8
    unsigned long long _thumbnailIndex;	// 176 = 0xb0
    NSString *_directory;	// 184 = 0xb8
    NSString *_filename;	// 192 = 0xc0
    NSDate *_trashedDate;	// 200 = 0xc8
    NSDate *_adjustmentTimestamp;	// 208 = 0xd0
    NSString *_originalColorSpace;	// 216 = 0xd8
    NSData *_imageRequestHints;	// 224 = 0xe0
    double _curationScore;	// 232 = 0xe8
    long long _cloudPlaceholderKind;	// 240 = 0xf0
    long long _videoCpDurationValue;	// 248 = 0xf8
    NSNumber *_hdrGain;	// 256 = 0x100
    unsigned long long _reframeVariation;	// 264 = 0x108
    long long _creationDateSource;	// 272 = 0x110
    NSArray *_faceRegions;	// 280 = 0x118
    double _faceAreaMinX;	// 288 = 0x120
    double _faceAreaMaxX;	// 296 = 0x128
    double _faceAreaMinY;	// 304 = 0x130
    double _faceAreaMaxY;	// 312 = 0x138
    long long _RAWBadgeAttributes;	// 320 = 0x140
    id _faceAdjustmentVersion;	// 328 = 0x148
    NSDate *_analysisStateModificationDate;	// 336 = 0x150
    double _highlightPromotionScore;	// 344 = 0x158
    double _highlightVisibilityScore;	// 352 = 0x160
    struct CLLocationCoordinate2D _locationCoordinate;	// 360 = 0x168
    struct CGRect _preferredCropRect;	// 376 = 0x178
    struct CGRect _acceptableCropRect;	// 408 = 0x198
}

+ (_Bool)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;	// IMP=0x000000000011c22a
+ (_Bool)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;	// IMP=0x000000000011c218
+ (id)originalUniformTypeIdentifierForAsset:(id)arg1;	// IMP=0x000000000011c0c9
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;	// IMP=0x000000000011bbc1
+ (id)descriptionForMediaSubtypes:(unsigned long long)arg1;	// IMP=0x000000000011b978
+ (id)_descriptionForMediaSubtype:(unsigned long long)arg1;	// IMP=0x000000000011b82a
+ (id)descriptionForMediaType:(long long)arg1;	// IMP=0x000000000011b7f0
+ (id)descriptionForPlaybackStyle:(long long)arg1;	// IMP=0x000000000011b782
+ (id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1;	// IMP=0x000000000011b6b0
+ (id)_descriptionForVariationSuggestionType:(unsigned long long)arg1;	// IMP=0x000000000011b65a
+ (id)fetchAssetsFromCameraSinceDate:(id)arg1 options:(id)arg2;	// IMP=0x000000000011b54f
+ (id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)arg1 options:(id)arg2;	// IMP=0x000000000011b47f
+ (id)fetchReferencedAssetsWithOptions:(id)arg1;	// IMP=0x000000000011b45f
+ (id)fetchAssetsForKeywords:(id)arg1 options:(id)arg2;	// IMP=0x000000000011b3b1
+ (id)fetchAssetsInAssetCollections:(id)arg1 options:(id)arg2;	// IMP=0x000000000011afe9
+ (id)fetchAssetsWithObjectIDs:(id)arg1 options:(id)arg2;	// IMP=0x000000000011af3b
+ (id)fetchAssetsAllowedForSceneProcessingWithOptions:(id)arg1;	// IMP=0x000000000011af1b
+ (id)fetchAssetsNeedingSceneProcessingWithOptions:(id)arg1;	// IMP=0x000000000011aefb
+ (id)fetchKeyAssetForSceneIdentifier:(unsigned int)arg1 aboveConfidenceThreshold:(double)arg2 options:(id)arg3;	// IMP=0x000000000011ab04
+ (id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2;	// IMP=0x000000000011aa56
+ (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a9a8
+ (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a8fa
+ (id)fetchAssetsForPerson:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a822
+ (id)fetchGuestAssetsInCollectionContainingAsset:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a774
+ (id)fetchGuestAssetsWithOptions:(id)arg1;	// IMP=0x000000000011a754
+ (id)fetchAssetsWithOptions:(id)arg1;	// IMP=0x000000000011a734
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a44e
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a3a0
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a2b3
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a205
+ (id)fetchAssetsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a157
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x000000000011a0a9
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;	// IMP=0x000000000011a041
+ (id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x0000000000119e7b
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x0000000000119a9b
+ (id)fetchAssetsInImportSessions:(id)arg1 options:(id)arg2;	// IMP=0x0000000000119a44
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;	// IMP=0x00000000001199ed
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1 fetchPropertySets:(id)arg2;	// IMP=0x0000000000119646
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1;	// IMP=0x0000000000119573
+ (long long)countOfAssetsWithLocationFromUUIDs:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000011945b
+ (_Bool)_isLivePhotoWithPhotoIris:(_Bool)arg1 hasAdjustments:(_Bool)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5;	// IMP=0x00000000001193ec
+ (id)quickClassificationFaceAdjustmentVersion;	// IMP=0x00000000001193d3
+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2;	// IMP=0x0000000000118e69
+ (id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2;	// IMP=0x0000000000118c86
+ (id)propertySetAccessorsByPropertySet;	// IMP=0x0000000000118c62
+ (Class)propertySetClassForPropertySet:(id)arg1;	// IMP=0x0000000000118c05
+ (id)identifierCode;	// IMP=0x0000000000118bf8
+ (id)_transformMediaSubtypeReferences:(id)arg1 inComparisonPredicate:(id)arg2 options:(id)arg3;	// IMP=0x00000000001182c0
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000118141
+ (id)entityKeyMap;	// IMP=0x00000000001180eb
+ (_Bool)managedObjectSupportsContributor;	// IMP=0x00000000001180e3
+ (_Bool)managedObjectSupportsAllowedForAnalysis;	// IMP=0x00000000001180db
+ (_Bool)managedObjectSupportsMontage;	// IMP=0x00000000001180d3
+ (_Bool)managedObjectSupportsSavedAssetType;	// IMP=0x00000000001180cb
+ (_Bool)managedObjectSupportsBursts;	// IMP=0x00000000001180c3
+ (_Bool)managedObjectSupportsVisibilityState;	// IMP=0x00000000001180bb
+ (_Bool)managedObjectSupportsHiddenState;	// IMP=0x00000000001180b3
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x00000000001180ab
+ (id)fetchType;	// IMP=0x000000000011808c
+ (id)managedEntityName;	// IMP=0x0000000000118073
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x0000000000117f69
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x00000000001179d2
+ (id)imageManagerPropertiesToFetch;	// IMP=0x00000000001179ae
+ (id)faceWorkerPropertiesToFetch;	// IMP=0x000000000011798a
+ (id)locationPropertiesToFetch;	// IMP=0x0000000000117966
+ (id)corePropertiesToFetch;	// IMP=0x0000000000117910
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;	// IMP=0x00000000001171dc
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;	// IMP=0x000000000011716e
+ (unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1;	// IMP=0x0000000000116a23
+ (id)fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000000b742
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;	// IMP=0x000000000000b6b5
+ (id)fetchAssetsMatchingMasterFingerPrint:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000000b5cd
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;	// IMP=0x000000000000b540
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b40d
+ (id)pl_managedAssetsForAssets:(id)arg1;	// IMP=0x00000000000923cd
+ (id)fetchKeyAssetByMemoryUUIDForMemories:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d420e
+ (id)fetchKeyAssetBySuggestionUUIDForSuggestions:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d4056
+ (id)fetchKeyAssetByHighlightUUIDForHighlights:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d3c4e
+ (id)fetchAssetsForBehavioralCurationWithOptions:(id)arg1;	// IMP=0x00000000000d3c2e
+ (id)fetchKeyAssetForEachSuggestion:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d3872
+ (id)requestCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d3848
+ (id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d32e0
+ (id)fetchExtendedCuratedAndRepresentativeAssetsAssociatedWithMemory:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d31c2
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1;	// IMP=0x00000000000d2f01
+ (id)fetchUserCuratedAssetsInMemory:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d2db8
+ (id)fetchUserCuratedAssetsInMemory:(id)arg1;	// IMP=0x00000000000d2d12
+ (id)fetchMovieCuratedAssetsInMemory:(id)arg1;	// IMP=0x00000000000d2b39
+ (id)requestCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 options:(id)arg3;	// IMP=0x00000000000d2b0f
+ (id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d299d
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d262c
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1;	// IMP=0x00000000000d2618
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2;	// IMP=0x00000000000d2554
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 options:(id)arg3;	// IMP=0x00000000000d2100
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2;	// IMP=0x00000000000d20eb
+ (id)_assetFetchResultFromAssets:(id)arg1 options:(id)arg2;	// IMP=0x00000000000d1f82
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)arg1;	// IMP=0x00000000000d18fd
+ (id)_requestCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 fetchOptions:(id)arg4 onlyKey:(_Bool)arg5;	// IMP=0x00000000000d0d37
+ (id)fetchAssetsForReferences:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000018507f
+ (id)senderIdentifierByAssetUUIDForAssets:(id)arg1;	// IMP=0x00000000001bf761
+ (id)predicateForSyndicatedAssetIdentifiers:(id)arg1 includeRejected:(_Bool)arg2;	// IMP=0x00000000001bf748
+ (id)predicateForSyndicatedAssetIdentifiers:(id)arg1;	// IMP=0x00000000001bf734
+ (id)filterPredicateToExcludeNoSyndicationAssets;	// IMP=0x00000000001bf71b
+ (id)filterPredicateToIncludeOnlyReceivedSyndicatedAssets;	// IMP=0x00000000001bf702
+ (id)filterPredicateForSavedSyndicationAssetsOnly;	// IMP=0x00000000001bf6d3
+ (id)filterPredicateForUnsavedSyndicationAssets;	// IMP=0x00000000001bf6a4
+ (id)fetchSyndicatedAssetsWithOptions:(id)arg1 includeRejected:(_Bool)arg2;	// IMP=0x00000000001bf68a
+ (id)fetchSyndicatedAssetsWithOptions:(id)arg1;	// IMP=0x00000000001bf676
+ (id)fetchAssetsWithSyndicationIdentifiers:(id)arg1 options:(id)arg2 includeRejected:(_Bool)arg3;	// IMP=0x00000000001bf463
+ (id)fetchAssetsWithSyndicationIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00000000001bf44e
+ (id)fetchCuratedAssetsForMomentShareCreationWithAssets:(id)arg1 options:(id)arg2;	// IMP=0x00000000001e08da
+ (id)composabilityScoresOfAssets:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001e7c63
+ (void)_inq_trimToMostRecentImageManagerMessages;	// IMP=0x00000000001e8a80
+ (id)_currentTimestampString;	// IMP=0x00000000001e89f7
+ (void)_inq_recordRequestID:(long long)arg1;	// IMP=0x00000000001e897b
+ (id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2;	// IMP=0x00000000001e87fa
+ (id)_inq_highestImageManagerRequestIDsObserved;	// IMP=0x00000000001e87ca
+ (id)_inq_imageManagerRequestLogsByAssetUUID;	// IMP=0x00000000001e879a
+ (id)_imageManagerRequestLoggingQueue;	// IMP=0x00000000001e876a
- (void).cxx_destruct;	// IMP=0x0000000000113fd6
@property(readonly, nonatomic) double highlightVisibilityScore; // @synthesize highlightVisibilityScore=_highlightVisibilityScore;
@property(readonly, nonatomic) double highlightPromotionScore; // @synthesize highlightPromotionScore=_highlightPromotionScore;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(readonly, nonatomic) _Bool isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property(readonly, nonatomic) unsigned short videoDeferredProcessingNeeded; // @synthesize videoDeferredProcessingNeeded=_videoDeferredProcessingNeeded;
@property(readonly, nonatomic) unsigned short deferredProcessingNeeded; // @synthesize deferredProcessingNeeded=_deferredProcessingNeeded;
@property(readonly, nonatomic) NSDate *analysisStateModificationDate; // @synthesize analysisStateModificationDate=_analysisStateModificationDate;
@property(nonatomic) _Bool canUseLocationCoordinateForLocation; // @synthesize canUseLocationCoordinateForLocation=_canUseLocationCoordinateForLocation;
@property(nonatomic) _Bool assetDescriptionWasSet; // @synthesize assetDescriptionWasSet=_assetDescriptionWasSet;
@property(readonly, nonatomic) short faceAnalysisVersion; // @synthesize faceAnalysisVersion=_faceAnalysisVersion;
@property(readonly, nonatomic) id faceAdjustmentVersion; // @synthesize faceAdjustmentVersion=_faceAdjustmentVersion;
@property(readonly, nonatomic) _Bool hasKeywords; // @synthesize hasKeywords=_hasKeywords;
@property(readonly, nonatomic) long long RAWBadgeAttributes; // @synthesize RAWBadgeAttributes=_RAWBadgeAttributes;
@property(readonly, nonatomic) double faceAreaMaxY; // @synthesize faceAreaMaxY=_faceAreaMaxY;
@property(readonly, nonatomic) double faceAreaMinY; // @synthesize faceAreaMinY=_faceAreaMinY;
@property(readonly, nonatomic) double faceAreaMaxX; // @synthesize faceAreaMaxX=_faceAreaMaxX;
@property(readonly, nonatomic) double faceAreaMinX; // @synthesize faceAreaMinX=_faceAreaMinX;
@property(readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property(readonly, nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(readonly, nonatomic) long long creationDateSource; // @synthesize creationDateSource=_creationDateSource;
@property(readonly, nonatomic) unsigned long long reframeVariation; // @synthesize reframeVariation=_reframeVariation;
@property(readonly, nonatomic) unsigned short syndicationState; // @synthesize syndicationState=_syndicationState;
@property(readonly, nonatomic) NSNumber *hdrGain; // @synthesize hdrGain=_hdrGain;
@property(readonly, nonatomic) unsigned short playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(readonly, nonatomic) long long videoCpDurationValue; // @synthesize videoCpDurationValue=_videoCpDurationValue;
@property(readonly, nonatomic) _Bool hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
@property(readonly, nonatomic) long long cloudPlaceholderKind; // @synthesize cloudPlaceholderKind=_cloudPlaceholderKind;
@property(readonly, nonatomic) float overallAestheticScore; // @synthesize overallAestheticScore=_overallAestheticScore;
@property(readonly, nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) NSData *imageRequestHints; // @synthesize imageRequestHints=_imageRequestHints;
@property(readonly, nonatomic) NSString *originalColorSpace; // @synthesize originalColorSpace=_originalColorSpace;
@property(readonly, nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSDate *adjustmentTimestamp; // @synthesize adjustmentTimestamp=_adjustmentTimestamp;
@property(readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(readonly, nonatomic) unsigned long long persistenceState; // @synthesize persistenceState=_persistenceState;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) _Bool cloudIsDeletable; // @synthesize cloudIsDeletable=_cloudIsDeletable;
@property(readonly, nonatomic) unsigned short videoCpVisibilityState; // @synthesize videoCpVisibilityState=_videoCpVisibilityState;
@property(readonly, nonatomic) short savedAssetType; // @synthesize savedAssetType=_savedAssetType;
@property(readonly, nonatomic) NSData *locationData; // @synthesize locationData=_locationData;
@property(readonly, nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property(readonly, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic, getter=isSyncFailureHidden) _Bool syncFailureHidden; // @synthesize syncFailureHidden=_syncFailureHidden;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property(readonly, nonatomic) NSString *croppingDebugDescription;
@property(readonly, nonatomic) NSString *variationSuggestionStatesDetails;
@property(readonly, nonatomic) NSString *metadataDebugDescription;
@property(readonly, nonatomic) NSString *resourcesDebugDescription;
- (id)descriptionForAestheticsWithManagedAsset:(id)arg1;	// IMP=0x000000000011294a
- (id)descriptionForMediaAnalysisWithManagedAsset:(id)arg1;	// IMP=0x0000000000112162
- (id)detailedDebugDescriptionInLibrary:(id)arg1;	// IMP=0x00000000001117ad
- (id)adjustmentsDebugMetadata;	// IMP=0x0000000000111599
- (id)evaluationDebugMetadata;	// IMP=0x00000000001110a4
- (id)gatingDebugMetadata;	// IMP=0x0000000000110fae
- (id)__dictionaryWithContentsOfData:(id)arg1;	// IMP=0x0000000000110f54
@property(readonly, copy) NSString *description;
- (id)fileURLForVideoComplementFile;	// IMP=0x0000000000110b46
- (id)fileURLForFullsizeRenderImage;	// IMP=0x00000000001108de
- (id)fileURLsForDiagnosticFiles;	// IMP=0x000000000010f9c7
- (id)mainFileURL;	// IMP=0x000000000010f7e7
- (id)adjustmentVersion;	// IMP=0x000000000010f79e
@property(readonly, nonatomic) _Bool canPerformSharingAction;
- (_Bool)canPerformEditOperation:(long long)arg1;	// IMP=0x000000000010f43b
@property(readonly, nonatomic) _Bool isLocalVideoKeyFrameValid;
@property(readonly, nonatomic) _Bool canFlipFullSizeRender;
- (unsigned long long)contentChangeFromAsset:(id)arg1;	// IMP=0x000000000010f0e4
- (_Bool)hasContentEqualTo:(id)arg1;	// IMP=0x000000000010f0cb
- (void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010ef66
- (void)getMasterFingerPrintWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ee2b
- (_Bool)isDeleted;	// IMP=0x000000000010ede4
@property(readonly, nonatomic) _Bool isTimelapsePlaceholder;
@property(readonly, nonatomic) _Bool isIncludedInCloudFeeds;
@property(readonly, nonatomic) _Bool isIncludedInMoments;
@property(readonly, nonatomic) _Bool isHighFrameRateVideo;
@property(readonly, nonatomic) _Bool isStreamedVideo;
- (id)libraryID;	// IMP=0x000000000010ec2e
@property(readonly, copy, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) _Bool isCloudPlaceholder;
@property(readonly, nonatomic) _Bool isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;	// IMP=0x000000000010eacc
@property(readonly, nonatomic) _Bool isOffline;
@property(readonly, nonatomic) _Bool isSyndicatedAssetSavedToUserLibrary;
@property(readonly, nonatomic) _Bool isGuestAsset;
@property(readonly, nonatomic) _Bool isReferencedAsset;
@property(readonly, nonatomic) _Bool isMomentSharedAsset;
@property(readonly, nonatomic) _Bool isCloudSharedAsset;
@property(readonly, nonatomic) _Bool hasPhotoStreamTagID;
@property(readonly, nonatomic) _Bool isCinematicVideo;
@property(readonly, nonatomic) _Bool isPhotoStreamPhoto;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isLoopingVideo;
@property(readonly, nonatomic) _Bool isHDRVideo;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) NSString *adjustmentFormatIdentifier;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool canPlayMirror;
@property(readonly, nonatomic) _Bool canPlayLongExposure;
@property(readonly, nonatomic) _Bool canPlayAutoloop;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool isPartOfBurst;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
- (id)cloudAssetGUID;	// IMP=0x000000000010e350
@property(readonly, nonatomic) CLLocation *location;
- (unsigned short)bundleScope;	// IMP=0x000000000010e27f
@property(readonly, nonatomic) NSString *thumbnailIdentifier;
- (void)generateLargeThumbnailFileIfNecessary;	// IMP=0x000000000010e0a2
- (id)managedAssetForPhotoLibrary:(id)arg1;	// IMP=0x000000000010e015
- (_Bool)isInFlight;	// IMP=0x000000000010e00d
- (id)pathForAdjustmentDataFile;	// IMP=0x000000000010dde3
- (id)pathForAdjustmentFile;	// IMP=0x000000000010dbb9
- (id)pathForOriginalFile;	// IMP=0x000000000010db69
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *originalFilename;
- (int)orientation;	// IMP=0x000000000010da43
- (struct CGSize)imageSize;	// IMP=0x000000000010d9ff
- (short)kindSubtype;	// IMP=0x000000000010d9ea
- (short)kind;	// IMP=0x000000000010d9c7
@property(readonly, nonatomic) unsigned long long effectiveThumbnailIndex;
- (_Bool)hasLegacyAdjustments;	// IMP=0x000000000010d9a6
- (id)debugFilename;	// IMP=0x000000000010d994
- (_Bool)isOriginalSRGB;	// IMP=0x000000000010d946
- (struct CGSize)originalImageSize;	// IMP=0x000000000010d894
- (long long)originalImageOrientation;	// IMP=0x000000000010d833
@property(readonly, nonatomic) NSURL *ALAssetURL;
- (id)assetsLibraryURL;	// IMP=0x000000000010d770
@property(readonly, nonatomic) double aspectRatio;
- (id)pl_photoLibrary;	// IMP=0x000000000010d67d
- (Class)changeRequestClass;	// IMP=0x000000000010d66c
- (id)originalAVAssetCreationDateMetadataItem;	// IMP=0x000000000010d593
- (id)originalAVAssetCommonMetadata;	// IMP=0x000000000010d543
- (id)originalAVAssetOrProxy;	// IMP=0x000000000010d425
- (id)originalImageProperties;	// IMP=0x000000000010d307
- (_Bool)isLocatedAtCoordinates:(struct CLLocationCoordinate2D)arg1;	// IMP=0x000000000010d209
@property(readonly, nonatomic) _Bool isRAWPlusJPEG;
- (_Bool)isScreenRecording;	// IMP=0x000000000010d169
- (_Bool)isPrimaryImageFormat;	// IMP=0x000000000010d112
@property(readonly, nonatomic) _Bool isHEICSequence;
@property(readonly, nonatomic) _Bool isAnimatedGIF;
@property(readonly, nonatomic) _Bool isRAW;
@property(readonly, nonatomic) _Bool isPSD;
@property(readonly, nonatomic) _Bool isPDF;
@property(readonly, nonatomic) _Bool isPNG;
@property(readonly, nonatomic) _Bool isTIFF;
@property(readonly, nonatomic) _Bool isHEIF;
@property(readonly, nonatomic) _Bool isJPEG2000;
@property(readonly, nonatomic) _Bool isJPEG;
@property(readonly, nonatomic) _Bool isHDVideo;
@property(readonly, nonatomic) long long imageOrientation;
- (id)_unfetchedPropertySetsFromPropertySets:(id)arg1;	// IMP=0x000000000010c950
- (_Bool)isVariationSuggestionStatesUnknown;	// IMP=0x000000000010c8f4
- (unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1;	// IMP=0x000000000010c879
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;	// IMP=0x000000000010c802
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, copy) NSSet *sceneClassifications;
@property(readonly, nonatomic) unsigned long long originalResourceChoice;
- (id)montageProperties;	// IMP=0x000000000010c429
- (id)cloudLocalStateProperties;	// IMP=0x000000000010c3df
- (id)coarseLocationProperties;	// IMP=0x000000000010c395
- (id)gridMetadataProperties;	// IMP=0x000000000010c34b
- (id)keywordProperties;	// IMP=0x000000000010c310
- (id)destinationAssetCopyProperties;	// IMP=0x000000000010c2c6
- (id)sceneprintProperties;	// IMP=0x000000000010c27c
- (id)importProperties;	// IMP=0x000000000010c232
- (id)visualSearchProperties;	// IMP=0x000000000010c1e8
- (id)characterRecognitionProperties;	// IMP=0x000000000010c19e
- (id)mediaAnalysisProperties;	// IMP=0x000000000010c154
- (id)aestheticProperties;	// IMP=0x000000000010c10a
- (id)curationProperties;	// IMP=0x000000000010c0c0
- (id)adjustmentProperties;	// IMP=0x000000000010c076
- (id)assetUserActivityProperties;	// IMP=0x000000000010c02c
- (id)assetAnalysisStateProperties;	// IMP=0x000000000010bff1
- (id)sceneAnalysisProperties;	// IMP=0x000000000010bfa7
- (id)commentProperties;	// IMP=0x000000000010bf46
- (id)descriptionProperties;	// IMP=0x000000000010bf18
- (id)photoIrisProperties;	// IMP=0x000000000010bece
- (id)cameraCaptureDeviceProperties;	// IMP=0x000000000010be84
- (id)photosInfoPanelLocationProperties;	// IMP=0x000000000010be3a
- (id)photosInfoPanelExtendedProperties;	// IMP=0x000000000010bdf0
- (id)localDateProperties;	// IMP=0x000000000010bda6
- (id)photosOneUpProperties;	// IMP=0x000000000010bd5c
- (id)originalMetadataProperties;	// IMP=0x000000000010bd12
- (id)_createKeywordPropertyObject;	// IMP=0x000000000010bb30
- (id)_createAnalysisStatePropertyObject;	// IMP=0x000000000010b937
- (id)_createCommentPropertyObject;	// IMP=0x000000000010b5eb
- (id)_createPropertyObjectOfClass:(Class)arg1;	// IMP=0x000000000010b5d7
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;	// IMP=0x000000000010ad7a
- (void)_attachPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;	// IMP=0x000000000010ad1e
- (void)_addPropertyHint:(unsigned long long)arg1;	// IMP=0x000000000010acde
- (void)fetchPropertySetsIfNeeded;	// IMP=0x000000000010acc5
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2;	// IMP=0x000000000010a8f3
- (_Bool)needsDeferredProcessing;	// IMP=0x000000000010a8a9
@property(readonly, nonatomic) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;	// IMP=0x000000000010a75d
- (short)assetSource;	// IMP=0x000000000010a6a2
@property(readonly, nonatomic) unsigned long long sourceType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x0000000000109287
- (id)pl_managedAsset;	// IMP=0x00000000000901bf
- (id)pl_managedAssetFromPhotoLibrary:(id)arg1;	// IMP=0x00000000000900ee
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2 andOutputCropScore:(double *)arg3;	// IMP=0x00000000000d09aa
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withOcclusionRegion:(struct CGRect)arg2 andOutputCropScore:(double *)arg3;	// IMP=0x00000000000d05f8
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2;	// IMP=0x00000000000d05c3
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1;	// IMP=0x00000000000d058a
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6f76
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e6d4f
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;	// IMP=0x00000000000e6cfc
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6bb0
- (id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e6a0f
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e6896
- (long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(_Bool)arg2;	// IMP=0x00000000000e6815
- (_Bool)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000000e6743
- (_Bool)isOriginalRaw;	// IMP=0x00000000000e66c1
- (id)originalUTI;	// IMP=0x00000000000e6621
- (_Bool)shouldUseRAWResourceWithOriginalResourceChoice:(unsigned long long)arg1;	// IMP=0x00000000000e65d7
- (_Bool)shouldUseRAWResourceAsUnadjustedEditBase;	// IMP=0x00000000000e65cf
- (unsigned long long)originalChoiceToFallbackForUnsupportRAW;	// IMP=0x00000000000e6581
@property(readonly, nonatomic) NSNumber *livePhotoSRLCompensationAmount;
- (id)objectReference;	// IMP=0x00000000001847ca
@property(readonly, nonatomic) NSString *syndicatedAppDisplayName;
@property(readonly, nonatomic) long long syndicationEligibility;
- (id)messagesForRecentImageManagerRequests;	// IMP=0x00000000001e81e5
- (void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2;	// IMP=0x00000000001e7f1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property(readonly) Class superclass;

@end

