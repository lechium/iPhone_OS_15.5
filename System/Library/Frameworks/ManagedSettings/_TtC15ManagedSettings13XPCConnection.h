//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <ManagedSettings/NSXPCProxyCreating-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15ManagedSettings13XPCConnection : _TtCs12_SwiftObject <NSXPCProxyCreating>
{
    MISSING_TYPE *nsXPCConnection;	// 16 = 0x10
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d3a0
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d270
- (id)remoteObjectProxy;	// IMP=0x000000000001d180

@end

