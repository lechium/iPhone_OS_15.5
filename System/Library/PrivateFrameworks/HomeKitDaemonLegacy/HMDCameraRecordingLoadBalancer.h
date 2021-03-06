//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMISystemResourceUsageMonitorDelegate-Protocol.h>

@class HMDHomeManager, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString;

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned long long _totalNumberOfStreams;	// 16 = 0x10
    NSMutableDictionary *_recordingSessionSummariesByCameraUUIDString;	// 24 = 0x18
    HMISystemResourceUsageMonitor *_systemResourceUsageMonitor;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    NSMutableDictionary *_readyToRecordByCameraUUIDString;	// 48 = 0x30
    NSMutableDictionary *_decisionsByDeviceUUIDByCameraUUID;	// 56 = 0x38
    NSMutableDictionary *_lastDecisionByCameraUUID;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000a78dc6
- (void).cxx_destruct;	// IMP=0x0000000000a77884
@property(readonly) NSMutableDictionary *lastDecisionByCameraUUID; // @synthesize lastDecisionByCameraUUID=_lastDecisionByCameraUUID;
@property(readonly) NSMutableDictionary *decisionsByDeviceUUIDByCameraUUID; // @synthesize decisionsByDeviceUUIDByCameraUUID=_decisionsByDeviceUUIDByCameraUUID;
@property(readonly) NSMutableDictionary *readyToRecordByCameraUUIDString; // @synthesize readyToRecordByCameraUUIDString=_readyToRecordByCameraUUIDString;
@property(readonly) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor; // @synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor;
@property(retain) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString; // @synthesize recordingSessionSummariesByCameraUUIDString=_recordingSessionSummariesByCameraUUIDString;
@property unsigned long long totalNumberOfStreams; // @synthesize totalNumberOfStreams=_totalNumberOfStreams;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;	// IMP=0x0000000000a775d8
- (void)handleResidentMeshInitialized:(id)arg1;	// IMP=0x0000000000a77461
- (unsigned long long)_partialJobSlotsWithSystemResourceUsageLevel:(long long)arg1;	// IMP=0x0000000000a77451
- (unsigned long long)_jobSlotsWithSystemResourceUsageLevel:(long long)arg1;	// IMP=0x0000000000a77441
- (void)_updateActiveRecordingSessionsMetric;	// IMP=0x0000000000a77353
- (void)_updateReadyToRecordMetric;	// IMP=0x0000000000a77265
- (id)_loadBalancingDescriptionFromSortedNodes:(id)arg1;	// IMP=0x0000000000a77187
- (id)_makeLoadBalancingDecisionForCamera:(id)arg1 deviceFilter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a76596
- (void)_handleLoadBalancingDecision:(id)arg1;	// IMP=0x0000000000a7627f
- (void)handleRecordingSessionForwardingFailureForCamera:(id)arg1 toDevice:(id)arg2;	// IMP=0x0000000000a76083
- (id)makeLoadBalancingDecisionForCamera:(id)arg1 deviceFilter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a75fe8
- (void)removeDataForCameraWithUUID:(id)arg1;	// IMP=0x0000000000a75e39
- (void)setReadyToRecord:(_Bool)arg1 forCameraWithUUID:(id)arg2;	// IMP=0x0000000000a75c3c
- (_Bool)isReadyToRecordForCameraWithUUID:(id)arg1;	// IMP=0x0000000000a75b52
- (void)recordingDidEndForCameraWithUUID:(id)arg1;	// IMP=0x0000000000a757ad
- (void)recordingDidStartForCameraWithUUID:(id)arg1;	// IMP=0x0000000000a75616
- (void)handleLoadBalancingDecision:(id)arg1;	// IMP=0x0000000000a755a8
- (void)start;	// IMP=0x0000000000a754bd
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;	// IMP=0x0000000000a75356

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

