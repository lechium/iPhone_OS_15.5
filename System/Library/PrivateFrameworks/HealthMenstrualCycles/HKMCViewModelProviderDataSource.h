//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/HKMCViewModelProviderDataSource-Protocol.h>

@class HKCalendarCache, HKHealthStore, HKMCDaySummaryObserverQuery, HKSampleIteratorQuery, NSMutableIndexSet, NSMutableSet, NSString, _HKDatabaseChangesQuery;
@protocol HKMCViewModelProviderDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKMCViewModelProviderDataSource : NSObject <HKMCViewModelProviderDataSource>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    id <HKMCViewModelProviderDataSourceDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_summaryQueries;	// 32 = 0x20
    HKMCDaySummaryObserverQuery *_summaryObserverQuery;	// 40 = 0x28
    HKSampleIteratorQuery *_factorQuery;	// 48 = 0x30
    _HKDatabaseChangesQuery *_factorObserverQuery;	// 56 = 0x38
    NSMutableIndexSet *_canceledDayIndexes;	// 64 = 0x40
    HKCalendarCache *_calendarCache;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000007be6
@property(nonatomic) __weak id <HKMCViewModelProviderDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000007a35
- (void)_handleCycleFactorsSampleTypeChanges:(id)arg1 error:(id)arg2;	// IMP=0x0000000000007877
- (void)_startObservingCycleFactorsUpdates;	// IMP=0x000000000000768b
- (void)_handleDaySummaryObserverUpdateWithError:(id)arg1;	// IMP=0x000000000000759b
- (void)_startObservingDaySummaryUpdates;	// IMP=0x00000000000073f0
- (void)fetchCycleFactorsInDayIndexRange:(CDStruct_ef5fcbe6)arg1;	// IMP=0x0000000000006f99
- (void)cancelFetchForDaySummariesInDayIndexRange:(CDStruct_ef5fcbe6)arg1;	// IMP=0x0000000000006935
- (void)fetchDaySummariesInDayIndexRange:(CDStruct_ef5fcbe6)arg1;	// IMP=0x0000000000006426
- (id)initWithHealthStore:(id)arg1 calendarCache:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000062be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
