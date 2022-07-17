//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PLBackgroundJobStatusCenter, PLBackgroundJobWorkerPriorityTuple;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject
{
    PLBackgroundJobStatusCenter *_statusCenter;	// 8 = 0x8
    short _workerMode;	// 16 = 0x10
    NSArray *_workerClassesAsStrings;	// 24 = 0x18
    NSMutableArray *_pendingWorkers;	// 32 = 0x20
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    id <PLBackgroundJobWorkerCoordinatorDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004448fe
@property(nonatomic) __weak id <PLBackgroundJobWorkerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAllWorkersCompleted;	// IMP=0x0000000000444865
- (void)_processNextWorkerInLibraryBundle:(id)arg1;	// IMP=0x0000000000444312
- (void)stopAllBackgorundJobs;	// IMP=0x00000000004441d9
- (void)_submitBundleForProcessing:(id)arg1 priority:(long long)arg2 ignorePriority:(_Bool)arg3;	// IMP=0x0000000000443e26
- (void)submitBundleForProcessing:(id)arg1 priority:(long long)arg2;	// IMP=0x0000000000443e11
- (void)submitBundleForProcessingOnAllWorkerPriorities:(id)arg1;	// IMP=0x0000000000443df4
- (_Bool)hasPendingJobsForBundle:(id)arg1 priority:(long long)arg2;	// IMP=0x000000000044365d
- (id)_workersForBundle:(id)arg1;	// IMP=0x0000000000443418
- (id)initWithWorkerClassesAsStrings:(id)arg1 workerMode:(short)arg2 statusCenter:(id)arg3;	// IMP=0x000000000044335b
- (id)initWithWorkerClassesAsStrings:(id)arg1;	// IMP=0x0000000000443344
- (id)initWithWorkerCoordinatorWorkerMode:(short)arg1 statusCenter:(id)arg2;	// IMP=0x00000000004432cf

@end
