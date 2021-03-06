//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceMusicProtocol-Protocol.h>

@class NSMutableDictionary, NSString, PGManager, PHPhotoLibrary;
@protocol OS_dispatch_queue, OS_os_log;

@interface PHAStorytellingClientRequestHandler : NSObject <PLPhotoAnalysisGraphServiceMusicProtocol, PHAServiceOperationHandling>
{
    NSObject<OS_dispatch_queue> *_executionQueue;	// 8 = 0x8
    NSMutableDictionary *_progressReporterByQueryID;	// 16 = 0x10
    PGManager *_graphManager;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    NSObject<OS_os_log> *_loggingConnection;	// 40 = 0x28
}

+ (id)_fetchOptionsForMusicCurationWithPhotoLibrary:(id)arg1;	// IMP=0x000000000004ff56
- (void).cxx_destruct;	// IMP=0x0000000000088da8
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
- (void)handleOperation:(id)arg1;	// IMP=0x0000000000088cff
- (id)stringForQoS:(unsigned int)arg1;	// IMP=0x0000000000088c9a
- (id)initWithGraphManager:(id)arg1;	// IMP=0x0000000000088b69
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003741
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003437
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000332f
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000321f
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000030ae
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f3d
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002a94
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000028ea
- (void)requestDiscoveryFeedItemsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011d0c
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012144
- (void)requestRelatedMomentsForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016d4b
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016c62
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016b79
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016a90
- (void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016874
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001678b
- (void)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001664c
- (void)requestAssetsForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001651d
- (void)requestAssetCollectionsForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000163e0
- (void)requestSocialGroupsForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000162b1
- (void)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000161c8
- (void)requestSortedArrayOfPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016099
- (void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c60f
- (void)requestSignalModelInfosWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c523
- (void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c144
- (void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001bf87
- (void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bec2
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bc40
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b56a
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000001ab61
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000019e6f
- (id)informationDictionaryForAsset:(id)arg1;	// IMP=0x0000000000019dd4
- (void)requestUpNextMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dcbe
- (void)requestClearMusicCacheWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fd6f
- (void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fab7
- (void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fa9b
- (void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f71f
- (void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f5ea
- (void)requestPrecachingOfAudioDataForAdamIDs:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f554
- (void)requestMusicCacheStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f467
- (void)requestSongsForAdamIDs:(id)arg1 context:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f1b3
- (void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f0c6
- (void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ed77
- (void)requestMusicCurationForAssetLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004eb6d
- (void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e7d7
- (_Bool)updatePetIdentityWithProcessor:(id)arg1 errors:(id)arg2;	// IMP=0x0000000000050830
- (void)requestUpdatePetIdentitiesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050754
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000051615
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000005149d
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000051325
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000511bb
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005108d
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050f23
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063dff
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063c24
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006db60
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d78b
- (id)_assetCollectionForRelatedIdentifier:(id)arg1;	// IMP=0x000000000006d448
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000006cc45
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000006c41c
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006bfbd
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006bbe7
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000006b8f1
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000006b691
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006b038
- (void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006abf4
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006a1b4
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000069779
- (id)relatedRequestPredicateValidator;	// IMP=0x000000000006970b
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f8df
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f78d
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f426
- (void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f32c
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006f243
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006efe2
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000006ebe7
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;	// IMP=0x0000000000079c60
- (id)_collectionListForLocalIdentifier:(id)arg1;	// IMP=0x0000000000079b2b
- (void)requestTitleForPersonLocalIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000079959
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000079791
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000079608
- (void)reloadWidgetTimelineWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086aa5
- (id)_infoForGraphCollectionBasedMemory:(id)arg1;	// IMP=0x00000000000868d2
- (id)_infoForMomentsBackingMemory:(id)arg1;	// IMP=0x00000000000865f7
- (id)_minimalLegacyFeatureVectorWithMemory:(id)arg1;	// IMP=0x00000000000862da
- (id)_featureVectorWithMemory:(id)arg1;	// IMP=0x0000000000085a9b
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;	// IMP=0x0000000000085a7c
- (id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2;	// IMP=0x00000000000857dd
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(_Bool)arg3;	// IMP=0x0000000000084841
- (id)_basicPropertiesFromMemory:(id)arg1;	// IMP=0x000000000008455f
- (id)_propertiesFromMemory:(id)arg1;	// IMP=0x00000000000841a2
- (void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2 moodGenerationContext:(id)arg3;	// IMP=0x0000000000083e7c
- (void)requestCurationOfLength:(unsigned long long)arg1 forMemoryForLocalIdentifier:(id)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000083bb1
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083a69
- (void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083782
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083699
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000008327c
- (unsigned long long)_validatedMemoryNotificationState:(int)arg1;	// IMP=0x000000000008326e
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000828a9
- (void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000008d570
- (void)recordFeatureUsageFromCounts:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b117f
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cf75b
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cf6b0
- (void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cf8d7
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cf807

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

