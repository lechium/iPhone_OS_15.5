//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    long long _pushEnabledState;	// 56 = 0x38
    NSMutableArray *_registerBlocks;	// 64 = 0x40
    NSMutableArray *_tokenOperations;	// 72 = 0x48
}

+ (id)_newPushHandlerWithURLBag:(id)arg1;	// IMP=0x00200000000a3b03
+ (_Bool)_amsHandleNotification:(id)arg1 urlBag:(id)arg2;	// IMP=0x00100000000a1731
+ (id)soundFilesDirectoryPath;	// IMP=0x001000000009e65c
+ (id)sharedInstance;	// IMP=0x001000000009e5cf
- (void).cxx_destruct;	// IMP=0x00200000000a6e13
- (void)_updatePushEnabledState;	// IMP=0x00100000000a6870
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x00100000000a6554
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x00100000000a6531
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x00100000000a64ed
- (void)_resetLastRegisterAttemptTime;	// IMP=0x00100000000a64cb
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x00100000000a5f43
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x00100000000a5b10
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x00100000000a52ff
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000a4a31
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x00100000000a4a1d
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x00100000000a43c9
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x00100000000a40bd
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x00100000000a4041
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x00100000000a3d0c
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x00100000000a3c6a
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x00100000000a3a05
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x00100000000a3901
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x00100000000a3176
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x00100000000a30f0
- (_Bool)_isPushEnabled;	// IMP=0x00100000000a30e2
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a2eeb
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x00100000000a294e
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x00100000000a27a7
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00100000000a22b9
- (id)_enabledTopics;	// IMP=0x00100000000a2273
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x00100000000a1e62
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00100000000a19a8
- (id)_bag;	// IMP=0x00100000000a1905
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x00100000000a1612
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x00100000000a14fb
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x00100000000a1435
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x00100000000a1317
- (void)_deviceNameChanged;	// IMP=0x00100000000a10e3
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00100000000a101d
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000a073a
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000a037d
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009fe69
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009fdb1
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009fa36
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000009f614
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000009f56b
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f02a
- (void)postPushTokens;	// IMP=0x001000000009edfc
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x001000000009e71f
- (void)dealloc;	// IMP=0x001000000009e33f
- (id)init;	// IMP=0x001000000009df65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

