//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCommonClass-Protocol.h>
#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, RPCompanionLinkClient, _DKEventTypeResultStatsCounter;
@protocol OS_dispatch_source;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass>
{
    _Bool _running;	// 8 = 0x8
    NSDictionary *_failIfAsleepOption;	// 16 = 0x10
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    RPCompanionLinkClient *_client;	// 40 = 0x28
    NSMutableDictionary *_companionLinkClients;	// 48 = 0x30
    unsigned long long _outstandingRequestCount;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;	// 64 = 0x40
    double _retryTimeout;	// 72 = 0x48
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;	// 80 = 0x50
    _Bool _isAvailable;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00000000001759d5
- (void).cxx_destruct;	// IMP=0x000000000017ef8d
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017ecd3
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(_Bool)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000017de0f
- (_Bool)isTransportActiveForPeer:(id)arg1;	// IMP=0x000000000017dd7d
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017caf3
- (id)client;	// IMP=0x000000000017cae5
- (void)setDeviceID:(id)arg1;	// IMP=0x000000000017cad4
- (id)myDeviceID;	// IMP=0x000000000017c9d8
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;	// IMP=0x000000000017c607
- (id)transformResponseError:(id)arg1;	// IMP=0x000000000017c486
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;	// IMP=0x000000000017a560
- (long long)transportType;	// IMP=0x0000000000176177
- (id)name;	// IMP=0x000000000017616a
- (void)cancelOutstandingOperations;	// IMP=0x000000000017612e
- (void)start;	// IMP=0x0000000000175dc8
- (void)dealloc;	// IMP=0x0000000000175b5e
- (id)init;	// IMP=0x0000000000175a2a

@end

