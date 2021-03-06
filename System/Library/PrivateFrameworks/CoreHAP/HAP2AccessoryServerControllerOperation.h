//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAP2AccessoryServerController, HMFTimer, NSString;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportRequestEndpoint, HAP2EncodedRequest, HAP2EncodedResponse;

@interface HAP2AccessoryServerControllerOperation <HMFTimerDelegate>
{
    _Bool _attemptedSessionRefresh;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
    HAP2AccessoryServerController *_controller;	// 24 = 0x18
    id <HAP2AccessoryServerEncoding> _encoding;	// 32 = 0x20
    id <HAP2AccessoryServerTransportCommon> _transport;	// 40 = 0x28
    id <HAP2AccessoryServerTransportRequestEndpoint> _endpoint;	// 48 = 0x30
    NSString *_mimeType;	// 56 = 0x38
    double _timeout;	// 64 = 0x40
    unsigned long long _options;	// 72 = 0x48
    id <HAP2EncodedRequest> _request;	// 80 = 0x50
    id <HAP2EncodedResponse> _response;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000004a86a
@property(readonly, copy) NSString *description;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000004a635
- (void)_cleanUp;	// IMP=0x000000000004a62f
- (void)_parseResponseData:(id)arg1;	// IMP=0x000000000004a4f8
- (void)_sendRequest;	// IMP=0x000000000004a1c9
- (void)_openTransport;	// IMP=0x0000000000049edb
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000049e77
- (void)cancel;	// IMP=0x0000000000049e39
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000049d37
- (void)finish;	// IMP=0x0000000000049c61
- (void)main;	// IMP=0x0000000000049bb6
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 request:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;	// IMP=0x0000000000049a4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

