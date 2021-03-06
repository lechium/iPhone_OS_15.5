//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskEntry, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject
{
    _Bool _executingOnMainThread;	// 8 = 0x8
    NSConditionLock *_lock;	// 16 = 0x10
    NSMutableArray *_tasks;	// 24 = 0x18
    NSMutableArray *_deferredTasks;	// 32 = 0x20
    UIKeyboardTaskExecutionContext *_executionContext;	// 40 = 0x28
    UIKeyboardTaskEntry *_mainThreadContinuation;	// 48 = 0x30
    NSArray *_activeOriginator;	// 56 = 0x38
}

@property(retain, nonatomic) NSArray *activeOriginator; // @synthesize activeOriginator=_activeOriginator;
@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (_Bool)isMainThreadExecutingTask;	// IMP=0x0000000000ac95f0
- (void)performSingleTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ac9510
- (void)waitUntilTaskIsFinished:(id)arg1;	// IMP=0x0000000000ac940e
- (void)performTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ac9339
- (void)waitUntilAllTasksAreFinished;	// IMP=0x0000000000ac9212
- (void)addDeferredTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ac9193
- (id)addAndReturnTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ac911a
- (void)addTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ac909b
- (void)promoteDeferredTaskIfIdle;	// IMP=0x0000000000ac9031
- (void)performDeferredTaskIfIdle;	// IMP=0x0000000000ac8fe9
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x0000000000ac8dd6
- (void)finishExecution;	// IMP=0x0000000000ac8c3a
- (void)continueExecutionOnMainThread;	// IMP=0x0000000000ac8abf
- (void)unlock;	// IMP=0x0000000000ac8a94
- (_Bool)tryLockWhenReadyForMainThread;	// IMP=0x0000000000ac8a7c
- (void)lockWhenReadyForMainThread;	// IMP=0x0000000000ac899f
- (void)lock;	// IMP=0x0000000000ac8989
- (id)init;	// IMP=0x0000000000ac890b
- (void)dealloc;	// IMP=0x0000000000ac88a5
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3;	// IMP=0x0000000000ac962b

@end

