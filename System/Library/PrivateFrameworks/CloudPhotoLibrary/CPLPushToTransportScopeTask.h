//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLBeforeUploadCheckItemsProvider-Protocol.h>

@class CPLBatchExtractionStrategy, CPLBeforeUploadCheckItems, CPLChangeBatch, CPLDerivativesFilter, CPLEnginePushRepository, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineStoreTransaction, CPLEngineTransport, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportGroup, CPLEngineTransportUploadBatchTask, OS_dispatch_queue;

@interface CPLPushToTransportScopeTask <CPLBeforeUploadCheckItemsProvider>
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSString *_scopeIdentifier;	// 16 = 0x10
    CPLEngineScopeStorage *_scopes;	// 24 = 0x18
    CPLEngineTransport *_transport;	// 32 = 0x20
    CPLEnginePushRepository *_pushRepository;	// 40 = 0x28
    CPLEngineScheduler *_scheduler;	// 48 = 0x30
    CPLBatchExtractionStrategy *_currentStrategy;	// 56 = 0x38
    CPLChangeBatch *_diffedBatch;	// 64 = 0x40
    CPLChangeBatch *_batchToCommit;	// 72 = 0x48
    CPLDerivativesFilter *_derivativesFilter;	// 80 = 0x50
    NSArray *_uploadResourceTasks;	// 88 = 0x58
    long long _ruleGroup;	// 96 = 0x60
    CPLBeforeUploadCheckItems *_checkItems;	// 104 = 0x68
    CPLEngineStoreTransaction *_transactionDuringItemsPreparation;	// 112 = 0x70
    NSMutableArray *_preparedUploadResourceTasks;	// 120 = 0x78
    NSMutableDictionary *_additionalTransportScopes;	// 128 = 0x80
    NSMutableDictionary *_invalidTransportScopes;	// 136 = 0x88
    id <CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;	// 144 = 0x90
    id <CPLEngineTransportUploadBatchTask> _uploadTask;	// 152 = 0x98
    unsigned long long _lastReportedProgress;	// 160 = 0xa0
    unsigned long long _countOfPushedChanges;	// 168 = 0xa8
    double _startOfIteration;	// 176 = 0xb0
    double _startOfDerivativesGeneration;	// 184 = 0xb8
    _Bool _deferredCancel;	// 192 = 0xc0
    _Bool _hasCachedShouldCheckResourcesAhead;	// 193 = 0xc1
    _Bool _shouldCheckResourcesAhead;	// 194 = 0xc2
    _Bool _shouldSetupEstimatedSize;	// 195 = 0xc3
    id <CPLEngineTransportGroup> _transportGroup;	// 200 = 0xc8
    long long _taskItem;	// 208 = 0xd0
    _Bool _hasPushedSomeChanges;	// 216 = 0xd8
    _Bool _isUsingOverQuotaStrategy;	// 217 = 0xd9
    _Bool _resetStrategy;	// 218 = 0xda
    double _latestApproximativeUploadRate;	// 224 = 0xe0
    NSString *_currentTaskKey;	// 232 = 0xe8
    NSDate *_taskStartDate;	// 240 = 0xf0
    unsigned long long _recordCount;	// 248 = 0xf8
    _Bool _didExtractOneBatch;	// 256 = 0x100
    _Bool _highPriority;	// 257 = 0x101
}

- (void).cxx_destruct;	// IMP=0x00000000000b2c23
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x00000000000b2be6
- (id)willUploadCloudResource:(id)arg1 localResource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b2864
- (id)availableResourceTypesToUploadForChange:(id)arg1;	// IMP=0x00000000000b2664
- (_Bool)willNeedToAccessScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b20c3
- (id)taskIdentifier;	// IMP=0x00000000000b20a0
- (void)_pushTaskDidFinishWithError:(id)arg1;	// IMP=0x00000000000b1e0f
- (void)cancel;	// IMP=0x00000000000b1dfb
- (void)cancel:(_Bool)arg1;	// IMP=0x00000000000b1cd6
- (void)launch;	// IMP=0x00000000000b1c95
- (void)_doOneIteration;	// IMP=0x00000000000b1b0a
- (void)_prepareUploadBatch;	// IMP=0x00000000000b1a1f
- (void)_generateNeededDerivatives;	// IMP=0x00000000000b1844
- (void)_generateDerivativesForNextRecord:(id)arg1 usingDerivativesCache:(id)arg2;	// IMP=0x00000000000b1541
- (void)_deleteGeneratedResourcesAfterError:(id)arg1;	// IMP=0x00000000000b147e
- (void)_uploadBatch;	// IMP=0x00000000000b0f59
- (void)_extractBatchWithTransaction:(id)arg1 andStore:(id)arg2;	// IMP=0x00000000000b018d
- (void)_checkForRecordExistence;	// IMP=0x00000000000afd4d
- (void)_clearUploadBatch;	// IMP=0x00000000000afcf4
- (_Bool)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000afb63
- (_Bool)_discardUploadedExtractedBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af93f
- (_Bool)_markUploadedTasksDidFinishWithError:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000af4c8
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1;	// IMP=0x00000000000af3b9
- (void)_popNextBatchAndContinue;	// IMP=0x00000000000af381
- (void)_didFinishTaskWithKey:(id)arg1 error:(_Bool)arg2 cancelled:(_Bool)arg3;	// IMP=0x00000000000af15a
- (void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2;	// IMP=0x00000000000aef73
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;	// IMP=0x00000000000aed1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
