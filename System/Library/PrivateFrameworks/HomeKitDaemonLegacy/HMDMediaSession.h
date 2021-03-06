//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDMediaEndpoint, HMDMediaSessionState, HMFTimer, NSArray, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableSet *_mediaProfiles;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
    _Bool _currentAccessorySession;	// 25 = 0x19
    NSString *_sessionIdentifier;	// 32 = 0x20
    HMDMediaEndpoint *_endpoint;	// 40 = 0x28
    HMDMediaSessionState *_state;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSUUID *_uuid;	// 72 = 0x48
    NSMutableArray *_setPlaybackStateCompletionHandlers;	// 80 = 0x50
    HMFTimer *_setPlaybackStateTimer;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005981b1
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)arg1;	// IMP=0x00000000005980d2
+ (id)mediaPropertyMessageKeys;	// IMP=0x0000000000598030
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000598028
+ (id)logCategory;	// IMP=0x0000000000597ff8
+ (id)sessionForCurrentAccessoryWithSessionIdentifier:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0000000000597f12
- (void).cxx_destruct;	// IMP=0x0000000000594c99
@property(retain, nonatomic) HMFTimer *setPlaybackStateTimer; // @synthesize setPlaybackStateTimer=_setPlaybackStateTimer;
@property(retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers; // @synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(nonatomic, getter=isCurrentAccessorySession) _Bool currentAccessorySession; // @synthesize currentAccessorySession=_currentAccessorySession;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) HMDMediaSessionState *state; // @synthesize state=_state;
@property(retain, nonatomic) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000594add
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005948a6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005947f0
- (void)writeProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005946d0
- (void)readProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005945f4
- (void)removeMediaProfile:(id)arg1;	// IMP=0x0000000000594529
- (void)addMediaProfile:(id)arg1;	// IMP=0x0000000000594423
@property(readonly, nonatomic) NSArray *mediaProfiles;
- (void)updateEndpoint:(id)arg1;	// IMP=0x000000000059422c
- (void)registerForSessionUpdates:(_Bool)arg1;	// IMP=0x0000000000594084
- (void)_handleMediaUpdateMuted:(id)arg1;	// IMP=0x0000000000593fd5
- (void)_handleMediaUpdateVolume:(id)arg1;	// IMP=0x0000000000593ec5
- (void)_handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x0000000000593d96
- (void)handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x0000000000593ce5
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;	// IMP=0x0000000000593a1c
- (void)handleSetPlayback:(id)arg1;	// IMP=0x000000000059396b
- (void)_handleSetPlayback:(id)arg1;	// IMP=0x0000000000593800
- (void)_setPlaybackState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000593265
- (void)_queueSetPlaybackStateCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000059307c
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;	// IMP=0x0000000000592e9d
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;	// IMP=0x0000000000592dc1
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg1;	// IMP=0x0000000000592b31
- (void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)arg1;	// IMP=0x0000000000592a7b
- (void)_postNotificationOfMediaStateUpdate;	// IMP=0x0000000000592a67
- (void)_registerForSessionUpdates:(_Bool)arg1;	// IMP=0x00000000005929e4
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1;	// IMP=0x0000000000592819
- (void)handleMediaPlaybackStateNotification:(id)arg1;	// IMP=0x0000000000592768
- (void)handleRefreshPlayback:(id)arg1;	// IMP=0x00000000005926b7
- (void)_handleGetPlaybackState:(id)arg1;	// IMP=0x00000000005925da
- (void)_getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005921e0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;	// IMP=0x0000000000591ff2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000591f1e
@property(readonly) unsigned long long hash;
- (id)logIdentifier;	// IMP=0x0000000000591ec8
- (void)dealloc;	// IMP=0x0000000000591e4e
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;	// IMP=0x0000000000591e34
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x0000000000591e22
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x0000000000591acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

