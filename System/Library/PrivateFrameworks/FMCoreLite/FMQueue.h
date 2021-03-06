//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    id <FMQueueingStrategy> _strategy;	// 16 = 0x10
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003782
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000003716
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000368c
- (void).cxx_destruct;	// IMP=0x0000000000003a2f
- (id)drain;	// IMP=0x00000000000039ce
- (void)dequeueObject:(id)arg1;	// IMP=0x00000000000039b8
- (id)dequeue;	// IMP=0x000000000000394e
- (id)peek;	// IMP=0x0000000000003938
- (void)enqueue:(id)arg1;	// IMP=0x000000000000391e
@property(readonly) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (id)initWithStrategy:(id)arg1;	// IMP=0x0000000000003852
- (id)init;	// IMP=0x0000000000003812

@end

