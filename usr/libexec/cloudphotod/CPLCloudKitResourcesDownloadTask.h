//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary, NSString, _CPLCloudKitDownloadGroup;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitResourcesDownloadTask
{
    _CPLCloudKitDownloadGroup *_downloadGroup;	// 8 = 0x8
    long long _currentOperationType;	// 16 = 0x10
    NSMutableDictionary *_remainingTasksPerOperationType;	// 24 = 0x18
    NSMutableArray *_currentRemainingTasks;	// 32 = 0x20
    NSArray *_downloadTasks;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c7f11
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
- (void)runOperations;	// IMP=0x00100000000c7b69
- (void)_downloadNextGroup;	// IMP=0x00100000000c758e
- (MISSING_TYPE *)_downloadNextOperationType;	// IMP=0x00100000000c748c
- (void)_downloadCurrentGroup;	// IMP=0x00100000000c57a5
- (id)_downloadOperationWithRecordIDsAndTasks:(id)arg1 keys:(id)arg2 perRecordProgressBlock:(CDUnknownBlockType)arg3 perRecordCompletionBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c518e
- (void)_finishRemainingTasksWithError:(id)arg1;	// IMP=0x00100000000c4f5f
- (void)cancelDownloadTask:(id)arg1;	// IMP=0x00100000000c4d49
- (id)initWithController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c4ca3

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end
