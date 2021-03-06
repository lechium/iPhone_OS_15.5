//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NanoRoutePlanningStateManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningState : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    long long _previousState;	// 16 = 0x10
    long long _nextState;	// 24 = 0x18
    long long _sessionState;	// 32 = 0x20
    double _timestampStarted;	// 40 = 0x28
    _Bool _active;	// 48 = 0x30
    id <NanoRoutePlanningStateManager> _manager;	// 56 = 0x38
}

+ (long long)requiredInitialStateForRequest:(id)arg1;	// IMP=0x0040000000746d73
- (void).cxx_destruct;	// IMP=0x00200000007473ce
@property(nonatomic) __weak id <NanoRoutePlanningStateManager> manager; // @synthesize manager=_manager;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) long long sessionState;
- (void)resume;	// IMP=0x001000000074738e
- (void)pause;	// IMP=0x0010000000747388
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000074720d
- (void)stop;	// IMP=0x0010000000747207
- (void)start;	// IMP=0x0010000000747201
- (void)leaveToState:(long long)arg1;	// IMP=0x0010000000747000
- (void)enterToState:(long long)arg1 fromState:(long long)arg2;	// IMP=0x0010000000746e18
- (id)initWithStateManager:(id)arg1 isolationQueue:(id)arg2;	// IMP=0x0010000000746d7e

@end

