//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSCurationSession, NSDictionary, NSMutableDictionary, NSString, PGGraphSceneNodeCollection;

@interface PGLegacyFoodieMemoryGenerator
{
    NSDictionary *_confidenceThresholdByFoodSceneIdentifier;	// 8 = 0x8
    NSDictionary *_confidenceThresholdByDrinkSceneIdentifier;	// 16 = 0x10
    NSDictionary *_confidenceThresholdByForbiddenSceneIdentifiers;	// 24 = 0x18
    NSMutableDictionary *_locationCoordinateByAssetUUID;	// 32 = 0x20
    NSMutableDictionary *_relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;	// 40 = 0x28
    NSMutableDictionary *_assetUUIDsWithPeopleByMomentNodeLocalIdentifier;	// 48 = 0x30
    long long _currentYear;	// 56 = 0x38
    PGGraphSceneNodeCollection *_foodSceneNodeAsCollection;	// 64 = 0x40
    CLSCurationSession *_curationSession;	// 72 = 0x48
    NSString *_foodieMemoryType;	// 80 = 0x50
    NSString *_foodieMemoryKind;	// 88 = 0x58
}

+ (id)_assetsCloseInTimeAndLocationToAsset:(id)arg1 inAssets:(id)arg2 stopAtFirstMatch:(_Bool)arg3;	// IMP=0x000000000037f4ed
+ (_Bool)_aggregationMeetsMinimumTimeIntervalForMomentNodes:(id)arg1;	// IMP=0x000000000037f2f1
- (void).cxx_destruct;	// IMP=0x000000000037cf1d
@property(retain, nonatomic) NSString *foodieMemoryKind; // @synthesize foodieMemoryKind=_foodieMemoryKind;
@property(retain, nonatomic) NSString *foodieMemoryType; // @synthesize foodieMemoryType=_foodieMemoryType;
@property(retain, nonatomic) CLSCurationSession *curationSession; // @synthesize curationSession=_curationSession;
@property(retain, nonatomic) PGGraphSceneNodeCollection *foodSceneNodeAsCollection; // @synthesize foodSceneNodeAsCollection=_foodSceneNodeAsCollection;
@property(nonatomic) long long currentYear; // @synthesize currentYear=_currentYear;
@property(retain, nonatomic) NSMutableDictionary *assetUUIDsWithPeopleByMomentNodeLocalIdentifier; // @synthesize assetUUIDsWithPeopleByMomentNodeLocalIdentifier=_assetUUIDsWithPeopleByMomentNodeLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier; // @synthesize relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier=_relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *locationCoordinateByAssetUUID; // @synthesize locationCoordinateByAssetUUID=_locationCoordinateByAssetUUID;
@property(retain, nonatomic) NSDictionary *confidenceThresholdByForbiddenSceneIdentifiers; // @synthesize confidenceThresholdByForbiddenSceneIdentifiers=_confidenceThresholdByForbiddenSceneIdentifiers;
@property(retain, nonatomic) NSDictionary *confidenceThresholdByDrinkSceneIdentifier; // @synthesize confidenceThresholdByDrinkSceneIdentifier=_confidenceThresholdByDrinkSceneIdentifier;
@property(retain, nonatomic) NSDictionary *confidenceThresholdByFoodSceneIdentifier; // @synthesize confidenceThresholdByFoodSceneIdentifier=_confidenceThresholdByFoodSceneIdentifier;
- (unsigned long long)_foodMemoryKindFromFeatureNodes:(id)arg1 outSpecificFeatureNode:(id *)arg2;	// IMP=0x000000000037ca7a
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x000000000037c862
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000037c46e
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000037c390
- (id)uuidsOfRequiredAssetsWithKeyAsset:(id)arg1 triggeredMemory:(id)arg2 inGraph:(id)arg3 progressReporter:(id)arg4;	// IMP=0x000000000037b664
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 potentialMemory:(id)arg2;	// IMP=0x000000000037b5b4
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000037b37e
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000037b19c
- (id)foodieTitleGeneratorForMomentNodes:(id)arg1 kind:(unsigned long long)arg2 featureNode:(id)arg3 tripTitleLocationType:(unsigned long long)arg4;	// IMP=0x000000000037ae2d
- (_Bool)generateRelevantAssetsForPotentialMemory:(id)arg1;	// IMP=0x0000000000379c83
- (id)_potentialMemoriesForDryTesting;	// IMP=0x0000000000379b8a
- (id)_extendedCurationForAssets:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000379a4c
- (id)_curatedPersonAssetsFromPersonAssetsByMomentNodeLocalIdentifier:(id)arg1 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg2 momentNodes:(id)arg3 featuringPersonNode:(id)arg4 outValidMomentNodes:(id *)arg5 outRelevantFoodAssetsForFeaturedPersonByMomentNodeLocalIdentifier:(id *)arg6 progressBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000378477
- (id)_uuidsOfRequiredFoodAssetsWithNumberOfFoodAssetsToRequirePerMoment:(unsigned long long)arg1 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000377905
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x0000000000377422
- (id)_fetchAssetsForAssetUUIDsByMomentNodeLocalIdentifier:(id)arg1;	// IMP=0x00000000003772cf
- (id)_assetUUIDsAtLocationNode:(id)arg1 forMomentNodes:(id)arg2 assetUUIDs:(id)arg3 progressReporter:(id)arg4;	// IMP=0x0000000000376846
- (void)_calculateRelevantFoodieAssetUUIDsForMomentNode:(id)arg1;	// IMP=0x000000000037565b
- (id)_relevantFoodieAssetUUIDsForMomentNode:(id)arg1;	// IMP=0x000000000037559b
- (id)_assetUUIDsWithPeopleForMomentNode:(id)arg1;	// IMP=0x00000000003754db
- (id)_assetUUIDsAtLocationCoordinate:(struct CLLocationCoordinate2D)arg1 inAssetsWithUUIDs:(id)arg2;	// IMP=0x00000000003750a8
- (id)_potentialMemoriesForHomeWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x0000000000374eb0
- (id)_potentialMemoriesForRestaurantsWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x00000000003748b0
- (id)_potentialMemoriesForCitiesWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x0000000000374442
- (id)_potentialMemoriesForPeopleWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x000000000037427b
- (id)_potentialMemoriesForTripsWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x0000000000373b82
- (id)_potentialGenericMemoriesWithGraph:(id)arg1 progressReporter:(id)arg2;	// IMP=0x0000000000373a58
- (id)_personAssetUUIDsByMomentNodeLocalIdentifierForMomentNodes:(id)arg1 locationCoordinate:(struct CLLocationCoordinate2D)arg2 locationNode:(id)arg3 progressReporter:(id)arg4;	// IMP=0x00000000003736a0
- (id)_momentNodesByYearFromMomentNodes:(id)arg1;	// IMP=0x0000000000373360
- (id)_momentNodesFilteredForIncompatibleMeaningsFromMomentNodes:(id)arg1;	// IMP=0x000000000037313b
- (id)_incompatibleMeanings;	// IMP=0x0000000000373098
- (id)_momentNodesFilteredForIncompatiblePOIFromMomentNodes:(id)arg1;	// IMP=0x0000000000372d4b
- (id)_incompatiblePOILabels;	// IMP=0x0000000000372ca8
- (id)_potentialMemoriesFromMomentNodes:(id)arg1 atLocationCoordinate:(struct CLLocationCoordinate2D)arg2 atLocationNode:(id)arg3 requireMinimumTimeInterval:(_Bool)arg4 includeSingleYearMemories:(_Bool)arg5 features:(id)arg6 featuredNode:(id)arg7 kind:(unsigned long long)arg8 progressReporter:(id)arg9;	// IMP=0x00000000003725f3
- (id)_preferredPotentialMemoriesFromPotentialMemories:(id)arg1;	// IMP=0x00000000003723fe
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000371831
- (_Bool)_hasEnoughAssetsWithMinimumSceneAnalysisVersion;	// IMP=0x00000000003717ae
- (id)foodSceneNodesInGraph:(id)arg1;	// IMP=0x000000000037169f

@end

