//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MAGraph.h>

@class NSDateFormatter, NSDictionary, NSObject, NSRecursiveLock, NSSet, PGGraphInfoNode, PGGraphLocationCityNodeCollection, PGGraphLocationCountryNodeCollection, PGGraphLocationCountyNodeCollection, PGGraphLocationStateNodeCollection, PGMessageProfile;
@protocol OS_dispatch_queue;

@interface PGGraph : MAGraph
{
    NSRecursiveLock *_supersetLock;	// 8 = 0x8
    PGGraphLocationCityNodeCollection *_supersetCityNodes;	// 16 = 0x10
    PGGraphLocationCountyNodeCollection *_supersetCountyNodes;	// 24 = 0x18
    PGGraphLocationStateNodeCollection *_supersetStateNodes;	// 32 = 0x20
    PGGraphLocationCountryNodeCollection *_supersetCountryNodes;	// 40 = 0x28
    PGGraphLocationCityNodeCollection *_interestingCityNodes;	// 48 = 0x30
    NSDictionary *_zeroKeywordMappingByMeaningLabel;	// 56 = 0x38
    PGMessageProfile *_messageProfile;	// 64 = 0x40
    NSDateFormatter *_dateFormatter;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_graphQueue;	// 80 = 0x50
}

+ (long long)librarySizeRangeForNumberOfAssets:(unsigned long long)arg1;	// IMP=0x00000000002f927d
+ (id)defaultSpecification;	// IMP=0x00000000002f9264
+ (id)graphWithVisualString:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002f9226
+ (_Bool)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2;	// IMP=0x00000000002f913f
+ (id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2;	// IMP=0x00000000002f8f33
+ (id)assetPropertySetsForIngest;	// IMP=0x00000000002f8e4b
+ (id)poiLabelForPOIType:(id)arg1;	// IMP=0x000000000025efa8
+ (id)_graphNodePOILabelByPlaceType;	// IMP=0x000000000025ef78
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1;	// IMP=0x00000000003091d8
+ (id)meaningV2MeaningLabels;	// IMP=0x0000000000325c52
+ (id)_meaningLabelTree;	// IMP=0x000000000032597b
+ (void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003258e4
+ (void)_traverseMeaningLabelsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000032586f
+ (id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3;	// IMP=0x0000000000325703
+ (id)parentMeaningLabelForMeaningLabel:(id)arg1;	// IMP=0x0000000000325683
+ (void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003255ec
+ (id)defaultMatchingSortDescriptors;	// IMP=0x00000000004991e9
+ (id)matchingBlockedSceneLabels;	// IMP=0x00000000004991dc
+ (id)matchingWeightToDictionary;	// IMP=0x00000000004991cf
+ (id)_personClosestToMeBetweenPersonNode:(id)arg1 andOtherPersonNode:(id)arg2;	// IMP=0x00000000004a5262
+ (id)_closestRelationshipEdgeLabelForPersonNode:(id)arg1 andOtherPersonNode:(id)arg2;	// IMP=0x00000000004a4ff3
+ (unsigned long long)meaningForMeaningLabel:(id)arg1;	// IMP=0x00000000004bc42f
+ (id)meaningLabelForMeaning:(unsigned long long)arg1;	// IMP=0x00000000004bc422
+ (id)preciseMeaningNodeForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;	// IMP=0x00000000004bc2fe
+ (id)mostSignificantMeaningLabels;	// IMP=0x00000000004bc2ce
+ (id)frequentMeaningLabels;	// IMP=0x00000000004bc29e
+ (id)stellarMeanings;	// IMP=0x00000000004bc220
+ (id)lessMeaningfulMeanings;	// IMP=0x00000000004bc19b
+ (id)veryMeaningfulMeanings;	// IMP=0x00000000004bc16b
+ (id)allMeaningfulMeanings;	// IMP=0x00000000004bc148
+ (id)homeOwnerPersonNodesForHobbyWithMomentNode:(id)arg1;	// IMP=0x000000000050f4ac
+ (id)blocklistSceneLabelsForHobbyType:(long long)arg1;	// IMP=0x000000000050f483
+ (id)sceneLabelsForHobbyType:(long long)arg1;	// IMP=0x000000000050f45a
- (void).cxx_destruct;	// IMP=0x00000000002f8d71
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *graphQueue; // @synthesize graphQueue=_graphQueue;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PGMessageProfile *messageProfile; // @synthesize messageProfile=_messageProfile;
@property(readonly, nonatomic) long long librarySizeRange;
- (void)unloadMessageProfile;	// IMP=0x00000000002f8c82
@property(readonly) PGGraphInfoNode *infoNode;
- (_Bool)isEmpty;	// IMP=0x00000000002f8bc7
- (void)invalidateMemoryCaches;	// IMP=0x00000000002f8b86
- (_Bool)copyToURL:(id)arg1;	// IMP=0x00000000002f8a46
- (_Bool)saveToURL:(id)arg1;	// IMP=0x00000000002f893b
- (id)initWithSpecification:(id)arg1;	// IMP=0x00000000002f8852
- (id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2 progressReporter:(id)arg3;	// IMP=0x00000000002f8475
@property(readonly) _Bool isOnGraphQueue;
- (void)_checkCanRead;	// IMP=0x00000000002f838d
- (long long)libraryAge;	// IMP=0x0000000000211eee
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;	// IMP=0x0000000000211e0d
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1;	// IMP=0x0000000000211d76
- (id)_momentNodeForAssetCollection:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000211cf9
- (id)localDatesForMomentNode:(id)arg1;	// IMP=0x0000000000211c31
- (id)closestMomentNodeForLocalDate:(id)arg1;	// IMP=0x0000000000211950
- (id)yearNodeForYear:(long long)arg1;	// IMP=0x0000000000211868
- (id)monthNodeForMonth:(long long)arg1;	// IMP=0x0000000000211780
- (id)dayNodeForDay:(long long)arg1;	// IMP=0x0000000000211698
- (id)_previousSeasonForSeason:(id)arg1;	// IMP=0x0000000000211516
- (id)previousSeasonNodeForSeasonNode:(id)arg1;	// IMP=0x00000000002113e6
- (id)seasonNodeForLocalDate:(id)arg1;	// IMP=0x000000000021125d
- (id)dateNodesForWeekOfMonth:(long long)arg1;	// IMP=0x00000000002111c6
- (id)dateNodesForWeekOfYear:(long long)arg1;	// IMP=0x000000000021112f
- (id)dateNodesForYear:(long long)arg1;	// IMP=0x0000000000211098
- (id)dateNodesForMonth:(long long)arg1;	// IMP=0x0000000000211014
- (id)dateNodesIgnoringYearForLocalDate:(id)arg1;	// IMP=0x0000000000210f7d
- (id)dateNodesForLocalDateInterval:(id)arg1;	// IMP=0x0000000000210f17
- (id)dateNodeFilterForLocalDateInterval:(id)arg1;	// IMP=0x0000000000210d1b
- (id)dateNodeForLocalDate:(id)arg1;	// IMP=0x0000000000210c87
- (id)dateNodesForLocalDate:(id)arg1;	// IMP=0x0000000000210a9c
- (id)momentsResultForMomentNodes:(id)arg1 inPhotoLibrary:(id)arg2 sortChronologically:(_Bool)arg3;	// IMP=0x000000000021080c
- (id)momentsForMomentNodes:(id)arg1 inPhotoLibrary:(id)arg2 sortChronologically:(_Bool)arg3;	// IMP=0x00000000002107bc
- (id)momentForMomentNode:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x00000000002104f7
- (id)highlightForHighlightNode:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x00000000002102a6
- (id)_fuzzyMomentLookupForMomentNode:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002100b0
- (id)_strictMomentLookupForMomentNode:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000020ff84
- (id)momentNodeForMoment:(id)arg1;	// IMP=0x000000000020fd70
- (id)highlightNodeForHighlight:(id)arg1;	// IMP=0x000000000020fcd6
- (id)momentNodeForAsset:(id)arg1;	// IMP=0x000000000020fb54
- (id)eventNodeForAssetCollection:(id)arg1;	// IMP=0x000000000020f9f8
- (id)_fuzzyMomentNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020f862
- (id)_strictMomentNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020f75c
- (id)_momentNodesForDateComponents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020f5d3
- (void)_enumerateMomentForMomentNode:(id)arg1 inPhotoLibrary:(id)arg2 paddingTime:(double)arg3 enumerationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000020f366
- (_Bool)_enumerateMomentNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000020f16c
- (id)publicEventNodes;	// IMP=0x000000000025eaaa
- (id)poiNodes;	// IMP=0x000000000025ea8e
- (id)meaningNodes;	// IMP=0x000000000025ea72
- (id)largeFrequentLocationNodes;	// IMP=0x000000000025e319
- (id)sceneNodesForSceneNames:(id)arg1;	// IMP=0x000000000025e0fa
- (id)sceneNodeForSceneName:(id)arg1;	// IMP=0x000000000025e091
- (id)dayOfWeekNodes;	// IMP=0x000000000025dfe8
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025dfc7
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025dfa6
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025df85
- (void)enumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025ded2
- (id)bestFittingAreaNodeFromAreaNodes:(id)arg1;	// IMP=0x000000000025dd19
- (double)libraryDuration;	// IMP=0x000000000025dc3c
- (id)businessNodes;	// IMP=0x000000000025dc1e
- (id)celebratedHolidayNodes;	// IMP=0x000000000025db77
- (id)allTimeYearsNodes;	// IMP=0x000000000025db3d
- (id)dateNodeNameWithLocalDate:(id)arg1;	// IMP=0x000000000025daba
- (id)coworkers;	// IMP=0x000000000025d9ff
- (id)friends;	// IMP=0x000000000025d944
- (id)children;	// IMP=0x000000000025d889
- (id)parents;	// IMP=0x000000000025d7ce
- (id)partners;	// IMP=0x000000000025d713
- (id)familyMembers;	// IMP=0x000000000025d658
- (id)meNodeCollection;	// IMP=0x000000000025d52d
- (id)meNode;	// IMP=0x000000000025d400
- (id)sortedSocialGroupNodesWithMomentNodes:(id)arg1;	// IMP=0x00000000002f92c6
- (id)maximalSocialGroupsForPersonLocalIdentifiers:(id)arg1;	// IMP=0x000000000030878d
- (id)socialGroupsForPersonLocalIdentifiers:(id)arg1;	// IMP=0x000000000030862f
- (id)allSocialGroupsForPersonLocalIdentifier:(id)arg1;	// IMP=0x00000000003084b1
- (unsigned long long)_countOfDistinctSocialGroups:(id)arg1;	// IMP=0x0000000000307d88
- (id)_personNodeIntersectingSocialGroups:(id)arg1;	// IMP=0x0000000000307899
- (id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(_Bool)arg2;	// IMP=0x00000000003076b4
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(_Bool)arg2;	// IMP=0x00000000003073be
- (id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(_Bool)arg2;	// IMP=0x00000000003071f8
- (id)personNodeForPersonLocalIdentifier:(id)arg1;	// IMP=0x0000000000307099
- (id)momentNodesForPersonNodes:(id)arg1;	// IMP=0x0000000000306fc3
- (id)personNodesForPersonLocalIdentifiers:(id)arg1;	// IMP=0x0000000000306d73
- (void)enumeratePersonNodesIncludingMe:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000306c52
- (id)favoritedPersonNodesIncludingMe:(_Bool)arg1;	// IMP=0x0000000000306ad1
- (id)personNodesIncludingMe:(_Bool)arg1;	// IMP=0x0000000000306a16
- (unsigned long long)numberOfPersonNodesIncludingMe:(_Bool)arg1;	// IMP=0x00000000003069ba
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2;	// IMP=0x000000000030681b
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1;	// IMP=0x0000000000306801
- (_Bool)isBestPairSocialGroup:(id)arg1;	// IMP=0x00000000003067a4
- (_Bool)isPairSocialGroup:(id)arg1;	// IMP=0x000000000030671b
- (_Bool)hasSocialGroups;	// IMP=0x000000000030666d
- (id)bestSocialGroupNodes;	// IMP=0x0000000000306601
- (id)socialGroupNodesSortedByWeight;	// IMP=0x0000000000306576
- (unsigned long long)numberOfSocialGroupNodes;	// IMP=0x0000000000306558
- (id)socialGroupNodeForPersonNodes:(id)arg1;	// IMP=0x000000000030628f
- (id)inferredMeNode;	// IMP=0x0000000000305fe6
- (id)musicGenreDistributionUsingTaggedGenres:(_Bool)arg1;	// IMP=0x000000000031c9fc
- (void)enumerateMusicSessionNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000031c960
@property(readonly, nonatomic) NSSet *musicSessions;
- (id)staticGraphSchema;	// IMP=0x000000000032323e
- (id)_createZeroKeywordMappingByMeaningLabel;	// IMP=0x0000000000334a94
@property(readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;
- (id)onGoingTripNodes;	// IMP=0x00000000003978c6
- (void)enumerateHighlightGroupNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003978a5
- (id)highlightGroupNodesSortedByDate;	// IMP=0x000000000039774e
- (id)highlightGroupNodes;	// IMP=0x0000000000397730
- (void)enumerateDayHighlightNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039770f
- (id)dayHighlightNodesSortedByDate;	// IMP=0x00000000003975b8
- (id)dayHighlightNodes;	// IMP=0x000000000039755e
- (id)defaultHighlightNodes;	// IMP=0x00000000003973a2
- (id)aggregationNodes;	// IMP=0x00000000003972e3
- (id)allTripNodes;	// IMP=0x0000000000397263
- (id)shortTripNodes;	// IMP=0x00000000003971a4
- (id)longTripNodes;	// IMP=0x00000000003970e5
- (id)defaultHighlightTypeNode;	// IMP=0x0000000000397089
- (id)onGoingTripHighlightTypeNode;	// IMP=0x000000000039702d
- (id)aggregationHighlightTypeNode;	// IMP=0x0000000000396fd1
- (id)shortTripHighlightTypeNode;	// IMP=0x0000000000396f75
- (id)longTripHighlightTypeNode;	// IMP=0x0000000000396f19
- (id)nodeLabelForHighlightType:(unsigned short)arg1;	// IMP=0x0000000000396ee8
- (id)meaningfulMomentNodesSortedByDate;	// IMP=0x0000000000416ad1
- (id)momentNodesSortedByDateFromMomentNodes:(id)arg1;	// IMP=0x000000000041697a
- (id)momentNodesSortedByDate;	// IMP=0x0000000000416805
- (id)momentNodes;	// IMP=0x00000000004167e9
- (unsigned long long)numberOfMomentNodes;	// IMP=0x00000000004167cb
- (_Bool)exportMatchMomentEventResults:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000494739
- (id)_eventsFromEvents:(id)arg1 withTargetDomain:(unsigned short)arg2;	// IMP=0x00000000004943b6
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2;	// IMP=0x00000000004942de
- (id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2;	// IMP=0x0000000000494235
- (id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2;	// IMP=0x0000000000493d48
- (id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2;	// IMP=0x0000000000493bff
- (double)_distanceForLocationLabel:(id)arg1;	// IMP=0x00000000004939ef
- (double)relationshipScoreForPersonNode:(id)arg1;	// IMP=0x000000000049373b
- (double)_scoreForPlaceSubDomain:(unsigned short)arg1;	// IMP=0x0000000000493645
- (id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000049322c
- (id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x0000000000493159
- (id)_sceneMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x0000000000493142
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x0000000000492d02
- (id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x0000000000492c2f
- (id)_placeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x0000000000492c18
- (id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000049221e
- (id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000049214b
- (id)_eventMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x0000000000492134
- (id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000048e832
- (id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000048e75f
- (id)_locationMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x000000000048e748
- (id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000048b8cf
- (id)_timeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x00000000004883d1
- (id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(unsigned long long)arg3 presentPeopleCountForMatchedEvent:(unsigned long long)arg4 commonPeople:(id)arg5 relationshipScoreCache:(id)arg6 needsKeywords:(_Bool)arg7;	// IMP=0x0000000000487c6f
- (id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;	// IMP=0x00000000004878c5
- (unsigned long long)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2;	// IMP=0x00000000004877cb
- (id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2;	// IMP=0x00000000004876d8
- (id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 options:(id)arg2;	// IMP=0x000000000048736a
- (id)matchPersonNodes:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x0000000000486e1a
- (id)matchEvent:(id)arg1 withEvent:(id)arg2 options:(id)arg3;	// IMP=0x000000000048636d
- (id)matchEvent:(id)arg1 options:(id)arg2;	// IMP=0x00000000004854fa
- (id)interestingAreaNodes;	// IMP=0x00000000004a2dae
- (id)interestingCityNodes;	// IMP=0x00000000004a2a71
- (id)mainUrbanCityNodes;	// IMP=0x00000000004a2689
- (unsigned long long)_cluePeopleForRelationships:(id)arg1;	// IMP=0x00000000004a25ab
- (id)inferredUserLocales;	// IMP=0x00000000004a24cf
- (id)celebratedHolidays;	// IMP=0x00000000004a2413
- (id)weekends;	// IMP=0x00000000004a20fd
- (id)trips;	// IMP=0x00000000004a1de7
@property(readonly, nonatomic) PGGraphLocationCountryNodeCollection *supersetCountryNodes;
@property(readonly, nonatomic) PGGraphLocationStateNodeCollection *supersetStateNodes;
@property(readonly, nonatomic) PGGraphLocationCountyNodeCollection *supersetCountyNodes;
@property(readonly, nonatomic) PGGraphLocationCityNodeCollection *supersetCityNodes;
@property(readonly, nonatomic) NSSet *supersets;
- (_Bool)isSocialGroupEligible:(unsigned long long)arg1 longevity:(float)arg2;	// IMP=0x00000000004a19ef
- (_Bool)singlePersonBelongsToSocialGroupOfMaxSize:(id)arg1 groups:(id)arg2 maxSize:(unsigned long long)arg3;	// IMP=0x00000000004a178c
- (_Bool)singlePersonGroupIsInSocialGroups:(id)arg1 groups:(id)arg2;	// IMP=0x00000000004a1546
- (double)longevity:(id)arg1;	// IMP=0x00000000004a13e9
- (float)recencyFeature:(double)arg1;	// IMP=0x00000000004a1308
- (double)averageTopMomentTimes:(id)arg1 numberOfMoments:(unsigned long long)arg2;	// IMP=0x00000000004a113f
- (float)normalizeFeatureValue:(float)arg1 average:(float)arg2 featureValues:(id)arg3 factor:(float)arg4;	// IMP=0x00000000004a0f5b
- (void)enumerateSocialGroupsIncludingMeNode:(_Bool)arg1 socialGroupsVersion:(unsigned long long)arg2 validGroupsBlock:(CDUnknownBlockType)arg3 invalidGroupsBlock:(CDUnknownBlockType)arg4 averageWeight:(out float *)arg5;	// IMP=0x000000000049d880
- (void)enumerateSocialGroupsIncludingMeNode:(_Bool)arg1 validGroupsBlock:(CDUnknownBlockType)arg2 invalidGroupsBlock:(CDUnknownBlockType)arg3 averageWeight:(out float *)arg4;	// IMP=0x000000000049d792
- (void)enumerateSocialGroupsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000049d6f2
- (id)relevantMomentNodesForSocialGroupProcessing;	// IMP=0x000000000049d4d1
- (double)momentsCountDistance:(id)arg1 withSecondBaseGroup:(id)arg2 withSubsetBias:(double)arg3 withDistanceThreshold:(double)arg4 withIntersectionBias:(double)arg5 withKey:(id)arg6;	// IMP=0x000000000049d225
- (double)peopleDistance:(id)arg1 withSecondBaseGroup:(id)arg2 threshold:(double)arg3 factor:(double)arg4;	// IMP=0x000000000049d0b1
- (void)enumeratePeopleClustersWithLinkage:(unsigned long long)arg1 threshold:(double)arg2 includingMeNode:(_Bool)arg3 socialGroupsVersion:(unsigned long long)arg4 singlePersonGroups:(out id *)arg5 withBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000049a2ed
- (void)enumeratePeopleClustersIncludingMeNode:(_Bool)arg1 socialGroupsVersion:(unsigned long long)arg2 singlePersonGroups:(out id *)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000049a2a9
- (void)invalidateSupersetCaches;	// IMP=0x000000000049a23e
- (void)invalidateProcessingCaches;	// IMP=0x000000000049a1db
- (void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg1 visitedMeaningfulEvents:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004bb84b
- (id)meaningfulEventNodeForUUID:(id)arg1;	// IMP=0x00000000004bb7ed
- (id)bestMeaningLabelForMeaningfulEvent:(id)arg1;	// IMP=0x00000000004bb663
- (void)enumerateMomentNodesWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004bb5cb
- (id)momentNodesWithMeaning:(unsigned long long)arg1;	// IMP=0x00000000004bb524
- (void)enumerateMeaningsFromMeaningfulEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004bb43f
- (id)meaningsFromMeaningfulEvent:(id)arg1;	// IMP=0x00000000004bb37c
- (void)enumerateMeaningfulEventsWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004bb2df
- (_Bool)eventIsStellar:(id)arg1;	// IMP=0x00000000004bb1c7
- (_Bool)eventIsVeryMeaningful:(id)arg1;	// IMP=0x00000000004bb0af
- (id)meaningfulEvents;	// IMP=0x00000000004bae5d
- (id)hobbiesForType:(long long)arg1;	// IMP=0x000000000050edc9
- (id)allHobbies;	// IMP=0x000000000050ed12
- (void)_reportBusinessItemsWithAnalytics:(id)arg1;	// IMP=0x000000000056dba3
- (void)_reportDisambiguatedLocationsWithAnalytics:(id)arg1;	// IMP=0x000000000056d6b0
- (void)_reportMobilityWithAnalytics:(id)arg1;	// IMP=0x000000000056d394
- (void)_reportLibraryWithAnalytics:(id)arg1;	// IMP=0x000000000056d190
- (void)reportMetricsLogsWithAnalytics:(id)arg1;	// IMP=0x000000000056d11b

@end

