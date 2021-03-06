//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteServiceConnectionEventListener-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSHashTable *_stateUpdateListeners;	// 32 = 0x20
    _Bool _registeredForUpdates;	// 40 = 0x28
}

+ (id)serviceForClientIdentifier:(id)arg1;	// IMP=0x000000000001e077
+ (void)initialize;	// IMP=0x000000000001e06d
- (void).cxx_destruct;	// IMP=0x000000000001f61b
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (_Bool)_queue_registerForStateUpdatesIfRequired;	// IMP=0x000000000001f2e3
- (void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;	// IMP=0x000000000001f068
- (void)removeStateUpdateListener:(id)arg1;	// IMP=0x000000000001eef8
- (void)addStateUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ec01
- (id)queryCurrentStateWithError:(id *)arg1;	// IMP=0x000000000001e87c
- (void)queryCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e44c
- (id)_initWithClientIdentifier:(id)arg1;	// IMP=0x000000000001e2f8
- (_Bool)removeStateUpdateListener:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f670
- (_Bool)addStateUpdateListener:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

