//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDActionSetEvent, HMDApplicationData, HMDHome, HMFMessage, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDActionSet : HMFObject <HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSUUID *_spiClientIdentifier;	// 40 = 0x28
    HMDHome *_home;	// 48 = 0x30
    NSDate *_lastExecutionDate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    HMFMessageDispatcher *_msgDispatcher;	// 72 = 0x48
    NSMutableArray *_currentActions;	// 80 = 0x50
    HMFTimer *_executionTimeout;	// 88 = 0x58
    NSDate *_executionStart;	// 96 = 0x60
    HMFMessage *_executionMessage;	// 104 = 0x68
    NSDictionary *_executionInitialStates;	// 112 = 0x70
    HMDActionSetEvent *_executionActionSetEvent;	// 120 = 0x78
    HMDApplicationData *_appData;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x0000000000236321
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000236319
+ (id)allowedActionClasses;	// IMP=0x000000000023622e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000236226
+ (_Bool)isBuiltinActionSetType:(id)arg1;	// IMP=0x0000000000236188
- (void).cxx_destruct;	// IMP=0x0000000000231cd4
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDActionSetEvent *executionActionSetEvent; // @synthesize executionActionSetEvent=_executionActionSetEvent;
@property(retain, nonatomic) NSDictionary *executionInitialStates; // @synthesize executionInitialStates=_executionInitialStates;
@property(retain, nonatomic) HMFMessage *executionMessage; // @synthesize executionMessage=_executionMessage;
@property(retain, nonatomic) NSDate *executionStart; // @synthesize executionStart=_executionStart;
@property(retain, nonatomic) HMFTimer *executionTimeout; // @synthesize executionTimeout=_executionTimeout;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (id)logIdentifier;	// IMP=0x0000000000231a43
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000231502
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000231379
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000002311b6
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000023096e
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000230740
- (void)_executeGenericActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002302b3
- (void)_executeMediaPlaybackActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022fd5f
- (void)_issueReadRequests;	// IMP=0x000000000022f524
- (void)_issueWriteRequests:(id)arg1;	// IMP=0x000000000022dbeb
- (id)_createActionExecutionLogEvent:(id)arg1;	// IMP=0x000000000022d2dd
- (void)_execute:(id)arg1 captureCurrentState:(_Bool)arg2 writeRequestTuples:(id)arg3;	// IMP=0x000000000022ce54
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000022cd96
- (void)handleExecutionCompletedWithOverallError:(id)arg1 response:(id)arg2;	// IMP=0x000000000022cbdb
- (id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x000000000022bc5b
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000022baf1
@property(readonly, copy) NSArray *associatedAccessories;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000022ba16
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000022b87d
- (void)_handleUpdateActionRequest:(id)arg1;	// IMP=0x000000000022b2b2
- (void)_updateNaturalLightingAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000022afe9
- (void)_updatePlaybackAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000022a3d5
- (void)_updateWriteAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000022a0df
- (_Bool)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000229e00
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x0000000000229a01
- (void)_removeDonatedIntent;	// IMP=0x00000000002299ae
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x000000000022972b
- (void)_handleRemoveAction:(id)arg1 message:(id)arg2;	// IMP=0x00000000002294ff
- (void)_handleRemoveActionRequest:(id)arg1;	// IMP=0x00000000002293fc
- (void)_removeAction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000228dcc
- (void)_handleAddLightProfileNaturalLightingActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000228cff
- (void)_handleAddShortcutActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000228ad9
- (void)_handleAddMediaPlaybackActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x00000000002282dc
- (void)_handleAddCharactersiticWriteActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000227b3a
- (void)sendNotificationWithAction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000227854
- (void)_handleAddNewAction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000227277
- (id)_addLightProfileNaturalLightingModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000226e4a
- (id)_addMediaPlaybackActionModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x00000000002266ff
- (id)_addCharacteristicWriteActionModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000225e28
- (void)_handleAddActionRequest:(id)arg1;	// IMP=0x0000000000225738
- (void)_registerForMessages;	// IMP=0x0000000000225214
- (id)actionWithUUID:(id)arg1;	// IMP=0x0000000000225191
- (void)invalidate;	// IMP=0x0000000000225120
- (void)removeAccessory:(id)arg1;	// IMP=0x000000000022425d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x00000000002241e2
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002235da
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000222fdd
@property(readonly, nonatomic) _Bool containsShortcutActions;
@property(readonly, nonatomic) _Bool containsMediaPlaybackActions;
- (_Bool)containsUnsecuringAction;	// IMP=0x0000000000222c05
- (_Bool)containsSecureCharacteristic;	// IMP=0x0000000000222aa3
- (_Bool)_fixupActions;	// IMP=0x000000000022217d
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(readonly, copy, nonatomic) NSArray *actions;
- (void)removeAllActions;	// IMP=0x0000000000221fbc
- (void)removeAction:(id)arg1;	// IMP=0x0000000000221f36
- (void)addAction:(id)arg1;	// IMP=0x0000000000221eb0
- (void)__handleActionsUpdated;	// IMP=0x0000000000221b64
- (_Bool)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x00000000002218f1
- (void)removeActionForCharacteristic:(id)arg1;	// IMP=0x0000000000221655
- (void)removeService:(id)arg1;	// IMP=0x0000000000221283
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000220fba
- (void)_execute:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000220e35
- (void)execute:(id)arg1;	// IMP=0x0000000000220c90
- (void)isAccessValidForExecutionWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002206d1
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x00000000002200bf
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000021fe78
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;	// IMP=0x000000000021facc
- (id)_getActionsForActionSetObject;	// IMP=0x00000000006d9d3c
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

