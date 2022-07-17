//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModel
{
    long long _granularity;	// 40 = 0x28
}

- (void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020f29
- (void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020ef1
- (double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2;	// IMP=0x0000000000020eb0
- (double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2;	// IMP=0x0000000000020e6f
- (id)sessionWithOptions:(id)arg1;	// IMP=0x0000000000020e13
- (_Bool)generatesPredictions;	// IMP=0x0000000000020e0b
- (long long)granularity;	// IMP=0x0000000000020dfa
- (id)initWithLocalization:(id)arg1 options:(id)arg2;	// IMP=0x0000000000020d81

@end
