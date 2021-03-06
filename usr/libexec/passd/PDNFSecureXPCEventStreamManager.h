//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PDNFSecureXPCEventStreamManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listenerConnection;	// 16 = 0x10
    NSMutableArray *_peers;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSHashTable *_expressTransactionObservers;	// 40 = 0x28
    NSHashTable *_secureElementObservers;	// 48 = 0x30
    NSHashTable *_carKeyObservers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000208f91
- (id)init;	// IMP=0x0010000000208bd2

@end

