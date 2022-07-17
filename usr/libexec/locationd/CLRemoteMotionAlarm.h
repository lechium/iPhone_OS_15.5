//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableSet, NSString;
@protocol CLLocationStreamingConnectionManagerServiceProtocol;

@interface CLRemoteMotionAlarm : CLIntersiloService
{
    int _lastKnownMotionState;	// 8 = 0x8
    id <CLLocationStreamingConnectionManagerServiceProtocol> _streamingConnection;	// 16 = 0x10
    NSMutableSet *_motionAlarmClients;	// 24 = 0x18
    CLTimer *_resendTimer;	// 32 = 0x20
    CLTimer *_revertToUnknownTimer;	// 40 = 0x28
}

+ (_Bool)isSupported;	// IMP=0x00200000005f3d4c
+ (id)getSilo;	// IMP=0x00100000005f3cf0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005f3cd7
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005f3c7a
@property(retain, nonatomic) CLTimer *revertToUnknownTimer; // @synthesize revertToUnknownTimer=_revertToUnknownTimer;
@property(retain, nonatomic) CLTimer *resendTimer; // @synthesize resendTimer=_resendTimer;
@property(nonatomic) int lastKnownMotionState; // @synthesize lastKnownMotionState=_lastKnownMotionState;
@property(retain, nonatomic) NSMutableSet *motionAlarmClients; // @synthesize motionAlarmClients=_motionAlarmClients;
@property(retain, nonatomic) id <CLLocationStreamingConnectionManagerServiceProtocol> streamingConnection; // @synthesize streamingConnection=_streamingConnection;
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x00100000005f4b39
- (void)successfullySentMessage:(id)arg1;	// IMP=0x00100000005f4b33
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x00100000005f4b2d
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x00100000005f496a
- (void)unregisterClientForRemoteMotionAlarm:(byref id)arg1;	// IMP=0x00100000005f4920
- (void)registerClientForRemoteMotionAlarm:(byref id)arg1;	// IMP=0x00100000005f487b
- (void)sendMotionAlarmRequest;	// IMP=0x00100000005f4696
- (void)delayRevertToUnknownTimer;	// IMP=0x00100000005f4660
- (void)evaluateMotionAlarmState;	// IMP=0x00100000005f43b5
- (void)endService;	// IMP=0x00100000005f414f
- (void)beginService;	// IMP=0x00100000005f3de0
- (id)init;	// IMP=0x00100000005f3da3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
