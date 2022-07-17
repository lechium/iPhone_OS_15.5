//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIFitnessAppsStateObserverDelegate-Protocol.h>

@class FIFitnessAppsStateObserver, HKActivitySummary, HKCurrentActivityCacheQuery, HKHealthStore, HKUnit, NSArray, NSDate, NSHashTable, NSString, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface FIUIActivityDataProvider : NSObject <FIFitnessAppsStateObserverDelegate>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKUnit *_kcalUnit;	// 16 = 0x10
    HKUnit *_minuteUnit;	// 24 = 0x18
    HKUnit *_countUnit;	// 32 = 0x20
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    HKActivitySummary *_queue_currentActivitySummary;	// 56 = 0x38
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;	// 64 = 0x40
    NSArray *_queue_currentActiveEnergyChartData;	// 72 = 0x48
    NSArray *_queue_currentMoveTimeChartData;	// 80 = 0x50
    NSArray *_queue_currentExerciseChartData;	// 88 = 0x58
    NSArray *_queue_currentStandChartData;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_subscriber_queue;	// 104 = 0x68
    NSHashTable *_subscribers;	// 112 = 0x70
    NSDate *_currentDate;	// 120 = 0x78
    _Bool _queue_ignoreLoadingSummary;	// 128 = 0x80
    FIFitnessAppsStateObserver *_fitnessAppsStateObserver;	// 136 = 0x88
    _Bool _areFitnessAppsRestricted;	// 144 = 0x90
}

+ (id)sharedModel;	// IMP=0x0000000000056b3e
- (void).cxx_destruct;	// IMP=0x000000000005867f
- (void)_setCurrentDate:(id)arg1;	// IMP=0x00000000000585d9
- (void)fitnessAppsStateObserver:(id)arg1 stateDidChange:(long long)arg2;	// IMP=0x0000000000058582
- (void)_broadcastCurrentModelUpdate:(id)arg1 toSubscriber:(id)arg2;	// IMP=0x000000000005856d
- (void)_broadcastCurrentModelUpdateToSubscribers:(id)arg1;	// IMP=0x00000000000583a7
- (void)_handleTimeChange;	// IMP=0x0000000000058104
- (void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)arg1;	// IMP=0x000000000005800f
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1;	// IMP=0x0000000000057b1b
- (id)_queue_activityDataModelFromCurrentActivitySummary;	// IMP=0x000000000005774f
- (_Bool)_loadingStateForActivitySummary:(id)arg1;	// IMP=0x0000000000057648
- (void)_queue_restartQueriesPreservingExistingGoals:(_Bool)arg1;	// IMP=0x00000000000575c5
- (void)_queue_restartQueriesIfQueryInUse:(id)arg1;	// IMP=0x00000000000575a0
- (void)_queue_stopQueriesPreservingExistingGoals:(_Bool)arg1;	// IMP=0x000000000005759a
- (id)_currentActivitySummaryQueryCollectionIntervalsOverride;	// IMP=0x0000000000057430
- (void)_queue_startQueries;	// IMP=0x000000000005742a
- (void)getCurrentActivityDataModelWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005729c
- (id)switcherActivityDataModel;	// IMP=0x00000000000571a5
- (void)removeSubscriber:(id)arg1;	// IMP=0x0000000000056fdc
- (void)addSubscriber:(id)arg1;	// IMP=0x0000000000056bc3
- (void)dealloc;	// IMP=0x0000000000056ab0
- (id)init;	// IMP=0x0000000000056821

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
