//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFFlowServiceConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    unsigned long long _pendingTransactionCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedConnection;	// IMP=0x000000000002a083
- (void).cxx_destruct;	// IMP=0x000000000002a753
- (id)_connection;	// IMP=0x000000000002a5a5
- (void)_clearConnection;	// IMP=0x000000000002a54b
- (void)invokeMethodOnRemoteWithBlock:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a18e
- (id)_init;	// IMP=0x000000000002a0e8

@end

