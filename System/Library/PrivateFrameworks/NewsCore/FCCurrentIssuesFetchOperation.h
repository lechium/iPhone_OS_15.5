//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCachePolicy, NSArray;
@protocol FCContentContext;

@interface FCCurrentIssuesFetchOperation
{
    FCCachePolicy *_cachePolicy;	// 8 = 0x8
    CDUnknownBlockType _fetchCompletionHandler;	// 16 = 0x10
    id <FCContentContext> _context;	// 24 = 0x18
    NSArray *_resultIssues;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000130cdb
@property(retain, nonatomic) NSArray *resultIssues; // @synthesize resultIssues=_resultIssues;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000130b9b
- (void)performOperation;	// IMP=0x00000000001302b2
- (_Bool)validateOperation;	// IMP=0x0000000000130199
- (id)initWithContext:(id)arg1;	// IMP=0x000000000013012b
- (id)init;	// IMP=0x000000000012ffe6

@end

