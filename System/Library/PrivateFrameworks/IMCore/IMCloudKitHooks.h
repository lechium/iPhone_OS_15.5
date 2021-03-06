//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCloudKitHooks : NSObject
{
}

+ (id)logHandle;	// IMP=0x0000000000156c46
+ (id)sharedInstance;	// IMP=0x0000000000156b4f
+ (void)__setSingleton__im:(id)arg1;	// IMP=0x0000000000156b3b
+ (id)__singleton__im;	// IMP=0x0000000000156b29
- (_Bool)mocAccountsMatch;	// IMP=0x0000000000158cd9
- (void)reportMetricToCK:(id)arg1 withDict:(id)arg2;	// IMP=0x0000000000158c4f
- (void)reportMetricToCK:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x0000000000158b69
- (void)reportMetricToCK:(id)arg1;	// IMP=0x0000000000158b55
- (void)broadcastCloudKitStateAfterClearingErrors;	// IMP=0x0000000000158b11
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;	// IMP=0x0000000000158acd
- (void)broadcastCloudKitState;	// IMP=0x0000000000158a89
- (void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2;	// IMP=0x00000000001589dc
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;	// IMP=0x000000000015894d
- (id)syncStateDictionary;	// IMP=0x0000000000158943
- (void)syncDeletesToCloudKit;	// IMP=0x00000000001588ff
- (void)printCachedRampState;	// IMP=0x00000000001588bb
- (void)fetchLatestRampState;	// IMP=0x0000000000158877
- (void)removePathFromiCloudBackups:(id)arg1;	// IMP=0x0000000000158801
- (void)setiCloudBackupsDisabled:(_Bool)arg1;	// IMP=0x00000000001587ae
- (void)toggleiCloudBackupsIfNeeded;	// IMP=0x000000000015876a
- (void)writeCloudKitSyncCounts:(id)arg1;	// IMP=0x00000000001586f4
- (void)fetchSyncStateStatistics;	// IMP=0x00000000001586b0
- (void)updateAttachmentFileSizes;	// IMP=0x0000000000158645
- (void)purgeAttachments:(long long)arg1;	// IMP=0x00000000001585c8
- (void)metricAttachments:(long long)arg1;	// IMP=0x000000000015854b
- (void)deleteSalt;	// IMP=0x0000000000158507
- (void)printCachedSalt;	// IMP=0x00000000001584c3
- (void)fetchLatestSalt;	// IMP=0x000000000015847f
- (void)clearTombStoneMessagesTable;	// IMP=0x0000000000158475
- (void)loadDeletedMessagesWithLimit:(long long)arg1;	// IMP=0x0000000000158422
- (void)_updateCloudKitState;	// IMP=0x000000000015835e
- (void)_updateCloudKitStateWithDictionary:(id)arg1;	// IMP=0x00000000001582a3
- (id)exitDate;	// IMP=0x0000000000158285
- (_Bool)isInExitState;	// IMP=0x0000000000158265
- (void)_didAttemptToDisableAllDevicesResult:(_Bool)arg1;	// IMP=0x00000000001580d5
- (_Bool)isDisablingDevices;	// IMP=0x000000000015806e
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;	// IMP=0x0000000000157e0c
- (long long)isChangingEnabledState;	// IMP=0x0000000000157d64
- (void)_didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;	// IMP=0x0000000000157b7d
- (id)lastSyncDate;	// IMP=0x0000000000157b1b
- (_Bool)isSyncing;	// IMP=0x0000000000157ab4
- (_Bool)isStartingSync;	// IMP=0x0000000000157a2d
- (void)initiateSync;	// IMP=0x0000000000157994
- (void)setShouldOptimizeAttachmentStorage:(_Bool)arg1;	// IMP=0x000000000015798e
- (_Bool)shouldOptimizeAttachmentStorage;	// IMP=0x0000000000157986
- (_Bool)eligibleForTruthZone;	// IMP=0x000000000015791f
- (_Bool)rampedIntoTruthZone;	// IMP=0x00000000001578f0
- (_Bool)removedFromiCloudBackup;	// IMP=0x0000000000157889
- (void)tryToDisableAllDevices;	// IMP=0x00000000001577f0
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;	// IMP=0x00000000001577ac
- (void)performAdditionalStorageRequiredCheck;	// IMP=0x0000000000157741
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000157636
- (_Bool)isEnabled;	// IMP=0x00000000001575ab
- (_Bool)shouldShowCloudKitUI;	// IMP=0x0000000000157508
- (void)sendRestoreFailuresLogDumps;	// IMP=0x00000000001574c4
- (void)clearDataFromCloudKit;	// IMP=0x0000000000157480
- (void)clearLocalSyncState;	// IMP=0x000000000015743c
- (void)loadDirtyMessagesWithLimit:(long long)arg1;	// IMP=0x00000000001573e9
- (void)initiatePeriodicSync;	// IMP=0x0000000000157377
- (void)downloadAttachmentAssets;	// IMP=0x0000000000157333
- (void)syncMessages;	// IMP=0x00000000001572ef
- (void)deleteExitRecord;	// IMP=0x00000000001572ab
- (void)fetchExitRecord;	// IMP=0x0000000000157267
- (void)writeExitRecord;	// IMP=0x0000000000157223
- (void)deleteMessagesZone;	// IMP=0x00000000001571df
- (void)writeDirtyMessages;	// IMP=0x000000000015719b
- (void)deleteAttachmentZone;	// IMP=0x0000000000157157
- (void)syncAttachments;	// IMP=0x0000000000157113
- (void)writeAttachments;	// IMP=0x00000000001570cf
- (void)createAttachmentZone;	// IMP=0x000000000015708b
- (void)clearChatZoneSyncToken;	// IMP=0x0000000000157047
- (void)markAllChatsAsDirty;	// IMP=0x0000000000157003
- (void)syncChats;	// IMP=0x0000000000156f91
- (void)deleteChatZone;	// IMP=0x0000000000156f4d
- (void)writeDirtyChats;	// IMP=0x0000000000156f09
- (void)createChatZone;	// IMP=0x0000000000156ec5
- (void)setupIMCloudKitHooks;	// IMP=0x0000000000156dc1
- (void)clearAnalyticDefaultsAndLocalSyncState;	// IMP=0x0000000000156d7d
- (void)uploadDailyAnalyticstoCloudKit;	// IMP=0x0000000000156d39
- (id)init;	// IMP=0x0000000000156cbc
- (id)logHandle;	// IMP=0x0000000000156ca2

@end

