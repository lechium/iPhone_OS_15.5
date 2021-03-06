//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthStoreEndpointInterface-Protocol.h>
#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDDaemon, HDHealthStoreServer, HDXPCClient, HKProfileIdentifier, NSString;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    HDDaemon *_daemon;	// 24 = 0x18
    HDXPCClient *_client;	// 32 = 0x20
    HDHealthStoreServer *_server;	// 40 = 0x28
}

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;	// IMP=0x000000000000c68f
- (void).cxx_destruct;	// IMP=0x00000000000451a7
@property(readonly, nonatomic) HDHealthStoreServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void)connectionInvalidated;	// IMP=0x0000000000044e82
- (void)connectionConfigured;	// IMP=0x00000000003a1169
- (id)remoteInterface;	// IMP=0x000000000000ca97
- (id)exportedInterface;	// IMP=0x000000000000caa1
@property(readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
- (void)invalidate;	// IMP=0x0000000000044e94
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000caab
- (id)initWithClient:(id)arg1 daemon:(id)arg2;	// IMP=0x000000000000c94b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

