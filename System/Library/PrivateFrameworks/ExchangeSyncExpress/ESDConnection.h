//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ESDConnection : NSObject
{
    NSObject<OS_xpc_object> *_connExchange;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_muckingWithConn;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;	// 24 = 0x18
    NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 32 = 0x20
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 40 = 0x28
    CDUnknownBlockType _statusReportBlock;	// 48 = 0x30
    NSMutableDictionary *_inFlightSearchQueries;	// 56 = 0x38
    NSMutableDictionary *_inFlightFolderChanges;	// 64 = 0x40
    NSMutableDictionary *_inFlightAttachmentDownloads;	// 72 = 0x48
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;	// 80 = 0x50
    NSMutableDictionary *_inFlightCalendarDirectorySearches;	// 88 = 0x58
    NSMutableDictionary *_inFlightShareRequests;	// 96 = 0x60
    NSMutableDictionary *_inFlightOofSettingsRequests;	// 104 = 0x68
    _Bool _registered;	// 112 = 0x70
}

+ (unsigned long long)_nextStopMonitoringStatusToken;	// IMP=0x0000000000007491
+ (id)sharedConnection;	// IMP=0x0000000000006590
- (void).cxx_destruct;	// IMP=0x000000000000f54b
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
- (void)_dispatchMessage:(id)arg1;	// IMP=0x000000000000f189
- (void)_registerForAppResumedNotification;	// IMP=0x000000000000f125
- (void)resetTimersAndWarnings;	// IMP=0x000000000000f055
- (void)_resetThrottleTimersForAccountId:(id)arg1;	// IMP=0x000000000000ee2e
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;	// IMP=0x000000000000ebbe
- (void)dealloc;	// IMP=0x000000000000eb3f
- (id)_init;	// IMP=0x000000000000e9e3
- (id)init;	// IMP=0x000000000000e972
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e3aa
- (void)_calendarDirectorySearchFinished:(id)arg1;	// IMP=0x000000000000e141
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;	// IMP=0x000000000000dcd1
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;	// IMP=0x000000000000d9a4
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000000d15a
- (void)_calendarAvailabilityRequestFinished:(id)arg1;	// IMP=0x000000000000cf41
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;	// IMP=0x000000000000cbe6
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;	// IMP=0x000000000000c931
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000000c017
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bcf0
- (_Bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;	// IMP=0x000000000000bcd8
- (_Bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;	// IMP=0x000000000000bcc3
- (_Bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(_Bool)arg3;	// IMP=0x000000000000b703
- (id)activeSyncDeviceIdentifier;	// IMP=0x000000000000b3ba
- (void)fillOutCurrentEASTimeZoneInfo;	// IMP=0x000000000000b24c
- (_Bool)registerForInterrogationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1da
- (void)reallyRegisterForInterrogation;	// IMP=0x000000000000b071
- (id)statusReports;	// IMP=0x000000000000ace1
- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;	// IMP=0x000000000000a929
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a4f8
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009fe7
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000009de0
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;	// IMP=0x0000000000009b15
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009583
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000093b7
- (void)handleURL:(id)arg1;	// IMP=0x000000000000927f
- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;	// IMP=0x0000000000009098
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;	// IMP=0x0000000000008e67
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;	// IMP=0x0000000000008ca6
- (_Bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;	// IMP=0x0000000000008a3b
- (void)cancelServerContactsSearch:(id)arg1;	// IMP=0x0000000000008758
- (_Bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;	// IMP=0x00000000000080dc
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;	// IMP=0x00000000000080c7
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;	// IMP=0x00000000000080b2
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;	// IMP=0x000000000000809d
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(_Bool)arg3;	// IMP=0x000000000000808b
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;	// IMP=0x0000000000007e30
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(_Bool)arg4;	// IMP=0x0000000000007e1e
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(_Bool)arg4;	// IMP=0x0000000000007b6d
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;	// IMP=0x0000000000007b55
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;	// IMP=0x00000000000078a0
- (void)requestDaemonShutdown;	// IMP=0x000000000000788c
- (unsigned long long)requestDaemonStopMonitoringAgentsSync;	// IMP=0x000000000000783d
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1;	// IMP=0x000000000000781d
- (unsigned long long)requestDaemonStopMonitoringAgents;	// IMP=0x00000000000077d1
- (void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1;	// IMP=0x00000000000077b4
- (void)_requestDaemonChangeAgentMonitoringStatus:(_Bool)arg1 withToken:(unsigned long long)arg2 waitForReply:(_Bool)arg3;	// IMP=0x00000000000074c8
- (id)currentPolicyKeyForAccountID:(id)arg1;	// IMP=0x00000000000070e3
- (_Bool)requestPolicyUpdateForAccountID:(id)arg1;	// IMP=0x0000000000006fcd
- (_Bool)_validateXPCReply:(id)arg1;	// IMP=0x0000000000006e3f
- (_Bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;	// IMP=0x0000000000006c7a
- (_Bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;	// IMP=0x0000000000006ab5
- (_Bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;	// IMP=0x0000000000006867
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(_Bool)arg3;	// IMP=0x000000000000661e
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;	// IMP=0x0000000000006609
- (void)_oofSettingsRequestsFinished:(id)arg1;	// IMP=0x0000000000005ddc
- (void)_shareResponseFinished:(id)arg1;	// IMP=0x0000000000005bc0
- (void)_downloadFinished:(id)arg1;	// IMP=0x0000000000005871
- (void)_downloadProgress:(id)arg1;	// IMP=0x0000000000005500
- (void)_getStatusReportsFromClient:(id)arg1;	// IMP=0x00000000000051b5
- (void)_folderChangeFinished:(id)arg1;	// IMP=0x0000000000004ce2
- (void)_serverContactsSearchQueryFinished:(id)arg1;	// IMP=0x0000000000004530
- (void)_logDataAccessStatus:(id)arg1;	// IMP=0x00000000000044b6
- (void)_foldersUpdated:(id)arg1;	// IMP=0x000000000000420e
- (void)_policyKeyChanged:(id)arg1;	// IMP=0x0000000000003f55
- (id)decodedErrorFromData:(id)arg1;	// IMP=0x0000000000003d1f
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;	// IMP=0x0000000000003c63
- (void)_initializeXPCConnectionForExchange:(id)arg1;	// IMP=0x0000000000003b27
- (void)_initializeXPCConnection:(id)arg1;	// IMP=0x00000000000039cb
- (void)_initializeConnectionWithXPCEndpoint:(id)arg1;	// IMP=0x0000000000003845
- (void)_initializeExchangeConnection;	// IMP=0x00000000000036c0
- (id)_connectionForExchange;	// IMP=0x000000000000368f
- (void)_exchangeServerDiedWithReason:(id)arg1;	// IMP=0x000000000000353c
- (void)_serverDiedWithReason:(id)arg1;	// IMP=0x00000000000033e9
- (void)_tearDownInFlightObjects;	// IMP=0x00000000000020b6

@end
