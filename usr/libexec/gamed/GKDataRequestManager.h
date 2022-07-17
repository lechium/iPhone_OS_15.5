//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, GKApplicationStateMonitor, GKNATObserver, GKReachability, MISSING_TYPE, NSCountedSet, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDataRequestManager : NSObject
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    long long _currentEnvironment;	// 16 = 0x10
    int _natType;	// 24 = 0x18
    GKNATObserver *_natObserver;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_natSemaphore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_natQueue;	// 48 = 0x30
    NSData *_pushToken;	// 56 = 0x38
    _Bool _receivesMemoryWarnings;	// 64 = 0x40
    long long _activePushEnvironment;	// 72 = 0x48
    NSDate *_nearbyQueryLastCheckDate;	// 80 = 0x50
    double _nearbyQueryAllowance;	// 88 = 0x58
    APSConnection *_apsConnection;	// 96 = 0x60
    APSConnection *_pushConnectionProd;	// 104 = 0x68
    MISSING_TYPE *_pushConnectionDev;	// 112 = 0x70
    NSMutableDictionary *_transactionBag;	// 120 = 0x78
    NSCountedSet *_transactionCounts;	// 128 = 0x80
    GKApplicationStateMonitor *_applicationStateMonitor;	// 136 = 0x88
    NSString *_authenticatingWithSettingsBundleID;	// 144 = 0x90
    GKReachability *_reachability;	// 152 = 0x98
}

+ (id)ratingsQueue;	// IMP=0x002000000007b04d
+ (id)statsQueue;	// IMP=0x001000000007aff6
+ (_Bool)allowSelfSignedCertForEnvironment:(long long)arg1;	// IMP=0x0010000000074a3c
+ (id)syncQueue;	// IMP=0x0010000000071bc7
+ (id)pushQueue;	// IMP=0x0010000000071b70
+ (id)clientQueue;	// IMP=0x0010000000071b5f
+ (id)sharedManager;	// IMP=0x0010000000071b4e
- (void).cxx_destruct;	// IMP=0x001000000007b208
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *authenticatingWithSettingsBundleID; // @synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID;
@property(retain, nonatomic) GKApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSCountedSet *transactionCounts; // @synthesize transactionCounts=_transactionCounts;
@property(retain, nonatomic) NSMutableDictionary *transactionBag; // @synthesize transactionBag=_transactionBag;
@property(retain, nonatomic) APSConnection *pushConnectionDev; // @synthesize pushConnectionDev=_pushConnectionDev;
@property(retain, nonatomic) APSConnection *pushConnectionProd; // @synthesize pushConnectionProd=_pushConnectionProd;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(readonly) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (id)storeBag;	// IMP=0x001000000007b0a4
- (void)terminate;	// IMP=0x001000000007ad52
- (void)beginTransaction:(id)arg1;	// IMP=0x001000000007aa4e
- (void)endTransaction:(id)arg1;	// IMP=0x001000000007a7a1
- (void)processIncomingMessage:(id)arg1;	// IMP=0x001000000007a535
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000007981f
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000079380
- (void)processIncomingiMessageInvite:(id)arg1;	// IMP=0x00100000000789e4
- (void)didReceiveIncomingIDSMessage:(id)arg1;	// IMP=0x00100000000789d2
- (void)gameCenterDidBecomeRestricted;	// IMP=0x001000000007885a
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007852e
- (void)appStateChanged:(id)arg1;	// IMP=0x0010000000077fe2
- (void)terminateClient:(id)arg1;	// IMP=0x0010000000077e96
- (void)synchronizeBagWithPreferences;	// IMP=0x0010000000077c58
- (void)sendPushTokenForClient:(id)arg1;	// IMP=0x0010000000077c52
- (void)loadConnectivitySettingsAndStartNATObserver;	// IMP=0x0010000000077744
- (void)_resetNATObserverWithSettings:(id)arg1;	// IMP=0x0010000000077539
- (void)updateActivePushEnvironment;	// IMP=0x00100000000770d4
- (void)_updatePushEnvironmentWithStoreBag:(id)arg1;	// IMP=0x0010000000076d59
@property(retain) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)_setPushToken:(id)arg1;	// IMP=0x0010000000076a5d
@property long long activePushEnvironment; // @synthesize activePushEnvironment=_activePushEnvironment;
- (void)_setActivePushEnvironment:(long long)arg1;	// IMP=0x00100000000766df
- (void)getValidNATTypeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076275
- (void)NATTypeDidChange:(int)arg1;	// IMP=0x00100000000760d4
@property int natType; // @synthesize natType=_natType;
- (void)_waitForValidNATType;	// IMP=0x0010000000075ea5
- (void)_setConnectivitySettings:(id)arg1;	// IMP=0x0010000000075bf8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000074c67
- (void)resetEnvironment;	// IMP=0x0010000000074a59
@property(readonly, nonatomic) long long preferredEnvironment;
- (void)dealloc;	// IMP=0x0010000000074902
- (void)clearPushEnvironment;	// IMP=0x0010000000074829
- (void)_clearPushConnections;	// IMP=0x001000000007451c
- (void)updateNotificationTopics;	// IMP=0x00100000000744ba
- (void)setUpCloudKitNotificationTopics;	// IMP=0x00100000000744b4
- (void)_updateNotificationTopics;	// IMP=0x0010000000073b0b
@property(readonly, nonatomic) APSConnection *activePushConnection; // @dynamic activePushConnection;
- (id)pushConnectionForEnvironment:(long long)arg1;	// IMP=0x0010000000073ac2
- (void)storeBagChanged:(id)arg1;	// IMP=0x00100000000736ef
- (void)finishStartup;	// IMP=0x001000000007218e
- (void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x0010000000072188
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x0010000000072142
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x0010000000072127
- (id)init;	// IMP=0x0010000000071e67
- (void)lockStatusDidChange;	// IMP=0x0010000000071e61
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071dfb
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071c1e
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000007b645
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x001000000007b2e7
@property(retain, nonatomic) NSMutableSet *removedApp;
- (void)clearAllNearbyInvites;	// IMP=0x00100000000cbd6c
- (void)handleNearbyInviteResponse:(id)arg1;	// IMP=0x00100000000cb6f7
- (void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00100000000cb34a
- (void)presentNearbyInvite:(id)arg1;	// IMP=0x00100000000ca66a
- (id)updateRequestWithPushToken:(id)arg1;	// IMP=0x0010000000213d7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
