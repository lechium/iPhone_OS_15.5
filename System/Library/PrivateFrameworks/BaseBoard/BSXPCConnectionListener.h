//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSXPCConnectionListenerHandler, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCConnectionListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    id <BSXPCConnectionListenerHandler> _handler;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026c5b
- (id)description;	// IMP=0x0000000000026b9b
- (void)dealloc;	// IMP=0x0000000000026b53

@end
