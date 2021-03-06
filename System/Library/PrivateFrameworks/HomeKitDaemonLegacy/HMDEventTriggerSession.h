//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDDevice, HMDEventTrigger, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSUUID *_sessionID;	// 8 = 0x8
    NSString *_logString;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDEventTrigger *_eventTrigger;	// 40 = 0x28
    NSUUID *_eventTriggerUUID;	// 48 = 0x30
    HMDDevice *_currentDevice;	// 56 = 0x38
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000004c1379
+ (id)logCategory;	// IMP=0x00000000004c1349
- (void).cxx_destruct;	// IMP=0x00000000004c12c5
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) NSUUID *eventTriggerUUID; // @synthesize eventTriggerUUID=_eventTriggerUUID;
@property(nonatomic) __weak HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (_Bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000004c0f71
- (_Bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004c0e9e
- (_Bool)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c0d6f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000004c0d39
@property(readonly, copy) NSString *description;
- (id)dumpState;	// IMP=0x00000000004c0bc5
- (void)_registerForMessages;	// IMP=0x00000000004c0bbf
- (void)dealloc;	// IMP=0x00000000004c0a2d
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;	// IMP=0x00000000004c0806

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

