//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SiriCoreNetworkActivityTracing : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_activities;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
}

+ (id)sharedNetworkActivityTracing;	// IMP=0x000000000000c680
- (void).cxx_destruct;	// IMP=0x000000000000d8f7
- (void)_networkActivityRemoveNWConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d7f2
- (void)_networkActivityAddNWConnection:(id)arg1;	// IMP=0x000000000000d71b
- (void)_networkActivityTracingCancel;	// IMP=0x000000000000d6e0
- (void)_networkActivityStop:(long long)arg1 withReason:(long long)arg2 andError:(id)arg3;	// IMP=0x000000000000d140
- (void)_networkActivityActivate:(long long)arg1;	// IMP=0x000000000000d068
- (void)_networkActivityStart:(long long)arg1 activate:(_Bool)arg2;	// IMP=0x000000000000cce8
- (void)currentNetworkActivityTokenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cba6
- (void)networkActivityRemoveNWConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ca89
- (void)networkActivityAddNWConnection:(id)arg1;	// IMP=0x000000000000c9e1
- (void)networkActivityTracingCancel;	// IMP=0x000000000000c980
- (void)networkActivityStop:(long long)arg1 withReason:(long long)arg2 andError:(id)arg3;	// IMP=0x000000000000c8bb
- (void)networkActivityActivate:(long long)arg1;	// IMP=0x000000000000c84f
- (void)networkActivityStart:(long long)arg1 activate:(_Bool)arg2;	// IMP=0x000000000000c7da
- (id)init;	// IMP=0x000000000000c6d5

@end

