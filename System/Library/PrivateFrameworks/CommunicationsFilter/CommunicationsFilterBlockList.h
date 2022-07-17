//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    int _retries;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableArray *_recentObjectsTested;	// 32 = 0x20
    CommunicationsFilterBlockListCache *_cache;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000001bb0
- (void)_disconnected;	// IMP=0x00000000000027c5
- (_Bool)_disconnect;	// IMP=0x00000000000027bd
- (_Bool)_connect;	// IMP=0x0000000000002665
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002314
- (id)_sendSynchronousXPCRequest:(id)arg1;	// IMP=0x00000000000021d7
- (_Bool)isItemInList:(id)arg1;	// IMP=0x000000000000202d
- (id)copyAllItems;	// IMP=0x0000000000001dd4
- (void)removeItemForAllServices:(id)arg1;	// IMP=0x0000000000001d38
- (void)addItemForAllServices:(id)arg1;	// IMP=0x0000000000001c9f
- (void)dealloc;	// IMP=0x0000000000001c53
- (id)init;	// IMP=0x0000000000001bf5

@end
