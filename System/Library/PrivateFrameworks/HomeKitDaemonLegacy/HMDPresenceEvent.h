//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMDTriggerEventProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDEventTriggerExecutionSession, HMPresenceEventActivation, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDPresenceEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol>
{
    _Bool _currentStatus;	// 8 = 0x8
    NSString *_presenceType;	// 16 = 0x10
    HMPresenceEventActivation *_activation;	// 24 = 0x18
    NSMutableDictionary *_users;	// 32 = 0x20
    NSMutableArray *_userUUIDs;	// 40 = 0x28
    HMDEventTriggerExecutionSession *_executionSession;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029a2de
+ (id)logCategory;	// IMP=0x000000000029a2ae
- (void).cxx_destruct;	// IMP=0x0000000000299b44
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(nonatomic) _Bool currentStatus; // @synthesize currentStatus=_currentStatus;
@property(readonly, nonatomic) NSMutableArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(readonly, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(retain, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)analyticsPresenceEventData;	// IMP=0x0000000000299936
- (id)analyticsTriggerEventData;	// IMP=0x0000000000299869
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000299863
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000002993ac
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000002991e8
- (id)presenceTypeForClient;	// IMP=0x0000000000298ffd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000298aeb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000298691
- (_Bool)removeUser:(id)arg1;	// IMP=0x0000000000298213
- (void)_addUser:(id)arg1;	// IMP=0x00000000002980ea
- (void)_removeAllUsers;	// IMP=0x0000000000298069
- (void)_updateUsers:(id)arg1 home:(id)arg2;	// IMP=0x0000000000297d53
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000297925
- (_Bool)compatibleWithUser:(id)arg1;	// IMP=0x00000000002974b0
- (_Bool)evaluateWithHomePresence:(id)arg1;	// IMP=0x00000000002971bd
- (_Bool)evaluateWithUserPresence:(id)arg1;	// IMP=0x0000000000296dc9
- (_Bool)evaluateWithHomePresenceUpdate:(id)arg1;	// IMP=0x0000000000296c2f
- (void)didEndExecutionSession:(id)arg1;	// IMP=0x0000000000296a69
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;	// IMP=0x0000000000295a60
- (void)_handleHomePresenceUpdate:(id)arg1;	// IMP=0x00000000002959af
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000295783
- (_Bool)isActive;	// IMP=0x0000000000295765
- (void)_registerForMessages;	// IMP=0x00000000002956df
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)thisUser;	// IMP=0x0000000000295611
- (id)emptyModelObject;	// IMP=0x0000000000295558
- (id)createClientPayload;	// IMP=0x0000000000295416
- (id)createDaemonPayload;	// IMP=0x00000000002952df
- (id)createPresenceEventPayload:(_Bool)arg1;	// IMP=0x00000000002952ad
- (id)createPayload;	// IMP=0x000000000029529b
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000002951b9
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000294ecf
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000294d36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end
