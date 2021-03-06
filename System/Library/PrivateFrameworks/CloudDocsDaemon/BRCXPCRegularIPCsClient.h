//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCRegularIPCsClient <BRProtocol, BRCForegroundClient>
{
}

- (void)getPausedFilesList:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000025c38c
- (void)_sendPausedFileListBatchToUpdater:(id)arg1 fromRowID:(unsigned long long)arg2 batchSize:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000025be54
- (void)fetchLatestVersionForFileAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000025abd8
- (void)resumeSyncForFileAtURL:(id)arg1 dropLocalChanges:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025a318
- (void)pauseSyncForFileAtURL:(id)arg1 timeout:(double)arg2 options:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000025996b
- (void)scheduleDeepScanForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002592ef
- (void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000258e36
- (void)capabilityWhenTryingToReparentItemAtURL:(id)arg1 toNewParent:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000258799
- (void)moveBRSecurityBookmarkAtURL:(id)arg1 toURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000257c7c
- (oneway void)updatePrivilegesDescriptor;	// IMP=0x0000000000257c66
- (void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025709d
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000256ca4
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000025693d
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002565d6
- (void)_t_extractMetadataForAllContainersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000255cb3
- (void)_t_getEntitledContainerIDsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000255be8
- (void)_t_getEntitlementsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000255b1d
- (void)boostFilePresenterAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000255753
- (void)removeDomain:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000254ffe
- (void)addDomain:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002548a9
- (void)trashItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000253b6b
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002534f8
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252eb4
- (oneway void)willAcceptShareAtURL:(id)arg1;	// IMP=0x0000000000252eae
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252932
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252920
- (void)getURLForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000025218b
- (void)getShareOptionsOfItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002512cd
- (void)getCreatorNameComponentsForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000250b2d
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002503b9
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024f416
- (void)startOperation:(id)arg1 toAcceptShareLink:(id)arg2 skipAcceptDialogs:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000024ed11
- (void)startOperation:(id)arg1 toProcessSubitemsAtURL:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000024e30c
- (void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024d160
- (void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024c4eb
- (void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024bb5e
- (void)startOperation:(id)arg1 toCopyShareInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024b00d
- (void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a4c6
- (void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000249a1d
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002492d3
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000248674
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024710b
- (void)createSharingInfoForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002461d1
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000245a2c
- (void)copyCurrentUserNameAndEmailWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002454f4
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000244f2a
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024481f
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000244093
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000243ba1
- (void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000241faf
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002415db
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024106b
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000024014d
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f55b
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e964
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023d50f
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023c77f
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023bb54
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023ae60
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000023a738
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000239f34
- (_Bool)_enumerateFoldersWithParent:(id)arg1 depth:(unsigned long long)arg2 session:(id)arg3 db:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002399b8
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000023883d
- (void)_enumerateContainersForEnumerationWithDB:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023857a
- (void)currentNotifRankWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000238175
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237a6f
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237446
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236ee1
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000236541
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000236149
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000235db1
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000235a7a
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000234d17
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023357b
- (void)resolveFileObjectIDToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000232a8c
- (void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000232140
- (void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023172f
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;	// IMP=0x000000000023139b
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000230d30
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000230666
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000230297
- (void)invalidateAccountCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022ff6a
- (void)updateAccountDisplayName:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022fad3
- (void)logoutAccountWithACAccountID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022f63c
- (void)_unregisterPrematurely;	// IMP=0x000000000022f5c0
- (void)createAccountWithACAccountID:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022efde
- (void)cancelTreeConsistencyCheckWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022ec8a
- (void)resumeSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022e76f
- (void)pauseSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022e41b
- (void)launchSyncConsistencyChecksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022dba3
- (void)launchItemCountMismatchChecksAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022d163
- (void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022cc7f
- (void)_readerThrottleBackoffForDocumentAtPath:(id)arg1 session:(id)arg2 containerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000022c4c2
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c4a9
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022c163
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022bdf5
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b89b
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022b4c0
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022add6
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022a748
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229830
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000227f16
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000226ff4
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000226597
- (void)zoneNameForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000225de5
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002254a0
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002244e7
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000224068
- (void)_gatherInformationForPath:(id)arg1 session:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000223504
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000222e7b
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 includeAllItems:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000222430
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000221d73
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221871
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022122f
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000220f7e
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000220bb5
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002206e5
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002201f3
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021f7f1
- (void)getContainerForMangledID:(id)arg1 personaID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021f15c
- (void)getContainersByID:(CDUnknownBlockType)arg1;	// IMP=0x000000000021ec7d
- (void)addExternalDocumentReferenceTo:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000021e9c6
- (void)_addExternalDocumentReferenceTo:(id)arg1 session:(id)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000021dca9
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021db4e
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021d75c
- (void)getEvictableSpaceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021d1f3
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021cea4
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021cb44
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c262
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021b7de
- (void)queryLoggedInAccountDescriptorsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021b471
- (void)querySyncedRootURLsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021aa1d
- (void)queryPathsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021a4a8
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000021a039
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002195f5
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000219057
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000218aff
- (void)startDownloadFileObject:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000217e1d
- (void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002177bf
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021713a
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000216931
- (id)_nonSandboxedAttributesToStrip;	// IMP=0x00000000002168f1
- (void)updateItemFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000215fb1
- (void)getQueryItemForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002157e7
- (void)getQueryItemForBRFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002153fe
- (void)_updateDirectoryMtime:(long long)arg1 onDisk:(id)arg2;	// IMP=0x00000000002153f8
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000214fb1
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000021447e
- (oneway void)updateContainerMetadataForID:(id)arg1;	// IMP=0x0000000000213c56
- (void)getContainerURLForID:(id)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002135a1
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002130ed
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002130d6
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000212c5f
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;	// IMP=0x00000000002128dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

