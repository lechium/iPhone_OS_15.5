//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSXPCListenerDelegate-Protocol.h>
#import <UserNotifications/UNUserNotificationCenterDelegateServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol>
{
    NSMutableDictionary *_listenerByBundleIdentifier;	// 8 = 0x8
    NSMutableDictionary *_delegateByBundleIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000000a991
- (void).cxx_destruct;	// IMP=0x000000000000ba6a
- (void)_queue_didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000b80a
- (void)_queue_didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000b65f
- (void)_queue_didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b33a
- (void)_queue_invalidateListenerForBundleIdentifier:(id)arg1;	// IMP=0x000000000000b240
- (void)_queue_ensureListenerForBundleIdentifier:(id)arg1;	// IMP=0x000000000000b0e3
- (void)_queue_setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000b03d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000aee4
- (void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000ae0b
- (void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000ad32
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000abaa
- (void)setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000aad1
- (id)init;	// IMP=0x000000000000a9e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

