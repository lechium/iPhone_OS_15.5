//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRDAutoConnectionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    NSMutableDictionary *_pendingReconSessions;	// 24 = 0x18
    NSMutableDictionary *_pendingReconSessionCompletions;	// 32 = 0x20
    NSMutableDictionary *_pendingGroupReconSessions;	// 40 = 0x28
    NSMutableDictionary *_pendingGroupReconSessionCompletions;	// 48 = 0x30
    NSMutableSet *_connectedEndpoints;	// 56 = 0x38
    NSMutableDictionary *_connectingEndpoints;	// 64 = 0x40
    NSMutableDictionary *_pendingConnectingEndpointCompletions;	// 72 = 0x48
}

+ (id)sharedConnectionController;	// IMP=0x004000000009cb8b
- (void).cxx_destruct;	// IMP=0x00200000000a1710
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000a158b
- (void)_handleEndpointDidInvalidateNotification:(id)arg1;	// IMP=0x00100000000a144f
- (void)_onSerialQueue_removeConnectedEndpoint:(id)arg1;	// IMP=0x00100000000a118a
- (void)_onSerialQueue_addConnectedEndpoint:(id)arg1;	// IMP=0x00100000000a0c9a
- (void)_onSerialQueue_connectToEndpoint:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009fe48
- (void)_onSerialQueue_discoverGroup:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009f7dd
- (void)_onSerialQueue_discoverOutputDevice:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ee75
- (void)_discoverGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ed69
- (void)_discoverOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ec5d
- (void)_connectToGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009eb4e
- (void)_connectToOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ea3c
- (void)_connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009e10f
- (void)discoverGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009dedf
- (void)discoverOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009dcaf
- (void)connectToGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009da7f
- (void)connectToOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009d84f
- (void)connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009d5f8
@property(readonly, nonatomic) NSArray *autoConnectedEndpoints;
@property(readonly, nonatomic) NSArray *autoConnectingEndpoints;
- (id)_init;	// IMP=0x001000000009cbf0

@end
