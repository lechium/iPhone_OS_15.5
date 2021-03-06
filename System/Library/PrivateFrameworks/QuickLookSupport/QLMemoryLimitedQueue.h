//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface QLMemoryLimitedQueue : NSObject
{
    unsigned long long _maxSize;	// 8 = 0x8
    unsigned long long _currentSize;	// 16 = 0x10
    int _currentTaskCount;	// 24 = 0x18
    int _maxTaskCount;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NSMutableArray *_tasks;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000ed96
@property(readonly) unsigned long long currentSize;
@property(readonly) int currentTaskCount;
- (void)dequeueIfPossible;	// IMP=0x000000000000eada
- (void)executeTask:(id)arg1;	// IMP=0x000000000000e8f5
- (void)addTask:(id)arg1;	// IMP=0x000000000000e82f
- (id)initWithMaximumMemoryConsumption:(unsigned long long)arg1 maximumConcurrentTasks:(int)arg2;	// IMP=0x000000000000e741

@end

