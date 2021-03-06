//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableSet;
@protocol BPSSubscriber;

@interface _BPSAbstractCorrelateOrderedMerge
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _downstreamLock;	// 12 = 0xc
    _Bool _recursion;	// 20 = 0x14
    _Bool _finished;	// 21 = 0x15
    _Bool _errored;	// 22 = 0x16
    _Bool _cancelled;	// 23 = 0x17
    unsigned long long _upstreamCount;	// 24 = 0x18
    id <BPSSubscriber> _downstream;	// 32 = 0x20
    NSMutableArray *_subscriptions;	// 40 = 0x28
    NSMutableArray *_upstreamBookmarks;	// 48 = 0x30
    NSMutableArray *_buffers;	// 56 = 0x38
    NSMutableArray *_requestsPerSubscription;	// 64 = 0x40
    NSMutableSet *_completedUpstreamIndexes;	// 72 = 0x48
    long long _demand;	// 80 = 0x50
    unsigned long long _finishCount;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002b421
@property(nonatomic) unsigned long long finishCount; // @synthesize finishCount=_finishCount;
@property(nonatomic) long long demand; // @synthesize demand=_demand;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool errored; // @synthesize errored=_errored;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool recursion; // @synthesize recursion=_recursion;
@property(retain, nonatomic) NSMutableSet *completedUpstreamIndexes; // @synthesize completedUpstreamIndexes=_completedUpstreamIndexes;
@property(retain, nonatomic) NSMutableArray *requestsPerSubscription; // @synthesize requestsPerSubscription=_requestsPerSubscription;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property(retain, nonatomic) NSMutableArray *upstreamBookmarks; // @synthesize upstreamBookmarks=_upstreamBookmarks;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
@property(nonatomic) unsigned long long upstreamCount; // @synthesize upstreamCount=_upstreamCount;
- (id)newBookmark;	// IMP=0x000000000002b1e9
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)arg1;	// IMP=0x000000000002b086
- (id)upstreamSubscriptions;	// IMP=0x000000000002b03f
- (void)cancel;	// IMP=0x000000000002afdc
- (long long)compareFirst:(id)arg1 withSecond:(id)arg2;	// IMP=0x000000000002afb0
- (id)nextValueIndex:(id *)arg1;	// IMP=0x000000000002ac41
- (void)flushBufferAndRequestMoreWhileLocked;	// IMP=0x000000000002a6b4
- (void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002a355
- (void)_guardedBecomeTerminal;	// IMP=0x000000000002a02c
- (void)_completeWhileLockedWithCompletion:(id)arg1;	// IMP=0x0000000000029eb1
- (_Bool)_isBuffersEmpty;	// IMP=0x0000000000029d02
- (long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000297c6
- (void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000029568
- (_Bool)isWaitingForMoreValues;	// IMP=0x0000000000029373
- (void)requestDemand:(long long)arg1;	// IMP=0x0000000000028fbe
- (id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2;	// IMP=0x0000000000028ca9

@end

