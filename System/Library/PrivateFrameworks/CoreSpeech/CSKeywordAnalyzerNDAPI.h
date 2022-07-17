//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSNovDetector;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

@interface CSKeywordAnalyzerNDAPI : NSObject
{
    CSNovDetector *_novDetector;	// 8 = 0x8
    unsigned long long _startAnalyzeSampleCount;	// 16 = 0x10
    _Bool _isStartSampleCountMarked;	// 24 = 0x18
    unsigned long long _lastSampleFed;	// 32 = 0x20
    unsigned long long _sampleFedWrapAroundOffset;	// 40 = 0x28
    unsigned int _activePhraseId;	// 48 = 0x30
    unsigned long long _activeChannel;	// 56 = 0x38
    id <CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000092a5a
@property(nonatomic) __weak id <CSKeywordAnalyzerNDAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int activePhraseId; // @synthesize activePhraseId=_activePhraseId;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (float)getRejectLoggingThreshold;	// IMP=0x0000000000092986
- (float)getLoggingThreshold;	// IMP=0x00000000000928ff
- (float)getThreshold;	// IMP=0x0000000000092878
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x0000000000092854
- (id)getAnalyzedMpVtResults;	// IMP=0x0000000000092760
- (id)getAnalyzedResult;	// IMP=0x00000000000926f7
- (id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned int)arg1 withNovDetectorResult:(id)arg2;	// IMP=0x000000000009258e
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0000000000092578
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0000000000092562
- (void)processAudioChunk:(id)arg1;	// IMP=0x000000000009231a
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x000000000009227b
- (void)_resetStartAnalyzeTime;	// IMP=0x0000000000092269
- (void)resetBest;	// IMP=0x0000000000092253
- (void)reset;	// IMP=0x000000000009221a
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x000000000009212f

@end
