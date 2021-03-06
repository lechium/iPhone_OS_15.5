//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENExposureDetectionClientSession, NSMutableArray;
@protocol ENUIRemotePresentationController, OS_dispatch_queue, OS_xpc_object;

@interface ENManager : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    ENExposureDetectionClientSession *_detectionSession;	// 16 = 0x10
    NSMutableArray *_exposureWindows;	// 24 = 0x18
    _Bool _invalidateCalled;	// 32 = 0x20
    _Bool _invalidateDone;	// 33 = 0x21
    NSObject<OS_xpc_object> *_xpcCnx;	// 40 = 0x28
    _Bool _isTestEntitlement;	// 48 = 0x30
    id <ENUIRemotePresentationController> _remotePresentationController;	// 56 = 0x38
    _Bool _exposureNotificationEnabled;	// 64 = 0x40
    _Bool _exposureNotificationPaused;	// 65 = 0x41
    _Bool _analyticsEnabled;	// 66 = 0x42
    unsigned int _clientID;	// 68 = 0x44
    CDUnknownBlockType _activityHandler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    long long _exposureNotificationStatus;	// 88 = 0x58
    CDUnknownBlockType _invalidationHandler;	// 96 = 0x60
    CDUnknownBlockType _diagnosisKeysAvailableHandler;	// 104 = 0x68
    NSObject<OS_xpc_object> *_testListenerEndpoint;	// 112 = 0x70
    CDUnknownBlockType _statusChangedHandler;	// 120 = 0x78
}

+ (long long)authorizationStatus;	// IMP=0x000000000001cedb
- (void).cxx_destruct;	// IMP=0x000000000002d89a
@property(readonly, nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(readonly, nonatomic) _Bool exposureNotificationPaused; // @synthesize exposureNotificationPaused=_exposureNotificationPaused;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) CDUnknownBlockType diagnosisKeysAvailableHandler; // @synthesize diagnosisKeysAvailableHandler=_diagnosisKeysAvailableHandler;
@property(readonly, nonatomic) _Bool exposureNotificationEnabled; // @synthesize exposureNotificationEnabled=_exposureNotificationEnabled;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) long long exposureNotificationStatus; // @synthesize exposureNotificationStatus=_exposureNotificationStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType activityHandler; // @synthesize activityHandler=_activityHandler;
- (void)verifyTextMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d5a0
- (void)showBuddyForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d377
- (void)fetchSubdivisionsForCountry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ce7d
- (void)fetchConfigurationsForRegion:(id)arg1 fetchReason:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c85b
- (void)fetchConfigurationsForRegion:(id)arg1 forceServerFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c847
- (void)remotePresentationRequestDidComplete:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c62a
- (void)clearDeveloperServerConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c49f
- (void)setWeeklySummaryAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c2a7
- (void)setDeveloperServerConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c03c
- (void)setActiveRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002be1f
- (void)setActiveEntityWithRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bc02
- (void)setActiveEntityWithAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b9d3
- (void)setCurrentActiveApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b7f9
- (void)setAvailabilityAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b601
- (void)setAutomaticRegionSwitchEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b409
- (void)getLastExposureNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b1f5
- (void)onboardingDidStartForRegion:(id)arg1 withSource:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002aeb3
- (void)getAllEntitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a967
- (void)getInfoForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a67b
- (void)getDataVaultSizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a47e
- (void)exposureNotificationGetStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a24b
- (void)downloadAndDetectExposure:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a0a0
- (void)deleteExposureDetectionHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a086
- (void)setRegionUserConsent:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029c66
- (void)setRegionConsent:(long long)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029bff
- (void)setRegionConsent:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029b98
- (void)regionHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029921
- (void)getRegionVisitHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000295c8
- (void)allAgencyConfigurationsForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002910f
- (void)agencyConfigurationForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028c56
- (void)regionServerConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002888f
- (void)allRegionServerConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028472
- (void)allRegionConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028099
- (void)regionConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027e1c
- (void)activeRegionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027bb0
- (void)finishTestVerificationForSession:(id)arg1 userDidConsent:(_Bool)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002791f
- (void)fetchTestMetadataForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002763e
- (void)startTestVerificationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000272b1
- (void)startSelfReportWebSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026f17
- (void)sendChaffTestVerificationRequestForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026cc1
- (void)_getDetectionHistorySessionsCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000268a0
- (void)getDetectionHistorySessionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026725
- (void)_getDetectionHistoryFilesCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026304
- (void)getDetectionHistoryFilesForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000260d1
- (void)_populateDetectionHistoryChecks:(id)arg1 forSessions:(id)arg2 sessionIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025d08
- (void)getDetectionHistoryChecksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025b67
- (void)exposureDetectionFileFinishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002594b
- (void)exposureDetectionFileAdd:(id)arg1 signatureURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025242
- (void)exposureDetectionFileActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024fef
- (void)exposureDetectionGetExposureInfoCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024c8d
- (void)exposureDetectionGetExposureInfoWithMaximumCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024af3
- (void)exposureDetectionFinishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000248d7
- (void)exposureDetectionAddKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002457e
- (void)exposureDetectionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000242f5
- (void)triggerNotificationOfType:(int)arg1 appBundleIdentifier:(id)arg2 classificationName:(id)arg3 interval:(id)arg4 region:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000023ec5
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023be3
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023922
- (void)resetDataWithFlags:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023698
- (void)resetAllDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002367e
- (void)_getDiagnosisKeysReply:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000232ea
- (void)getDiagnosisKeysForTesting:(_Bool)arg1 forceRefresh:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022f07
- (void)getTestDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022eeb
- (void)getDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022ed2
- (void)requestPreAuthorizedDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022cb2
- (void)_handleRemotePresentationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022b8c
- (void)didEnterLegalConsentPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022909
- (void)_checkRemoteDialogueRequirementForRequestType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022527
- (void)_preAuthorizeDiagnosisKeysWithSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002231c
- (void)preAuthorizeDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000220c9
- (void)_getExposureWindowsCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021b33
- (void)_getExposureWindowsFromIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021a1e
- (id)getExposureWindowsFromSummary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021941
- (void)_getExposureInfoCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021592
- (id)getExposureInfoFromSummary:(id)arg1 userExplanation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000213b3
- (id)detectExposuresWithConfiguration:(id)arg1 diagnosisKeyURLs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000210e6
- (id)detectExposuresWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000210ca
- (void)setTravelStatusEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020e3a
- (void)setTravelStatusEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020c31
- (void)getTravelStatusEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020987
- (void)getTravelStatusEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020776
- (void)getRegionMonitorEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020565
- (void)setRegionHistoryEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002035c
- (void)getRegionHistoryEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002014b
- (void)_setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fd36
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fd24
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001fd0c
- (void)getPreAuthorizeDiagnosisKeysEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f9c4
- (void)pauseWithExpiration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f756
- (void)setPaused:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f50d
- (void)setExposureNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f221
- (void)_xpcHandleStatusChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x000000000001eb75
- (void)_xpcHandlePreAuthorizedDiagnosisKeysAvailable:(id)arg1;	// IMP=0x000000000001e72e
- (void)_xpcHandleActivity:(id)arg1;	// IMP=0x000000000001e6eb
- (void)_xpcReceivedMessage:(id)arg1;	// IMP=0x000000000001e61b
- (void)_xpcReceivedEvent:(id)arg1;	// IMP=0x000000000001e44f
- (void)_tccCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e243
- (void)getUserTraveledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001df81
- (void)_entitlementCheckUpdate:(id)arg1;	// IMP=0x000000000001dd93
- (void)_entitlementCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001db93
- (void)_invalidated;	// IMP=0x000000000001dabe
- (void)_invalidate;	// IMP=0x000000000001da1c
- (void)invalidate;	// IMP=0x000000000001d93a
- (void)_interrupted;	// IMP=0x000000000001d8b2
- (id)_ensureXPCStarted;	// IMP=0x000000000001d77a
- (void)_reactivate;	// IMP=0x000000000001d62d
- (_Bool)_setActivationPropertiesOnRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d4c7
- (void)_activateInitial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d210
- (void)activateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d03c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000001d007
- (id)description;	// IMP=0x000000000001cff0
- (void)dealloc;	// IMP=0x000000000001cfa7
- (id)init;	// IMP=0x000000000001cf2f

@end

