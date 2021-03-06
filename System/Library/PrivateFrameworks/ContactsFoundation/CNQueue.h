//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    id <CNQueueingStrategy> _strategy;	// 16 = 0x10
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000beda
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000be6e
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bde4
- (void).cxx_destruct;	// IMP=0x000000000000c2c5
@property(readonly, nonatomic) id <CNQueueingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
- (id)drain;	// IMP=0x000000000000c250
- (void)dequeueObject:(id)arg1;	// IMP=0x000000000000c23a
- (id)dequeue;	// IMP=0x000000000000c1d0
- (id)peek;	// IMP=0x000000000000c1ba
- (void)enqueueObjectsFromArray:(id)arg1;	// IMP=0x000000000000c090
- (void)enqueue:(id)arg1;	// IMP=0x000000000000c076
@property(readonly) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (id)initWithStrategy:(id)arg1;	// IMP=0x000000000000bfaa
- (id)init;	// IMP=0x000000000000bf6a

@end

