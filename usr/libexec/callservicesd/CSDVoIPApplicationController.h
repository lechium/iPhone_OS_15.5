//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, CSDCallStateController, CSDClientManager, CSDVoIPApplicationMonitor, CXNetworkExtensionMessageControllerHost, CXNotificationServiceExtensionVoIPXPCHost, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSDVoIPApplicationController : NSObject
{
    CSDCallStateController *_callStateController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDClientManager *_networkExtensionClientManager;	// 24 = 0x18
    CSDClientManager *_pushKitClientManager;	// 32 = 0x20
    APSConnection *_productionConnection;	// 40 = 0x28
    APSConnection *_developmentConnection;	// 48 = 0x30
    CXNetworkExtensionMessageControllerHost *_networkExtensionMessageHost;	// 56 = 0x38
    CXNotificationServiceExtensionVoIPXPCHost *_nseMessageHost;	// 64 = 0x40
    NSMutableDictionary *_bundleIdentifierToVoIPApplication;	// 72 = 0x48
    CSDVoIPApplicationMonitor *_applicationMonitor;	// 80 = 0x50
    NSMutableDictionary *_outstandingMessages;	// 88 = 0x58
}

+ (id)topicFromBundleId:(id)arg1;	// IMP=0x00200000001442d7
+ (id)bundleIdFromTopic:(id)arg1;	// IMP=0x001000000014425f
- (void).cxx_destruct;	// IMP=0x0020000000146c03
@property(readonly, nonatomic) NSMutableDictionary *outstandingMessages; // @synthesize outstandingMessages=_outstandingMessages;
@property(readonly, nonatomic) CSDVoIPApplicationMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIdentifierToVoIPApplication; // @synthesize bundleIdentifierToVoIPApplication=_bundleIdentifierToVoIPApplication;
@property(readonly, nonatomic) CXNotificationServiceExtensionVoIPXPCHost *nseMessageHost; // @synthesize nseMessageHost=_nseMessageHost;
@property(readonly, nonatomic) CXNetworkExtensionMessageControllerHost *networkExtensionMessageHost; // @synthesize networkExtensionMessageHost=_networkExtensionMessageHost;
@property(retain, nonatomic) APSConnection *developmentConnection; // @synthesize developmentConnection=_developmentConnection;
@property(retain, nonatomic) APSConnection *productionConnection; // @synthesize productionConnection=_productionConnection;
@property(retain, nonatomic) CSDClientManager *pushKitClientManager; // @synthesize pushKitClientManager=_pushKitClientManager;
@property(retain, nonatomic) CSDClientManager *networkExtensionClientManager; // @synthesize networkExtensionClientManager=_networkExtensionClientManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
- (void)notificationServiceExtensionHost:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001468fe
- (void)openApplicationWithBundleIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x0010000000145c7f
- (void)removeOutstandingMessagesForBundleIdentifier:(id)arg1;	// IMP=0x0010000000145c0b
- (_Bool)containsOutstandingMessage:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000145b61
- (_Bool)containsAnyOutstandingMessageForBundleIdentifier:(id)arg1;	// IMP=0x0010000000145aca
- (void)addOutstandingMessage:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000001459d1
- (void)_removeTopic:(id)arg1 fromConnection:(id)arg2;	// IMP=0x001000000014590b
- (void)networkExtensionMessageControllerHost:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00100000001457ff
- (void)_unregisterPushKitApplication:(id)arg1 inEnvironment:(id)arg2;	// IMP=0x001000000014542d
- (void)_registerPushKitApplicationWithBundleIdentifier:(id)arg1 client:(id)arg2 environment:(id)arg3;	// IMP=0x0010000000144ed7
- (void)_unregisterNetworkExtensionApplication:(id)arg1;	// IMP=0x0010000000144dc0
- (void)_registerNetworkExtensionApplicationWithBundleIdentifier:(id)arg1 client:(id)arg2;	// IMP=0x0010000000144bb8
- (id)_createAPSConnectionForEnvironment:(id)arg1 namedDelegatePort:(id)arg2;	// IMP=0x0010000000144afa
- (id)_apsConnectionForEnvironment:(id)arg1;	// IMP=0x0010000000144984
- (void)_pruneUninstalledAppPushTopicsForConnection:(id)arg1;	// IMP=0x00100000001444c6
- (void)_pruneUninstalledAppPushTopics;	// IMP=0x001000000014443e
- (id)_findOrCreateApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000144303
- (_Bool)_appHasOngoingCall:(id)arg1;	// IMP=0x00100000001441c9
- (_Bool)_isApplicationPreventedFromBeingLaunched:(id)arg1;	// IMP=0x00100000001440ce
- (void)_incrementKillCountForApplication:(id)arg1;	// IMP=0x0010000000143e3f
- (void)_removeApplicationFromKillCountsDictionary:(id)arg1;	// IMP=0x0010000000143cd7
- (void)_removeAllApplicationsFromKillCountsDictionary;	// IMP=0x0010000000143c30
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000143a44
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00100000001438c7
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000143446
- (void)voipUnregister;	// IMP=0x00100000001431d6
- (void)voipRegister;	// IMP=0x0010000000142f3c
- (void)unregisterVoIPNetworkExtension;	// IMP=0x0010000000142cf9
- (void)registerVoIPNetworkExtension;	// IMP=0x0010000000142acf
- (void)dealloc;	// IMP=0x00100000001429d5
- (void)handleApplicationUninstalledNotification:(id)arg1;	// IMP=0x00100000001426e8
- (void)noteReportedNewIncomingVoIPCallForBundleIdentifier:(id)arg1;	// IMP=0x00100000001426d6
- (id)init;	// IMP=0x0010000000141953

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

