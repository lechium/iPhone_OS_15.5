//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBoostableOperationThrottlerDelegate-Protocol.h>

@class FCBoostableOperationThrottler, FCMapTable, NFMutexLock, NSCountedSet, NSHashTable, NSString;
@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate>
{
    id <FCFetchCoordinatorDelegate> _delegate;	// 8 = 0x8
    unsigned long long _maxConcurrentFetchCount;	// 16 = 0x10
    NSHashTable *_fetchGroups;	// 24 = 0x18
    NSCountedSet *_allKeys;	// 32 = 0x20
    FCMapTable *_fetchOperationsByGroup;	// 40 = 0x28
    NFMutexLock *_accessLock;	// 48 = 0x30
    FCBoostableOperationThrottler *_fetchThrottler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000120e71
@property unsigned long long maxConcurrentFetchCount; // @synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount;
@property(nonatomic) __weak id <FCFetchCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)operationThrottlerPerformOperation:(id)arg1;	// IMP=0x000000000011fe20
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000011fc94
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000011f84f
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000011f751
- (id)init;	// IMP=0x000000000011f652

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

