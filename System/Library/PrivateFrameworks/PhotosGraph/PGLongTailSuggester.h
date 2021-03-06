//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableSet, NSString, PGLongTailAdditionalOptions, PGSuggestionOptions;

@interface PGLongTailSuggester
{
    PGSuggestionOptions *_options;	// 8 = 0x8
    PGLongTailAdditionalOptions *_additionalOptions;	// 16 = 0x10
    unsigned long long _maximumNumberOfSuggestions;	// 24 = 0x18
    unsigned long long _numberOfGeneratedSuggestions;	// 32 = 0x20
    unsigned int _randomSeed;	// 40 = 0x28
    NSArray *_eligibleAssetUUIDs;	// 48 = 0x30
    NSDictionary *_verifiedPersonUUIDsByAssetUUIds;	// 56 = 0x38
    NSMutableSet *_suggestedAssetsFromPreviousBatch;	// 64 = 0x40
    NSMutableSet *_candidateAssetsFromPreviousBatch;	// 72 = 0x48
    NSString *_meNodeLocalIdentifier;	// 80 = 0x50
    double _topTierAestheticScoreThreshold;	// 88 = 0x58
}

+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1 seed:(unsigned int)arg2;	// IMP=0x00000000002e201f
+ (id)suggestionSubtypes;	// IMP=0x00000000002e2001
+ (id)suggestionTypes;	// IMP=0x00000000002e1fe3
- (void).cxx_destruct;	// IMP=0x00000000002e14b7
- (struct _NSRange)_randomRangeWithLocationUpperBound:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000000002e1472
- (id)_assetUUIDsFromAssets:(id)arg1 atIndices:(id)arg2;	// IMP=0x00000000002e128b
- (id)reasonsForSuggestion:(id)arg1;	// IMP=0x00000000002e113e
- (id)_assetUUIDByWeightedProbablisticSamplingFromAssetUUIDS:(id)arg1 weights:(id)arg2;	// IMP=0x00000000002e0ea0
- (id)_bestAssetUUIDsFromCandidates:(id)arg1 percentile:(unsigned long long)arg2;	// IMP=0x00000000002e0d8d
- (id)_candidateByAssetUUIDsFromAssets:(id)arg1;	// IMP=0x00000000002e0add
- (id)_eligibleAssetUUIDsWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002dfe23
- (id)allInterestingMomentsFromGraph:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002df87b
- (_Bool)isMomentNodeInteresting:(id)arg1 withNeighborScoreComputer:(id)arg2;	// IMP=0x00000000002df7a3
- (id)highlightedAssetInternalPredicate;	// IMP=0x00000000002df652
- (id)_batchOfRandomAssetsWithCount:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ded0d
- (id)_fetchVerifiedPersonUUIDsByAssetUUIds:(id)arg1;	// IMP=0x00000000002debd6
- (unsigned long long)_longTailScoreWithAsset:(id)arg1 withAdditionalOptions:(id)arg2;	// IMP=0x00000000002dea6a
- (id)nextSuggestedAssetWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ddf32
- (id)_nextCandidateAssetsWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002dde34
- (_Bool)_shouldUsePreviousBatchOfCandidateAssets;	// IMP=0x00000000002dddd5
- (void)reset;	// IMP=0x00000000002ddc89
- (id)nextSuggestionWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000002dd938
- (void)startSuggestingWithOptions:(id)arg1;	// IMP=0x00000000002dd6b8
- (void)captureInformationFromGraph:(id)arg1;	// IMP=0x00000000002dd519
- (_Bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;	// IMP=0x00000000002dd38d
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dcd5f

@end

