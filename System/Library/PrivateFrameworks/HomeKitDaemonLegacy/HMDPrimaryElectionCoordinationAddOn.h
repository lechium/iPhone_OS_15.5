//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDLocalElectionMeshControllerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDPrimaryResidentElectionAddOn-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDPrimaryElectionFindPrimaryMeshOperation, HMDRemoteDeviceMonitor, HMFFuture, HMFTimer, NSString, NSUUID;
@protocol HMDLocalElectionMeshController, HMDLocalElectionMeshNode, HMDPrimaryElectionCoordinationAddOnDataSource, HMDPrimaryResidentElectionAddOnDelegate, HMDResidentDeviceManagerContext, HMFAsyncContext, OS_dispatch_queue;

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMFLogging, HMFMessageReceiver, HMDLocalElectionMeshControllerDelegate, HMFTimerDelegate, HMDPrimaryResidentElectionAddOn>
{
    id <HMDLocalElectionMeshController> _meshController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _notifyNodesChanged;	// 24 = 0x18
    id <HMDPrimaryResidentElectionAddOnDelegate> _delegate;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    HMFTimer *_debounceTimer;	// 48 = 0x30
    HMFTimer *_pingTimer;	// 56 = 0x38
    id <HMDResidentDeviceManagerContext> _context;	// 64 = 0x40
    id <HMDPrimaryElectionCoordinationAddOnDataSource> _dataSource;	// 72 = 0x48
    HMFTimer *_secondaryMeshTimer;	// 80 = 0x50
    HMDPrimaryElectionFindPrimaryMeshOperation *_findPrimaryMeshOperation;	// 88 = 0x58
    HMFFuture *_findPrimaryMeshFuture;	// 96 = 0x60
    HMDRemoteDeviceMonitor *_remoteDeviceMonitor;	// 104 = 0x68
    id <HMFAsyncContext> _asyncContext;	// 112 = 0x70
    id <HMDLocalElectionMeshNode> _lastKnownLeaderNode;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x0000000000a1b857
- (void).cxx_destruct;	// IMP=0x0000000000a15271
@property(retain) id <HMDLocalElectionMeshNode> lastKnownLeaderNode; // @synthesize lastKnownLeaderNode=_lastKnownLeaderNode;
@property(readonly) HMDRemoteDeviceMonitor *remoteDeviceMonitor; // @synthesize remoteDeviceMonitor=_remoteDeviceMonitor;
@property(retain) HMFFuture *findPrimaryMeshFuture; // @synthesize findPrimaryMeshFuture=_findPrimaryMeshFuture;
@property(retain) HMDPrimaryElectionFindPrimaryMeshOperation *findPrimaryMeshOperation; // @synthesize findPrimaryMeshOperation=_findPrimaryMeshOperation;
@property(retain) HMFTimer *secondaryMeshTimer; // @synthesize secondaryMeshTimer=_secondaryMeshTimer;
@property(readonly) id <HMDPrimaryElectionCoordinationAddOnDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(retain) HMFTimer *pingTimer; // @synthesize pingTimer=_pingTimer;
@property(retain) HMFTimer *debounceTimer; // @synthesize debounceTimer=_debounceTimer;
@property _Bool notifyNodesChanged; // @synthesize notifyNodesChanged=_notifyNodesChanged;
@property __weak id <HMDPrimaryResidentElectionAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dumpState;	// IMP=0x0000000000a1506d
- (id)logIdentifier;	// IMP=0x0000000000a14fcc
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a14328
- (void)meshControllerDidUpdatesNodes:(id)arg1;	// IMP=0x0000000000a13fb4
- (void)meshControllerDidElectLeader:(id)arg1;	// IMP=0x0000000000a13c24
- (void)meshControllerDidStartElection:(id)arg1;	// IMP=0x0000000000a13aee
- (void)meshControllerDidReceivePingFromLeader:(id)arg1;	// IMP=0x0000000000a139f5
- (void)handleMeshInformationRequest:(id)arg1;	// IMP=0x0000000000a13744
- (void)handleCurrentPrimaryNotification:(id)arg1;	// IMP=0x0000000000a12fc3
- (void)handleCurrentPrimaryRequest:(id)arg1;	// IMP=0x0000000000a12ae5
- (void)handleDeviceCapabilitiesRequest:(id)arg1;	// IMP=0x0000000000a1296d
@property(readonly) unsigned long long messageTransportRestriction;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (CDUnknownBlockType)primarySortComparatorForCurrentPrimary:(id)arg1;	// IMP=0x0000000000a12857
- (void)_selectPrimaryResident;	// IMP=0x0000000000a1240a
- (void)_findPrimaryMeshWithContext:(id)arg1 otherResidents:(id)arg2;	// IMP=0x0000000000a12310
@property unsigned long long state; // @synthesize state=_state;
- (void)primaryResidentChanged:(id)arg1 previousResidentDevice:(id)arg2;	// IMP=0x0000000000a11fe8
- (void)performElection;	// IMP=0x0000000000a11fde
- (void)performElectionWithReason:(unsigned long long)arg1;	// IMP=0x0000000000a11fd8
- (void)stop;	// IMP=0x0000000000a11e5f
- (void)start;	// IMP=0x0000000000a11cac
- (void)registerForMessages;	// IMP=0x0000000000a119d0
- (id)initWithContext:(id)arg1 meshController:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000a11730
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000a11719

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

