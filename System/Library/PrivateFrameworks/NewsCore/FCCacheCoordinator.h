//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCCacheCoordinatorFlushPolicy, FCThreadSafeMutableDictionary, NFUnfairLock, NSCountedSet, NSMutableSet, NSSet, NSString;
@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>
{
    _Bool _flushingEnabled;	// 8 = 0x8
    id <FCCacheCoordinatorDelegate> _delegate;	// 16 = 0x10
    NSMutableSet *_storedKeys;	// 24 = 0x18
    NSCountedSet *_interestedKeys;	// 32 = 0x20
    FCThreadSafeMutableDictionary *_cacheHintsByKey;	// 40 = 0x28
    NFUnfairLock *_interestLock;	// 48 = 0x30
    id <FCCacheCoordinatorLocking> _underlyingLock;	// 56 = 0x38
    id <FCOperationThrottler> _flushThrottler;	// 64 = 0x40
    FCCacheCoordinatorFlushPolicy *_flushPolicy;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000114a79
@property(nonatomic) __weak id <FCCacheCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)operationThrottlerPerformOperation:(id)arg1;	// IMP=0x000000000011393a
- (void)enableFlushingWithPolicy:(id)arg1;	// IMP=0x00000000001138e4
- (id)persistableHints;	// IMP=0x0000000000113828
- (void)didRemoveKeysFromCache:(id)arg1;	// IMP=0x0000000000113769
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;	// IMP=0x00000000001135f2
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;	// IMP=0x00000000001133cc
- (void)didInsertKeyIntoCache:(id)arg1;	// IMP=0x00000000001133b8
- (_Bool)cacheContainsKey:(id)arg1;	// IMP=0x0000000000113399
- (void)performCacheWrite:(CDUnknownBlockType)arg1;	// IMP=0x000000000011337c
- (void)performCacheRead:(CDUnknownBlockType)arg1;	// IMP=0x000000000011335f
@property(readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property(readonly, nonatomic) NSSet *keysWithZeroInterest;
- (id)holdTokensForKeys:(id)arg1;	// IMP=0x0000000000112d1a
- (id)holdTokenForKeys:(id)arg1;	// IMP=0x000000000011298c
- (id)holdTokenForKey:(id)arg1;	// IMP=0x00000000001128d0
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;	// IMP=0x000000000011251a
- (void)setupWithInitialKeys:(id)arg1;	// IMP=0x0000000000112506
- (void)dealloc;	// IMP=0x00000000001124b9
- (id)init;	// IMP=0x0000000000112370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

