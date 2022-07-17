//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortrait/PPUniversalSearchSpotlightFeedbackAccepting-Protocol.h>

@class NSString;

@interface PPTopicStore : NSObject <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting, PPClientStore>
{
}

+ (double)decayValue:(double)arg1 withDecayRate:(double)arg2 forTimeElapsed:(double)arg3;	// IMP=0x000000000001fb99
+ (id)defaultStore;	// IMP=0x000000000001fb36
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fb17
@property(retain, nonatomic) NSString *clientIdentifier;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fae3
- (id)topicCacheSandboxExtensionToken:(id *)arg1;	// IMP=0x000000000001fadd
- (_Bool)clearTopicScoresCache:(id *)arg1;	// IMP=0x000000000001fad7
- (_Bool)computeAndCacheTopicScores:(id *)arg1;	// IMP=0x000000000001fad1
- (id)cachedTopicScores;	// IMP=0x000000000001f9c0
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x000000000001f9ba
- (_Bool)clearWithError:(id *)arg1;	// IMP=0x000000000001f9b4
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x000000000001f9ae
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000001f983
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000001f974
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000001f955
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000001f936
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000001f927
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id *)arg7;	// IMP=0x000000000001f8fb
- (id)topicExtractionsFromText:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f8ec
- (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f8dd
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f8be
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f89f
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f880
- (_Bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f855
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f846
- (_Bool)iterRankedTopicsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f827
- (id)cachePath:(id *)arg1;	// IMP=0x000000000001f821
- (id)_initFromSubclass;	// IMP=0x000000000001f7f2
- (id)init;	// IMP=0x000000000001f7b8

@end
