//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)
+ (id)defaultDeferredRenderFileFormatTypeIdentifier;	// IMP=0x00000000004a614d
- (id)pathToiPhotoLibraryMediaDir;	// IMP=0x00000000004a41bc
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;	// IMP=0x00000000004a3cf4
- (_Bool)removePartialVideoDirectory;	// IMP=0x00000000004a3b81
- (id)URLForPartialVideoDirectoryWithAssetUUID:(id)arg1;	// IMP=0x00000000004a3a57
- (id)URLForPartialVideoWithResourceFingerprint:(id)arg1 assetUUID:(id)arg2 timeRange:(CDStruct_3c1748cc)arg3;	// IMP=0x00000000004a38bc
- (id)cloudSharingArchiveDirectory;	// IMP=0x00000000004a389e
- (id)directoryPathForInFlightComments:(_Bool)arg1;	// IMP=0x00000000004a369c
- (id)cloudServiceEnableLogFileURL;	// IMP=0x00000000004a3602
- (_Bool)removeCPLDataDirectory;	// IMP=0x00000000004a2fe7
- (id)cplDownloadFinishedMarkerFilePath;	// IMP=0x00000000004a2f83
- (id)cplEnableMarkerFilePath;	// IMP=0x00000000004a2f1f
- (id)wipeCPLOnOpenPath;	// IMP=0x00000000004a2ebb
- (id)forceSoftResetSyncPath;	// IMP=0x00000000004a2e57
- (id)disableICloudPhotosFilePath;	// IMP=0x00000000004a2df3
- (id)pauseICloudPhotosFilePath;	// IMP=0x00000000004a2d97
- (id)enableICloudPhotosFilePath;	// IMP=0x00000000004a2d3b
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000004a2d19
- (id)deletedMemoryUUIDsFilePath;	// IMP=0x00000000004a2cbd
- (id)searchMetadataStoreFilePath;	// IMP=0x00000000004a2c66
- (id)zeroKeywordStoreFilePath;	// IMP=0x00000000004a2c0f
- (id)searchIndexManagerDatabaseFilePath;	// IMP=0x00000000004a2bb8
- (id)searchIndexManagerDatabaseDirectory;	// IMP=0x00000000004a2ba1
- (id)photoStreamsDataDirectory;	// IMP=0x00000000004a2b47
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;	// IMP=0x00000000004a2972
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;	// IMP=0x00000000004a27f9
- (_Bool)isSystemPhotoLibraryPathManager;	// IMP=0x00000000004a2653
- (id)recordRebuildReason;	// IMP=0x00000000004a5c09
- (long long)lastRebuildReason;	// IMP=0x00000000004a5a04
- (void)setSqliteErrorForReason:(long long)arg1 allowsExit:(_Bool)arg2;	// IMP=0x00000000004a53d0
- (void)_abortWithRebuildReasonPLRebuildReasonBackgroundMigration;	// IMP=0x00000000004a534a
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;	// IMP=0x00000000004a52c4
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;	// IMP=0x00000000004a523e
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;	// IMP=0x00000000004a51b8
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;	// IMP=0x00000000004a5132
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;	// IMP=0x00000000004a50ac
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;	// IMP=0x00000000004a5026
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;	// IMP=0x00000000004a4fa0
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;	// IMP=0x00000000004a4f1a
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;	// IMP=0x00000000004a4e94
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;	// IMP=0x00000000004a4e0e
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;	// IMP=0x00000000004a4d88
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;	// IMP=0x00000000004a4d02
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;	// IMP=0x00000000004a4c7c
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;	// IMP=0x00000000004a4bf6
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;	// IMP=0x00000000004a4b70
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;	// IMP=0x00000000004a4aea
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;	// IMP=0x00000000004a4a64
- (void)removeSqliteErrorIndicatorFile;	// IMP=0x00000000004a4849
- (_Bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;	// IMP=0x00000000004a4474
- (id)_rebuildDateFormatter;	// IMP=0x00000000004a43f2
- (_Bool)sqliteErrorIndicatorFileExists;	// IMP=0x00000000004a437d
@end

