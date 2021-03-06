//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class FMFuture, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol FMFSessionDelegate, OS_dispatch_queue;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    _Bool _isModelInitialized;	// 8 = 0x8
    id <FMFSessionDelegate> _delegate;	// 16 = 0x10
    NSOperationQueue *_delegateQueue;	// 24 = 0x18
    NSMutableSet *_internalHandles;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    NSSet *_cachedGetHandlesSharingLocationsWithMe;	// 48 = 0x30
    NSSet *_cachedGetHandlesFollowingMyLocation;	// 56 = 0x38
    NSMutableDictionary *_cachedLocationForHandleByHandle;	// 64 = 0x40
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;	// 72 = 0x48
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_handlesQueue;	// 96 = 0x60
    FMFuture *_sessionInvalidationFuture;	// 104 = 0x68
    FMFuture *_sessionInterruptionFuture;	// 112 = 0x70
}

+ (_Bool)isAnyAccountManaged;	// IMP=0x0000000000022664
+ (_Bool)isProvisionedForLocationSharing;	// IMP=0x00000000000225e7
+ (_Bool)FMFRestricted;	// IMP=0x0000000000022582
+ (_Bool)FMFAllowed;	// IMP=0x000000000002252b
+ (id)sharedInstance;	// IMP=0x000000000001dbde
- (void).cxx_destruct;	// IMP=0x00000000000229b7
@property(retain, nonatomic) FMFuture *sessionInterruptionFuture; // @synthesize sessionInterruptionFuture=_sessionInterruptionFuture;
@property(retain, nonatomic) FMFuture *sessionInvalidationFuture; // @synthesize sessionInvalidationFuture=_sessionInvalidationFuture;
@property(nonatomic) _Bool isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlesQueue; // @synthesize handlesQueue=_handlesQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002227b
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000022219
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022141
- (void)removeHandles:(id)arg1;	// IMP=0x0000000000021f72
- (void)addHandles:(id)arg1;	// IMP=0x0000000000021d8d
@property(copy, nonatomic) NSSet *handles;
- (oneway void)modelDidLoad;	// IMP=0x0000000000021b6f
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;	// IMP=0x0000000000021a2e
- (oneway void)didUpdatePreferences:(id)arg1;	// IMP=0x00000000000218be
- (oneway void)didUpdateFences:(id)arg1;	// IMP=0x000000000002171b
- (oneway void)didUpdateLocations:(id)arg1;	// IMP=0x00000000000214f6
- (oneway void)didUpdateFollowing:(id)arg1;	// IMP=0x0000000000021414
- (oneway void)didUpdateFollowers:(id)arg1;	// IMP=0x0000000000021332
- (oneway void)abPreferencesDidChange;	// IMP=0x0000000000021294
- (oneway void)abDidChange;	// IMP=0x00000000000211f6
- (oneway void)didReceiveServerError:(id)arg1;	// IMP=0x0000000000021083
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x0000000000020ee0
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;	// IMP=0x0000000000020d6d
- (void)didReceiveFriendshipRequest:(id)arg1;	// IMP=0x0000000000020bfa
- (oneway void)didUpdateActiveDeviceList:(id)arg1;	// IMP=0x0000000000020a87
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;	// IMP=0x00000000000208ef
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;	// IMP=0x00000000000207ba
- (oneway void)didUpdateFavorites:(id)arg1;	// IMP=0x0000000000020647
- (oneway void)didStopFollowingHandle:(id)arg1;	// IMP=0x00000000000204d4
- (oneway void)didStartFollowingHandle:(id)arg1;	// IMP=0x0000000000020361
- (oneway void)didRemoveFollowerHandle:(id)arg1;	// IMP=0x00000000000201ee
- (oneway void)didAddFollowerHandle:(id)arg1;	// IMP=0x000000000002007b
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;	// IMP=0x000000000001ff5a
- (oneway void)setLocations:(id)arg1;	// IMP=0x000000000001fd3d
- (void)forceRefresh;	// IMP=0x000000000001fd00
- (_Bool)hasModelInitialized;	// IMP=0x000000000001fcee
- (void)invalidate;	// IMP=0x000000000001fafd
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f9ff
- (id)serverProxy;	// IMP=0x000000000001f946
- (id)__connection;	// IMP=0x000000000001e835
- (void)addInvalidationHander:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e50c
- (void)addInterruptionHander:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e33d
- (void)dealloc;	// IMP=0x000000000001e121
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000001e10d
- (void)locatingInProgressChanged:(id)arg1;	// IMP=0x000000000001df3f
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000001dcdc
- (id)init;	// IMP=0x000000000001dcc8
- (void)_registerForFMFDLaunchedNotification;	// IMP=0x000000000001d94e
- (void)applicationWillEnterForeground;	// IMP=0x000000000001d93c
- (void)applicationDidEnterBackground;	// IMP=0x000000000001d92a
- (void)_registerForApplicationLifecycleEvents;	// IMP=0x000000000001d876
- (void)restoreClientConnection;	// IMP=0x000000000001d591
- (void)_daemonDidLaunch;	// IMP=0x000000000001d48a
- (void)includeDeviceInAutomations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f80
- (void)showMeDeviceAlert;	// IMP=0x0000000000003386
- (void)showShareMyLocationRestrictedAlert;	// IMP=0x00000000000032e2
- (void)showShareMyLocationiCloudSettingsOffAlert;	// IMP=0x00000000000032a5
- (void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003233
- (void)sessionHandleReport:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003169
- (void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000309f
- (void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003005
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x0000000000002f7f
- (void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002eb5
- (void)exit5XXGracePeriod;	// IMP=0x0000000000002e78
- (void)crashDaemon;	// IMP=0x0000000000002e3b
- (_Bool)shouldHandleErrorInFWK:(id)arg1;	// IMP=0x0000000000002d32
- (_Bool)is5XXError:(id)arg1;	// IMP=0x0000000000002cd1
- (void)setExpiredInitTimestamp;	// IMP=0x0000000000002c94
- (id)verifyRestrictionsAndShowDialogIfRequired;	// IMP=0x0000000000002c02
- (void)getRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b7c
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002af6
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a70
- (void)getAllDevices:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029a6
- (double)maxLocatingInterval;	// IMP=0x000000000000280f
- (id)getAllDevices;	// IMP=0x000000000000262f
- (id)getActiveLocationSharingDevice;	// IMP=0x00000000000023d3
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000022e3
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000038b1
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000036b7
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000342a
- (void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008635
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;	// IMP=0x000000000000847d
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008275
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007fd6
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007d70
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007b0a
- (void)getAccountEmailAddress:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007952
- (void)isAllowFriendRequestsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000077bc
- (void)setAllowFriendRequestsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000762c
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007496
- (void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007249
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fb2
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d84
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006aa9
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;	// IMP=0x000000000000687b
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061ab
- (void)getThisDeviceAndCompanion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005e34
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;	// IMP=0x00000000000059ce
- (void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a6f6
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a3e8
- (void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a0eb
- (void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009e9d
- (void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009c8c
- (void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cda8
- (void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cb97
- (void)getAllLocations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010f04
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011528
- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011287
- (void)getFavoritesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010fbe
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013eeb
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013914
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001359d
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013270
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012fd3
- (void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012d19
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012a2e
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012686
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000125a1
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000121aa
- (void)_checkAndDisplayMeDeviceSwitchAlert;	// IMP=0x0000000000011e53
- (void)_sendAutoSwitchMeDevice;	// IMP=0x0000000000011cd9
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001194d
- (_Bool)_isNoMappingPacketReturnedError:(id)arg1;	// IMP=0x0000000000011926
- (void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c74d
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001c48a
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001c1d4
- (void)fencesForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001beff
- (void)getFences:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bc50
- (void)deleteFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b9ba
- (void)addFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b6e5
- (void)reloadDataIfNotLoaded;	// IMP=0x0000000000029b3f
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x0000000000029a00
- (id)cachedLocationForHandle:(id)arg1;	// IMP=0x00000000000298fe
- (_Bool)isMyLocationEnabled;	// IMP=0x000000000002976d
- (id)getHandlesWithPendingOffers;	// IMP=0x000000000002958d
- (_Bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x0000000000029420
- (_Bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x00000000000292b3
- (id)getFavoritesSharingLocationWithMe;	// IMP=0x000000000002902a
- (id)getHandlesFollowingMyLocation;	// IMP=0x0000000000028f3d
- (id)getHandlesSharingLocationsWithMe;	// IMP=0x0000000000028e50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

