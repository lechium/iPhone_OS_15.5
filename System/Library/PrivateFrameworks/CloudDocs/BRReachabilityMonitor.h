//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    unsigned int _reachabilityFlags;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedReachabilityMonitor;	// IMP=0x00000000000214b4
+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;	// IMP=0x00000000000210a1
+ (unsigned int)getReachabilityFlagsByCheckingNetwork;	// IMP=0x000000000002101b
- (void).cxx_destruct;	// IMP=0x000000000002198b
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
- (void)invalidate;	// IMP=0x000000000002195c
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000218b1
- (void)addObserver:(id)arg1;	// IMP=0x0000000000021799
@property(readonly, nonatomic) _Bool isNetworkReachable;
- (void)dealloc;	// IMP=0x000000000002146d
- (id)init;	// IMP=0x00000000000210cb

@end

