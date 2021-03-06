//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSXPCConnectionDelegate-Protocol.h>
#import <WatchConnectivity/WCXPCPrivateManagerClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCPrivateXPCManagerDelegate;

@interface WCPrivateXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol>
{
    int _listenerResumedToken;	// 8 = 0x8
    int _privateServiceShouldConnectToken;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<WCPrivateXPCManagerDelegate> *_delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000001cfbb
+ (id)privateClientInterface;	// IMP=0x000000000001cfaa
+ (id)privateDaemonInterface;	// IMP=0x000000000001cf99
+ (void)initialize;	// IMP=0x000000000001cf15
- (void).cxx_destruct;	// IMP=0x000000000001dbd3
@property int privateServiceShouldConnectToken; // @synthesize privateServiceShouldConnectToken=_privateServiceShouldConnectToken;
@property int listenerResumedToken; // @synthesize listenerResumedToken=_listenerResumedToken;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak NSObject<WCPrivateXPCManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001daff
- (void)isExtensionPrivileged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001da76
- (void)handlePingForExtensionBundleID:(id)arg1;	// IMP=0x000000000001da01
- (void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001d771
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000000001d6bf
- (void)setupConnection;	// IMP=0x000000000001d400
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x000000000001d38e
- (id)init;	// IMP=0x000000000001d040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

