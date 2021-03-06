//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCachePolicy, FCCloudContext, NSArray, NSString;
@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation
{
    FCCachePolicy *_cachedPolicy;	// 8 = 0x8
    long long _contentOptions;	// 16 = 0x10
    CDUnknownBlockType _fetchCompletionHandler;	// 24 = 0x18
    FCCloudContext *_context;	// 32 = 0x20
    NSArray *_configIssueIDs;	// 40 = 0x28
    NSArray *_configArticleIDs;	// 48 = 0x30
    NSString *_trendingArticleListID;	// 56 = 0x38
    id <FCFeedTransforming> _currentHeadlinesTransformation;	// 64 = 0x40
    NSArray *_resultConfigIssues;	// 72 = 0x48
    NSArray *_resultConfigHeadlines;	// 80 = 0x50
    NSArray *_resultCurrentIssues;	// 88 = 0x58
    NSArray *_resultCurrentFeatureHeadlines;	// 96 = 0x60
    NSArray *_resultTrendingHeadlines;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000a1768
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(nonatomic) long long contentOptions; // @synthesize contentOptions=_contentOptions;
@property(retain, nonatomic) FCCachePolicy *cachedPolicy; // @synthesize cachedPolicy=_cachedPolicy;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x000000000009fdc3
- (void)performOperation;	// IMP=0x000000000009f11f
- (_Bool)validateOperation;	// IMP=0x000000000009ed8d
- (id)initWithContext:(id)arg1 configIssueIDs:(id)arg2 configArticleIDs:(id)arg3 trendingArticleListID:(id)arg4 currentHeadlinesTransformation:(id)arg5;	// IMP=0x000000000009ec23
- (id)init;	// IMP=0x000000000009eade

@end

