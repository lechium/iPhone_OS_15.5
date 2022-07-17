//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSOperationQueue, NSString, geo_isolater;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
    NSOperationQueue *_opQueue;	// 8 = 0x8
    unsigned long long _maxOpCount;	// 16 = 0x10
    unsigned long long _droppedLogMsgCount;	// 24 = 0x18
    geo_isolater *_enqueueLock;	// 32 = 0x20
    NSObject<OS_xpc_object> *_sharedXPCConnection;	// 40 = 0x28
    struct os_unfair_lock_s _connectionLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009bc5da
- (void)reportRRLogMessage:(id)arg1;	// IMP=0x00000000009bc550
- (void)processMapsDeletionWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009bc44f
- (void)runAggregationTasks;	// IMP=0x00000000009bc3f8
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000009bc0c7
- (void)flushEvalData;	// IMP=0x00000000009bc070
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x00000000009bbffd
- (void)updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x00000000009bbf10
- (void)reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x00000000009bbe24
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x00000000009bbd47
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x00000000009bbc28
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009bbb34
- (id)_geodXPCConnection;	// IMP=0x00000000009bb907
- (id)init;	// IMP=0x00000000009bb7c1
- (void)_enqueueOperation:(id)arg1;	// IMP=0x00000000009bb659
- (void)_reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x00000000009bc60d
- (void)_reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x00000000009bc761
- (void)_reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x00000000009bc8a0
- (void)_reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x00000000009bca38
- (void)_updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x00000000009bcb96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
