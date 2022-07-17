//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/IMDCKAbstractSyncControllerDelegate-Protocol.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate-Protocol.h>
#import <IMDaemonCore/IMSystemMonitorListener-Protocol.h>

@class IMTimer, NSDate, NSString, NSTimer;

@interface IMDCKSyncController <IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate>
{
    _Bool _shouldReloadConversations;	// 8 = 0x8
    NSDate *_syncStartDate;	// 16 = 0x10
    NSTimer *_longRunningSyncTimer;	// 24 = 0x18
    IMTimer *_nightlySyncTimer;	// 32 = 0x20
    long long _initialSyncAttempts;	// 40 = 0x28
    NSDate *_lastLogDumpDate;	// 48 = 0x30
    NSDate *_lastRestoreFailureLogDumpDate;	// 56 = 0x38
    NSTimer *_reloadTimer;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000000092bec
- (void).cxx_destruct;	// IMP=0x000000000009fabc
@property(retain) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property _Bool shouldReloadConversations; // @synthesize shouldReloadConversations=_shouldReloadConversations;
@property(retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate; // @synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate;
@property(retain, nonatomic) NSDate *lastLogDumpDate; // @synthesize lastLogDumpDate=_lastLogDumpDate;
@property(nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property(retain, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property(retain, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property(retain, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;
- (_Bool)logCloudKitAnalytics;	// IMP=0x000000000009f693
- (void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;	// IMP=0x000000000009f609
- (_Bool)_serverDeniesDailySyncStateAnalytics;	// IMP=0x000000000009f5ef
- (_Bool)_serverDeniesPeriodicSyncAnalytics;	// IMP=0x000000000009f5d5
- (id)_periodicSyncStateDictionary;	// IMP=0x000000000009f2b0
- (_Bool)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2;	// IMP=0x000000000009f289
- (id)_dailySyncStateDictionary;	// IMP=0x000000000009f09d
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1;	// IMP=0x000000000009ef92
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2;	// IMP=0x000000000009eded
- (void)clearAnalyticDefaultsAndLocalSyncState;	// IMP=0x000000000009ed64
- (void)performOneTimeAccountUpgradeCheckIfNeeded;	// IMP=0x000000000009ec3f
- (_Bool)enforceAccountsMatchForMocAndShowDialogIfNeeded;	// IMP=0x000000000009e9dd
- (void)handleAKUserInfoChangedNotification:(id)arg1;	// IMP=0x000000000009e6a6
- (void)updateSecurityLevelDowngradedIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e318
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000009e182
- (id)syncStateDebuggingInfo:(id)arg1;	// IMP=0x000000000009dd93
- (void)_noteMeticsForSyncEndedWithSuccces:(_Bool)arg1;	// IMP=0x000000000009dd1d
- (void)syncChatsWithMessageContext:(id)arg1;	// IMP=0x000000000009dc5d
- (void)_writeDownSyncDate;	// IMP=0x000000000009daba
- (long long)_manualSyncAttemptCount;	// IMP=0x000000000009da0b
- (long long)_periodicSyncAttemptCount;	// IMP=0x000000000009d95c
- (void)_resetSyncStateAndAttemptCounts;	// IMP=0x000000000009d8e4
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(_Bool)arg2;	// IMP=0x000000000009d5c5
- (void)_noteSyncStarted:(_Bool)arg1;	// IMP=0x000000000009d466
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;	// IMP=0x000000000009d388
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1;	// IMP=0x000000000009d227
- (void)_ifCloudKitAbleToSyncWithActivity:(id)arg1 callBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009cb97
- (void)_callSyncWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;	// IMP=0x000000000009c8ce
- (void)_syncChatsWithActivity:(id)arg1;	// IMP=0x000000000009c3f6
- (id)_sharedDatabaseManager;	// IMP=0x000000000009c3dd
- (void)syncDeletesToCloudKitWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bf97
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2 syncChatsCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a820
- (void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a64e
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2;	// IMP=0x0000000000099fb7
- (id)_recordManager;	// IMP=0x0000000000099f9e
- (void)_reloadChatRegistryOnMainThread;	// IMP=0x0000000000099ed2
- (void)_nukeCKData;	// IMP=0x0000000000099de2
- (_Bool)_errorIndicatesDeviceNotGoodForSync:(id)arg1;	// IMP=0x0000000000099d6b
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1 withActivity:(id)arg2;	// IMP=0x0000000000099050
- (id)_keychainError;	// IMP=0x000000000009903c
- (id)_keychainErrorWithCause:(id)arg1;	// IMP=0x0000000000098f47
- (id)_retryError;	// IMP=0x0000000000098f1f
- (_Bool)_handleSyncFailureType:(long long)arg1 step:(long long)arg2 activity:(id)arg3 attemptCount:(unsigned long long)arg4 startTime:(id)arg5 error:(id)arg6 retry:(CDUnknownBlockType)arg7;	// IMP=0x00000000000985f8
- (void)collectLogsIfNeeded;	// IMP=0x00000000000981d6
- (void)sendRestoreFailuresLogDumpsIfNeeded;	// IMP=0x0000000000097f9c
- (void)sendRestoreFailuresLogDumps;	// IMP=0x0000000000097a1c
- (void)_deleteRestoreFailuresDirectory;	// IMP=0x00000000000978da
- (_Bool)_withinAnHourOfLogDumpHour;	// IMP=0x000000000009785e
- (unsigned long long)_currentHour;	// IMP=0x00000000000977ac
- (_Bool)_hasDumpedRestoreFailureLogsInPastHour;	// IMP=0x00000000000976f2
- (_Bool)_hasDumpedLogsInPastHour;	// IMP=0x0000000000097638
- (void)recordMetricIsCloudKitEnabled;	// IMP=0x0000000000097597
- (void)systemDidUnlock;	// IMP=0x00000000000974fd
- (void)_refreshUIWhileSyncing;	// IMP=0x0000000000097332
- (void)refreshUIIfApplicableWithBatchCount:(unsigned long long)arg1;	// IMP=0x0000000000097075
- (double)reloadTimeInterval;	// IMP=0x0000000000097067
- (_Bool)_serverAllowsUIRefreshTimerWhileSyncing;	// IMP=0x0000000000096faf
- (_Bool)_serverAllowsUIRefreshWhileSyncing;	// IMP=0x0000000000096ef7
- (void)syncController:(id)arg1 syncBatchCompleted:(unsigned long long)arg2;	// IMP=0x0000000000096ee2
- (void)clearLocalCloudKitSyncState;	// IMP=0x0000000000096b8d
- (void)clearCKRelatedDefaults;	// IMP=0x0000000000096a8c
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;	// IMP=0x0000000000096405
- (void)beginComingBackOnlineSyncWithActivity:(id)arg1;	// IMP=0x000000000009622c
- (void)_clearTombstonesWithActivity:(id)arg1;	// IMP=0x00000000000961b1
- (_Bool)_accountHasMultipleDevices;	// IMP=0x0000000000096085
- (_Bool)_serverDoesNotSingleDeviceLimitation;	// IMP=0x0000000000095fd1
- (_Bool)_chatSyncedRecently;	// IMP=0x0000000000095ea4
- (double)_minimumChatComingOnlineSyncInterval;	// IMP=0x0000000000095db7
- (_Bool)_serverDoesNotAllowComingBackOnlineChatSync;	// IMP=0x0000000000095d36
- (void)beginPeriodicSyncWithActivity:(id)arg1;	// IMP=0x0000000000095adc
- (void)beginPeriodicSyncWithChecks:(unsigned long long)arg1 priority:(const char *)arg2 reason:(id)arg3;	// IMP=0x000000000009581d
- (_Bool)shouldMarkAllIncompatibleMessagesForDeletion;	// IMP=0x00000000000957bd
- (void)beginChatSyncPeriodic:(_Bool)arg1 activity:(id)arg2;	// IMP=0x000000000009540a
- (void)beginInitialSyncWithActivity:(id)arg1;	// IMP=0x0000000000094b6c
- (void)_didPassAccountAndIdentityUpdateNeeds;	// IMP=0x0000000000094ac1
- (void)_needsSyncOnAccountUpdate;	// IMP=0x0000000000094a67
- (void)_needsSyncOnIdentityUpdate;	// IMP=0x0000000000094a0d
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;	// IMP=0x0000000000094880
- (void)dealloc;	// IMP=0x00000000000946aa
- (id)init;	// IMP=0x0000000000093ef2
- (void)kickOffEagerSyncIfApplicable;	// IMP=0x0000000000093c1f
- (void)_nightlySyncTimerFired;	// IMP=0x0000000000093a95
- (void)_kickOffNightlyPeriodicSyncIfApplicable;	// IMP=0x0000000000093975
- (_Bool)_syncNotCompletedRecently;	// IMP=0x000000000009383c
- (double)_IMAHDAgentFallbackIntervalInSeconds;	// IMP=0x000000000009373f
- (void)_dispatchNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000936ce
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(_Bool *)arg3;	// IMP=0x000000000009358b
- (void)registerForAccountNotifications;	// IMP=0x00000000000934cb
- (void)_accountDidChange:(id)arg1;	// IMP=0x0000000000093250
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;	// IMP=0x00000000000931cd
- (unsigned long long)_maxTimeToDeferInSeconds;	// IMP=0x000000000009309b
- (long long)syncControllerRecordType;	// IMP=0x0000000000093093
- (id)rampManager;	// IMP=0x000000000009307a
- (id)initialAttachmentSyncController;	// IMP=0x0000000000092fd0
- (id)updateSyncController;	// IMP=0x0000000000092ef7
- (id)attachmentSyncController;	// IMP=0x0000000000092e1e
- (id)exitManager;	// IMP=0x0000000000092e05
- (id)chatSyncController;	// IMP=0x0000000000092dec
- (id)initialMessageSyncController;	// IMP=0x0000000000092d40
- (id)messageSyncController;	// IMP=0x0000000000092c41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
