//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSDaemon, NSMutableArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface APSTaskServer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    APSDaemon *_daemon;	// 24 = 0x18
    NSMutableArray *_outstandingTaskList;	// 32 = 0x20
    NSMutableArray *_dnsCache;	// 40 = 0x28
    CDUnknownBlockType _remoteDNSResponseHandler;	// 48 = 0x30
    NSString *_environmentName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000015561
@property(readonly, nonatomic) APSDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleTaskNotificationMessage:(id)arg1 message:(id)arg2;	// IMP=0x0010000000014661
- (id)_getCacheEntryForHostname:(id)arg1;	// IMP=0x001000000001449c
- (void)handleTaskControlResponseMessage:(id)arg1 message:(id)arg2;	// IMP=0x0010000000014100
- (void)_handleTaskControlResponse:(id)arg1 controlResponse:(id)arg2;	// IMP=0x0010000000013a38
- (id)getTaskWithTaskId:(unsigned long long)arg1;	// IMP=0x00100000000138e3
- (id)getTaskWithMessageId:(unsigned long long)arg1;	// IMP=0x001000000001378e
- (void)resolveDNS:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001303e
- (id)_getCourierForEnvironmentName:(id)arg1;	// IMP=0x0010000000013028
- (void)dealloc;	// IMP=0x0010000000012f48
- (id)initWithConnection:(id)arg1 queue:(id)arg2 apsDaemon:(id)arg3;	// IMP=0x0010000000012e50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
