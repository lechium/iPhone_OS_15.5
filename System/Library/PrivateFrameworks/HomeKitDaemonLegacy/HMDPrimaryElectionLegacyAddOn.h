//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDPrimaryResidentElectionAddOn-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDResidentDevice, HMFTimer, NSHashTable, NSString, NSUUID;
@protocol HMDPrimaryResidentElectionAddOnDelegate, HMDResidentDeviceManagerContext, OS_dispatch_queue;

@interface HMDPrimaryElectionLegacyAddOn : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDPrimaryResidentElectionAddOn>
{
    _Bool _confirming;	// 8 = 0x8
    id <HMDPrimaryResidentElectionAddOnDelegate> _delegate;	// 16 = 0x10
    HMDResidentDevice *_preferredElector;	// 24 = 0x18
    HMFTimer *_residentMonitorTimer;	// 32 = 0x20
    NSHashTable *_devicePreferenceDataSources;	// 40 = 0x28
    id <HMDResidentDeviceManagerContext> _context;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000006f4f1a
+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;	// IMP=0x00000000006f4c0b
- (void).cxx_destruct;	// IMP=0x00000000006ef797
@property(readonly, nonatomic) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources; // @synthesize devicePreferenceDataSources=_devicePreferenceDataSources;
@property(retain, nonatomic) HMFTimer *residentMonitorTimer; // @synthesize residentMonitorTimer=_residentMonitorTimer;
@property(readonly, nonatomic) HMDResidentDevice *preferredElector; // @synthesize preferredElector=_preferredElector;
@property(nonatomic, getter=isConfirming) _Bool confirming; // @synthesize confirming=_confirming;
@property __weak id <HMDPrimaryResidentElectionAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dumpState;	// IMP=0x00000000006ef70c
- (id)logIdentifier;	// IMP=0x00000000006ef66b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)addDataSource:(id)arg1;	// IMP=0x00000000006ef501
- (void)atHomeLevelChanged:(long long)arg1;	// IMP=0x00000000006ef3ac
- (void)_handleConfirmResidentDevice:(id)arg1;	// IMP=0x00000000006eee1d
- (void)_handleResidentElectionParameters:(id)arg1;	// IMP=0x00000000006eecc1
@property(readonly, nonatomic) _Bool isAtHome;
- (void)confirmPrimaryResident;	// IMP=0x00000000006ee7b5
- (void)confirmOnAvailability;	// IMP=0x00000000006ee2a8
- (void)confirmAsResident;	// IMP=0x00000000006edf53
- (void)__handleConfirmationRequest:(id)arg1;	// IMP=0x00000000006edc03
- (void)confirmWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ed82f
- (id)computePreferredElector:(unsigned long long *)arg1;	// IMP=0x00000000006ed282
- (void)handleBatteryLevelChange:(id)arg1;	// IMP=0x00000000006ed1be
- (void)handleBatteryStateChange:(id)arg1;	// IMP=0x00000000006ed0fa
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006eceb5
- (void)primaryResidentChanged:(id)arg1 previousResidentDevice:(id)arg2;	// IMP=0x00000000006ecea8
- (void)performElectionWithReason:(unsigned long long)arg1;	// IMP=0x00000000006ec7ff
- (void)performElection;	// IMP=0x00000000006ec7f9
- (void)registerForMessages;	// IMP=0x00000000006ec4d5
- (void)stop;	// IMP=0x00000000006ec498
- (void)start;	// IMP=0x00000000006ec427
- (id)initWithContext:(id)arg1;	// IMP=0x00000000006ec12a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
