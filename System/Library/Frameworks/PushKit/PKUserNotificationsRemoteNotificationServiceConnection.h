//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PushKit/PKUserNotificationServerRemoteNotificationXPCClient-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient>
{
    NSMutableSet *_registries;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000001929
- (void).cxx_destruct;	// IMP=0x000000000000305e
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *registries; // @synthesize registries=_registries;
- (void)_queue_remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d2d
- (void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg1;	// IMP=0x0000000000002bdd
- (void)_queue_invalidatedConnection;	// IMP=0x0000000000002bb5
- (void)_queue_interruptedConnection;	// IMP=0x0000000000002ba7
- (id)_queue_ensureConnection;	// IMP=0x0000000000002733
- (void)_invalidate;	// IMP=0x00000000000026cf
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000002627
- (void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000254e
- (_Bool)allowsRemoteNotifications;	// IMP=0x000000000000236e
- (void)unregisterPushRegistry:(id)arg1;	// IMP=0x000000000000219c
- (void)registerPushRegistry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001c87
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000001a73
- (id)init;	// IMP=0x00000000000019ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
