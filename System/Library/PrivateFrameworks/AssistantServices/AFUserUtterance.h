//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface AFUserUtterance : NSObject
{
    NSMutableArray *_phrases;	// 8 = 0x8
    NSMutableArray *_tokens;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    long long _sentenceConfidence;	// 32 = 0x20
    NSMutableArray *_utterances;	// 40 = 0x28
    NSDictionary *_correctionIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000490dc
@property(readonly, nonatomic) NSDictionary *correctionIdentifier; // @synthesize correctionIdentifier=_correctionIdentifier;
- (id)description;	// IMP=0x0000000000048ffd
- (id)streamingTokens;	// IMP=0x0000000000048fef
@property(readonly, nonatomic) NSArray *dictationResult;
@property(readonly, nonatomic) NSArray *allPhrases;
- (id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000048834
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)arg1 swapIndices:(id)arg2;	// IMP=0x0000000000048340
- (void)_updatePhraseswithSwapIndices:(id)arg1;	// IMP=0x0000000000047f52
- (id)allRecognitionStringsAndScores;	// IMP=0x000000000004738f
- (id)interpretationOfUtteranceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047103
- (id)textOfUtteranceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046dde
- (id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2;	// IMP=0x0000000000046b5f
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2;	// IMP=0x0000000000046ad6
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000046a4a
- (id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2;	// IMP=0x00000000000463f9
- (id)speechTokensForUtteranceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046110
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000045cb6
- (id)bestTextInterpretation;	// IMP=0x00000000000457ec
- (long long)numberOfAlternativeUtterances;	// IMP=0x00000000000457d6
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;	// IMP=0x000000000004571d
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;	// IMP=0x0000000000045664
- (id)initWithPhrases:(id)arg1 sentenceConfidence:(long long)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000045572
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;	// IMP=0x00000000000454b9
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;	// IMP=0x0000000000045400

@end
