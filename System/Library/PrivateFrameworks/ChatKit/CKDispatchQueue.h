//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDispatchQueue : NSObject
{
    unsigned long long _fifo;	// 8 = 0x8
    _Bool _suspended;	// 16 = 0x10
    _Bool _cancelled;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lockQueue;	// 32 = 0x20
    struct __CFBinaryHeap *_heap;	// 40 = 0x28
    NSMutableDictionary *_dispatchQueueBlocks;	// 48 = 0x30
}

+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;	// IMP=0x000000000050cd01
+ (id)serialQueueWithDispatchPriority:(long long)arg1;	// IMP=0x000000000050ccc9
- (void).cxx_destruct;	// IMP=0x000000000050de89
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks; // @synthesize dispatchQueueBlocks=_dispatchQueueBlocks;
@property(retain, nonatomic) struct __CFBinaryHeap *heap; // @synthesize heap=_heap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)removeAllOutstandingBlocks;	// IMP=0x000000000050dc99
- (void)removeOutstandingBlockForKey:(id)arg1;	// IMP=0x000000000050db53
- (_Bool)containsOutstandingBlockForKey:(id)arg1;	// IMP=0x000000000050d9e1
- (id)allKeysOfOutstandingBlocks;	// IMP=0x000000000050d83c
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;	// IMP=0x000000000050d6aa
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;	// IMP=0x000000000050d499
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;	// IMP=0x000000000050cecf
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2;	// IMP=0x000000000050ceba
- (void)addBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000050cea3
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;	// IMP=0x000000000050cd3e
- (id)init;	// IMP=0x000000000050ccae
- (void)dealloc;	// IMP=0x000000000050cc6e

@end

