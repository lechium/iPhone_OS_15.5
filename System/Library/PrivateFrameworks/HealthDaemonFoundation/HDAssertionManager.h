//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDAssertionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    NSMutableDictionary *_assertionRecordsByIdentifier;	// 24 = 0x18
    NSMutableDictionary *_observerSetsByAssertionIdentifier;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
    _Bool _consumeBudgets;	// 41 = 0x29
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_budgetTimerQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000007e11
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *budgetTimerQueue; // @synthesize budgetTimerQueue=_budgetTimerQueue;
- (void)_releaseAssertion:(id)arg1;	// IMP=0x0000000000007027
- (void)invalidate;	// IMP=0x0000000000006c2d
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000006a67
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;	// IMP=0x00000000000069ca
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;	// IMP=0x000000000000687e
- (void)suspendBudgetConsumption;	// IMP=0x0000000000006819
- (void)resumeBudgetConsumption;	// IMP=0x00000000000067b4
- (_Bool)takeAssertion:(id)arg1;	// IMP=0x0000000000005f94
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;	// IMP=0x0000000000005e4a
- (id)allAssertionsForIdentifier:(id)arg1;	// IMP=0x0000000000005d5f
- (id)activeAssertionsForIdentifier:(id)arg1;	// IMP=0x0000000000005c6a
- (_Bool)hasActiveAssertion:(id)arg1;	// IMP=0x0000000000005990
- (_Bool)hasActiveAssertionForIdentifier:(id)arg1;	// IMP=0x0000000000005673
- (void)dealloc;	// IMP=0x0000000000005604
- (id)init;	// IMP=0x00000000000054f2

@end
