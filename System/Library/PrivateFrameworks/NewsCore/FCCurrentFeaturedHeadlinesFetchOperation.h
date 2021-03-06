//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol FCContentContext, FCFeedTransforming;

@interface FCCurrentFeaturedHeadlinesFetchOperation
{
    _Bool _useFallbackArticleSource;	// 8 = 0x8
    CDUnknownBlockType _fetchCompletionHandler;	// 16 = 0x10
    id <FCContentContext> _context;	// 24 = 0x18
    id <FCFeedTransforming> _transformation;	// 32 = 0x20
    NSArray *_resultHeadlines;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f1c34
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000000f0a5d
- (void)performOperation;	// IMP=0x00000000000eff88
- (_Bool)validateOperation;	// IMP=0x00000000000efda7
- (id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(_Bool)arg3;	// IMP=0x00000000000efd7b
- (id)initWithContext:(id)arg1 transformation:(id)arg2;	// IMP=0x00000000000efcd9
- (id)init;	// IMP=0x00000000000efb94

@end

