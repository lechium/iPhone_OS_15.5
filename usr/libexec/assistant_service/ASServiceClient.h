//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASServicesMonitor, MISSING_TYPE, NSString, NSXPCConnection;

@interface ASServiceClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    ASServicesMonitor *_servicesMonitor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x001000000000839f
- (id)synchronousProviderServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000838d
- (id)providerServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000837b
- (oneway void)preheatBundleForServicePath:(id)arg1;	// IMP=0x0010000000007ec7
- (oneway void)clearDomainObjectsForServicePath:(id)arg1 className:(id)arg2;	// IMP=0x0010000000007ce1
- (_Bool)_classInstancesSufficientlyRespondToSyncSelectors:(Class)arg1;	// IMP=0x0010000000007c56
- (oneway void)fetchCurrentSyncSnapshotForServicePath:(id)arg1 className:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007892
- (oneway void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x00100000000077c1
- (MISSING_TYPE *)runMaintenanceWorkForServicePath:className:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000007406
- (oneway void)beginSyncForServicePath:(id)arg1 className:(id)arg2 requestUUID:(id)arg3 info:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000701a
- (oneway void)doCommandForServicePath:(id)arg1 className:(id)arg2 infoDictionary:(id)arg3 executionInfo:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000005fab
- (void)barrierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005eec
- (id)_synchronousProviderServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005d63
- (id)_providerServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005bc3
- (id)initWithConnection:(id)arg1 servicesMonitor:(id)arg2;	// IMP=0x0010000000005ac1
- (_Bool)sendSyncChunksWithPreAnchor:(id)arg1 postAnchor:(id)arg2 updates:(id)arg3 deletes:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6;	// IMP=0x0010000000009f13
- (void)serviceMonitorWillCrashAssistantServiceDueToPluginAtPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a0d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

