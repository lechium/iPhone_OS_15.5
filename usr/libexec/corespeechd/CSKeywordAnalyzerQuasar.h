//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_previousUtteranceTokens;	// 16 = 0x10
    NSArray *_triggerTokenList;	// 24 = 0x18
    _EARSpeechRecognizer *_recognizer;	// 32 = 0x20
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;	// 40 = 0x28
    _Bool _useKeywordSpotting;	// 48 = 0x30
    NSDictionary *_ctcKwdToPhraseIdMap;	// 56 = 0x38
    double _triggerConfidence;	// 64 = 0x40
    unsigned long long _activeChannel;	// 72 = 0x48
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001ec86
@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
@property(retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
- (double)_getConfidence:(id)arg1;	// IMP=0x001000000001e8f4
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x001000000001e336
- (id)_phraseIdToCtcScoreMap;	// IMP=0x001000000001ddb8
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x001000000001d92c
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x001000000001d6ff
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;	// IMP=0x001000000001d6ad
- (void)processAudioChunk:(id)arg1;	// IMP=0x001000000001d45f
- (void)endAudio;	// IMP=0x001000000001d336
- (void)runRecognition;	// IMP=0x001000000001d202
- (void)dealloc;	// IMP=0x001000000001d15e
- (void)reset;	// IMP=0x001000000001d06a
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3;	// IMP=0x001000000001cc49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

