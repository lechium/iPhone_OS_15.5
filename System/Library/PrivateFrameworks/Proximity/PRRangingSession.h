//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/PRAidedRangingClientProtocol-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection, PRPeer, PRRangingDevice;
@protocol OS_dispatch_queue, OS_os_log, PRRangingSessionDelegate;

@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    PRPeer *_localPeer;	// 24 = 0x18
    PRRangingDevice *_rangingDevice;	// 32 = 0x20
    _Bool _isReady;	// 40 = 0x28
    _Bool _valid;	// 41 = 0x29
    id <PRRangingSessionDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 56 = 0x38
    NSMutableSet *_sessionParticipants;	// 64 = 0x40
    PRPeer *_rangedPeer;	// 72 = 0x48
}

+ (unsigned long long)computeLocalDeviceIndex:(id)arg1 sessionParticipants:(id)arg2;	// IMP=0x000000000000e9da
- (void).cxx_destruct;	// IMP=0x000000000000ed15
@property(retain) PRPeer *rangedPeer; // @synthesize rangedPeer=_rangedPeer;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property _Bool isReady; // @synthesize isReady=_isReady;
@property(retain) NSMutableSet *sessionParticipants; // @synthesize sessionParticipants=_sessionParticipants;
@property(readonly, copy) PRPeer *localPeer; // @synthesize localPeer=_localPeer;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <PRRangingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)rangingConfigurationWithDeviceIndex:(unsigned long long)arg1;	// IMP=0x000000000000eb9e
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x000000000000e961
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x000000000000e682
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;	// IMP=0x000000000000e583
- (void)didFailWithError:(id)arg1;	// IMP=0x000000000000e4b1
- (void)sendDataToPeers:(id)arg1;	// IMP=0x000000000000e34a
- (id)remoteObject;	// IMP=0x000000000000e256
- (void)handleInvalidation;	// IMP=0x000000000000e194
- (void)handleInterruption;	// IMP=0x000000000000e073
- (void)connectToDaemon;	// IMP=0x000000000000ddcb
- (void)invalidate;	// IMP=0x000000000000dd1c
- (void)requestInitialCollaborationDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db39
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000daa2
- (void)pushCollaborationData:(id)arg1;	// IMP=0x000000000000d670
- (void)stopRangingWithPeer:(id)arg1;	// IMP=0x000000000000d5e2
- (void)startRangingWithPeer:(id)arg1;	// IMP=0x000000000000d3e8
- (id)init;	// IMP=0x000000000000d2a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

