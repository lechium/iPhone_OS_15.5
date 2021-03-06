//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NRLaunchDaemon : NSObject
{
    NSPointerArray *_xpcClients;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_launchdQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000001c41
- (void).cxx_destruct;	// IMP=0x00200000000049a8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchdQueue; // @synthesize launchdQueue=_launchdQueue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSPointerArray *xpcClients; // @synthesize xpcClients=_xpcClients;
- (void)xpcClearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004947
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004935
- (void)xpcGetBackupHashWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000047b5
- (void)xpcDeleteQuarantinedDataWithStoreUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045a2
- (void)xpcUnquarantineDataWithStoreUUID:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000437b
- (void)xpcQuarantineDataWithStoreUUID:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000040d0
- (void)xpcCleanupPairingStoreWithUUIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003949
- (void)chownWhine:(id)arg1;	// IMP=0x0010000000003822
- (id)deletePairedStoreWithUUID:(id)arg1;	// IMP=0x0010000000003768
- (void)xpcDeletePairedStoreWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003704
- (id)getLocalPairingStorePairingID:(id)arg1;	// IMP=0x0010000000003658
- (id)getLocalPairingStorePath;	// IMP=0x00100000000035cb
- (id)_enableNanoDaemons:(unsigned long long)arg1;	// IMP=0x00100000000026a2
- (void)xpcEnableNanoDaemons:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000025ca
- (id)_enableAltOnlyDaemons:(_Bool)arg1;	// IMP=0x00100000000025c2
- (void)xpcEnableAltOnlyNanoDaemons:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002495
- (id)launchDaemonsPaths;	// IMP=0x001000000000226f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001edc
- (void)xpcStartListener;	// IMP=0x0010000000001e47
- (void)dealloc;	// IMP=0x0010000000001cd2
- (id)init;	// IMP=0x0010000000001b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

