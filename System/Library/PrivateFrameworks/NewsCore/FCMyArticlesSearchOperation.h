//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, FCDateRange, FCFeedItemFeature, NSArray, NSDictionary;

@interface FCMyArticlesSearchOperation
{
    _Bool _channelsOnly;	// 8 = 0x8
    _Bool _cachedOnly;	// 9 = 0x9
    _Bool _unreadOnly;	// 10 = 0xa
    FCCloudContext *_context;	// 16 = 0x10
    FCFeedItemFeature *_feature;	// 24 = 0x18
    FCDateRange *_dateRange;	// 32 = 0x20
    CDUnknownBlockType _searchCompletionHandler;	// 40 = 0x28
    NSArray *_resultFeedItems;	// 48 = 0x30
    NSDictionary *_resultFeedContextByFeedID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000062669
@property(copy) NSDictionary *resultFeedContextByFeedID; // @synthesize resultFeedContextByFeedID=_resultFeedContextByFeedID;
@property(retain, nonatomic) NSArray *resultFeedItems; // @synthesize resultFeedItems=_resultFeedItems;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionHandler; // @synthesize searchCompletionHandler=_searchCompletionHandler;
@property(nonatomic) _Bool unreadOnly; // @synthesize unreadOnly=_unreadOnly;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) _Bool channelsOnly; // @synthesize channelsOnly=_channelsOnly;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(copy, nonatomic) FCFeedItemFeature *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006150d
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000000613ee
- (void)performOperation;	// IMP=0x0000000000061070
- (_Bool)validateOperation;	// IMP=0x0000000000060c8a
- (id)init;	// IMP=0x0000000000060c40

@end

