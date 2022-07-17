//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;

@interface SLRemoteSessionProxy : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSXPCInterface *_remoteInterface;	// 16 = 0x10
    id _remoteProxy;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSMutableArray *_guaranteedRemoteCalls;	// 40 = 0x28
    NSLock *_guaranteedRemoteCallsLock;	// 48 = 0x30
    NSObject *_exportedObject;	// 56 = 0x38
    NSXPCInterface *_exportedInterface;	// 64 = 0x40
    CDUnknownBlockType _connectionResetBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000448be
@property(copy) CDUnknownBlockType connectionResetBlock; // @synthesize connectionResetBlock=_connectionResetBlock;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property __weak NSObject *exportedObject; // @synthesize exportedObject=_exportedObject;
- (void)dropGuaraneteedRemoteCall:(id)arg1;	// IMP=0x00000000000447d2
- (void)registerGuaranteedRemoteCall:(id)arg1;	// IMP=0x0000000000044742
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000044660
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000445f4
- (void)_remoteSessionConnectionWasInterrupted;	// IMP=0x00000000000442b5
- (void)disconnect;	// IMP=0x0000000000044270
- (void)_setupConnection;	// IMP=0x0000000000043dd5
- (void)dealloc;	// IMP=0x0000000000043d61
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;	// IMP=0x0000000000043c93

@end
