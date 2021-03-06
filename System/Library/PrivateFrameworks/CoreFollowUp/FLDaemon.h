//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSLock *_connLock;	// 16 = 0x10
    NSXPCListenerEndpoint *_daemonXPCEndpoint;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000000fe03
+ (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fd7c
- (void).cxx_destruct;	// IMP=0x0000000000010563
@property(retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // @synthesize daemonXPCEndpoint=_daemonXPCEndpoint;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000104d6
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010453
- (void)invalidateConnection;	// IMP=0x0000000000010400
- (id)remoteObjectInterface;	// IMP=0x0000000000010332
- (id)connection;	// IMP=0x000000000000fef0
- (void)dealloc;	// IMP=0x000000000000feae
- (id)init;	// IMP=0x000000000000fe58

@end

