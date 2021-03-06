//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCArticleHeadlinesFetchOperation
{
    _Bool _overrideArticleCachePolicy;	// 8 = 0x8
    _Bool _overrideTagCachePolicy;	// 9 = 0x9
    _Bool _shouldFilterHeadlinesWithoutSourceChannels;	// 10 = 0xa
    id <FCCoreConfiguration> _configuration;	// 16 = 0x10
    unsigned long long _articleCachePolicy;	// 24 = 0x18
    double _articleMaximumCachedAge;	// 32 = 0x20
    unsigned long long _tagCachePolicy;	// 40 = 0x28
    double _tagMaximumCachedAge;	// 48 = 0x30
    CDUnknownBlockType _interestTokenHandler;	// 56 = 0x38
    id <FCContentContext> _context;	// 64 = 0x40
    NSArray *_articleIDs;	// 72 = 0x48
    NSArray *_ignoreCacheForArticleIDs;	// 80 = 0x50
    NSArray *_resultHeadlines;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000015977f
@property(retain, nonatomic) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property(retain, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property(retain, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;
@property(nonatomic) _Bool shouldFilterHeadlinesWithoutSourceChannels; // @synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels;
@property double tagMaximumCachedAge; // @synthesize tagMaximumCachedAge=_tagMaximumCachedAge;
@property unsigned long long tagCachePolicy; // @synthesize tagCachePolicy=_tagCachePolicy;
@property _Bool overrideTagCachePolicy; // @synthesize overrideTagCachePolicy=_overrideTagCachePolicy;
@property double articleMaximumCachedAge; // @synthesize articleMaximumCachedAge=_articleMaximumCachedAge;
@property unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property _Bool overrideArticleCachePolicy; // @synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (id)completeFetchOperation;	// IMP=0x00000000001595a5
- (id)fetchRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000158b72
- (id)fetchConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001589b6
- (id)determineAppropriateFetchStepsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000158924
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;	// IMP=0x0000000000158844
- (id)init;	// IMP=0x00000000001586ff

@end

