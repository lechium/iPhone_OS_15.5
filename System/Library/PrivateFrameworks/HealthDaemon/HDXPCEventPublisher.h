//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface HDXPCEventPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_event_publisher> *_publisher;	// 16 = 0x10
    NSMutableArray *_pendingEvents;	// 24 = 0x18
    NSMutableArray *_pendingSubscribers;	// 32 = 0x20
    NSMutableDictionary *_subscribers;	// 40 = 0x28
    const char *_requiredEntitlement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004a4961
- (void)broadcastEvent:(id)arg1;	// IMP=0x00000000004a48a1
- (id)initWithStream:(const char *)arg1 entitlement:(const char *)arg2;	// IMP=0x00000000004a38ad

@end
