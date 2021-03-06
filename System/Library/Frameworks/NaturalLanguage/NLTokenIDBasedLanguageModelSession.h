//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NLTokenIDBasedLanguageModelSession
{
}

- (void)unadaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000001f21e
- (void)adaptToTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000001f218
- (id)stateWithOptions:(id)arg1;	// IMP=0x000000000001f1ae
- (long long)blocklistStatusForTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2 matchType:(long long)arg3;	// IMP=0x000000000001f1a6
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2 maximumPredictions:(unsigned long long)arg3 maximumTokensPerPrediction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f1a0
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int *)arg1 count:(unsigned long long)arg2 contextTokenIDs:(const unsigned int *)arg3 length:(unsigned long long)arg4;	// IMP=0x000000000001f0c9
- (id)conditionalProbabilityForTokenID:(unsigned int)arg1 contextTokenIDs:(const unsigned int *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000001f0a0

@end

