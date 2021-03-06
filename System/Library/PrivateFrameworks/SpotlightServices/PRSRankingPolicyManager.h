//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PRSRankingPolicyManager : NSObject
{
}

+ (double)termFrequencyComponentForWord:(id)arg1 inString:(id)arg2;	// IMP=0x00000000000bee75
+ (double)termFrequencyComponentFor:(id)arg1 matchingString:(id)arg2 weighted:(_Bool)arg3;	// IMP=0x00000000000be8a3
+ (id)getSharedRankingPolicyManager;	// IMP=0x00000000000be84e
- (id)cookSQFOnClientWithServerProbabilities:(id)arg1 qiCEPValues:(id)arg2 localResultOrder:(id)arg3 poorTextMatchCategories:(id)arg4 minimumBagCEP:(double)arg5 cook_sqf_topdown:(_Bool)arg6 cook_sqf_fallback_qi_cep:(_Bool)arg7;	// IMP=0x00000000000c0af7
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6 ordered_first_term_position:(double *)arg7 prefixMatch:(_Bool)arg8 queryBreakDown:(id)arg9 isVirtualField:(_Bool)arg10 locale:(id)arg11;	// IMP=0x00000000000bfb74
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6 prefixMatch:(_Bool)arg7;	// IMP=0x00000000000bfaa4
- (void)computeNewFeaturesForProperty:(id)arg1 query:(id)arg2 qr_prop_query_norm_min_ordered_span:(double *)arg3 qr_prop_query_norm_min_unordered_span:(double *)arg4 qr_query_min_pair_dist_in_title:(double *)arg5 prefix_match_norm_count:(double *)arg6;	// IMP=0x00000000000bfa71
- (_Bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long *)arg5;	// IMP=0x00000000000bf8e5
- (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long *)arg6 minimumDistancePair:(long long *)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;	// IMP=0x00000000000bf6aa
- (id)cosineComponentsUsingWordMatches:(id)arg1 withField:(id)arg2 withCorpusCount:(double)arg3 prefixVersion:(_Bool)arg4;	// IMP=0x00000000000bf0bd

@end

