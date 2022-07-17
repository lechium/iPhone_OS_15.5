//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLTokenizer;

@interface NLLMLanguageModelSession
{
    void *_model;	// 16 = 0x10
    NLTokenizer *_tokenizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020d6e
- (float)usageCountForTokenID:(unsigned int)arg1;	// IMP=0x0000000000020d38
- (_Bool)shouldAdaptToTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000020d14
- (void)pruneToSize:(unsigned long long)arg1;	// IMP=0x0000000000020cf5
- (void)applyExponentialDecay;	// IMP=0x0000000000020cd9
- (void)flushDynamicData;	// IMP=0x0000000000020cbb
- (void)reset;	// IMP=0x0000000000020c9f
- (void)recordWithDifferentialPrivacy:(id)arg1;	// IMP=0x0000000000020c80
- (_Bool)getFirstDynamicTokenID:(unsigned int *)arg1 lastDynamicTokenID:(unsigned int *)arg2;	// IMP=0x0000000000020c5c
- (_Bool)addTokenForString:(id)arg1 tokenID:(unsigned int *)arg2;	// IMP=0x0000000000020c38
- (void)unadaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000020c1a
- (void)adaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000020bfc
- (long long)blocklistStatusForTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2 matchType:(long long)arg3;	// IMP=0x0000000000020bc2
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2 maximumPredictions:(unsigned long long)arg3 maximumTokensPerPrediction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020815
- (id)conditionalProbabilityForTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000002079d
- (void)unadaptToToken:(id)arg1 context:(id)arg2;	// IMP=0x000000000002063b
- (void)adaptToToken:(id)arg1 context:(id)arg2;	// IMP=0x00000000000204d9
- (long long)blocklistStatusForString:(id)arg1 matchType:(long long)arg2;	// IMP=0x00000000000203d7
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000202ad
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x000000000001ff75
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x000000000001fdcd
- (id)description;	// IMP=0x000000000001fcb2
- (void)dealloc;	// IMP=0x000000000001fc6c
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x000000000001fa74

@end
