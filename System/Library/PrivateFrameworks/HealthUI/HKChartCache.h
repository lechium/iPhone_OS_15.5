//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKOutstandingFetchOperationManager, NSArray, NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager;
@protocol HKChartCacheDataSource, HKChartCachePriorityDelegate;

@interface HKChartCache : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSMutableDictionary *_cachedResultsByIdentifier;	// 16 = 0x10
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;	// 24 = 0x18
    NSMutableDictionary *_resultsLoadedByIdentifier;	// 32 = 0x20
    _Bool _shouldBufferFetchOperations;	// 40 = 0x28
    id <HKChartCacheDataSource> _dataSource;	// 48 = 0x30
    HKOutstandingFetchOperationManager *_operationManager;	// 56 = 0x38
    long long _maxRetryCount;	// 64 = 0x40
    NSArray *_bufferedIdentifiers;	// 72 = 0x48
    id <HKChartCachePriorityDelegate> _priorityDelegateForBufferedIdentifiers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000248227
@property(nonatomic) __weak id <HKChartCachePriorityDelegate> priorityDelegateForBufferedIdentifiers; // @synthesize priorityDelegateForBufferedIdentifiers=_priorityDelegateForBufferedIdentifiers;
@property(retain, nonatomic) NSArray *bufferedIdentifiers; // @synthesize bufferedIdentifiers=_bufferedIdentifiers;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool shouldBufferFetchOperations; // @synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations;
@property(retain, nonatomic) HKOutstandingFetchOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property(retain, nonatomic) id <HKChartCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 priorityDelegate:(id)arg3 results:(id)arg4 error:(id)arg5;	// IMP=0x0000000000247f05
- (id)_operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2;	// IMP=0x0000000000247bee
- (void)invalidateCache;	// IMP=0x0000000000247bbc
- (void)invalidateResultsForIdentifiers:(id)arg1;	// IMP=0x0000000000247b8a
- (void)_addFetchOperationsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2;	// IMP=0x000000000024786c
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;	// IMP=0x000000000024766c
- (void)fetchResultsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2;	// IMP=0x0000000000247510
- (id)cachedResultsForIdentifier:(id)arg1;	// IMP=0x00000000002474fa
- (unsigned long long)stateForIdentifier:(id)arg1;	// IMP=0x00000000002474a7
- (void)_alertObserversDidUpdateResults;	// IMP=0x0000000000247379
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000247363
- (void)addObserver:(id)arg1;	// IMP=0x000000000024734d
@property(readonly, nonatomic) id dataSourceRespectingType;
- (id)init;	// IMP=0x0000000000247187

@end
