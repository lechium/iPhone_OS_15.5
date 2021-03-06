//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerMetricsEventDispatcherDataSource-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMBShareUserID, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDCloudShareTrustManagerMetricsEventDispatcher, HMFTimer, HMFUnfairLock, NSObject, NSString;
@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDDatabase, OS_dispatch_queue;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _ownedTrust;	// 16 = 0x10
    long long _configureState;	// 24 = 0x18
    id <HMDCloudShareTrustManagerDataSource> _dataSource;	// 32 = 0x20
    id <HMDCloudShareTrustManagerDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <HMDDatabase> _database;	// 56 = 0x38
    HMDCloudShareMessenger *_cloudShareMessenger;	// 64 = 0x40
    HMBCloudZone *_cloudZone;	// 72 = 0x48
    HMBLocalZone *_localZone;	// 80 = 0x50
    HMDCloudShareParticipantsManager *_cloudShareParticipantManager;	// 88 = 0x58
    HMFTimer *_requestInviteTimer;	// 96 = 0x60
    HMDCloudShareTrustManagerMetricsEventDispatcher *_metricsEventDispatcher;	// 104 = 0x68
    HMBShareUserID *_ownerCloudShareID;	// 112 = 0x70
    CDUnknownBlockType _participantsManagerFactory;	// 120 = 0x78
    CDUnknownBlockType _requestInviteTimerFactory;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x00000000002722aa
- (void).cxx_destruct;	// IMP=0x0000000000270bad
@property(copy) CDUnknownBlockType requestInviteTimerFactory; // @synthesize requestInviteTimerFactory=_requestInviteTimerFactory;
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMBShareUserID *ownerCloudShareID; // @synthesize ownerCloudShareID=_ownerCloudShareID;
@property(retain) HMDCloudShareTrustManagerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property(retain) HMFTimer *requestInviteTimer; // @synthesize requestInviteTimer=_requestInviteTimer;
@property(retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager; // @synthesize cloudShareParticipantManager=_cloudShareParticipantManager;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, getter=isOwnedTrust) _Bool ownedTrust; // @synthesize ownedTrust=_ownedTrust;
@property(readonly) HMDCloudShareMessenger *cloudShareMessenger; // @synthesize cloudShareMessenger=_cloudShareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDCloudShareTrustManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareTrustManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000270632
- (void)_cancelRequestInviteTimer;	// IMP=0x00000000002705dd
- (void)_startRequestInviteTimer;	// IMP=0x000000000027032b
- (id)attributeDescriptions;	// IMP=0x00000000002701a4
- (id)logIdentifier;	// IMP=0x0000000000270145
- (void)_didRemoveZone;	// IMP=0x000000000026ffbb
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000026fe9f
- (void)_didCreateZone;	// IMP=0x000000000026fc8c
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000026fb70
- (struct CloudShareTrustManagerTrustStatusCounts)trustStatusCountsForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000026fb51
- (long long)trustConfigureStateForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000026fb3f
- (_Bool)isFromOwnerForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000026fb2d
- (id)homeForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000026face
- (struct CloudShareTrustManagerTrustStatusCounts)trustStatusCounts;	// IMP=0x000000000026f545
- (_Bool)isFromOwner;	// IMP=0x000000000026f4a3
- (_Bool)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;	// IMP=0x000000000026f49b
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x000000000026f404
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x000000000026f36c
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x000000000026f2b8
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000026ee51
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000026ec7f
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x000000000026eb57
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x000000000026ea2f
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x000000000026e907
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;	// IMP=0x000000000026e7dc
@property long long configureState; // @synthesize configureState=_configureState;
- (void)_homeDidBecomeTrustZoneCapable:(id)arg1;	// IMP=0x000000000026e429
- (void)homeDidBecomeTrustZoneCapable:(id)arg1;	// IMP=0x000000000026e378
- (void)sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000026de64
- (void)discoverUntrustedUsers;	// IMP=0x000000000026d814
- (void)updateSharedUsersCloudShareIDs;	// IMP=0x000000000026d3ae
- (void)updateCurrentUserCloudShareID;	// IMP=0x000000000026d21e
- (void)removeTrust;	// IMP=0x000000000026cdca
- (_Bool)isTrustConfigured;	// IMP=0x000000000026cdb0
- (void)_finishConfigure;	// IMP=0x000000000026cc35
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1;	// IMP=0x000000000026c9f7
- (void)_configureWithFetchZoneResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000026c44c
- (void)_requestShareInvitationForSharedZone;	// IMP=0x000000000026c13a
- (void)_configureWithSharedZone;	// IMP=0x000000000026be41
- (void)_configureWithOwnedZone;	// IMP=0x000000000026bcff
- (void)_configure;	// IMP=0x000000000026ba55
- (void)configure;	// IMP=0x000000000026b96e
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(_Bool)arg2 queue:(id)arg3 shareMessenger:(id)arg4 ownerCloudShareID:(id)arg5;	// IMP=0x000000000026b708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

