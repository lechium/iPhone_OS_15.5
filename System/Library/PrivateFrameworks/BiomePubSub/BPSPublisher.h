//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSPublisher-Protocol.h>

@class NSString;

@interface BPSPublisher : NSObject <BPSPublisher>
{
}

- (void)subscribe:(id)arg1;	// IMP=0x000000000000e9bc
- (id)correlateWithCurrent:(id)arg1 comparator:(CDUnknownBlockType)arg2 correlateHandler:(id)arg3;	// IMP=0x0000000000004d12
- (id)bufferWithSize:(unsigned long long)arg1 prefetch:(unsigned long long)arg2 whenFull:(unsigned long long)arg3;	// IMP=0x00000000000062a3
- (id)connectableSinkWithCompletion:(CDUnknownBlockType)arg1 shouldContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fae0
- (id)sinkWithCompletion:(CDUnknownBlockType)arg1 shouldContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fa4e
- (id)sinkWithCompletion:(CDUnknownBlockType)arg1 receiveInput:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f9bc
- (id)drivableSinkWithBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2 shouldContinue:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b4ec
- (id)sinkWithBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2 receiveInput:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b389
- (id)handleEventsReceiveSubscription:(CDUnknownBlockType)arg1 receiveOutput:(CDUnknownBlockType)arg2 receiveCompletion:(CDUnknownBlockType)arg3 receiveCancel:(CDUnknownBlockType)arg4 receiveRequest:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f0e7
- (id)multicastCreateSubject:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f08b
- (id)multicastSubject:(id)arg1;	// IMP=0x000000000001efdd
- (id)windowWithAssigner:(id)arg1;	// IMP=0x000000000001ef6d
- (id)windowByKey:(CDUnknownBlockType)arg1 assigner:(id)arg2;	// IMP=0x000000000001eeee
- (id)removeDuplicatesWithIsDuplicate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ee92
- (id)orderedMergeWithOthers:(id)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ed97
- (id)orderedMergeWithOther:(id)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ed18
- (id)zipWithOthers:(id)arg1;	// IMP=0x000000000001ec37
- (id)zipWithOther:(id)arg1;	// IMP=0x000000000001ebdb
- (id)flatMapWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eb7a
- (id)collect;	// IMP=0x000000000001eb44
- (id)filterWithIsIncluded:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eae8
- (id)last;	// IMP=0x000000000001eab2
- (id)mapWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ea56
- (id)sequenceWithSequence:(id)arg1;	// IMP=0x000000000001ea09
- (id)reduce:(id)arg1;	// IMP=0x000000000001e956
- (id)reduceWithInitial:(id)arg1 nextPartialResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e8d7
- (id)timerFor:(double)arg1 getTimestamp:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e871
- (id)scanWithInitial:(id)arg1 nextPartialResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e7f2
- (id)throttleFor:(double)arg1 latest:(_Bool)arg2 getTimestamp:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e77f
- (id)debounceFor:(double)arg1 getTimestamp:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e719
- (id)combineLatestwithOther:(id)arg1;	// IMP=0x000000000001e6bd
- (id)mergeWithOther:(id)arg1;	// IMP=0x000000000001e661
- (id)mergeWithOthers:(id)arg1;	// IMP=0x000000000001e580
- (id)groupByKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026529

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
