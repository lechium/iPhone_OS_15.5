//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPNamedEntityStore.h>

#import <PersonalizationPortraitInternals/PPFeedbackProcessing-Protocol.h>

@class NSCache, NSObject, NSString, PPLocalTopicStore, PPNamedEntityStorage, PPTrialWrapper, _PASLazyResult, _PASLock;
@protocol OS_dispatch_queue;

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing>
{
    _PASLock *_lock;	// 8 = 0x8
    PPLocalTopicStore *_topicStoreForNamedEntityMapping;	// 16 = 0x10
    _PASLazyResult *_lazyContactStoreForMapsFeedback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_mapsPrefetchQueue;	// 32 = 0x20
    NSCache *_modelCache;	// 40 = 0x28
    PPTrialWrapper *_trialWrapper;	// 48 = 0x30
    PPNamedEntityStorage *_storage;	// 56 = 0x38
    NSString *_invalidationNotificationOverride;	// 64 = 0x40
    NSString *_meaningfulChangeNotificationOverride;	// 72 = 0x48
}

+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg1 perRecordDecayRate:(float)arg2;	// IMP=0x000000000007bf07
+ (id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;	// IMP=0x000000000007bb9c
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;	// IMP=0x000000000007bb22
+ (id)defaultStore;	// IMP=0x000000000007b893
- (void).cxx_destruct;	// IMP=0x00000000000790a0
@property(retain, nonatomic) NSString *meaningfulChangeNotificationOverride; // @synthesize meaningfulChangeNotificationOverride=_meaningfulChangeNotificationOverride;
@property(retain, nonatomic) NSString *invalidationNotificationOverride; // @synthesize invalidationNotificationOverride=_invalidationNotificationOverride;
@property(readonly, nonatomic) PPNamedEntityStorage *storage; // @synthesize storage=_storage;
- (_Bool)filterExistingNamedEntitiesWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007880b
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id *)arg3;	// IMP=0x000000000007844f
- (void)processFeedback:(id)arg1;	// IMP=0x0000000000076fc6
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076e7e
- (void)disableSyncForBundleIds:(id)arg1;	// IMP=0x0000000000076e61
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000756d1
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x0000000000075556
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x0000000000074fd1
- (_Bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000074fc9
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000074fc1
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000074fb9
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000074efc
- (_Bool)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 isComplete:(_Bool *)arg4;	// IMP=0x0000000000074edf
- (_Bool)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)arg1;	// IMP=0x0000000000074ec2
- (_Bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000074e05
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000074cac
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000074b9d
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000074a65
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000007492d
- (_Bool)flushDonationsWithError:(id *)arg1;	// IMP=0x000000000007482e
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;	// IMP=0x0000000000073adc
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 clientProcessName:(id)arg3;	// IMP=0x0000000000072b69
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072b54
- (id)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 streamingScorer:(id *)arg7 mlModel:(id)arg8;	// IMP=0x00000000000718c8
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;	// IMP=0x0000000000071524
- (_Bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000071196
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070fa3
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000070905
- (id)init;	// IMP=0x00000000000707ba
- (id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2 lazyContactStoreForMapsFeedback:(id)arg3 trialWrapper:(id)arg4;	// IMP=0x0000000000070449

@end
