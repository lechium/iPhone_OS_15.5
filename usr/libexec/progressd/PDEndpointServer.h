//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable, NSMutableDictionary, NSString, PDClient, PDDaemon, PDDatabase, PDRing, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface PDEndpointServer : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    UNUserNotificationCenter *_userNotificationCenter;	// 16 = 0x10
    NSDate *_lastProgressRecordingBannerTime;	// 24 = 0x18
    PDDaemon *_daemon;	// 32 = 0x20
    PDClient *_client;	// 40 = 0x28
    PDRing *_previousCommands;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000037a97
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PDRing *previousCommands; // @synthesize previousCommands=_previousCommands;
@property(retain, nonatomic) PDClient *client; // @synthesize client=_client;
@property(nonatomic) __weak PDDaemon *daemon; // @synthesize daemon=_daemon;
- (void)recordAction:(SEL)arg1;	// IMP=0x001000000003772a
@property(readonly, nonatomic) NSMutableDictionary *statusReport;
- (_Bool)_canQueryForEntityOfClass:(Class)arg1 error:(id *)arg2;	// IMP=0x0010000000037022
- (id)_clientScopedPredicate:(id)arg1 forEntityClass:(Class)arg2;	// IMP=0x0010000000036ece
- (long long)_authorizationStatusForObject:(id)arg1;	// IMP=0x0010000000036ba1
- (long long)_authorizationStatusForHandoutAssignedItem:(id)arg1;	// IMP=0x0010000000036932
- (long long)_authorizationStatusForContext:(id)arg1;	// IMP=0x0010000000036723
- (long long)_authorizationStatusForContextWithObjectID:(id)arg1;	// IMP=0x0010000000036613
- (long long)_authorizationStatusActivityWithID:(id)arg1;	// IMP=0x00100000000364ee
- (oneway void)remote_fetchOrphanedAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000363f4
- (oneway void)remote_deleteAdminRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036264
- (oneway void)remote_publishAdminRequests:(id)arg1 withRequestor:(id)arg2 adminRequestAccounts:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000035a59
- (oneway void)remote_fetchSurveyAnswer:(id)arg1 responderIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000356c2
- (oneway void)remote_publishSurveyAnswers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034ffe
- (oneway void)remote_publishClass:(id)arg1 membersToInsert:(id)arg2 membersToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000345fe
- (oneway void)remote_triggerUserNotificationHandoutAssignedWithHandoutID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034238
- (oneway void)remote_triggerUserNotificationRevisedSubmissionWithAttachmentID:(id)arg1 studentName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033ba4
- (oneway void)remote_triggerUserNotificationRevisionRequestedWithAttachmentID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000336dd
- (oneway void)remote_triggerUserNotificationHandoutPastDueSummaryWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033531
- (oneway void)remote_triggerUserNotificationHandoutDueSoonWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033385
- (oneway void)remote_triggerUserNotificationReviewDueHandoutsWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000331d9
- (oneway void)remote_setSettingsForUserNotificationType:(long long)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032deb
- (oneway void)remote_fetchSettingsForUserNotificationType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032970
- (void)entitled_publishCollaborationStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003216b
- (oneway void)remote_publishCollaborationStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032068
- (oneway void)remote_collaborationStatesForObjectWithID:(id)arg1 classID:(id)arg2 forOwnersWithRole:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000031f04
- (oneway void)remote_collaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031da6
- (oneway void)remote_deleteCollectionRelatedObjectsWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000318f7
- (oneway void)remote_fetchCollectionItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031666
- (oneway void)remote_fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031424
- (oneway void)remote_repairHandoutAttachments:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030f65
- (oneway void)remote_fetchDeletedObjectIDsNewerThanDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030da3
- (oneway void)remote_publishHandoutGraph:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003075d
- (oneway void)remote_studentActivityForAttachmentsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000301f8
- (oneway void)remote_canSearchRostersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002fea8
- (oneway void)remote_uploadAsset:(id)arg1 uploadObserver:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002fcee
- (oneway void)remote_createShareIfNeededForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fa54
- (oneway void)remote_deleteBackingStoreForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f868
- (oneway void)remote_cloudKitUrlSuitableForStreamingAsset:(id)arg1 downloadObserver:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f649
- (oneway void)remote_cloudKitUrlSuitableForOpeningForAsset:(id)arg1 downloadObserver:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f3e1
- (oneway void)remote_cloudKitThumbnailUrlSuitableForOpeningForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f1f3
- (oneway void)remote_urlSuitableForOpeningForExpectedURL:(id)arg1 itemID:(id)arg2 ownerName:(id)arg3 zoneName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002ede7
- (oneway void)remote_removeAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ec9e
- (oneway void)remote_addAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002eb55
- (oneway void)remote_setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ea80
- (oneway void)remote_getUserDefaultForDefaultNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e9dc
- (oneway void)remote_getUserDefaultsConfigurationDictionaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e977
- (oneway void)remote_featureIsEnabled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e87c
- (void)_invalidateObserver:(id)arg1;	// IMP=0x001000000002e867
- (oneway void)remote_deregisterDataObserverWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e4d8
- (oneway void)remote_registerDataObserver:(id)arg1 withID:(id)arg2 forClassNamed:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 oldChangeTag:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000002e0d7
- (oneway void)remote_getCurrentUseriCloudQuotaInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002df93
- (oneway void)remote_currentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d794
- (oneway void)saveObjects:(id)arg1 saveResponse:(id)arg2 isRemoteClient:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b52f
- (_Bool)updateStateChangesToPublish:(id)arg1 toActivityState:(long long)arg2 forAttachment:(id)arg3 forOwnerPersonID:(id)arg4;	// IMP=0x001000000002b10b
- (id)_fetchExistingStateForAttachment:(id)arg1 withOwnerPersonID:(id)arg2;	// IMP=0x001000000002ad67
- (oneway void)remote_saveObjects:(id)arg1 saveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002acd4
- (oneway void)remote_authTreeForAttachment:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ab7f
- (oneway void)remote_authTreeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a9ff
- (oneway void)remote_fetchCountOfActivitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a8bb
- (oneway void)remote_getServerInternalStateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a5f3
- (oneway void)remote_getServerSyncStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a401
- (oneway void)remote_fetchContextsForContextIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a28f
- (oneway void)remote_deleteProgressReportingCapabilitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a177
- (oneway void)remote_fetchProgressReportingCapabilitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029fd7
- (oneway void)remote_deleteThumbnailBlobForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029ebf
- (oneway void)remote_fetchThumbnailBlobForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029d9a
- (oneway void)remote_contextsMatchingIdentifierPath:(id)arg1 parentContextID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000299a8
- (oneway void)remote_executeQuery:(id)arg1 querySpecification:(id)arg2 searchSpecification:(id)arg3 issueServerRequest:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000028db1
- (void)_performQuery:(id)arg1 querySpecification:(id)arg2 issueServerRequest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000028902
- (oneway void)remote_mainAppContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000028853
- (oneway void)remote_deleteOrganization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002866a
- (oneway void)remote_addOrganization:(id)arg1 withLocations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002840f
- (oneway void)remote_addAdminRequestor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028284
- (id)_createMainAppContext:(id *)arg1;	// IMP=0x0010000000027bd8
- (void)showBannerForMarkAsComplete:(id)arg1;	// IMP=0x00100000000271dc
- (oneway void)remote_fetchAndCompleteActiveAssignedActivitiesForContextPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026d0c
- (id)_createHandoutAssignedItemFrom:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000026658
- (oneway void)remote_validateAndCreateHandoutAssignedItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000260b6
- (oneway void)remote_fetchHandoutAttachmentForDocumentURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002572b
- (id)completableAttachmentsSharingContextPath:(id)arg1;	// IMP=0x0010000000024d8a
- (oneway void)remote_fetchTransparencyMessageInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023cd9
- (oneway void)remote_fetchTransparencyMessageInfoForAttachmentID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002356b
- (oneway void)remote_setShouldSyncTeacherBrowsedContexts:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023403
- (oneway void)remote_shouldSyncTeacherBrowsedContextsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023258
- (oneway void)remote_getClassKitCatalogEnvironmentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002318c
- (oneway void)remote_setClassKitCatalogEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000230ba
- (oneway void)remote_getDevModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022fcb
- (oneway void)remote_setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022eea
- (oneway void)remote_recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022e20
- (oneway void)remote_removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022cd7
- (oneway void)remote_authorizationStatusForHandoutAssignedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022bb3
- (oneway void)remote_authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022a8f
- (oneway void)remote_addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022946
- (oneway void)remote_renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000227cb
- (oneway void)remote_statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000226ea
- (oneway void)remote_fetchReportsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022533
- (oneway void)remote_syncFetchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022319
- (oneway void)remote_syncPushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000221b2
- (oneway void)remote_syncStatsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000220b1
- (oneway void)remote_recreateDatabase:(_Bool)arg1 andTerminateDaemonWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021fd3
- (oneway void)remote_recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021eea
- (oneway void)remote_databasePathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021d75
- (oneway void)remote_accountChanged;	// IMP=0x0010000000021b98
- (oneway void)remote_deleteAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021791
- (oneway void)remote_setOverrideBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000216c0
- (oneway void)remote_listAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000214bd
- (void)databaseChanged:(id)arg1;	// IMP=0x0010000000020e9b
- (_Bool)isInternalWithError:(id *)arg1;	// IMP=0x0010000000020d44
- (id)userNotificationCenter;	// IMP=0x0010000000020cf2
@property(readonly, nonatomic) _Bool hasObservers;
@property(readonly, nonatomic) PDDatabase *database;
- (void)dealloc;	// IMP=0x0010000000020c10
- (void)invalidate;	// IMP=0x0010000000020a34
- (id)initWithClient:(id)arg1 daemon:(id)arg2;	// IMP=0x0010000000020841

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

