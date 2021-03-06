//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection, TaskQueue, XPCClient;

@interface RequestBrokerClient : NSObject
{
    XPCClient *_client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000027686c
@property(readonly, nonatomic) TaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) XPCClient *client; // @synthesize client=_client;
- (void)_trackRequest:(id)arg1;	// IMP=0x0010000000276792
- (void)_releaseRequest:(id)arg1;	// IMP=0x0010000000276716
- (id)description;	// IMP=0x0010000000276645
- (void)submitRequest:(id)arg1 delegate:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000027651b
- (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002761c0
- (void)queueTask:(id)arg1;	// IMP=0x00100000002760c5
- (void)invalidate;	// IMP=0x0010000000276088
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000275ef3

@end

