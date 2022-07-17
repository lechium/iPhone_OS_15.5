//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NPSDomainAccessor, NPSManager, NSCache, NSMutableArray, NSMutableDictionary, NSSCompanionSyncManager, NSString;

@interface NSSCompanionServer
{
    NPSDomainAccessor *_nssDomainAccessor;	// 8 = 0x8
    NPSManager *_npsManager;	// 16 = 0x10
    NSMutableArray *_coalescedUsageRequests;	// 24 = 0x18
    NSMutableDictionary *_usageRequests;	// 32 = 0x20
    NSMutableDictionary *_purgeUsageBundleRequests;	// 40 = 0x28
    NSMutableDictionary *_diagnosticLogFileRequests;	// 48 = 0x30
    NSMutableDictionary *_diagnosticLogsInfoRequests;	// 56 = 0x38
    NSMutableDictionary *_cancelLogTransferRequests;	// 64 = 0x40
    NSMutableDictionary *_logDeleteRequests;	// 72 = 0x48
    NSMutableDictionary *_airplaneModeSettingsRequests;	// 80 = 0x50
    NSMutableDictionary *_aboutInfoRequests;	// 88 = 0x58
    NSMutableDictionary *_obliterationRequests;	// 96 = 0x60
    NSMutableDictionary *_accountsInfoRequests;	// 104 = 0x68
    NSMutableDictionary *_profilesInfoRequests;	// 112 = 0x70
    NSMutableDictionary *_profileDataRequests;	// 120 = 0x78
    NSMutableDictionary *_installProfileRequests;	// 128 = 0x80
    NSMutableDictionary *_removeProfileRequests;	// 136 = 0x88
    NSMutableDictionary *_legalDocumentsRequests;	// 144 = 0x90
    NSMutableDictionary *_localesInfoRequests;	// 152 = 0x98
    NSMutableDictionary *_usageReplyTimers;	// 160 = 0xa0
    NSMutableDictionary *_purgeUsageBundleReplyTimers;	// 168 = 0xa8
    NSMutableDictionary *_diagnosticLogFileReplyTimers;	// 176 = 0xb0
    NSMutableDictionary *_diagnosticLogsInfoReplyTimers;	// 184 = 0xb8
    NSMutableDictionary *_cancelLogTransferReplyTimers;	// 192 = 0xc0
    NSMutableDictionary *_airplaneModeSettingsReplyTimers;	// 200 = 0xc8
    MISSING_TYPE *_logDeleteReplyTimers;	// 208 = 0xd0
    NSMutableDictionary *_aboutInfoReplyTimers;	// 216 = 0xd8
    NSMutableDictionary *_obliterationDeliveryTimers;	// 224 = 0xe0
    NSMutableDictionary *_accountsInfoReplyTimers;	// 232 = 0xe8
    NSMutableDictionary *_profilesInfoReplyTimers;	// 240 = 0xf0
    NSMutableDictionary *_profileDataReplyTimers;	// 248 = 0xf8
    NSMutableDictionary *_installProfileReplyTimers;	// 256 = 0x100
    NSMutableDictionary *_removeProfileReplyTimers;	// 264 = 0x108
    NSMutableDictionary *_legalDocumentsReplyTimers;	// 272 = 0x110
    NSMutableDictionary *_localesInfoReplyTimers;	// 280 = 0x118
    NSSCompanionSyncManager *_syncManager;	// 288 = 0x120
    NSCache *_fileTransferProgress;	// 296 = 0x128
    NSString *_cancelledLogInTransit;	// 304 = 0x130
}

+ (void)associateProtobufHandlers:(id)arg1;	// IMP=0x00200000000064d9
- (void).cxx_destruct;	// IMP=0x0020000000012061
@property(retain, nonatomic) NSString *cancelledLogInTransit; // @synthesize cancelledLogInTransit=_cancelledLogInTransit;
@property(retain, nonatomic) NSCache *fileTransferProgress; // @synthesize fileTransferProgress=_fileTransferProgress;
@property(retain, nonatomic) NSSCompanionSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NSMutableDictionary *localesInfoReplyTimers; // @synthesize localesInfoReplyTimers=_localesInfoReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *legalDocumentsReplyTimers; // @synthesize legalDocumentsReplyTimers=_legalDocumentsReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *removeProfileReplyTimers; // @synthesize removeProfileReplyTimers=_removeProfileReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *installProfileReplyTimers; // @synthesize installProfileReplyTimers=_installProfileReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *profileDataReplyTimers; // @synthesize profileDataReplyTimers=_profileDataReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *profilesInfoReplyTimers; // @synthesize profilesInfoReplyTimers=_profilesInfoReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *accountsInfoReplyTimers; // @synthesize accountsInfoReplyTimers=_accountsInfoReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *obliterationDeliveryTimers; // @synthesize obliterationDeliveryTimers=_obliterationDeliveryTimers;
@property(retain, nonatomic) NSMutableDictionary *aboutInfoReplyTimers; // @synthesize aboutInfoReplyTimers=_aboutInfoReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *logDeleteReplyTimers; // @synthesize logDeleteReplyTimers=_logDeleteReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *airplaneModeSettingsReplyTimers; // @synthesize airplaneModeSettingsReplyTimers=_airplaneModeSettingsReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *cancelLogTransferReplyTimers; // @synthesize cancelLogTransferReplyTimers=_cancelLogTransferReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *diagnosticLogsInfoReplyTimers; // @synthesize diagnosticLogsInfoReplyTimers=_diagnosticLogsInfoReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *diagnosticLogFileReplyTimers; // @synthesize diagnosticLogFileReplyTimers=_diagnosticLogFileReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *purgeUsageBundleReplyTimers; // @synthesize purgeUsageBundleReplyTimers=_purgeUsageBundleReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *usageReplyTimers; // @synthesize usageReplyTimers=_usageReplyTimers;
@property(retain, nonatomic) NSMutableDictionary *localesInfoRequests; // @synthesize localesInfoRequests=_localesInfoRequests;
@property(retain, nonatomic) NSMutableDictionary *legalDocumentsRequests; // @synthesize legalDocumentsRequests=_legalDocumentsRequests;
@property(retain, nonatomic) NSMutableDictionary *removeProfileRequests; // @synthesize removeProfileRequests=_removeProfileRequests;
@property(retain, nonatomic) NSMutableDictionary *installProfileRequests; // @synthesize installProfileRequests=_installProfileRequests;
@property(retain, nonatomic) NSMutableDictionary *profileDataRequests; // @synthesize profileDataRequests=_profileDataRequests;
@property(retain, nonatomic) NSMutableDictionary *profilesInfoRequests; // @synthesize profilesInfoRequests=_profilesInfoRequests;
@property(retain, nonatomic) NSMutableDictionary *accountsInfoRequests; // @synthesize accountsInfoRequests=_accountsInfoRequests;
@property(retain, nonatomic) NSMutableDictionary *obliterationRequests; // @synthesize obliterationRequests=_obliterationRequests;
@property(retain, nonatomic) NSMutableDictionary *aboutInfoRequests; // @synthesize aboutInfoRequests=_aboutInfoRequests;
@property(retain, nonatomic) NSMutableDictionary *airplaneModeSettingsRequests; // @synthesize airplaneModeSettingsRequests=_airplaneModeSettingsRequests;
@property(retain, nonatomic) NSMutableDictionary *logDeleteRequests; // @synthesize logDeleteRequests=_logDeleteRequests;
@property(retain, nonatomic) NSMutableDictionary *cancelLogTransferRequests; // @synthesize cancelLogTransferRequests=_cancelLogTransferRequests;
@property(retain, nonatomic) NSMutableDictionary *diagnosticLogsInfoRequests; // @synthesize diagnosticLogsInfoRequests=_diagnosticLogsInfoRequests;
@property(retain, nonatomic) NSMutableDictionary *diagnosticLogFileRequests; // @synthesize diagnosticLogFileRequests=_diagnosticLogFileRequests;
@property(retain, nonatomic) NSMutableDictionary *purgeUsageBundleRequests; // @synthesize purgeUsageBundleRequests=_purgeUsageBundleRequests;
@property(retain, nonatomic) NSMutableDictionary *usageRequests; // @synthesize usageRequests=_usageRequests;
@property(retain, nonatomic) NSMutableArray *coalescedUsageRequests; // @synthesize coalescedUsageRequests=_coalescedUsageRequests;
- (void)handleLocalesInfoRespMsg:(id)arg1;	// IMP=0x0010000000010dfa
- (void)handleLegalDocumentsRespMsg:(id)arg1;	// IMP=0x0010000000010548
- (void)handleRemoveProfileRespMsg:(id)arg1;	// IMP=0x001000000001000b
- (void)handleInstallProfileRespMsg:(id)arg1;	// IMP=0x001000000000face
- (void)handleProfileDataRespMsg:(id)arg1;	// IMP=0x001000000000f6c3
- (void)handleProfilesInfoRespMsg:(id)arg1;	// IMP=0x001000000000ef71
- (void)handleAccountsInfoRespMsg:(id)arg1;	// IMP=0x001000000000e465
- (void)handleAboutInfoRespMsg:(id)arg1;	// IMP=0x001000000000dd45
- (void)handleRefreshAirplaneModeSettingsReqMsg:(id)arg1;	// IMP=0x001000000000dbe0
- (void)handleAirplaneModeSettingsRespMsg:(id)arg1;	// IMP=0x001000000000d794
- (void)handleIncomingFileTransferProgressMsg:(id)arg1;	// IMP=0x001000000000d2d1
- (void)handleLogDeleteRespMsg:(id)arg1;	// IMP=0x001000000000ce98
- (void)handleCancelLogTransferRespMsg:(id)arg1;	// IMP=0x001000000000c9e9
- (void)handleDiagnosticLogsInfoRespMsg:(id)arg1;	// IMP=0x001000000000c591
- (void)handleIncomingDiagnosticLogFile:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000000c3c1
- (void)handlePurgeUsageBundleRespMsg:(id)arg1;	// IMP=0x001000000000be84
- (void)handleUsageRespMsg:(id)arg1;	// IMP=0x001000000000bacd
- (_Bool)messageIdentifier:(id)arg1 hasBeenDeliveredWithContext:(id)arg2;	// IMP=0x001000000000b495
- (_Bool)messageIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000000a412
- (void)getLocalesInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a1e1
- (void)getLegalDocuments:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009e7a
- (_Bool)shouldFetchBuiltinAppsNotice;	// IMP=0x0010000000009d6b
- (void)rebootDevice;	// IMP=0x0010000000009c24
- (void)removeProfileWithIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000099c5
- (void)installProfile:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009748
- (void)getProfileWithIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000094e7
- (void)getProfilesInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000092f9
- (void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000090af
- (void)obliterateGizmoPreservingeSIM:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008e0c
- (void)setDeviceName:(id)arg1;	// IMP=0x0010000000008cf2
- (void)getAboutInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008b04
- (void)recordSoftwareUpdateSpaceFailure:(id)arg1 osBeingUpdatedTo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008483
- (void)deleteDiagnosticLogFile:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x001000000000819d
- (void)setAirplaneModeSettings:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007f18
- (void)retrieveAirplaneModeSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007d61
- (void)getDiagnosticLogsInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007b1d
- (void)cancelActiveLogFileTranfers;	// IMP=0x0010000000007a71
- (void)cancelDiagnosticLogTranfer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000077c5
- (void)retrieveDiagnosticLogTransferProgress:(id)arg1 withProgress:(CDUnknownBlockType)arg2;	// IMP=0x00100000000073df
- (void)getDiagnosticLogFileFromGizmo:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007149
- (void)purgeUsageBundle:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006e91
- (void)getUsageData:(CDUnknownBlockType)arg1;	// IMP=0x00100000000069f0
- (void)getUsage:(CDUnknownBlockType)arg1;	// IMP=0x001000000000680b
@property(readonly, nonatomic) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property(readonly, nonatomic) NPSDomainAccessor *nssDomainAccessor; // @synthesize nssDomainAccessor=_nssDomainAccessor;
- (void)handleMemoryPressureEvent;	// IMP=0x0010000000006441
- (_Bool)handleDarwinNotification:(id)arg1;	// IMP=0x0010000000006077
- (void)invalidateOutstandingRequestsWithError:(id)arg1;	// IMP=0x0010000000003ff7
- (void)resetBecauseTheActivePairedDeviceChanged;	// IMP=0x0010000000003ee2
- (id)acceptConnection:(id)arg1;	// IMP=0x0010000000003e86
- (void)earlyIvarInitialzation;	// IMP=0x0010000000003a4e
- (id)init;	// IMP=0x00100000000039d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
