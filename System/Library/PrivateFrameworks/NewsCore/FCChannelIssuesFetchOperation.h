//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCachePolicy, NSArray, NSDictionary;
@protocol FCContentContext;

@interface FCChannelIssuesFetchOperation
{
    FCCachePolicy *_cachePolicy;	// 8 = 0x8
    CDUnknownBlockType _fetchCompletionHandler;	// 16 = 0x10
    id <FCContentContext> _context;	// 24 = 0x18
    NSArray *_channelIDs;	// 32 = 0x20
    long long _issueSet;	// 40 = 0x28
    NSDictionary *_resultIssuesByChannel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000210be4
@property(retain, nonatomic) NSDictionary *resultIssuesByChannel; // @synthesize resultIssuesByChannel=_resultIssuesByChannel;
@property(nonatomic) long long issueSet; // @synthesize issueSet=_issueSet;
@property(retain, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000210a5d
- (void)performOperation;	// IMP=0x000000000020fef2
- (_Bool)validateOperation;	// IMP=0x000000000020fceb
- (id)initWithContext:(id)arg1 channelIDs:(id)arg2 issueSet:(long long)arg3;	// IMP=0x000000000020fc23
- (id)init;	// IMP=0x000000000020fade

@end
