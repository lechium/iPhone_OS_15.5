//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOfflineFetchOperationType-Protocol.h>

@class FCCachePolicy, FCThreadSafeMutableArray, NSObject, NSString;
@protocol FCContentContext, FCFlintHelper, OS_dispatch_queue;

@interface FCOfflineIssueFetchOperation <FCOfflineFetchOperationType>
{
    _Bool cachedOnly;	// 8 = 0x8
    CDUnknownBlockType archiveHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *archiveQueue;	// 24 = 0x18
    CDUnknownBlockType fetchCompletionHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *fetchCompletionQueue;	// 40 = 0x28
    CDUnknownBlockType progressHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *progressQueue;	// 56 = 0x38
    id <FCContentContext> _context;	// 64 = 0x40
    id <FCFlintHelper> _flintHelper;	// 72 = 0x48
    NSString *_issueID;	// 80 = 0x50
    FCThreadSafeMutableArray *_resultInterestTokens;	// 88 = 0x58
    double _progress;	// 96 = 0x60
    FCCachePolicy *_issueRecordCachePolicy;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002c61aa
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue; // @synthesize progressQueue;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // @synthesize fetchCompletionQueue;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // @synthesize archiveQueue;
@property(copy, nonatomic) CDUnknownBlockType archiveHandler; // @synthesize archiveHandler;
- (void)resetForRetry;	// IMP=0x00000000002c2a72
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;	// IMP=0x00000000002c29a7
- (unsigned long long)maxRetries;	// IMP=0x00000000002c299c
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000002c2521
- (void)performOperation;	// IMP=0x00000000002c19eb
- (_Bool)validateOperation;	// IMP=0x00000000002c18e3
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3;	// IMP=0x00000000002c1850
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3;	// IMP=0x00000000002c1754
- (id)init;	// IMP=0x00000000002c160f

@end
