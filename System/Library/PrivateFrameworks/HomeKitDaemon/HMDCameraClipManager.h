//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBLocalZoneModelObserver-Protocol.h>
#import <HomeKitDaemon/HMDActiveXPCClientConnectionsPeriodicTimerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDActiveXPCClientConnectionsPeriodicTimer, HMDCameraClipFeedbackManager, HMDCameraClipsQuotaManager, HMDCameraSignificantEventFaceClassificationResolver, HMDDatabaseZoneManager, HMDFeaturesDataSource, HMFMessageDispatcher, NSDate, NSObject, NSString, NSUUID;
@protocol HMDCameraClipManagerDelegate, HMDFileManager, OS_dispatch_queue;

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate>
{
    _Bool _hasWriteAccess;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    id <HMDCameraClipManagerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    HMBCloudZone *_cloudZone;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDDatabaseZoneManager *_zoneManager;	// 56 = 0x38
    HMDCameraClipsQuotaManager *_quotaManager;	// 64 = 0x40
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;	// 72 = 0x48
    HMDActiveXPCClientConnectionsPeriodicTimer *_clientConnectionsTimer;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    NSUUID *_cameraProfileUUID;	// 96 = 0x60
    id <HMDFileManager> _fileManager;	// 104 = 0x68
    HMDFeaturesDataSource *_featuresDataSource;	// 112 = 0x70
    HMDCameraClipFeedbackManager *_feedbackManager;	// 120 = 0x78
    NSDate *_suppressNotificationsBeforeDate;	// 128 = 0x80
    unsigned long long _fetchBatchLimit;	// 136 = 0x88
    CDUnknownBlockType _fetchServerFactory;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00000000008d26e2
+ (double)maximumClipDuration;	// IMP=0x00000000008d263b
- (void).cxx_destruct;	// IMP=0x00000000008ce0e2
@property(copy) CDUnknownBlockType fetchServerFactory; // @synthesize fetchServerFactory=_fetchServerFactory;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(retain) HMDCameraClipFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly) HMDFeaturesDataSource *featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // @synthesize clientConnectionsTimer=_clientConnectionsTimer;
@property(readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool hasWriteAccess; // @synthesize hasWriteAccess=_hasWriteAccess;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property __weak id <HMDCameraClipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000008cde5a
- (void)clientConnectionsTimerDidFire:(id)arg1;	// IMP=0x00000000008cde00
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000008cdca5
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000008cdb49
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000008cd516
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000008cd501
- (_Bool)areShareModificationsEnabledForManager:(id)arg1;	// IMP=0x00000000008cd4ae
- (_Bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;	// IMP=0x00000000008cd434
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000008cd3ba
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000008cd307
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000008cd254
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000008cd1a1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000008cd0ce
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000008cd05d
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000008ccfec
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x00000000008ccf7b
- (void)handleImportClipsMessage:(id)arg1;	// IMP=0x00000000008cc905
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008cc3e0
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008cba6f
- (void)handleDeleteAllClipsMessage:(id)arg1;	// IMP=0x00000000008cb733
- (void)handleDeleteClipMessage:(id)arg1;	// IMP=0x00000000008cb2f8
- (void)handleFetchSignificantEventsMessage:(id)arg1;	// IMP=0x00000000008caa47
- (void)handleFetchFaceCropURLMessage:(id)arg1;	// IMP=0x00000000008ca41a
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008c9d99
- (void)handleFetchHeroFrameURLMessage:(id)arg1;	// IMP=0x00000000008c97d2
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008c9184
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;	// IMP=0x00000000008c9014
- (void)handleFetchCountOfClipsMessage:(id)arg1;	// IMP=0x00000000008c8899
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;	// IMP=0x00000000008c7d57
- (void)handleFetchClipsMessage:(id)arg1;	// IMP=0x00000000008c755e
- (void)handleFetchClipMessage:(id)arg1;	// IMP=0x00000000008c6f80
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x00000000008c6d74
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000008c6a9c
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000008c67c4
- (void)_removeAllFaceClassificationModels;	// IMP=0x00000000008c66b1
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x00000000008c65ee
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;	// IMP=0x00000000008c60bc
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;	// IMP=0x00000000008c5bcf
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008c595d
- (void)_handleChangedFaceClassificationModel:(id)arg1;	// IMP=0x00000000008c5729
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008c5539
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(_Bool)arg2 mirrorOutputFuture:(id)arg3;	// IMP=0x00000000008c50bd
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000008c4d07
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;	// IMP=0x00000000008c46c6
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;	// IMP=0x00000000008c4085
- (void)_cleanUpExpiredClips;	// IMP=0x00000000008c3d52
- (void)_cleanUpIncompleteClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000008c3935
- (void)_cleanUpClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000008c388c
- (id)_performCloudPull;	// IMP=0x00000000008c35d5
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000008c32af
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000008c2efe
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;	// IMP=0x00000000008c29eb
- (_Bool)_fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 isAscending:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000008c2543
- (_Bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(_Bool)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c223d
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c2067
- (id)_significantEventsWithUUIDs:(id)arg1;	// IMP=0x00000000008c1fd7
- (id)_significantEventFromSignificantEventModel:(id)arg1;	// IMP=0x00000000008c1ebd
- (id)_significantEventModelsForClipWithUUID:(id)arg1;	// IMP=0x00000000008c1d11
- (id)_significantEventModelsWithUUIDs:(id)arg1;	// IMP=0x00000000008c19ab
- (id)home;	// IMP=0x00000000008c195b
- (id)significantEventsForClipContainingDate:(id)arg1;	// IMP=0x00000000008c147a
- (id)performCloudPull;	// IMP=0x00000000008c13ba
- (void)cleanUpClips;	// IMP=0x00000000008c1365
- (id)disableCloudStorage;	// IMP=0x00000000008c1035
- (id)enableCloudStorage;	// IMP=0x00000000008c0d6f
- (id)remove;	// IMP=0x00000000008c0c35
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c0a04
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c080a
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000008bff2a
@property(readonly) _Bool hasStartedUpCloudZone;
- (id)significantEventsWithDateInterval:(id)arg1;	// IMP=0x00000000008bfc16
- (id)significantEventsForClipWithUUID:(id)arg1;	// IMP=0x00000000008bfb86
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 featuresDataSource:(id)arg9;	// IMP=0x00000000008bf7e4
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x00000000008bf4bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

