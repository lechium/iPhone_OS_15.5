//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/WiFiP2PAWDLStateMonitorXPCDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate>
{
    NSObject<OS_dispatch_source> *_connectionRetryTimer;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _stateUpdatedHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014b82
@property(copy, nonatomic) CDUnknownBlockType stateUpdatedHandler; // @synthesize stateUpdatedHandler=_stateUpdatedHandler;
- (int)queryAverageRSSIForPeer:(id)arg1;	// IMP=0x00000000000149be
- (void)updatedAWDLState:(id)arg1;	// IMP=0x000000000001493e
- (void)endMonitoring;	// IMP=0x00000000000148dd
- (void)beginMonitoring;	// IMP=0x00000000000145eb
- (void)retryConnection;	// IMP=0x000000000001444f
- (void)resetState;	// IMP=0x00000000000143d1
- (void)dealloc;	// IMP=0x0000000000014393
- (id)init;	// IMP=0x0000000000014307

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

