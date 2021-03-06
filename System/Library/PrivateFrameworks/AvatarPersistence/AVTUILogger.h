//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTUILogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface AVTUILogger : NSObject <AVTUILogger>
{
    NSObject<OS_os_log> *_generalLog;	// 8 = 0x8
    NSObject<OS_os_log> *_interactionLog;	// 16 = 0x10
    NSObject<OS_os_log> *_backendLog;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002d6f2
@property(readonly, nonatomic) NSObject<OS_os_log> *backendLog; // @synthesize backendLog=_backendLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *interactionLog; // @synthesize interactionLog=_interactionLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *generalLog; // @synthesize generalLog=_generalLog;
- (void)logSetupUserImportFailedToRemoveFileWithError:(id)arg1;	// IMP=0x000000000002d68b
- (void)logSetupUserDataImportCheck;	// IMP=0x000000000002d627
- (void)logSetupUserImportSaveError:(id)arg1;	// IMP=0x000000000002d5b7
- (void)logSetupUserImportAttempting:(long long)arg1;	// IMP=0x000000000002d51b
- (void)logSetupUserImportFailedToUnarchiveDataAtPath:(id)arg1 errorDescription:(id)arg2;	// IMP=0x000000000002d493
- (void)logSetupUserHasNoMemojiData;	// IMP=0x000000000002d429
- (void)logCarouselEndsDraggingWithVelocity:(double)arg1 willSwitchIndexPathInsteadOfScrollBack:(_Bool)arg2 forHighVelocity:(_Bool)arg3;	// IMP=0x000000000002d35c
- (void)logCarouselDelegateDidUpdateRecord:(id)arg1;	// IMP=0x000000000002d2ec
- (void)logCarouselDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(_Bool)arg2 editable:(_Bool)arg3;	// IMP=0x000000000002d21d
- (void)logCarouselDelegateWillEndFocusRecord:(id)arg1;	// IMP=0x000000000002d1ad
- (void)logCarouselDelegateDidFocusRecord:(id)arg1;	// IMP=0x000000000002d13d
- (void)logCarouselErrorGettingFrameForElementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d0ef
- (void)logAVTViewCancelingRenderingAvatar:(id)arg1;	// IMP=0x000000000002d079
- (void)logAVTViewDidRenderCurrentAvatar:(id)arg1;	// IMP=0x000000000002d003
- (void)logAVTViewDidRenderAvatar:(id)arg1 currentAvatar:(id)arg2;	// IMP=0x000000000002cef6
- (void)logAVTViewSetAvatar:(id)arg1;	// IMP=0x000000000002cdce
- (void)logToLivePoseTransitionEnds:(id)arg1;	// IMP=0x000000000002cd58
- (void)logToLivePoseTransitionBegins:(id)arg1;	// IMP=0x000000000002cce2
- (void)logTransition:(id)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;	// IMP=0x000000000002cc09
- (void)logCancelTransition:(id)arg1;	// IMP=0x000000000002cb50
- (void)logPerformTransition:(id)arg1;	// IMP=0x000000000002ca97
- (void)logSetupHandlerCompletedForTransition:(id)arg1 state:(long long)arg2 finished:(_Bool)arg3;	// IMP=0x000000000002c9a9
- (void)logStartTransition:(id)arg1 state:(long long)arg2;	// IMP=0x000000000002c8e2
- (void)logCarouselAddsTransitionToCoordinator:(id)arg1;	// IMP=0x000000000002c829
- (void)logCarouselCellStopUsingLiveView:(id)arg1 associatedTransition:(id)arg2;	// IMP=0x000000000002c74b
- (void)logCarouselCellStartUsingLiveView:(id)arg1 associatedTransition:(id)arg2;	// IMP=0x000000000002c66d
- (void)logSingleModeControllerStopUsingLiveView:(id)arg1;	// IMP=0x000000000002c5b4
- (void)logSingleModeControllerStartUsingLiveView:(id)arg1;	// IMP=0x000000000002c4fb
- (void)logCarouselStopsFocusingOnCenterItem:(id)arg1 withCell:(id)arg2;	// IMP=0x000000000002c41d
- (void)logCarouselTransitionCenterItem:(id)arg1 withCell:(id)arg2;	// IMP=0x000000000002c33f
- (void)logCarouselChangesCenterItemTo:(id)arg1;	// IMP=0x000000000002c286
- (void)logCarouselChangingToMultiMode;	// IMP=0x000000000002c21c
- (void)logCarouselChangingToSingleMode;	// IMP=0x000000000002c1b2
- (void)logNilImageReturnedFromAVTAvatarRecordImageProvider;	// IMP=0x000000000002c169
- (void)logNilImageReturnedFromAVTUIStickerRenderer;	// IMP=0x000000000002c120
- (void)logErrorUpdatingBodyCarouselVisibleCellAtIndexPath:(id)arg1;	// IMP=0x000000000002c0b0
- (void)logStickerSchedulerCancelledAllTasks;	// IMP=0x000000000002c067
- (void)logStickerSchedulerCancelledStickerSheetTasksForIdentifier:(id)arg1;	// IMP=0x000000000002bff7
- (void)logStickerSchedulerCancelledTask:(id)arg1;	// IMP=0x000000000002bf87
- (void)logStickerSchedulerStartedTask:(id)arg1 forSchedulerRule:(id)arg2;	// IMP=0x000000000002beff
- (void)logStickerSchedulerAddedTask:(id)arg1 taskCount:(long long)arg2;	// IMP=0x000000000002be89
- (void)logStickerViewSnapshotForBounds:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000002bdb9
- (void)logRenderingStickerEnd:(id)arg1;	// IMP=0x000000000002bd43
- (void)logRenderingStickerStart:(id)arg1 forRecord:(id)arg2;	// IMP=0x000000000002bbfc
- (void)logPaddleViewVideoPlayerFailed:(id)arg1;	// IMP=0x000000000002bb49
- (void)logStickerGeneratorPoolDidntHaveAvailableGenerator:(long long)arg1 maxCount:(long long)arg2;	// IMP=0x000000000002ba9b
- (void)logDeduplicateRecordWithIdentifier:(id)arg1 toNewRecordWithIdentifier:(id)arg2;	// IMP=0x000000000002b9c3
- (void)logDiscoveredDuplicates:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002b902
- (void)logMaintenanceCompleted;	// IMP=0x000000000002b89e
- (void)logErrorMitigatingDuplicates:(id)arg1;	// IMP=0x000000000002b82e
- (void)runningMaintenance:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b6cc
- (void)checkingIn:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b56a
- (void)logNoProxyToAvatarsDaemon;	// IMP=0x000000000002b521
- (void)logErrorGettingAvatarsDaemonClientProxy:(id)arg1;	// IMP=0x000000000002b4b1
- (void)logAvatarsDaemonClientConnectionInvalidated;	// IMP=0x000000000002b44d
- (void)logAvatarsDaemonClientConnectionInterrupted;	// IMP=0x000000000002b404
- (void)logAvatarsDaemonClientChecksIn:(int)arg1;	// IMP=0x000000000002b36e
- (void)logAvatarsDaemonReceivesIncomingConnection;	// IMP=0x000000000002b304
- (void)logUpdatingBackupExclusionStatus:(_Bool)arg1;	// IMP=0x000000000002b275
- (void)logErrorUpdatingBackupInclusionStatus:(id)arg1;	// IMP=0x000000000002b205
- (void)logErrorMigratingBackupInclusionStatus:(id)arg1;	// IMP=0x000000000002b195
- (void)logErrorGettingAccountInfo:(id)arg1;	// IMP=0x000000000002b125
- (void)logAccountInfo:(id)arg1 status:(long long)arg2 deviceToDeviceEncryption:(_Bool)arg3;	// IMP=0x000000000002b04e
- (void)checkingAccountInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000002aeec
- (void)logTooManyAvatars:(unsigned long long)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000002ae8f
- (void)logErrorGettingChangedRecordsContentForIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x000000000002ae07
- (void)logCoalesceableEventOccured:(id)arg1;	// IMP=0x000000000002ad54
- (void)logSetupSchedulingExport;	// IMP=0x000000000002acf0
- (void)logSetupSchedulingImport;	// IMP=0x000000000002ac8c
- (void)logSetupSchedulingMigrationCheck;	// IMP=0x000000000002ac28
- (void)logErrorMergingCopiedAsideContent:(id)arg1;	// IMP=0x000000000002abb8
- (void)logErrorCopyingStorageAside:(id)arg1;	// IMP=0x000000000002ab48
- (void)logResetSyncReason:(unsigned long long)arg1;	// IMP=0x000000000002aab2
- (void)logPersistentChangeNotOfInterest:(id)arg1;	// IMP=0x000000000002a9ff
- (void)logMissingTombstonedIdentifier;	// IMP=0x000000000002a9b6
- (void)logMissingResetSyncReasonKey;	// IMP=0x000000000002a96d
- (void)logStartObservingResetSync;	// IMP=0x000000000002a909
- (void)restoringStorage:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a7a7
- (void)copyingStorageAside:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a645
- (void)processingDidResetSyncNotification:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a4e3
- (void)processingWillResetSyncNotification:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a381
- (void)logWarningNoHOME;	// IMP=0x000000000002a338
- (void)logErrorSandboxInit:(char *)arg1;	// IMP=0x000000000002a2ea
- (void)logGenericSandboxError:(id)arg1 error:(int)arg2;	// IMP=0x000000000002a274
- (void)logErrorSettingUserDirSuffixForSandbox:(int)arg1;	// IMP=0x000000000002a226
- (void)logNotImportingOnLaunchWithRemainingTime:(double)arg1;	// IMP=0x000000000002a0fe
- (void)logPostingChangeNotificationForIdentifiers:(id)arg1;	// IMP=0x0000000000029ffb
- (void)postingAvatarStoreChangeNotification:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029e99
- (void)logErrorRemovingStoreFolder:(id)arg1;	// IMP=0x0000000000029e50
- (void)logErrorTearingDownCoreDataStack:(id)arg1;	// IMP=0x0000000000029e07
- (void)logTearingDownCoreDataStack:(id)arg1;	// IMP=0x0000000000029d54
- (void)logDidResetZoneWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000029c8f
- (void)logWillResetZone;	// IMP=0x0000000000029c2b
- (void)logSchedulingUpdateThumbnails;	// IMP=0x0000000000029bc7
- (void)logSchedulingImport;	// IMP=0x0000000000029b63
- (void)logUpdatingThumbnails;	// IMP=0x0000000000029aff
- (void)logCheckingIfMigrationNeeded;	// IMP=0x0000000000029a9b
- (void)logErrorProcessingChangeTransactionsToUpdateThumbnails:(id)arg1;	// IMP=0x0000000000029a2b
- (void)updatingThumbnailsForRemoteChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000298c9
- (void)logDeletingStickerRecents;	// IMP=0x0000000000029865
- (void)deletingStickerRecentsForRemoteChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029703
- (void)logCouldntFindRecordIdentifierForChangeType:(long long)arg1 managedObjectID:(id)arg2;	// IMP=0x0000000000029642
- (void)logFoundRecordIdentifier:(id)arg1 changeType:(long long)arg2 managedObjectID:(id)arg3;	// IMP=0x0000000000029558
- (void)logErrorSavingChangeToken:(id)arg1 location:(id)arg2;	// IMP=0x00000000000294d0
- (void)logTransactionHasChangesButNoToken;	// IMP=0x0000000000029487
- (void)logTrackerProcessingChanges:(id)arg1 count:(unsigned long long)arg2 from:(id)arg3;	// IMP=0x000000000002939d
- (void)logErrorReadingCurrentHistoryToken:(id)arg1;	// IMP=0x000000000002932d
- (void)logCurrentHistoryTokenFileDoesntExist:(id)arg1;	// IMP=0x000000000002927a
- (void)savingChangeTrackerToken:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029118
- (void)logUnableToReadRemoteRecord:(id)arg1;	// IMP=0x00000000000290a8
- (void)logInspectingChangesForExportAfterToken:(id)arg1;	// IMP=0x0000000000029038
- (void)logErrorPinningContextToCurrentQueryGenerationToken:(id)arg1;	// IMP=0x0000000000028fc8
- (void)logChangesRequireThumbnailUpdate;	// IMP=0x0000000000028f64
- (void)logChangesRequireExport;	// IMP=0x0000000000028f00
- (void)logNotificationDoesntContainChangeHistoryToken;	// IMP=0x0000000000028e9c
- (void)logErrorFetchingChangeHistory:(id)arg1;	// IMP=0x0000000000028e2c
- (void)logDispatchingRemoteChangeWithTransactionCount:(unsigned long long)arg1 handlersCount:(unsigned long long)arg2;	// IMP=0x0000000000028d84
- (void)logReceivedRemoteChange:(id)arg1;	// IMP=0x0000000000028cd1
- (void)logStartObservingRemoteChangeNotificationFrom:(id)arg1;	// IMP=0x0000000000028c1e
- (void)processingRemoteChangeNotification:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028abc
- (void)logUnableToCreatePushConnection:(id)arg1;	// IMP=0x0000000000028a4c
- (void)logPushNotificationReceivedForTopic:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000028974
- (void)logPushConnectionReceivedToken:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000002887c
- (void)logPushConnectionReceivedPublicToken:(id)arg1;	// IMP=0x00000000000287c9
- (void)logErrorSettingUpStore:(id)arg1;	// IMP=0x0000000000028759
- (void)logErrorStartingServer:(id)arg1;	// IMP=0x00000000000286e9
- (void)logErrorAddingPersistentStore:(id)arg1;	// IMP=0x0000000000028679
- (void)logFoundExistingRecordDuringMigration;	// IMP=0x0000000000028615
- (void)logErrorDeletingMigratedContent:(id)arg1;	// IMP=0x00000000000285a5
- (void)logFoundExistingRecordDuringMigration:(id)arg1;	// IMP=0x00000000000284f2
- (void)logErrorUpdatingRecordsForMigration:(id)arg1;	// IMP=0x0000000000028482
- (void)logMigratingSource:(id)arg1;	// IMP=0x00000000000283cf
- (void)migratingPersistedContent:(CDUnknownBlockType)arg1;	// IMP=0x000000000002826d
- (void)logMirroringRequestErrorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x00000000000281f7
- (void)logExportRequestResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000028145
- (void)logImportRequestResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000028093
- (void)logSyncEnabled;	// IMP=0x000000000002802f
- (void)logUserRequestedBackupXPCActivityFinished;	// IMP=0x0000000000027fcb
- (void)performingUserRequestedBackupActivity:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027e69
- (void)logMigrationXPCActivityFinished;	// IMP=0x0000000000027e05
- (void)performingMigrationXPCActivity:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027ca3
- (void)importingRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027b41
- (void)exportingRecords:(CDUnknownBlockType)arg1;	// IMP=0x00000000000279df
- (void)settingUpStore:(CDUnknownBlockType)arg1;	// IMP=0x000000000002787d
- (void)logStartingServer;	// IMP=0x0000000000027819
- (void)logUsageTrackingBigDifferencesClusterCount:(unsigned long long)arg1;	// IMP=0x00000000000277cb
- (void)logUsageTrackingSmallDifferencesClusterCount:(unsigned long long)arg1;	// IMP=0x000000000002777d
- (void)logUsageTrackingRecordCount:(unsigned long long)arg1;	// IMP=0x00000000000276e1
- (void)logSingleModeCantSnapshotForLackOfWindow;	// IMP=0x0000000000027698
- (void)logAvatarPreloadEnd;	// IMP=0x0000000000027622
- (void)logAvatarPreloadBeginForIdentifier:(id)arg1;	// IMP=0x0000000000027539
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000002746f
- (void)logErrorSnapshottingAVTView:(id)arg1;	// IMP=0x00000000000273ff
- (void)logUnthrottlingAVTView;	// IMP=0x0000000000027395
- (void)logThrottlingAVTView;	// IMP=0x000000000002732b
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(id)arg2;	// IMP=0x00000000000272b5
- (void)logUpdatingLiveAvatarWithConfiguration:(id)arg1;	// IMP=0x00000000000271fc
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(id)arg1;	// IMP=0x000000000002718c
- (void)logDonePreLoadingPreset:(id)arg1 task:(id)arg2;	// IMP=0x0000000000027116
- (void)logPreLoadingPreset:(id)arg1 task:(id)arg2;	// IMP=0x0000000000027013
- (void)logLookingUpPreLoadedPreset:(id)arg1 task:(id)arg2;	// IMP=0x0000000000026f8b
- (void)logCancelingPreLoadingTask:(id)arg1;	// IMP=0x0000000000026f1b
- (void)logStartingPreLoadingTask:(id)arg1;	// IMP=0x0000000000026e62
- (void)logRequestingPreLoadingTask:(id)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;	// IMP=0x0000000000026d87
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;	// IMP=0x0000000000026d2a
- (void)logErrorFetchingRecords:(id)arg1;	// IMP=0x0000000000026cba
- (void)logErrorDuplicatingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000026c32
- (void)logErrorDeletingSomeThumbnail:(id)arg1;	// IMP=0x0000000000026bc2
- (void)logErrorDeletingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000026b3a
- (void)logGeneratingImageError:(id)arg1;	// IMP=0x0000000000026aca
- (void)logGeneratingImageForRecord:(id)arg1 scope:(id)arg2 type:(long long)arg3;	// IMP=0x00000000000269e0
- (void)logInMemoryCacheEvictsResource:(id)arg1;	// IMP=0x0000000000026970
- (void)logInMemoryCacheHitForResource:(id)arg1;	// IMP=0x0000000000026900
- (void)logInMemoryCacheStorageForResource:(id)arg1;	// IMP=0x0000000000026890
- (void)logImageStoreDoneSavingImageForPath:(id)arg1;	// IMP=0x00000000000267ae
- (void)logImageStoreBeginSavingImageForPath:(id)arg1;	// IMP=0x0000000000026738
- (void)logImageStoreSavingError:(id)arg1 code:(long long)arg2;	// IMP=0x00000000000266c2
- (void)logImageStoreCacheHitForItemDescription:(id)arg1 sizeCost:(unsigned long long)arg2;	// IMP=0x00000000000265fb
- (void)logImageStoreCacheMiss:(id)arg1;	// IMP=0x0000000000026542
- (void)logCreatingImageStoreForPath:(id)arg1;	// IMP=0x0000000000026489
- (void)logFileSystemError:(id)arg1;	// IMP=0x0000000000026419
- (void)logDidFinishEditingWithError:(id)arg1;	// IMP=0x00000000000263a9
- (void)logDidFinishEditingWithSuccess;	// IMP=0x0000000000026345
- (void)logErrorWhileMigratingBackend:(id)arg1;	// IMP=0x0000000000026292
- (void)logErrorUpdatingVersion:(id)arg1;	// IMP=0x00000000000261df
- (void)logAvatarsdExitingWithReason:(id)arg1;	// IMP=0x000000000002612c
- (void)logDroppingUnsupportedAvatarRecord:(id)arg1;	// IMP=0x0000000000026079
- (void)logBackendVersionMismatch:(id)arg1 actual:(id)arg2;	// IMP=0x0000000000025fa1
- (void)logSkippedFetchingRecordsWithReason:(id)arg1;	// IMP=0x0000000000025eee
- (void)logFetchedRecords:(unsigned long long)arg1 criteria:(long long)arg2;	// IMP=0x0000000000025e46
- (void)duplicatingRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025ce4
- (void)fetchingRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025b82
- (void)deletingRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025a20
- (void)savingRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025886
- (void)logPerformedRecentStickersMigration:(_Bool)arg1;	// IMP=0x00000000000257ec
- (void)logFetchedRecentStickerWithNoStickerConfiguration:(id)arg1;	// IMP=0x000000000002577c
- (void)logFetchedOrphanedRecentSticker:(id)arg1;	// IMP=0x000000000002570c
- (void)logErrorFetchingRecentStickers:(id)arg1;	// IMP=0x000000000002569c
- (void)logErrorSavingRecentSticker:(id)arg1;	// IMP=0x000000000002562c
- (void)logRecordsNotFoundInRecordStore:(id)arg1;	// IMP=0x0000000000025579
- (void)logRecordsNotFoundInPuppetStore:(id)arg1;	// IMP=0x00000000000254c6
- (void)logRecordsNotFoundInAnyStore:(id)arg1;	// IMP=0x0000000000025413
- (void)logReadingError:(id)arg1;	// IMP=0x00000000000253a3
- (void)logSavingError:(id)arg1;	// IMP=0x0000000000025333
- (void)logReadingBackendAtPath:(id)arg1;	// IMP=0x0000000000025280
- (void)logDuplicatingRecordWithIdentifier:(id)arg1;	// IMP=0x00000000000251cd
- (void)logDeletingImagesWithIdentifierPrefix:(id)arg1;	// IMP=0x000000000002511a
- (void)logDeletingRecordWithIdentifier:(id)arg1;	// IMP=0x0000000000025067
- (void)logSavingBackend;	// IMP=0x0000000000025003
- (void)logErrorCreatingBackendContent:(id)arg1;	// IMP=0x0000000000024f93
- (void)logCreatingBackendFolderAtPath:(id)arg1;	// IMP=0x0000000000024ee0
- (void)logCreatingBackendDBAtPath:(id)arg1;	// IMP=0x0000000000024e2d
- (void)logCreatingStore:(id)arg1;	// IMP=0x0000000000024d7a
- (void)logNoAvatarPreset:(id)arg1;	// IMP=0x0000000000024cc7
- (void)logSnapshotReturnedImage:(id)arg1;	// IMP=0x0000000000024ba5
- (void)logRenderingRecord:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000024ac4
- (void)logRenderingConfiguration:(id)arg1;	// IMP=0x00000000000249a2
- (void)logRenderingModelPreset:(id)arg1;	// IMP=0x00000000000248ef
- (void)logRenderingModelColor:(id)arg1;	// IMP=0x000000000002483c
- (void)logParsingMetadataDefinitionsError:(id)arg1;	// IMP=0x00000000000247cc
- (void)logParsingMetadataDefinitions;	// IMP=0x0000000000024768
- (void)logErrorLoadingTemplates:(id)arg1;	// IMP=0x00000000000246f8
- (void)logDebug:(id)arg1;	// IMP=0x0000000000024688
- (id)init;	// IMP=0x00000000000245e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

