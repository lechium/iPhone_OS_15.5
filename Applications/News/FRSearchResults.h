//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCArticleSearchResult, FCArticleStreamingResults, FCStreamingResults, NSArray, NSDate, NSString;
@protocol FCTagProviding;

@interface FRSearchResults : NSObject
{
    NSString *_searchString;	// 8 = 0x8
    long long _searchMethod;	// 16 = 0x10
    FCStreamingResults *_topicResults;	// 24 = 0x18
    FCStreamingResults *_channelResults;	// 32 = 0x20
    FCArticleStreamingResults *_articleSearchResults;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    NSArray *_cachedChannels;	// 64 = 0x40
    NSArray *_cachedTopics;	// 72 = 0x48
    NSArray *_cachedArticles;	// 80 = 0x50
    id <FCTagProviding> _cachedTopHitChannelOrTopic;	// 88 = 0x58
    FCArticleSearchResult *_cachedTopHitArticle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000db4bf
@property(retain) FCArticleSearchResult *cachedTopHitArticle; // @synthesize cachedTopHitArticle=_cachedTopHitArticle;
@property(retain) id <FCTagProviding> cachedTopHitChannelOrTopic; // @synthesize cachedTopHitChannelOrTopic=_cachedTopHitChannelOrTopic;
@property(retain, nonatomic) NSArray *cachedArticles; // @synthesize cachedArticles=_cachedArticles;
@property(retain, nonatomic) NSArray *cachedTopics; // @synthesize cachedTopics=_cachedTopics;
@property(retain, nonatomic) NSArray *cachedChannels; // @synthesize cachedChannels=_cachedChannels;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) FCArticleStreamingResults *articleSearchResults; // @synthesize articleSearchResults=_articleSearchResults;
@property(readonly, nonatomic) FCStreamingResults *channelResults; // @synthesize channelResults=_channelResults;
@property(readonly, nonatomic) FCStreamingResults *topicResults; // @synthesize topicResults=_topicResults;
@property(readonly, nonatomic) long long searchMethod; // @synthesize searchMethod=_searchMethod;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSString *completedSearchString;
@property(readonly, nonatomic) NSArray *fetchedHeadlineResults;
@property(readonly, nonatomic) NSArray *fetchedChannelResults;
@property(readonly, nonatomic) NSArray *fetchedTopicResults;
- (id)_fetchedResults:(id)arg1;	// IMP=0x00100000000db1c2
- (id)articles;	// IMP=0x00100000000db118
- (id)filteredArticles;	// IMP=0x00100000000db066
@property(readonly, nonatomic) NSArray *filteredTopics;
@property(readonly, nonatomic) NSArray *filteredChannels;
- (id)articleResultAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000dad69
- (id)channelResultAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000dacc9
- (id)topicResultAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000dac29
- (id)topHitArticle;	// IMP=0x00100000000dab5d
- (id)topHitChannelOrTopic;	// IMP=0x00100000000da37b
- (id)topHitChannel;	// IMP=0x00100000000da32b
- (id)topHitTopic;	// IMP=0x00100000000da2db
- (unsigned long long)numberOfTopHitResults;	// IMP=0x00100000000da274
- (unsigned long long)numberOfArticleResults;	// IMP=0x00100000000da230
- (unsigned long long)numberOfChannelResults;	// IMP=0x00100000000da1ec
- (unsigned long long)numberOfTopicResults;	// IMP=0x00100000000da1a8
- (_Bool)hasArticleResults;	// IMP=0x00100000000da18f
- (_Bool)hasChannelResults;	// IMP=0x00100000000da176
- (_Bool)hasTopicResults;	// IMP=0x00100000000da15d
- (_Bool)hasTopHit;	// IMP=0x00100000000da0f1
- (_Bool)hasSearchResults;	// IMP=0x00100000000da0a4
- (id)initWithTopicResults:(id)arg1 channelResults:(id)arg2 articleResults:(id)arg3 searchString:(id)arg4 searchMethod:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7;	// IMP=0x00100000000d9f73

@end
