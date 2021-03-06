//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/WiFiAwareSubscriberDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, WiFiAwareSubscriber;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate>
{
    CDUnknownBlockType _activateCompletion;	// 8 = 0x8
    _Bool _invalidateCalled;	// 16 = 0x10
    _Bool _invalidateDone;	// 17 = 0x11
    struct _opaque_pthread_mutex_t _mutex;	// 24 = 0x18
    _Bool _startedCalled;	// 88 = 0x58
    struct LogCategory *_ucat;	// 96 = 0x60
    NSMutableDictionary *_wfaEndpoints;	// 104 = 0x68
    WiFiAwareSubscriber *_wfaSubscriber;	// 112 = 0x70
    unsigned int _changeFlags;	// 120 = 0x78
    unsigned int _controlFlags;	// 124 = 0x7c
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 128 = 0x80
    NSString *_label;	// 136 = 0x88
    NSString *_serviceType;	// 144 = 0x90
    CDUnknownBlockType _endpointFoundHandler;	// 152 = 0x98
    CDUnknownBlockType _endpointLostHandler;	// 160 = 0xa0
    CDUnknownBlockType _endpointChangedHandler;	// 168 = 0xa8
    CDUnknownBlockType _interruptionHandler;	// 176 = 0xb0
    CDUnknownBlockType _invalidationHandler;	// 184 = 0xb8
    CDUnknownBlockType _receiveHandler;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000007b82a
@property(copy, nonatomic) CDUnknownBlockType receiveHandler; // @synthesize receiveHandler=_receiveHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int controlFlags; // @synthesize controlFlags=_controlFlags;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;	// IMP=0x000000000007b64d
- (void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;	// IMP=0x000000000007b3ae
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;	// IMP=0x000000000007b2eb
- (void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;	// IMP=0x000000000007aea0
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;	// IMP=0x000000000007ade5
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;	// IMP=0x000000000007ad93
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;	// IMP=0x000000000007ad41
- (void)subscriberStarted:(id)arg1;	// IMP=0x000000000007acf3
- (void)sendMessageData:(id)arg1 endpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007ac07
- (void)_lostAllEndpoints;	// IMP=0x000000000007ab80
- (void)_invalidated;	// IMP=0x000000000007aa7e
- (void)_invalidate;	// IMP=0x000000000007a9b2
- (void)invalidate;	// IMP=0x000000000007a964
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a6f4
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a666
@property(readonly, copy) NSArray *discoveredEndpoints;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000007a3c0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000007a353
- (id)init;	// IMP=0x000000000007a2ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

