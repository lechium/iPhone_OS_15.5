//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSString;

@interface TaskQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
}

+ (id)networkQueue;	// IMP=0x00400000000ea776
- (void).cxx_destruct;	// IMP=0x00200000000ea98d
- (void)waitUntilAllTasksAreFinished;	// IMP=0x00100000000ea977
- (void)cancelAllTasks;	// IMP=0x00100000000ea961
- (void)addTaskWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea94b
- (void)addTasks:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x00100000000ea935
- (void)addTask:(id)arg1;	// IMP=0x00100000000ea91f
@property long long qualityOfService;
@property(readonly, copy) NSArray *tasks;
@property(copy) NSString *name;
- (void)setUnderlyingQueue:(id)arg1;	// IMP=0x00100000000ea89b
@property long long maxConcurrentOperationCount;
- (id)init;	// IMP=0x00100000000ea7e6

@end

