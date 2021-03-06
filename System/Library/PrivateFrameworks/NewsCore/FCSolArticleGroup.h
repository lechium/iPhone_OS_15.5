//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCHeadlineClusteringRules, FCSolTagID, NSMutableSet;

@interface FCSolArticleGroup : NSObject
{
    FCSolTagID *_tagId;	// 8 = 0x8
    NSMutableSet *_articles;	// 16 = 0x10
    double _personalizationScore;	// 24 = 0x18
    FCHeadlineClusteringRules *_rules;	// 32 = 0x20
    NSMutableSet *_topArticles;	// 40 = 0x28
    NSMutableSet *_orphans;	// 48 = 0x30
    double _score;	// 56 = 0x38
    double _heuristicScore;	// 64 = 0x40
}

+ (id)formBestOfGroup:(id)arg1 clusteringRules:(id)arg2 topicDiversityThreshold:(double)arg3 topicDiversityWindowSize:(long long)arg4 allowUnfilteredArticles:(_Bool)arg5;	// IMP=0x000000000026f675
+ (id)formGroup:(id)arg1 withMinClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 maxPublisherOccurrences:(long long)arg4 maxUnpaidArticles:(long long)arg5 maxEvergreenArticles:(long long)arg6 enforcePublisherCap:(_Bool)arg7;	// IMP=0x000000000026f059
+ (id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6;	// IMP=0x000000000026ecce
- (void).cxx_destruct;	// IMP=0x0000000000270961
@property(nonatomic) double heuristicScore; // @synthesize heuristicScore=_heuristicScore;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSMutableSet *orphans; // @synthesize orphans=_orphans;
@property(readonly, nonatomic) NSMutableSet *topArticles; // @synthesize topArticles=_topArticles;
@property(retain, nonatomic) FCHeadlineClusteringRules *rules; // @synthesize rules=_rules;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(retain, nonatomic) NSMutableSet *articles; // @synthesize articles=_articles;
@property(retain, nonatomic) FCSolTagID *tagId; // @synthesize tagId=_tagId;
- (void)computeTopArticlesAndScore;	// IMP=0x000000000026e710
- (void)intersectArticles:(id)arg1;	// IMP=0x000000000026e6de
- (id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4;	// IMP=0x000000000026e5ac

@end

