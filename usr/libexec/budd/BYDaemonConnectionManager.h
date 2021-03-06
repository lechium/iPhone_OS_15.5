//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYDaemonContext, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BYDaemonConnectionManager : NSObject
{
    NSXPCListener *_generalListener;	// 8 = 0x8
    NSXPCListener *_cloudSyncListener;	// 16 = 0x10
    NSXPCListener *_migrationSourceListener;	// 24 = 0x18
    NSXPCListener *_proximitySourceListener;	// 32 = 0x20
    NSXPCListener *_proximityTargetListener;	// 40 = 0x28
    NSXPCListener *_settingsManagerListener;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_pendingFollowUpRevisionQueue;	// 56 = 0x38
    BYDaemonContext *_context;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x002000000000a492
- (void).cxx_destruct;	// IMP=0x002000000000ae5d
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x001000000000adfb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000aa73
- (void)_monitorLocalNotifications;	// IMP=0x001000000000aa17
- (void)_monitorXPCEvents;	// IMP=0x001000000000a99e
- (void)start;	// IMP=0x001000000000a914
- (void)performLaunchTokenUpgrade;	// IMP=0x001000000000a7b1
- (id)init;	// IMP=0x001000000000a5bd
- (void)dealloc;	// IMP=0x001000000000a4e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

