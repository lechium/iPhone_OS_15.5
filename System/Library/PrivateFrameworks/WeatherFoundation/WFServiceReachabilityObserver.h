//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NWPathEvaluator;
@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    NSMutableDictionary *_blockObserversForUUID;	// 16 = 0x10
    NSHashTable *_observerObjects;	// 24 = 0x18
    long long _reachability;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    NWPathEvaluator *_serviceReachabilityEvaluator;	// 48 = 0x30
}

+ (id)sharedObserver;	// IMP=0x000000000001fd41
- (void).cxx_destruct;	// IMP=0x0000000000021341
@property(retain) NWPathEvaluator *serviceReachabilityEvaluator; // @synthesize serviceReachabilityEvaluator=_serviceReachabilityEvaluator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long reachability; // @synthesize reachability=_reachability;
@property(retain) NSHashTable *observerObjects; // @synthesize observerObjects=_observerObjects;
@property(retain) NSMutableDictionary *blockObserversForUUID; // @synthesize blockObserversForUUID=_blockObserversForUUID;
@property(retain) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)removeAllObservers;	// IMP=0x0000000000021170
- (void)_deliverReachabilityUpdate:(long long)arg1;	// IMP=0x0000000000020c94
- (void)_setupReachability;	// IMP=0x0000000000020acb
- (_Bool)removeBlockObserverWithHandle:(id)arg1;	// IMP=0x0000000000020806
- (id)addBlockObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020622
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000020503
- (_Bool)removeObserver:(id)arg1;	// IMP=0x0000000000020238
- (void)addObserver:(id)arg1;	// IMP=0x00000000000200e4
@property(readonly) _Bool isServiceAvailable;
- (void)dealloc;	// IMP=0x000000000001fe9e
- (id)_init;	// IMP=0x000000000001fdb4
- (id)init;	// IMP=0x000000000001fda6

@end

