//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegateAccountStoreService-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICUserIdentityStore, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _ignoresEntitlements;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
    ICUserIdentityStore *_testingIdentityStore;	// 48 = 0x30
}

+ (id)testingListenerWithIdentityStore:(id)arg1;	// IMP=0x000000000009992e
+ (id)machServiceListener;	// IMP=0x00000000000998bf
- (void).cxx_destruct;	// IMP=0x00000000000994d0
- (id)_identityStore;	// IMP=0x0000000000099496
- (void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000009944b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000009919a
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000990b6
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000098fd2
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000098f4c
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000098ec6
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000098e40
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000098da6
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098d34
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098cc2
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098c50
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000098bb6
@property(readonly, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
- (void)suspend;	// IMP=0x0000000000098b8a
- (void)resume;	// IMP=0x0000000000098b74
- (void)invalidate;	// IMP=0x0000000000098b5e
- (id)_initWithXPCListener:(id)arg1 testingIdentityStore:(id)arg2;	// IMP=0x00000000000989f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

