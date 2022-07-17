//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface RPPrivateDaemon : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _prefPrivateDiscoveryEnabled;	// 10 = 0xa
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedPrivateDaemon;	// IMP=0x0020000000062f14
- (void).cxx_destruct;	// IMP=0x002000000006491d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x001000000006481f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000064603
- (void)removeDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006437a
- (void)addDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000641ef
- (void)removeAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063f66
- (void)addAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063d6b
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0010000000063d63
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063d5b
- (void)prefsChanged;	// IMP=0x0010000000063d49
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0010000000063d41
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x0010000000063d3b
- (void)_processAnswerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0010000000063c79
- (void)_processQueryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0010000000063bb7
- (void)_processAnnouncementPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0010000000063a64
- (void)_processResponsePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x001000000006391b
- (void)_processProbePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x00100000000637c8
- (void)_processPacketPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x00100000000636a0
- (void)_ensureStopped;	// IMP=0x001000000006369a
- (void)_ensureStarted;	// IMP=0x0010000000063694
- (void)_update;	// IMP=0x0010000000063670
- (void)_invalidated;	// IMP=0x001000000006360c
- (void)_invalidate;	// IMP=0x0010000000063571
- (void)invalidate;	// IMP=0x0010000000063510
- (void)activate;	// IMP=0x00100000000633de
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000062fe8
- (id)init;	// IMP=0x0010000000062f69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
