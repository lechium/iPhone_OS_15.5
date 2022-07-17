//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REActivityTrackerDelegate-Protocol.h>
#import <RelevanceEngine/RERelevanceEngineSubsystemProperties-Protocol.h>

@class NSString, REActivityTracker, RERelevanceEngine;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate>
{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;	// 8 = 0x8
    REActivityTracker *_activityTracker;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 28 = 0x1c
    RERelevanceEngine *_relevanceEngine;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007bacd
@property(readonly, nonatomic) __weak RERelevanceEngine *relevanceEngine; // @synthesize relevanceEngine=_relevanceEngine;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;	// IMP=0x000000000007ba5b
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;	// IMP=0x000000000007b9ff
- (void)endActivity:(id)arg1 forObject:(id)arg2;	// IMP=0x000000000007b988
- (void)beginActivity:(id)arg1 forObject:(id)arg2;	// IMP=0x000000000007b8eb
- (void)withdrawObject:(id)arg1;	// IMP=0x000000000007b6e0
- (void)trackObject:(id)arg1;	// IMP=0x000000000007b68c
- (void)setRunning:(_Bool)arg1;	// IMP=0x000000000007b683
@property(readonly, nonatomic) NSString *name;
- (void)resume;	// IMP=0x000000000007b66b
- (void)pause;	// IMP=0x000000000007b665
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;	// IMP=0x000000000007b5da
- (id)initWithRelevanceEngine:(id)arg1;	// IMP=0x000000000007b4fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
