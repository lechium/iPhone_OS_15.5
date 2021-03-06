//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSXPCListenerDelegate-Protocol.h>

@class NPKBiometricPassPreflightManager, NPKIDVRemoteDeviceConnectionCoordinator, NPKIDVRemoteDeviceServiceEventsCoordinator, NSMutableSet, NSString, NSXPCListener;

@interface NPKIDVRemoteDeviceSessionService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NPKIDVRemoteDeviceServiceEventsCoordinator *_remoteDeviceEventCoordinator;	// 16 = 0x10
    NPKIDVRemoteDeviceConnectionCoordinator *_remoteDeviceConnectionCoordinator;	// 24 = 0x18
    NPKBiometricPassPreflightManager *_preflightManager;	// 32 = 0x20
    NSMutableSet *_sessionServers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f1586
- (void)_removeServer:(id)arg1;	// IMP=0x00000000001f13f6
- (void)_addServer:(id)arg1;	// IMP=0x00000000001f129f
- (void)_addConnection:(id)arg1;	// IMP=0x00000000001f0dfa
- (void)teardownCurrentRemoteDeviceSessions;	// IMP=0x00000000001f0c32
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001f09a9
- (void)dealloc;	// IMP=0x00000000001f08de
- (id)initWithRemoteDeviceEventsCoordinator:(id)arg1 connectionCoordinator:(id)arg2 preflightManager:(id)arg3;	// IMP=0x00000000001f06e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

