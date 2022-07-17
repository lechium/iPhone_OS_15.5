//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, NSMutableArray;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    AWAttentionSampler *_attentionSampler;	// 32 = 0x20
    id <AWSchedulerObserver> _observer;	// 40 = 0x28
}

+ (id)sharedUnitTestScheduler;	// IMP=0x0000000000002661
+ (id)sharedScheduler;	// IMP=0x0000000000002631
- (void).cxx_destruct;	// IMP=0x00000000000022d7
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
- (void)reevaluate;	// IMP=0x000000000000216d
- (void)armEvents;	// IMP=0x0000000000001b65
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000001b37
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x00000000000019c2
- (void)removeInvalidClients;	// IMP=0x00000000000019ae
- (void)removeInvalidClientsWithConnection:(id)arg1;	// IMP=0x00000000000016df
- (void)addClient:(id)arg1;	// IMP=0x00000000000014bb
- (id)description;	// IMP=0x0000000000001425
- (id)initForUnitTest:(_Bool)arg1;	// IMP=0x0000000000001210

@end
