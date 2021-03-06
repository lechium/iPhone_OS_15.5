//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDXPCListenerDelegate-Protocol.h>

@class HDProfile, HDXPCListener, HKHealthStoreConfiguration, HKTaskConfiguration, NSString, NSUUID, NSXPCListenerEndpoint;
@protocol HDTaskServer, HDTaskServerDelegate, HDTaskServerEndpointDelegate;

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate>
{
    Class _taskServerClass;	// 8 = 0x8
    NSUUID *_taskUUID;	// 16 = 0x10
    HKTaskConfiguration *_taskConfiguration;	// 24 = 0x18
    HKHealthStoreConfiguration *_healthStoreConfiguration;	// 32 = 0x20
    HDProfile *_profile;	// 40 = 0x28
    id <HDTaskServer> _taskServer;	// 48 = 0x30
    id <HDTaskServerEndpointDelegate> _delegate;	// 56 = 0x38
    id <HDTaskServerDelegate> _taskServerDelegate;	// 64 = 0x40
    HDXPCListener *_listener;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006afcd7
@property(nonatomic) __weak id <HDTaskServerDelegate> taskServerDelegate; // @synthesize taskServerDelegate=_taskServerDelegate;
@property(nonatomic) __weak id <HDTaskServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <HDTaskServer> taskServer; // @synthesize taskServer=_taskServer;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) HKHealthStoreConfiguration *healthStoreConfiguration; // @synthesize healthStoreConfiguration=_healthStoreConfiguration;
@property(readonly, copy, nonatomic) HKTaskConfiguration *taskConfiguration; // @synthesize taskConfiguration=_taskConfiguration;
@property(readonly, copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
@property(readonly, nonatomic) Class taskServerClass; // @synthesize taskServerClass=_taskServerClass;
- (void)connectionInvalidatedForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;	// IMP=0x00000000006afa7e
- (void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;	// IMP=0x00000000006af954
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006af6b9
- (void)invalidate;	// IMP=0x00000000006af6a3
- (void)resume;	// IMP=0x00000000006af68d
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
- (void)dealloc;	// IMP=0x00000000006af639
- (id)initWithTaskServerClass:(Class)arg1 taskConfiguration:(id)arg2 healthStoreConfiguration:(id)arg3 taskUUID:(id)arg4 profile:(id)arg5 connectionQueue:(id)arg6;	// IMP=0x00000000006af454

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

