//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REMLModelManagerObserver-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver>
{
    REMLSentimentAnalyzer *_sentimentAnalyzer;	// 8 = 0x8
}

+ (Class)_relevanceProviderClass;	// IMP=0x00000000000265b6
+ (id)_features;	// IMP=0x0000000000026499
- (void).cxx_destruct;	// IMP=0x0000000000026fe0
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x0000000000026f8d
- (void)modelManagerDidUpdateModel:(id)arg1;	// IMP=0x0000000000026e54
- (void)pause;	// IMP=0x0000000000026d2e
- (void)resume;	// IMP=0x0000000000026bee
- (_Bool)_suppportsSentimentAnalysis;	// IMP=0x0000000000026b79
- (_Bool)_suppportsPortarit;	// IMP=0x0000000000026b04
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;	// IMP=0x00000000000265c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

