//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCachePolicy, FCCloudContext, NSArray, NSDictionary;

@interface FCIssueHeadlinesFetchOperation
{
    FCCachePolicy *_cachePolicy;	// 8 = 0x8
    CDUnknownBlockType _fetchCompletionHandler;	// 16 = 0x10
    FCCloudContext *_context;	// 24 = 0x18
    NSArray *_issueIDs;	// 32 = 0x20
    NSDictionary *_resultHeadlinesByIssue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001bb2f3
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000001bae93
- (void)performOperation;	// IMP=0x00000000001ba292
- (_Bool)validateOperation;	// IMP=0x00000000001ba0b1
- (id)initWithContext:(id)arg1 issues:(id)arg2;	// IMP=0x00000000001ba018
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;	// IMP=0x00000000001b9f63
- (id)init;	// IMP=0x00000000001b9e1e

@end
