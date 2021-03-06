//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient;

@interface MRCompanionLinkClient : NSObject
{
    NSMutableSet *_pendingRegisteredEvents;	// 8 = 0x8
    NSMutableSet *_registeredEvents;	// 16 = 0x10
    NSMutableArray *_pendingEvents;	// 24 = 0x18
    NSMutableSet *_pendingRegisteredRequests;	// 32 = 0x20
    NSMutableSet *_registeredRequests;	// 40 = 0x28
    NSMutableArray *_pendingRequests;	// 48 = 0x30
    RPCompanionLinkClient *_connection;	// 56 = 0x38
    NSMutableDictionary *_eventCallbacks;	// 64 = 0x40
    NSMutableDictionary *_requestCallbacks;	// 72 = 0x48
}

+ (void)rapportCompanionLinkClient:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042a91
+ (id)sharedIDSCompanionLinkClient;	// IMP=0x0000000000042a64
+ (id)sharedCompanionLinkClient;	// IMP=0x00000000000429fd
- (void).cxx_destruct;	// IMP=0x00000000000477f0
@property(retain, nonatomic) NSMutableDictionary *requestCallbacks; // @synthesize requestCallbacks=_requestCallbacks;
@property(retain, nonatomic) NSMutableDictionary *eventCallbacks; // @synthesize eventCallbacks=_eventCallbacks;
@property(retain, nonatomic) RPCompanionLinkClient *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSArray *companionLinkDevices;
- (id)_resolveEventID:(id)arg1;	// IMP=0x000000000004770a
- (void)_handleRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000000046e95
- (void)_handleEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x00000000000466e9
- (void)_enqueueRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x00000000000464ca
- (void)_sendRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x000000000004616e
- (void)_enqueueEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;	// IMP=0x0000000000045fbb
- (void)_sendEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;	// IMP=0x0000000000045c2c
- (void)sendRequest:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 timeout:(double)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045639
- (void)sendEvent:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000454e4
- (void)sendEvent:(id)arg1 toDevicesOfHomeUser:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000004516a
- (void)sendEventToCompanion:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000004514b
- (void)sendEventToHome:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000004512c
- (void)_registerRequest:(id)arg1;	// IMP=0x0000000000044ea5
- (void)_registerEvent:(id)arg1;	// IMP=0x0000000000044cc3
- (void)removeCallback:(id)arg1;	// IMP=0x0000000000044966
- (id)registerRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000004478c
- (id)registerEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000445e9
- (id)nameForUID:(id)arg1;	// IMP=0x0000000000044269
- (id)rapportUIDForDeviceUID:(id)arg1;	// IMP=0x0000000000043c98
- (id)deviceUIDForRapportUID:(id)arg1;	// IMP=0x00000000000436c7
- (id)initWithOptions:(int)arg1;	// IMP=0x0000000000042e54

@end

