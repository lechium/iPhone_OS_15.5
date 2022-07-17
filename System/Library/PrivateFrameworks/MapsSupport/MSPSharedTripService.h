//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPSharedTripContactControllerDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripXPCClient-Protocol.h>
#import <MapsSupport/MSPSharedTripXPCServer-Protocol.h>

@class GEOObserverHashTable, MSPMapsPaths, MSPSharedTripContactController, MSPSharedTripSharingIdentity, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MSPSharedTripService : NSObject <MSPSharedTripXPCServer, MSPSharedTripXPCClient, MSPSharedTripContactControllerDelegate>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    _Bool _connectionError;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 24 = 0x18
    unsigned long long _connectionRetryCounter;	// 32 = 0x20
    NSDate *_reconnectionBackoffUntilDate;	// 40 = 0x28
    GEOObserverHashTable *_receivingObservers;	// 48 = 0x30
    GEOObserverHashTable *_sendingObservers;	// 56 = 0x38
    NSMutableArray *_receivedTrips;	// 64 = 0x40
    MSPSharedTripContactController *_sharingContactController;	// 72 = 0x48
    NSMutableDictionary *_subscriptionTokensByTripID;	// 80 = 0x50
    struct os_unfair_lock_s _sharingIdentityLock;	// 88 = 0x58
    unsigned long long _permissions;	// 96 = 0x60
    MSPSharedTripSharingIdentity *_sharingIdentity;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_checkinDispatchGroup;	// 112 = 0x70
    id _userDisabledDefaultListener;	// 120 = 0x78
    id _serverDisabledDefaultListener;	// 128 = 0x80
    MSPMapsPaths *_mapsPaths;	// 136 = 0x88
    _Bool _confirmedMapsIsInstalled;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x00000000000b80e2
- (void).cxx_destruct;	// IMP=0x00000000000bf72c
- (void)_openConnectionIfNeeded;	// IMP=0x00000000000bee77
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bede6
- (id)_remoteObjectProxy;	// IMP=0x00000000000bedab
- (void)sharingIdentityDidChange:(id)arg1;	// IMP=0x00000000000becbd
- (void)sharedTripDidUpdateRecipients:(id)arg1;	// IMP=0x00000000000bebf0
- (void)sharedTripInvalidatedWithError:(id)arg1;	// IMP=0x00000000000beb20
- (id)_insertOrUpdateTrip:(id)arg1;	// IMP=0x00000000000be9d5
- (void)sharedTripDidClose:(id)arg1;	// IMP=0x00000000000be876
- (void)sharedTripDidBecomeUnavailable:(id)arg1;	// IMP=0x00000000000be6e4
- (void)routeDidUpdateForSharedTrip:(id)arg1;	// IMP=0x00000000000be5df
- (void)etaDidUpdateForSharedTrip:(id)arg1;	// IMP=0x00000000000be4da
- (void)destinationReachedDidUpdateForSharedTrip:(id)arg1;	// IMP=0x00000000000be3d5
- (void)destinationDidUpdateForSharedTrip:(id)arg1;	// IMP=0x00000000000be2d0
- (void)sharedTripDidBecomeAvailable:(id)arg1;	// IMP=0x00000000000be1cb
- (void)_blockSharedTrip:(id)arg1;	// IMP=0x00000000000be079
- (void)blockSharedTrip:(id)arg1;	// IMP=0x00000000000bdf7a
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bdf65
- (void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bd7ba
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bd68a
- (void)_fetchSharedTripsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd411
- (void)fetchSharedTripsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd312
- (void)_fetchActiveHandlesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd0c0
- (void)fetchActiveHandlesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcfc1
- (void)_stopSharingTrip;	// IMP=0x00000000000bceb0
- (void)stopSharingTrip;	// IMP=0x00000000000bcdf3
- (void)_stopSharingTripWithMessagesGroup:(id)arg1;	// IMP=0x00000000000bcca1
- (void)stopSharingTripWithMessagesGroup:(id)arg1;	// IMP=0x00000000000bcba2
- (void)_startSharingTripWithMessagesGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bca32
- (void)startSharingTripWithMessagesGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc902
- (void)_startSharingTripWithMessagesContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc792
- (void)startSharingTripWithMessagesContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc662
- (void)_stopSharingTripWithContacts:(id)arg1;	// IMP=0x00000000000bc510
- (void)stopSharingTripWithContacts:(id)arg1;	// IMP=0x00000000000bc411
- (void)_startSharingTripWithContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc2a1
- (void)startSharingTripWithContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc171
- (void)_reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bbf70
- (void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bbe40
- (void)_fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bbc25
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bbb26
- (void)_fetchSharingIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb92e
- (void)fetchSharingIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb82f
- (void)_checkinWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb75d
- (void)checkinWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb65e
- (_Bool)_isMapsInstalled;	// IMP=0x00000000000bb311
- (void)_validateCurrentConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bae41
- (void)removeSendingObserver:(id)arg1;	// IMP=0x00000000000bad69
- (void)addSendingObserver:(id)arg1;	// IMP=0x00000000000bac91
- (void)removeReceivingObserver:(id)arg1;	// IMP=0x00000000000babb9
- (void)addReceivingObserver:(id)arg1;	// IMP=0x00000000000baae1
- (void)_purgeToken:(id)arg1 forTripID:(id)arg2;	// IMP=0x00000000000ba82d
- (void)purgeToken:(id)arg1 forTripID:(id)arg2;	// IMP=0x00000000000ba743
- (id)_addSubscriptionTokenForTripID:(id)arg1;	// IMP=0x00000000000ba49c
- (id)_subscriptionTokensForTripID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000000ba363
- (void)blockSharedTripWithIdentifier:(id)arg1;	// IMP=0x00000000000ba351
- (void)refreshReceivedTripsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ba33f
@property(readonly, nonatomic) NSArray *receivedTrips;
@property(readonly, nonatomic) _Bool canReceiveTrips;
- (void)sharedTripContactController:(id)arg1 didUpdateActiveContactsValues:(id)arg2;	// IMP=0x00000000000ba11b
- (void)_stopAllSharingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9e04
- (void)stopAllSharingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9d05
- (void)_stopSharingWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b99d4
- (void)stopSharingWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b98a4
- (void)_startSharingWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b9565
- (void)startSharingWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b9435
- (void)refreshSharingIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9423
- (_Bool)isSharingWithContact:(id)arg1;	// IMP=0x00000000000b9317
@property(readonly, nonatomic) NSArray *receivers;
@property(readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
@property(readonly, nonatomic) _Bool canShareTrip;
- (void)_performBlockAfterInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8f1f
- (void)performBlockAfterInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8e20
- (void)_checkEnabledState;	// IMP=0x00000000000b8cf2
- (void)_performBlockWhenCheckinCompleted:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8c50
- (void)_resetCheckinIdentityAndPermissions;	// IMP=0x00000000000b8ba9
- (void)_handleCheckinWithSharingIdentity:(id)arg1 activeRecipients:(id)arg2 receivedTrips:(id)arg3 permissions:(unsigned long long)arg4;	// IMP=0x00000000000b8aad
- (void)_checkin;	// IMP=0x00000000000b86c8
- (void)checkin;	// IMP=0x00000000000b860b
- (void)dealloc;	// IMP=0x00000000000b8597
- (id)init;	// IMP=0x00000000000b81b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
