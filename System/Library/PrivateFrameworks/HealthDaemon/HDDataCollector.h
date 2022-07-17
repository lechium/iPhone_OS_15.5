//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDataCollector-Protocol.h>

@class HDDeviceEntity, HDPrimaryProfile, HDProfile, HDSourceEntity, HKObjectType, NSString;
@protocol OS_dispatch_queue;

@interface HDDataCollector : NSObject <HDHealthDataCollector>
{
    HDPrimaryProfile *_primaryProfile;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    double _collectionInterval;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    HKObjectType *_observedType;	// 48 = 0x30
    HDDeviceEntity *_deviceEntity;	// 56 = 0x38
    long long _failureRetryCount;	// 64 = 0x40
    _Bool _disabled;	// 72 = 0x48
    HDSourceEntity *_sourceEntity;	// 80 = 0x50
}

+ (id)secondaryContextClasses;	// IMP=0x000000000006ffa3
+ (Class)sensorDatumClass;	// IMP=0x00000000004f1a21
+ (id)domain;	// IMP=0x00000000004f19fa
+ (id)observedType;	// IMP=0x00000000004f19d3
+ (id)_lastReceivedSensorDatumForProfile:(id)arg1;	// IMP=0x00000000004f13a7
+ (_Bool)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2;	// IMP=0x00000000004f1375
+ (id)_sensorDatumFromContext:(id)arg1;	// IMP=0x000000000006f600
+ (double)defaultCollectionInterval;	// IMP=0x000000000001107f
- (void).cxx_destruct;	// IMP=0x00000000004f1a80
@property(readonly) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
- (void)stopPerformingUpdatesWithErrorEncountered:(_Bool)arg1;	// IMP=0x00000000004f1a48
- (id)dataCollectorDiagnosticDescription;	// IMP=0x00000000004f18ad
- (void)updateHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f1898
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004f1881
- (void)updateHistoricalData;	// IMP=0x0000000000020e91
- (void)collectionStoppedForType:(id)arg1;	// IMP=0x00000000000124d6
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;	// IMP=0x00000000000110b7
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;	// IMP=0x000000000001112e
- (void)_queue_beginStreaming;	// IMP=0x000000000001152f
@property _Bool disabled;
@property double collectionInterval;
- (void)_performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000004f12e4
- (void)_performAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d856
- (id)initWithPrimaryProfile:(id)arg1;	// IMP=0x00000000004f12d2
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000006c1b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
