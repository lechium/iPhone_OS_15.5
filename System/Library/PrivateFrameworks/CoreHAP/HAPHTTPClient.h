//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPHTTPClientDebugDelegate-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class HMFNetAddress, NSError, NSObject, NSString;
@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, OS_dispatch_queue;

@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging>
{
    struct HTTPClientPrivate *_httpClient;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    _Bool _invalidateRequested;	// 17 = 0x11
    NSString *_dnsName;	// 24 = 0x18
    long long _port;	// 32 = 0x20
    NSError *_invalidateReason;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <HAPHTTPClientDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    id <HAPHTTPClientDebugDelegate> _debugDelegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;	// 80 = 0x50
    NSString *_wakeAddress;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000012cae6
- (void).cxx_destruct;	// IMP=0x000000000012be11
@property(retain, nonatomic) NSString *wakeAddress; // @synthesize wakeAddress=_wakeAddress;
@property(nonatomic) _Bool invalidateRequested; // @synthesize invalidateRequested=_invalidateRequested;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *debugDelegateQueue; // @synthesize debugDelegateQueue=_debugDelegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSError *invalidateReason; // @synthesize invalidateReason=_invalidateReason;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *dnsName; // @synthesize dnsName=_dnsName;
- (id)logIdentifier;	// IMP=0x000000000012bc40
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;	// IMP=0x000000000012ba53
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;	// IMP=0x000000000012b866
- (_Bool)_debugDelegateRespondsToSelector:(SEL)arg1;	// IMP=0x000000000012b7ba
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x000000000012b70e
- (id)_deserializeUAPJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012b4e6
- (id)_serializeUAPJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012b343
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate *)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ad44
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 activity:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000012a48f
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012a336
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012a1dd
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000012a07d
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000129f3a
- (void)invalidate;	// IMP=0x0000000000129f26
- (void)invalidateWithError:(id)arg1;	// IMP=0x0000000000129ea8
- (_Bool)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id *)arg3;	// IMP=0x0000000000129e27
- (_Bool)_supportsWoL;	// IMP=0x0000000000129df4
- (id)_connectionDestination;	// IMP=0x0000000000129d29
- (int)_initializeCoreUtilsHTTPClientWithPort:(long long)arg1 withEventsEnabled:(_Bool)arg2;	// IMP=0x0000000000129a59
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001299c7
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000129966
@property(readonly, nonatomic) NSString *peerEndpointDescription;
@property(readonly, nonatomic) HMFNetAddress *peerAddress;
@property(readonly, nonatomic) HMFNetAddress *peerAddressEx;
- (void)dealloc;	// IMP=0x00000000001295cb
- (id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(_Bool)arg3 queue:(id)arg4 wakeAddress:(id)arg5;	// IMP=0x0000000000129439
- (id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(_Bool)arg3 queue:(id)arg4;	// IMP=0x0000000000129416
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001293f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
