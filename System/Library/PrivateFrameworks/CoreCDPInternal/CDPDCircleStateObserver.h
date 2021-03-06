//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDXPCEventListener-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener>
{
    int _circleChangeToken;	// 8 = 0x8
    _Bool _isObserving;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_eventQueue;	// 16 = 0x10
    NSMutableArray *_circleObservers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003020
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;	// IMP=0x0000000000002f12
- (void)registerListener:(id)arg1;	// IMP=0x0000000000002efc
- (void)stopObservingCircleStatusChange;	// IMP=0x0000000000002ee0
- (void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002e28
- (void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002bd8
- (const char *)_notificationName;	// IMP=0x0000000000002bc8
- (void)dealloc;	// IMP=0x0000000000002b5c
- (id)init;	// IMP=0x0000000000002aae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

