//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFCFHTTPServerDelegate;

@interface _HMFCFHTTPServer <HMFLogging>
{
    id <_HMFCFHTTPServerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _port;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    struct _CFHTTPServer *_internal;	// 32 = 0x20
    NSMutableArray *_connections;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000001d4c7
- (void).cxx_destruct;	// IMP=0x000000000001d5de
@property(readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) struct _CFHTTPServer *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property __weak id <_HMFCFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000001d52e
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;	// IMP=0x000000000001d468
- (void)setWatchdogTimeout:(double)arg1;	// IMP=0x000000000001d40d
- (double)watchdogTimeout;	// IMP=0x000000000001d34c
@property double connectionIdleTimeout;
- (void)dealloc;	// IMP=0x000000000001d09e
- (id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001c27b
- (id)init;	// IMP=0x000000000001c1d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
