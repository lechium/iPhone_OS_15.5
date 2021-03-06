//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, HKHeartRateSummary, HKHeartRateSummaryQuery, HKQuantitySample, NSHashTable;
@protocol OS_dispatch_queue;

@interface NTKHeartRateQueryManager : NSObject
{
    _Bool _deviceIsLocked;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_healthQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sampleQueue;	// 24 = 0x18
    HKHealthStore *_healthStore;	// 32 = 0x20
    HKAnchoredObjectQuery *_heartRateQuery;	// 40 = 0x28
    HKHeartRateSummaryQuery *_heartRateSummaryQuery;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    struct os_unfair_lock_s _observersLock;	// 64 = 0x40
    _Bool _canUseFutureSamples;	// 68 = 0x44
    _Bool _checkedDefaults;	// 69 = 0x45
    HKQuantitySample *_latestHeartRateSample;	// 72 = 0x48
    HKHeartRateSummary *_latestHeartRateSummary;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x0000000000244b66
- (void).cxx_destruct;	// IMP=0x00000000002475b5
@property(nonatomic, getter=hasCheckedDefaults) _Bool checkedDefaults; // @synthesize checkedDefaults=_checkedDefaults;
@property(readonly, nonatomic) _Bool canUseFutureSamples; // @synthesize canUseFutureSamples=_canUseFutureSamples;
- (void)setHeartRateSamples:(id)arg1;	// IMP=0x00000000002474f5
- (void)setLatestHeartRateSummary:(id)arg1;	// IMP=0x0000000000247451
@property(readonly, nonatomic) HKHeartRateSummary *latestHeartRateSummary; // @synthesize latestHeartRateSummary=_latestHeartRateSummary;
@property(retain, nonatomic) HKQuantitySample *latestHeartRateSample; // @synthesize latestHeartRateSample=_latestHeartRateSample;
- (void)_findLatestHeartRateSample:(id)arg1;	// IMP=0x0000000000246cc4
- (void)_queue_retrieveLatestHeartRateOnce;	// IMP=0x0000000000246925
- (void)_queue_stopObservingHeartRate;	// IMP=0x00000000002467ea
- (void)_queue_startObservingHeartRate;	// IMP=0x000000000024633f
- (void)_notifyObserversOfLatestSample;	// IMP=0x0000000000246204
- (_Bool)_haveObservers;	// IMP=0x00000000002461c8
- (void)removeObserver:(id)arg1;	// IMP=0x000000000024615c
- (void)addObserver:(id)arg1;	// IMP=0x0000000000245ffd
- (_Bool)_alreadyObserving;	// IMP=0x0000000000245e5a
- (void)_stopObserving;	// IMP=0x0000000000245cf9
- (void)_startObserving;	// IMP=0x0000000000245aeb
- (void)_stopObservingIfNeeded;	// IMP=0x0000000000245a59
- (void)startObservingIfNeeded;	// IMP=0x0000000000245917
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002457a5
- (void)_notifyObserversOfLatestSummary;	// IMP=0x0000000000245634
- (void)_queue_stopObservingHeartRateSummary;	// IMP=0x00000000002454f9
- (void)_queue_startObservingHeartRateSummary;	// IMP=0x00000000002450d7
- (void)_queue_clearHeartRateSummaryQueryWithError:(id)arg1;	// IMP=0x000000000024504f
- (void)_queue_clearHeartRateSampleQueryWithError:(id)arg1;	// IMP=0x0000000000244fc7
- (void)_handleDeviceLockChange;	// IMP=0x0000000000244e7b
- (void)dealloc;	// IMP=0x0000000000244d8c
- (id)_init;	// IMP=0x0000000000244bcb

@end

