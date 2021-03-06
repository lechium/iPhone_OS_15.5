//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, FCDateRange, FCMapTable, NFUnfairLock, NSArray, NSDictionary, NSError;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation
{
    _Bool _streamFeedItems;	// 8 = 0x8
    _Bool _scoreFeedItems;	// 9 = 0x9
    _Bool _includeEvergreenFeedItems;	// 10 = 0xa
    _Bool _isStreamingFinished;	// 11 = 0xb
    id <FCCoreConfiguration> _configuration;	// 16 = 0x10
    FCCloudContext *_context;	// 24 = 0x18
    FCDateRange *_dateRange;	// 32 = 0x20
    long long _streamFeedItemsCount;	// 40 = 0x28
    CDUnknownBlockType _feedItemsChangedHandler;	// 48 = 0x30
    NSArray *_feedItems;	// 56 = 0x38
    NSArray *_sortedNonEditorialFeedItems;	// 64 = 0x40
    FCMapTable *_nonEditorialScoreProfiles;	// 72 = 0x48
    NSDictionary *_feedContextByFeedID;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
    long long _binOverride;	// 96 = 0x60
    CDUnknownBlockType _feedItemCompletionBlock;	// 104 = 0x68
    unsigned long long _maxNumberOfFeedsToQuery;	// 112 = 0x70
    unsigned long long _perFeedLimit;	// 120 = 0x78
    NFUnfairLock *_feedItemsLock;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000f9464
@property(nonatomic) unsigned long long perFeedLimit; // @synthesize perFeedLimit=_perFeedLimit;
@property(nonatomic) unsigned long long maxNumberOfFeedsToQuery; // @synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery;
@property(copy, nonatomic) CDUnknownBlockType feedItemCompletionBlock; // @synthesize feedItemCompletionBlock=_feedItemCompletionBlock;
@property(nonatomic) long long binOverride; // @synthesize binOverride=_binOverride;
@property(readonly) _Bool isStreamingFinished;
@property(readonly, copy) NSError *error;
@property(readonly, copy) NSDictionary *feedContextByFeedID;
@property(readonly) FCMapTable *nonEditorialScoreProfiles;
@property(readonly, copy) NSArray *sortedNonEditorialFeedItems;
@property(readonly, copy) NSArray *feedItems;
@property(copy, nonatomic) CDUnknownBlockType feedItemsChangedHandler; // @synthesize feedItemsChangedHandler=_feedItemsChangedHandler;
@property(nonatomic) _Bool includeEvergreenFeedItems; // @synthesize includeEvergreenFeedItems=_includeEvergreenFeedItems;
@property(nonatomic) long long streamFeedItemsCount; // @synthesize streamFeedItemsCount=_streamFeedItemsCount;
@property(nonatomic) _Bool scoreFeedItems; // @synthesize scoreFeedItems=_scoreFeedItems;
@property(nonatomic) _Bool streamFeedItems; // @synthesize streamFeedItems=_streamFeedItems;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000000f8f3a
- (void)performOperation;	// IMP=0x00000000000f703d
- (_Bool)validateOperation;	// IMP=0x00000000000f6cd9
- (id)init;	// IMP=0x00000000000f6bd6

@end

