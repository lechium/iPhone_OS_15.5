//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSDictionary *_cachedRequestContextDictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSURL *_libraryURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000441909
@property(readonly, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(CDUnknownBlockType)arg2;	// IMP=0x00000000004418a5
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000441822
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000044179f
- (id)requestContextDictionary;	// IMP=0x000000000044170f
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
- (id)_xpcConnection;	// IMP=0x0000000000441690
- (void)_setupXPCConnection;	// IMP=0x0000000000440c7f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
- (void)writeQALog:(id)arg1;	// IMP=0x0000000000440bf8
- (void)notifyLibraryAvailableAtURLForMediaanalysisd:(id)arg1;	// IMP=0x0000000000440a59
- (void)notifyLibraryAvailableAtURLForPhotoanalysisd:(id)arg1;	// IMP=0x00000000004408d6
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000044078b
- (id)dumpAnalysisStatusError:(id *)arg1;	// IMP=0x00000000004405b8
- (int)photoanalysisdPid;	// IMP=0x0000000000440574
- (void)dealloc;	// IMP=0x0000000000440532
- (id)initWithLibraryURL:(id)arg1;	// IMP=0x00000000004402a3
- (id)init;	// IMP=0x000000000044021c
- (id)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017565d
- (_Bool)rebuildPersonsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000175299
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000174fb8
- (void)personPromoterAdvancedStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000174c81
- (void)personPromoterStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000017498a
- (id)requestSuggestedMePersonIdentifierWithError:(id *)arg1;	// IMP=0x0000000000174606
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;	// IMP=0x0000000000174345
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001740ee
- (_Bool)processPersonsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000173e32
- (_Bool)reclusterFacesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000173b13
- (_Bool)resetFaceClassificationModel:(id *)arg1;	// IMP=0x0000000000173871
- (_Bool)resetFaceClusteringState:(id *)arg1;	// IMP=0x00000000001735cf
- (long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017332c
- (long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000172f18
- (_Bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172ccf
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000172af0
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001728f6
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001726fc
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172502
- (void)cacheCPAnalyticsPropertiesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000049cf22
- (void)recordFeatureUsageFromCounts:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000049cddc
- (void)reloadWidgetTimelineWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000049ccb2
- (_Bool)turboIsEnabled;	// IMP=0x000000000049cb1d
- (void)stopTurboAnalysis;	// IMP=0x000000000049ca75
- (void)runTurboAnalysis;	// IMP=0x000000000049c9cd
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000049c764
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000049c5d8
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a2734
- (id)requestUpNextMemoryLocalIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a2347
- (id)requestDiscoveryFeedItemsWithOptions:(id)arg1 generationSessionState:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000005a1ee1
- (id)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000005a1ad8
- (id)requestSuggestedPersonsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a1610
- (id)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a1149
- (id)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000005a0c61
- (void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005a09a4
- (_Bool)reportMetricsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a0770
- (id)runCurationWithItems:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000005a055d
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a036e
- (id)requestPeopleSuggestionLearningWithError:(id *)arg1;	// IMP=0x00000000005a0192
- (id)requestPeopleSuggestionLearningStatisticsWithError:(id *)arg1;	// IMP=0x000000000059ffb6
- (id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059fd62
- (_Bool)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000059fbcf
- (_Bool)requestAssetRevGeocodingWithError:(id *)arg1;	// IMP=0x000000000059fa5d
- (_Bool)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059f8ca
- (_Bool)requestEnrichmentWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059f737
- (_Bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059f5a4
- (id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059f07d
- (id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000059ee0b
- (id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000059e891
- (id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059e646
- (id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059e3fb
- (id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059e211
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059e027
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059de3d
- (_Bool)requestTitleForPersonLocalIdentifiers:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000059dbbc
- (_Bool)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000059d93b
- (_Bool)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000059d6ba
- (_Bool)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000059d4aa
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000059d25f
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000059cfc2
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000059cd46
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000059cb05
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000059c8c4
- (_Bool)requestInvalidatePersistentCaches:(id *)arg1;	// IMP=0x000000000059c74d
- (_Bool)requestInvalidateTransientCaches:(id *)arg1;	// IMP=0x000000000059c5d6
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000059c4ac
- (id)requestGraphPerformQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059c255
- (id)requestGraphStatus:(id *)arg1;	// IMP=0x000000000059c013
- (void)requestHighlightEstimatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000059befe
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059bca7
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059ba50
- (id)requestSuggestionInfosWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059b7fc
- (id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059b5a8
- (id)requestCurationOfLength:(unsigned long long)arg1 forMemoryForLocalIdentifier:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x000000000059b325
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059b0d1
- (id)requestMemoryInfosWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059ae7d
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059ac29
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059a9d5
- (id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000059a75f
- (id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059a508
- (id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000059a2b1
- (id)requestUtilityAssetInformationWithError:(id *)arg1;	// IMP=0x000000000059a06f
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000599e18
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000599b5c
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x00000000005998a0
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3 withOptions:(id)arg4 error:(id *)arg5;	// IMP=0x000000000059965f
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000599439
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000599213
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000598fbc
- (id)requestSynonymsDictionariesWithError:(id *)arg1;	// IMP=0x0000000000598d63
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000598b0c
- (void)rebuildGraphWithOptions:(id)arg1 progress:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000059898c
- (void)requestOnDemandTasksWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000598846
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000598700
- (id)requestSignalModelInfosWithError:(id *)arg1;	// IMP=0x00000000005984be
- (id)requestAssetsForPersonLocalIdentifiers:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000598267
- (id)requestRelatedMomentsForPersonLocalIdentifiers:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000598010
- (id)requestSocialGroupsForPersonLocalIdentifiers:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000597db9
- (id)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000597b62
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000597b50
- (id)requestSortedArrayOfPersonLocalIdentifiers:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000005978f9
- (void)requestClearMusicCacheWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005977b6
- (void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005976af
- (void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005975a8
- (void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005974a1
- (void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000059739a
- (void)requestPrecachingOfAudioDataForAdamIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000597293
- (void)requestMusicCacheStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000005971b8
- (void)requestSongsForAdamIDs:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000597092
- (void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596f7d
- (void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596e68
- (void)requestMusicCurationForAssetLocalIdentifiers:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596d53
- (void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000596c3e
- (void)requestUpdatePetIdentitiesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000596af8
- (void)requestSyndicationProcessingWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005969b2
- (void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000059686c
- (void)generateSuggestionsWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000596726
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000005965e0
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000059649a
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000596228
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000595f8f
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000595ce7
- (id)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000595a75
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000595803
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000595591
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000059531f

@end
