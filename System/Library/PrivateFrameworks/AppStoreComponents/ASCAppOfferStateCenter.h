//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCAppOfferStateDelegate-Protocol.h>

@class AMSPromise, ASCJitterBackoff, ASCPendingPromises, ASCWorkspace, NSMapTable, NSString;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate>
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCWorkspace *_workspace;	// 16 = 0x10
    NSMapTable *_stateMachines;	// 24 = 0x18
    ASCJitterBackoff *_reconnectBackoff;	// 32 = 0x20
    ASCPendingPromises *_pendingActionPromises;	// 40 = 0x28
    AMSPromise *_service;	// 48 = 0x30
}

+ (id)sharedCenter;	// IMP=0x0000000000031e4c
+ (id)log;	// IMP=0x0000000000031df0
- (void).cxx_destruct;	// IMP=0x0000000000034473
@property(retain, nonatomic) AMSPromise *service; // @synthesize service=_service;
@property(readonly, nonatomic) ASCPendingPromises *pendingActionPromises; // @synthesize pendingActionPromises=_pendingActionPromises;
@property(readonly, nonatomic) ASCJitterBackoff *reconnectBackoff; // @synthesize reconnectBackoff=_reconnectBackoff;
@property(readonly, nonatomic) NSMapTable *stateMachines; // @synthesize stateMachines=_stateMachines;
@property(readonly, nonatomic) ASCWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;	// IMP=0x0000000000034199
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;	// IMP=0x0000000000033ff6
- (id)reinstallWatchSystemAppWithBundleID:(id)arg1;	// IMP=0x0000000000033d5d
- (id)reinstallWatchAppWithID:(id)arg1;	// IMP=0x0000000000033ac4
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2;	// IMP=0x00000000000339f0
- (id)performFallbackActionForOffer:(id)arg1;	// IMP=0x0000000000033893
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 usingService:(id)arg3;	// IMP=0x00000000000334bd
- (void)stopObservingStateForOffer:(id)arg1;	// IMP=0x00000000000331ae
- (id)stateMachineForOffer:(id)arg1;	// IMP=0x0000000000032dd1
- (void)daemonDidRebootstrap:(id)arg1;	// IMP=0x0000000000032d74
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x0000000000032c73
- (void)tryReconnect;	// IMP=0x00000000000328a4
- (void)scheduleTryReconnect;	// IMP=0x00000000000327f7
- (void)useOfferStateMachineFallback;	// IMP=0x00000000000325e2
- (void)connectToService;	// IMP=0x00000000000321ad
- (void)dealloc;	// IMP=0x0000000000032138
- (id)initWithConnection:(id)arg1 workspace:(id)arg2;	// IMP=0x0000000000031f16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

