//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>
#import <HealthDaemon/HDMetricsCollector-Protocol.h>

@class CMFitnessMachine, HDDataCollectorConfiguration, HDProfile, HKDevice, HKObserverSet, HKSource, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector>
{
    unsigned long long _fitnessMachineType;	// 8 = 0x8
    NSMapTable *_aggregators;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    HDDataCollectorConfiguration *_configuration;	// 32 = 0x20
    NSMutableDictionary *_previousDatums;	// 40 = 0x28
    NSMutableDictionary *_previousWorkoutMetrics;	// 48 = 0x30
    NSDate *_approximatedStartDate;	// 56 = 0x38
    NSMutableArray *_bufferedCharacteristics;	// 64 = 0x40
    NSSet *_localDevicePreferredObjectTypes;	// 72 = 0x48
    NSMutableDictionary *_bufferedMetrics;	// 80 = 0x50
    NSString *_machineBrand;	// 88 = 0x58
    HKDevice *_device;	// 96 = 0x60
    HKSource *_source;	// 104 = 0x68
    CMFitnessMachine *_cmFitnessMachine;	// 112 = 0x70
    HDProfile *_profile;	// 120 = 0x78
    HKObserverSet *_metricsCollectorObservers;	// 128 = 0x80
    NSDate *_machinePreferredUntilDate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001d8055
@property(retain, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
- (void)unitTest_processDatumsByMetric:(id)arg1;	// IMP=0x00000000001d7f6b
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001d7bdc
- (void)addObserver:(id)arg1;	// IMP=0x00000000001d7af4
- (double)preferredAggregationIntervalForAggregator:(id)arg1;	// IMP=0x00000000001d7aeb
- (id)identifierForDataAggregator:(id)arg1;	// IMP=0x00000000001d7ade
- (id)sourceForDataAggregator:(id)arg1;	// IMP=0x00000000001d7ac5
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;	// IMP=0x00000000001d79f5
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;	// IMP=0x00000000001d79ef
- (void)handleDataCharacteristic:(id)arg1;	// IMP=0x00000000001d59aa
- (void)tearDown;	// IMP=0x00000000001d5823
- (void)setMachineStartDate:(id)arg1;	// IMP=0x00000000001d55aa
- (void)setMachineBrand:(id)arg1;	// IMP=0x00000000001d54e7
- (id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2;	// IMP=0x00000000001d4f52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

