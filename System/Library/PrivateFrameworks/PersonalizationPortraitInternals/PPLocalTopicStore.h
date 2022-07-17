//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPTopicStore.h>

#import <PersonalizationPortraitInternals/PPFeedbackProcessing-Protocol.h>

@class NSCache, NSError, NSObject, NSString, PPTopicBlocklist, PPTopicStorage, PPTrialWrapper, _PASLock;
@protocol OS_dispatch_queue;

@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing>
{
    _PASLock *_lock;	// 8 = 0x8
    NSCache *_modelCache;	// 16 = 0x10
    PPTrialWrapper *_trialWrapper;	// 24 = 0x18
    PPTopicBlocklist *_blocklist;	// 32 = 0x20
    NSString *_cachePath;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_cacheAsyncUpdateQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_cacheUpdateQueue;	// 56 = 0x38
    struct atomic_flag _cacheUpdateEnqueued;	// 64 = 0x40
    NSError *_cacheUpdateError;	// 72 = 0x48
    PPTopicStorage *_storage;	// 80 = 0x50
}

+ (id)recordsForTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;	// IMP=0x0000000000138e12
+ (id)calibrateScoredTopic:(id)arg1 calibrationTrie:(id)arg2;	// IMP=0x0000000000138c79
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;	// IMP=0x0000000000138bff
+ (id)defaultStore;	// IMP=0x0000000000138af7
- (void).cxx_destruct;	// IMP=0x0000000000133642
@property(readonly, nonatomic) PPTopicStorage *storage; // @synthesize storage=_storage;
- (id)topicCacheSandboxExtensionToken:(id *)arg1;	// IMP=0x0000000000133541
- (_Bool)clearTopicScoresCache:(id *)arg1;	// IMP=0x00000000001334da
- (_Bool)computeAndCacheTopicScoresWithShouldContinueBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000133341
- (_Bool)computeAndCacheTopicScores:(id *)arg1;	// IMP=0x0000000000133325
- (void)processFeedback:(id)arg1;	// IMP=0x0000000000130fe2
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130e89
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130cfc
- (void)disableSyncForBundleIds:(id)arg1;	// IMP=0x0000000000130cdf
- (void)logDonationErrorForReason:(long long)arg1 errorCode:(unsigned long long)arg2 source:(id)arg3;	// IMP=0x0000000000130c1b
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x0000000000130b48
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x00000000001305c3
- (_Bool)pruneOrphanedTopicFeedbackCountsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 isComplete:(_Bool *)arg4;	// IMP=0x00000000001305a6
- (_Bool)deleteAllTopicFeedbackCountsOlderThanDate:(id)arg1;	// IMP=0x0000000000130589
- (_Bool)deleteAllTopicsOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000130514
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 algorithm:(unsigned long long)arg3 olderThan:(id)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000130489
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000013040c
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000130393
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000013031e
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000001302a1
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000130228
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000001301ab
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000130132
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000000001300d6
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000130081
- (_Bool)flushDonationsWithError:(id *)arg1;	// IMP=0x000000000012ffc8
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id *)arg7;	// IMP=0x000000000012ebc9
- (id)topicExtractionsFromText:(id)arg1 clientProcessName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012e230
- (id)topicExtractionsFromText:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012e214
- (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012e021
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000012dc2b
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012da87
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 clientProcessName:(id)arg4;	// IMP=0x000000000012d47a
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012d465
- (_Bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000012d446
- (_Bool)iterScoredTopicsWithQuery:(id)arg1 error:(id *)arg2 clientProcessName:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000012c84c
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2 clientProcessName:(id)arg3;	// IMP=0x000000000012c665
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012c650
- (id)scoreTopics:(id)arg1 scoringDate:(id)arg2 decayRate:(double)arg3 strictFiltering:(_Bool)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 streamingScorer:(id *)arg7 mlModel:(id)arg8;	// IMP=0x000000000012b730
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;	// IMP=0x000000000012b38c
- (id)cachedTopicScores;	// IMP=0x000000000012b365
- (id)cachePath:(id *)arg1;	// IMP=0x000000000012b350
- (id)init;	// IMP=0x000000000012b273
- (id)initWithStorage:(id)arg1 trialWrapper:(id)arg2;	// IMP=0x000000000012add2

@end
