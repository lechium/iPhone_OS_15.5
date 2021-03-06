//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject
{
    id <SSEventMonitorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSXPCConnection *_eventConnection;	// 32 = 0x20
}

- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;	// IMP=0x00000000000d3f45
- (void)_connectEventConnection;	// IMP=0x00000000000d3d09
@property id <SSEventMonitorDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000000d3af8
- (id)init;	// IMP=0x00000000000d3a13

@end

