//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/APSConnectionDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccountManager-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountDelegate-Protocol.h>
#import <HomeKitDaemon/IDSAccountRegistrationDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class ACAccountStore, APSConnection, HMDAccount, HMDAccountRegistry, HMDAppleAccountContext, HMDAppleAccountSettings, HMDBackingStore, HMDCloudCache, HMDDevice, HMDIDSActivityMonitorBroadcaster, HMFExponentialBackoffTimer, HMFFuture, HMFPromise, HMFTimer, HMFUnfairLock, IDSService, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountManager : HMFObject <APSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, IDSServiceDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDBackingStore *_backingStore;	// 24 = 0x18
    HMDAccountRegistry *_accountRegistry;	// 32 = 0x20
    _Bool _loggedIn;	// 40 = 0x28
    _Bool _monitoring;	// 41 = 0x29
    _Bool _rapportIdentitiesChangedNotificationTokenValid;	// 42 = 0x2a
    int _rapportIdentitiesChangedNotificationToken;	// 44 = 0x2c
    HMDAccount *_account;	// 48 = 0x30
    HMDAppleAccountContext *_accountContext;	// 56 = 0x38
    ACAccountStore *_accountStore;	// 64 = 0x40
    APSConnection *_pushConnection;	// 72 = 0x48
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;	// 80 = 0x50
    HMFTimer *_devicesChangeBackoffTimer;	// 88 = 0x58
    IDSService *_service;	// 96 = 0x60
    HMDIDSActivityMonitorBroadcaster *_activityBroadcaster;	// 104 = 0x68
    HMFPromise *_deviceAccountSettledPromise;	// 112 = 0x70
    HMDCloudCache *_cloudCache;	// 120 = 0x78
    HMFFuture *_deviceAccountSettled;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x0000000000711d1e
+ (id)sharedManager;	// IMP=0x0000000000711cbb
- (void).cxx_destruct;	// IMP=0x000000000070c223
@property(readonly, nonatomic) HMFFuture *deviceAccountSettled; // @synthesize deviceAccountSettled=_deviceAccountSettled;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(readonly, nonatomic) HMFPromise *deviceAccountSettledPromise; // @synthesize deviceAccountSettledPromise=_deviceAccountSettledPromise;
@property(readonly, nonatomic) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // @synthesize activityBroadcaster=_activityBroadcaster;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) _Bool rapportIdentitiesChangedNotificationTokenValid; // @synthesize rapportIdentitiesChangedNotificationTokenValid=_rapportIdentitiesChangedNotificationTokenValid;
@property(nonatomic) int rapportIdentitiesChangedNotificationToken; // @synthesize rapportIdentitiesChangedNotificationToken=_rapportIdentitiesChangedNotificationToken;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(readonly, getter=isLoggedInToPrimaryAccount) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000070bfa2
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000000070bcae
- (void)account:(id)arg1 aliasesChanged:(id)arg2;	// IMP=0x000000000070bb83
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x000000000070b9d5
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000070b8fc
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000070b688
@property(readonly, nonatomic) HMDAppleAccountSettings *settings;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;	// IMP=0x000000000070b1b0
- (void)processAccountModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000070ad19
- (_Bool)isModelCurrentAccount:(id)arg1;	// IMP=0x000000000070abd8
- (id)primaryHandleForAccount:(id)arg1;	// IMP=0x000000000070aac0
- (_Bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;	// IMP=0x000000000070a784
- (_Bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;	// IMP=0x0000000000709efe
- (_Bool)shouldSyncDevice:(id)arg1;	// IMP=0x0000000000709e72
- (_Bool)shouldSyncAccount:(id)arg1;	// IMP=0x0000000000709e00
- (_Bool)shouldCacheAccount:(id)arg1;	// IMP=0x0000000000709da2
@property(readonly) HMDDevice *device;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;	// IMP=0x0000000000709b93
- (void)__deviceAddedToCurrentAccount:(id)arg1;	// IMP=0x0000000000709b01
- (void)updateSenderCorrelationIdentifier:(id)arg1;	// IMP=0x000000000070980a
- (void)__updateMergeIDOnAccount;	// IMP=0x000000000070938e
@property(retain) HMDAccount *account; // @synthesize account=_account;
@property(readonly) HMDAppleAccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void)__handleMigrationUpdated:(id)arg1;	// IMP=0x0000000000709068
- (void)__handleUpdatedName:(id)arg1;	// IMP=0x0000000000708f5d
- (void)__handleRemovedAccount:(id)arg1;	// IMP=0x0000000000708d1b
- (void)__handleModifiedAccount:(id)arg1;	// IMP=0x0000000000708a17
- (void)__localDataReset:(id)arg1;	// IMP=0x00000000007089c5
- (void)stop;	// IMP=0x0000000000708973
- (void)start;	// IMP=0x0000000000708901
- (id)accountRegistry;	// IMP=0x000000000070886f
- (void)configureWithAccountRegistry:(id)arg1;	// IMP=0x000000000070850f
@property(readonly) HMDBackingStore *backingStore;
- (void)configureWithBackingStore:(id)arg1;	// IMP=0x00000000007083bd
- (void)_deregisterForRapportNotifications;	// IMP=0x000000000070836d
- (void)_registerForRapportNotifications;	// IMP=0x0000000000708192
- (id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2;	// IMP=0x0000000000707d5b
- (id)init;	// IMP=0x0000000000707cb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

