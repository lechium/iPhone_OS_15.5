//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDModernTransportDeviceReachabilityObserverListener-Protocol.h>
#import <HomeKitDaemon/HMDPrimaryResidentElectionAddOnDelegate-Protocol.h>
#import <HomeKitDaemon/HMDResidentDeviceManager-Protocol.h>
#import <HomeKitDaemon/HMDResidentDeviceManagerContext-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDeviceCapabilities, HMDHome, HMDMessageDispatcher, HMDModernTransportDeviceReachabilityObserver, HMDPrimaryElectionCoordinationAddOn, HMDPrimaryResidentDiscoveryOperation, HMDResidentDevice, HMFFuture, NSArray, NSMutableSet, NSNotificationCenter, NSObject, NSSet, NSString, NSUUID;
@protocol HMDResidentDeviceManagerDelegate, HMFLocking, OS_dispatch_queue;

@interface HMDResidentDeviceManagerRoar : HMFObject <HMDResidentDeviceManagerContext, HMDModernTransportDeviceReachabilityObserverListener, HMDPrimaryResidentElectionAddOnDelegate, NSSecureCoding, HMDResidentDeviceManager>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_residentDevices;	// 24 = 0x18
    _Bool _residentAvailable;	// 32 = 0x20
    _Bool _residentSupported;	// 33 = 0x21
    _Bool _actingAsResident;	// 34 = 0x22
    NSUUID *_primaryResidentUUID;	// 40 = 0x28
    HMDMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    HMDModernTransportDeviceReachabilityObserver *_reachabilityObserver;	// 56 = 0x38
    HMDPrimaryElectionCoordinationAddOn *_localNetworkElection;	// 64 = 0x40
    id <HMDResidentDeviceManagerDelegate> delegate;	// 72 = 0x48
    NSNotificationCenter *_notificationCenter;	// 80 = 0x50
    HMDDeviceCapabilities *_currentDeviceCapabilities;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    HMDPrimaryResidentDiscoveryOperation *_primaryDiscoveryOperation;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007753d1
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000007753c9
+ (id)logCategory;	// IMP=0x0000000000775399
+ (id)shortDescription;	// IMP=0x0000000000775387
- (void).cxx_destruct;	// IMP=0x0000000000772351
@property(retain) HMDPrimaryResidentDiscoveryOperation *primaryDiscoveryOperation; // @synthesize primaryDiscoveryOperation=_primaryDiscoveryOperation;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDDeviceCapabilities *currentDeviceCapabilities; // @synthesize currentDeviceCapabilities=_currentDeviceCapabilities;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak id <HMDResidentDeviceManagerDelegate> delegate; // @synthesize delegate;
@property(readonly) HMDPrimaryElectionCoordinationAddOn *localNetworkElection; // @synthesize localNetworkElection=_localNetworkElection;
@property(getter=isActingAsResident) _Bool actingAsResident; // @synthesize actingAsResident=_actingAsResident;
@property(retain) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000077221d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000772217
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000772121
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000077202b
- (void)primaryElectionAddOn:(id)arg1 didFailToElectWithError:(id)arg2;	// IMP=0x0000000000771f19
- (void)primaryElectionAddOn:(id)arg1 didUpdateActiveNodes:(id)arg2;	// IMP=0x0000000000771f04
- (void)primaryElectionAddOn:(id)arg1 didUpdateResidentDevice:(id)arg2;	// IMP=0x0000000000771eef
- (void)primaryElectionAddOn:(id)arg1 didElectPrimaryResident:(id)arg2 confirmed:(_Bool)arg3 electionLogEvent:(id)arg4;	// IMP=0x0000000000771eda
- (void)_updateResidentReachabilityWithResidents:(id)arg1;	// IMP=0x0000000000771bd8
- (void)_handleUpdatedPrimaryResidentDevice:(id)arg1;	// IMP=0x000000000077184b
@property(readonly) long long atHomeLevel;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) HMDResidentDevice *currentResidentDevice;
@property(readonly) _Bool isOwnerUser;
@property(readonly) _Bool isResidentEnabled;
- (void)updatePrimaryResidentWithUUID:(id)arg1 actions:(id)arg2;	// IMP=0x000000000077166c
- (void)_handleCloudZoneReadyNotification:(id)arg1;	// IMP=0x0000000000771576
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000007714c1
- (id)dumpState;	// IMP=0x000000000077100c
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000770ed9
- (id)shortDescription;	// IMP=0x0000000000770e17
- (void)_updateReachability:(_Bool)arg1 forResidentDevice:(id)arg2;	// IMP=0x0000000000770c01
- (void)modernTransportDeviceReachabilityObserverDidUpdate:(id)arg1 isReachable:(_Bool)arg2;	// IMP=0x0000000000770b4f
- (void)electResidentDevice:(unsigned long long)arg1;	// IMP=0x0000000000770a59
- (id)foundNewPrimaryResident:(id)arg1;	// IMP=0x0000000000770953
- (void)handleCurrentDeviceChanged:(id)arg1;	// IMP=0x00000000007708c1
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;	// IMP=0x0000000000770273
- (void)_handlePrimaryResidentDiscoveryRequest:(id)arg1;	// IMP=0x0000000000770057
- (void)_handlePrimaryResidentDiscoveryXPCRequest:(id)arg1;	// IMP=0x000000000076ff6a
- (id)_discoverPrimaryResident;	// IMP=0x000000000076fba8
- (id)discoverPrimaryResident;	// IMP=0x000000000076fada
- (void)_sendResidentDeviceNotificationWithName:(id)arg1 forResidentDevice:(id)arg2;	// IMP=0x000000000076f8d5
- (void)notifyUpdatedPrimaryResident:(id)arg1 previousPrimaryResident:(id)arg2;	// IMP=0x000000000076f817
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;	// IMP=0x000000000076f785
- (void)notifyResidentAvailable:(_Bool)arg1;	// IMP=0x000000000076f730
- (void)accountOrDeviceDidUpdate:(id)arg1;	// IMP=0x000000000076f69e
@property(nonatomic, getter=isResidentSupported) _Bool residentSupported; // @synthesize residentSupported=_residentSupported;
- (void)setResidentAvailable:(_Bool)arg1;	// IMP=0x000000000076f1a9
@property(readonly, nonatomic, getter=isResidentAvailable) _Bool residentAvailable; // @synthesize residentAvailable=_residentAvailable;
- (void)_updateResidentAvailability;	// IMP=0x000000000076f0fa
- (void)updateResidentAvailability;	// IMP=0x000000000076f0a8
- (void)removeResidentDevice:(id)arg1;	// IMP=0x000000000076f016
- (void)_removeResidentDevice:(id)arg1;	// IMP=0x000000000076eeda
- (void)_addResidentDevice:(id)arg1;	// IMP=0x000000000076ea8c
- (id)residentDeviceForDevice:(id)arg1;	// IMP=0x000000000076e84f
@property(readonly) HMFFuture *cloudReady;
@property(readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) _Bool currentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
- (id)residentDevicesSet;	// IMP=0x000000000076e6ec
@property(readonly, copy) NSArray *availableResidentDevices;
@property(readonly, copy, nonatomic) NSArray *residentDevices;
- (id)ourSelf;	// IMP=0x000000000076e5f5
- (id)residentWithUUID:(id)arg1;	// IMP=0x000000000076e422
@property(readonly) NSUUID *primaryResidentUUID; // @synthesize primaryResidentUUID=_primaryResidentUUID;
@property(readonly) HMDResidentDevice *primaryResidentDevice;
- (void)addDataSource:(id)arg1;	// IMP=0x000000000076e087
- (void)_teardownSessionWithPrimaryResidentDevice;	// IMP=0x000000000076e015
- (void)_setupSessionWithPrimaryResidentDevice;	// IMP=0x000000000076df55
- (void)_run;	// IMP=0x000000000076dcd6
- (void)run;	// IMP=0x000000000076dc84
- (void)atHomeLevelChanged:(long long)arg1;	// IMP=0x000000000076db8e
- (void)confirmOnAvailability;	// IMP=0x000000000076da98
- (void)confirmAsResident;	// IMP=0x000000000076d9a2
- (void)confirmWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000076d881
@property(readonly, nonatomic) _Bool hasTrustZoneCapableResident;
@property(readonly, nonatomic) _Bool isResidentElectionV2Enabled;
- (void)_handleCloudResidentChange:(id)arg1;	// IMP=0x000000000076d094
- (id)_findExpectedResidents;	// IMP=0x000000000076cf6c
- (void)_joinLocalMesh;	// IMP=0x000000000076ce7a
- (void)_configureResidentSupported;	// IMP=0x000000000076cc58
- (void)_registerForNotifications;	// IMP=0x000000000076cbf8
- (void)_registerForMessages;	// IMP=0x000000000076c8d1
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000076c813
- (id)initWithNotificationCenter:(id)arg1 deviceCapabilities:(id)arg2 electionAddOnFactory:(CDUnknownBlockType)arg3;	// IMP=0x000000000076c64d
- (id)init;	// IMP=0x000000000076c57e

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isCurrentDeviceAvailableResident;
@property(readonly) _Bool isResidentSupported;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

