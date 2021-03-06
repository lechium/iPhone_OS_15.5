//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchOperation
{
    FCFetchOperationResult *_result;	// 8 = 0x8
    _Bool _shouldFailOnMissingObjects;	// 16 = 0x10
    _Bool _canSendFetchCompletionSynchronously;	// 17 = 0x11
    unsigned long long _cachePolicy;	// 24 = 0x18
    double _maximumCachedAge;	// 32 = 0x20
    CDUnknownBlockType _fetchCompletionBlock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_fetchCompletionQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000068184
@property(readonly) FCFetchOperationResult *result; // @synthesize result=_result;
@property _Bool canSendFetchCompletionSynchronously; // @synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously;
@property(retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // @synthesize fetchCompletionQueue=_fetchCompletionQueue;
@property(copy) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property _Bool shouldFailOnMissingObjects; // @synthesize shouldFailOnMissingObjects=_shouldFailOnMissingObjects;
@property double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void)finishFromEarlyCancellation;	// IMP=0x0000000000068039
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x0000000000067e4d
- (void)takeInputsFromFetchOperation:(id)arg1;	// IMP=0x0000000000067d84
- (void)finishExecutingWithError:(id)arg1;	// IMP=0x0000000000067d27
- (void)finishExecutingWithStatus:(unsigned long long)arg1;	// IMP=0x0000000000067ccf
- (void)finishExecutingWithFetchedObject:(id)arg1;	// IMP=0x0000000000067c74
- (void)finishExecutingWithResult:(id)arg1;	// IMP=0x000000000006795e
- (void)cancel;	// IMP=0x00000000000678cb
- (id)init;	// IMP=0x0000000000067888

@end

