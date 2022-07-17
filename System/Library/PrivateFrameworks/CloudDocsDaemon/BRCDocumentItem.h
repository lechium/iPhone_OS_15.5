//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCTopLevelShareable-Protocol.h>

@class BRCAliasItem, BRCDesiredVersion, BRCDirectoryItem, BRCLocalVersion, NSData, NSDictionary, NSError, NSMutableSet, NSSet, NSString;

@interface BRCDocumentItem <BRCTopLevelShareable>
{
    BRCLocalVersion *_currentVersion;	// 152 = 0x98
    BRCDesiredVersion *_desiredVersion;	// 160 = 0xa0
    NSMutableSet *_liveConflictLoserEtags;	// 168 = 0xa8
    NSMutableSet *_resolvedConflictLoserEtags;	// 176 = 0xb0
    _Bool _shouldAutomaticallyDownloadThumbnail;	// 184 = 0xb8
    NSData *_liveThumbnailSignature;	// 192 = 0xc0
}

+ (void)autoResumeSyncPausedDocumentsOnTimeoutWithSession:(id)arg1;	// IMP=0x00000000000db5fe
+ (id)nextPausedDocumentBatchEnumeratorWithBundleID:(id)arg1 fromRowID:(unsigned long long)arg2 batchSize:(unsigned int)arg3 session:(id)arg4 db:(id)arg5;	// IMP=0x00000000000db4c6
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ce0c1
+ (id)anyReverseAliasInAppLibrary:(id)arg1 toRelativePath:(id)arg2;	// IMP=0x00000000000ccd89
+ (id)reverseAliasEnumeratorWithRelativePath:(id)arg1;	// IMP=0x00000000000ccb3a
+ (id)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2;	// IMP=0x00000000000cc9ec
+ (id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg1 inAppLibrary:(id)arg2;	// IMP=0x00000000000cc80e
+ (_Bool)shouldDocumentBeGreedyWithName:(id)arg1;	// IMP=0x00000000000cbddc
+ (_Bool)isDocumentAutomaticallyEvictableWithName:(id)arg1;	// IMP=0x00000000000cb812
+ (_Bool)isDocumentAutomaticallyEvictableWithExtension:(id)arg1;	// IMP=0x00000000000cb4bb
- (void).cxx_destruct;	// IMP=0x00000000000db96b
@property(retain, nonatomic) NSData *liveThumbnailSignature; // @synthesize liveThumbnailSignature=_liveThumbnailSignature;
@property(readonly, nonatomic) _Bool shouldAutomaticallyDownloadThumbnail; // @synthesize shouldAutomaticallyDownloadThumbnail=_shouldAutomaticallyDownloadThumbnail;
@property(readonly, nonatomic) NSSet *resolvedConflictLoserEtags; // @synthesize resolvedConflictLoserEtags=_resolvedConflictLoserEtags;
@property(retain, nonatomic) NSSet *liveConflictLoserEtags; // @synthesize liveConflictLoserEtags=_liveConflictLoserEtags;
@property(readonly, nonatomic) BRCDesiredVersion *desiredVersion; // @synthesize desiredVersion=_desiredVersion;
@property(readonly, nonatomic) BRCLocalVersion *currentVersion; // @synthesize currentVersion=_currentVersion;
- (_Bool)resumeSyncForBundleID:(id)arg1 dropLocalChanges:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000daee6
- (_Bool)pauseFromSyncWithTimeout:(double)arg1 forBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dab10
- (id)syncPausedByBundleID;	// IMP=0x00000000000daace
- (void)resumeSyncComplete;	// IMP=0x00000000000da9dc
- (_Bool)isResumingSync;	// IMP=0x00000000000da974
- (_Bool)isPausedFromSync;	// IMP=0x00000000000da941
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000da437
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000d9960
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2;	// IMP=0x00000000000d9348
- (_Bool)_needsSyncBubbleRecomputeForError:(id)arg1 origError:(id)arg2;	// IMP=0x00000000000d92c4
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000000d7883
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x00000000000d6eb9
- (void)_updateRecursivePropertiesInDB:(id)arg1 dbRowID:(unsigned long long)arg2 diffs:(unsigned long long)arg3;	// IMP=0x00000000000d6344
- (_Bool)_nukePackageItemsFromDB:(id)arg1;	// IMP=0x00000000000d6108
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(_Bool)arg2;	// IMP=0x00000000000d5fdc
- (void)_updateUploadJobIfNeededWithDiffs:(unsigned long long)arg1;	// IMP=0x00000000000d5c4c
- (void)_updateLiveConflictLoserFromFSAtPath:(id)arg1;	// IMP=0x00000000000d56d3
- (void)addResolvedConflictLoserEtag:(id)arg1;	// IMP=0x00000000000d5631
- (void)removeLiveConflictLoserEtag:(id)arg1;	// IMP=0x00000000000d55ce
@property(readonly, nonatomic) NSDictionary *conflictLoserState;
- (_Bool)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(_Bool)arg1;	// IMP=0x00000000000d53cd
- (void)markCrossZoneMovedForServerAssetCopyWithParentItem:(id)arg1 path:(id)arg2;	// IMP=0x00000000000d4cd0
- (_Bool)supportsServerSideAssetCopies;	// IMP=0x00000000000d4bdd
- (void)_insertTombstoneForPreviousZoneGlobalID;	// IMP=0x00000000000d497f
- (void)_markAsDeadTombstoneWithPreviousGlobalID;	// IMP=0x00000000000d4529
- (void)markOverQuotaWithError:(id)arg1;	// IMP=0x00000000000d4495
- (void)markNeedsUploadOrSyncingUp;	// IMP=0x00000000000d3ef5
- (void)markUploadedWithRecord:(id)arg1;	// IMP=0x00000000000d3605
- (void)markForceNeedsSyncUp;	// IMP=0x00000000000d34b8
- (void)markForceUpload;	// IMP=0x00000000000d3302
- (void)handleUnknownItemError;	// IMP=0x00000000000d32b7
- (_Bool)markLatestSyncRequestAcknowledgedInZone:(id)arg1;	// IMP=0x00000000000d313e
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;	// IMP=0x00000000000d2fd7
- (void)markNeedsReading;	// IMP=0x00000000000d2dac
- (void)markDead;	// IMP=0x00000000000d2c24
- (void)markLiveFromStageWithPath:(id)arg1;	// IMP=0x00000000000d286f
- (void)clearFromStage;	// IMP=0x00000000000d27f1
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;	// IMP=0x00000000000d261b
- (void)forceiWorkSharingInfoResend;	// IMP=0x00000000000d25fa
- (void)forceVersionConflictByClearkingCKInfo;	// IMP=0x00000000000d25db
- (void)forceiWorkConflictEtag:(id)arg1;	// IMP=0x00000000000d2509
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;	// IMP=0x00000000000d1d82
- (_Bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x00000000000d1bb9
- (_Bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x00000000000d1a42
- (id)_filenameOverrideForPath:(id)arg1;	// IMP=0x00000000000d1943
- (void)learnItemID:(id)arg1 serverItem:(id)arg2 path:(id)arg3 markLost:(_Bool)arg4;	// IMP=0x00000000000d15e0
- (void)markItemForgottenByServer;	// IMP=0x00000000000d1595
- (void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(_Bool)arg2;	// IMP=0x00000000000d1099
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;	// IMP=0x00000000000d0da3
- (void)clearDesiredVersion;	// IMP=0x00000000000d0cd9
- (int)updateDesiredVersionWithServerItem:(id)arg1 diffs:(unsigned long long)arg2 options:(unsigned int)arg3 needsSave:(_Bool *)arg4;	// IMP=0x00000000000cf005
- (int)updateDesiredVersionWithServerItem:(id)arg1 options:(unsigned int)arg2 needsSave:(_Bool *)arg3;	// IMP=0x00000000000cef94
- (void)stageFaultForCreation:(_Bool)arg1 serverItem:(id)arg2;	// IMP=0x00000000000cee81
- (void)stageFaultForCreation:(_Bool)arg1 name:(id)arg2 size:(id)arg3 isPackage:(_Bool)arg4;	// IMP=0x00000000000cec71
- (id)syncContextUsedForTransfers;	// IMP=0x00000000000cebfe
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(_Bool)arg2;	// IMP=0x00000000000ceb47
- (void)learnThumbnailSignatureFromLiveVersion:(id)arg1;	// IMP=0x00000000000ceb0b
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;	// IMP=0x00000000000cea46
- (unsigned long long)diffAgainstLocalItem:(id)arg1;	// IMP=0x00000000000ce6df
- (unsigned long long)diffAgainstServerItem:(id)arg1;	// IMP=0x00000000000ce406
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ce2f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ce0c9
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000cdd1d
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cdc24
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x00000000000cd9e4
- (id)_initWithLocalItem:(id)arg1;	// IMP=0x00000000000cd8a1
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x00000000000cd6f4
- (id)descriptionWithContext:(id)arg1;	// IMP=0x00000000000cd14d
- (id)setOfAppLibraryIDsWithReverseAliases;	// IMP=0x00000000000ccec9
- (id)anyReverseAliasInAppLibrary:(id)arg1;	// IMP=0x00000000000cccfc
- (id)reverseAliasEnumerator;	// IMP=0x00000000000ccc89
- (_Bool)_isInterestingUpdateForNotifs;	// IMP=0x00000000000cc684
@property(readonly, nonatomic) unsigned short downloadStatus;
@property(readonly, nonatomic) unsigned int queryItemStatus;
@property(readonly, nonatomic) _Bool isDownloadRequestedForThumbnail;
@property(readonly, nonatomic) _Bool isDownloadRequested;
@property(readonly, nonatomic) _Bool shouldTransferThumbnail;
@property(readonly, nonatomic) _Bool shouldHaveThumbnail;
@property(readonly, nonatomic) _Bool shouldBeGreedy;
- (_Bool)hasShareIDAndIsOwnedByMe;	// IMP=0x00000000000cbda5
@property(readonly, nonatomic) _Bool isVisibleIniCloudDrive;
@property(readonly, nonatomic) _Bool isAutomaticallyEvictable;
@property(readonly, nonatomic) _Bool isEvictable;
- (_Bool)isDocumentBeingCopiedToNewZone;	// IMP=0x00000000000cb2e9
@property(readonly, nonatomic) _Bool hasLocalContent;
- (id)asShareableItem;	// IMP=0x00000000000cb27f
- (_Bool)isShareableItem;	// IMP=0x00000000000cb277
@property(readonly, nonatomic) BRCDocumentItem *asDocument;
- (_Bool)isFault;	// IMP=0x00000000000cb236
- (_Bool)isDocument;	// IMP=0x00000000000cb1b0
- (_Bool)isPackage;	// IMP=0x00000000000cb115
@property(readonly, nonatomic) NSError *uploadError;
- (id)aliasItemID;	// IMP=0x00000000000cafa5
- (id)baseContentsRecord;	// IMP=0x00000000000f5c2f
- (id)contentsRecordID;	// IMP=0x00000000000f5bb7

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;

@end
