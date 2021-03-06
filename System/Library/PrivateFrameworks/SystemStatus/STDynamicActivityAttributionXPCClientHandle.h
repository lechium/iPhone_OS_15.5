//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/STDynamicActivityAttributionClientHandle-Protocol.h>
#import <SystemStatus/STDynamicAttributionXPCServerProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicActivityAttributionClientHandle, STDynamicAttributionXPCServerProtocol>
{
    CDStruct_4c969caf _auditToken;	// 8 = 0x8
    id <STDynamicActivityAttributionServerHandle> _serverHandle;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000279f
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) __weak id <STDynamicActivityAttributionServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
- (void)subscribeToUpdates;	// IMP=0x0000000000002749
- (void)setCurrentAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000026b0
- (void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002612
- (void)currentAttributionsDidChange:(id)arg1;	// IMP=0x000000000000259f
- (CDStruct_4c969caf)auditToken;	// IMP=0x0000000000002587
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;	// IMP=0x0000000000002183

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

