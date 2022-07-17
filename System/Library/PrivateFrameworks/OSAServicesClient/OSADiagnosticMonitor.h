//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface OSADiagnosticMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSMutableArray *_eventObservers;	// 24 = 0x18
    NSMutableArray *_writeObservers;	// 32 = 0x20
    NSMutableSet *_observedEventTypes;	// 40 = 0x28
    NSMutableSet *_observedWriteTypes;	// 48 = 0x30
    NSXPCConnection *_serverConnection;	// 56 = 0x38
}

+ (id)sharedMonitor;	// IMP=0x0000000000001f0f
- (void).cxx_destruct;	// IMP=0x00000000000035c4
- (void)q_teardownServerConnectionIfNoMoreObservers;	// IMP=0x000000000000350c
- (id)q_serverConnection;	// IMP=0x000000000000325a
- (void)didWriteLog:(id)arg1;	// IMP=0x00000000000030b2
- (void)willWriteLog:(id)arg1;	// IMP=0x0000000000002f0a
- (void)receivedLogEvent:(id)arg1;	// IMP=0x0000000000002d62
- (void)q_registerForWriteTypes;	// IMP=0x0000000000002c7e
- (void)q_registerForEventTypes;	// IMP=0x0000000000002b9a
- (void)q_computeWriteObserverTypes;	// IMP=0x0000000000002993
- (void)q_computeEventObserverTypes;	// IMP=0x000000000000278c
- (void)q_removeWriteObserver:(id)arg1 andComputeObservedTypes:(_Bool)arg2;	// IMP=0x00000000000026a0
- (void)q_addWriteObserver:(id)arg1 forTypes:(id)arg2;	// IMP=0x00000000000025e0
- (void)q_removeEventObserver:(id)arg1 andComputeObservedTypes:(_Bool)arg2;	// IMP=0x00000000000024d6
- (void)q_addEventObserver:(id)arg1 forTypes:(id)arg2;	// IMP=0x0000000000002416
- (void)removeWriteObserver:(id)arg1;	// IMP=0x000000000000234f
- (void)addWriteObserver:(id)arg1 forTypes:(id)arg2;	// IMP=0x0000000000002276
- (void)removeEventObserver:(id)arg1;	// IMP=0x00000000000021af
- (void)addEventObserver:(id)arg1 forTypes:(id)arg2;	// IMP=0x000000000000207e
- (id)init;	// IMP=0x0000000000001f64

@end
