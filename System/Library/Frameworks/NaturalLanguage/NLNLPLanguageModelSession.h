//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelSession
{
    struct CoreLanguageModelWithState *_model;	// 16 = 0x10
}

- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000219e7
- (id)predictionInitialCharacterSet;	// IMP=0x0000000000021982
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;	// IMP=0x0000000000021863
- (id)stateWithOptions:(id)arg1;	// IMP=0x00000000000217db
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;	// IMP=0x00000000000216d5
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x00000000000213c3
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021216
- (id)description;	// IMP=0x00000000000210fb
- (void)dealloc;	// IMP=0x00000000000210b5
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x0000000000020f61

@end
