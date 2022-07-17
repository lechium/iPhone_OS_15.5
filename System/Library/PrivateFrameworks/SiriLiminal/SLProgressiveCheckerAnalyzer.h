//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioCircularBuffer, NSMutableArray, SLProgressiveCheckerContext;
@protocol OS_dispatch_queue, SLProgressiveCheckerAnalyzerDelegate;

@interface SLProgressiveCheckerAnalyzer : NSObject
{
    NSMutableArray *_activeRecognizers;	// 8 = 0x8
    SLProgressiveCheckerContext *_context;	// 16 = 0x10
    NSMutableArray *_checkerEndSamples;	// 24 = 0x18
    unsigned long long _analyzedSamplesSoFar;	// 32 = 0x20
    double _latestScore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <SLProgressiveCheckerAnalyzerDelegate> _delegate;	// 56 = 0x38
    unsigned long long _checkerType;	// 64 = 0x40
    CSAudioCircularBuffer *_circBuffer;	// 72 = 0x48
    unsigned long long _numSamplesAddedToBufferSinceLastFlush;	// 80 = 0x50
    unsigned long long _numSamplesInStride;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000710f
- (void)_endAudio;	// IMP=0x0000000000006be5
- (void)_addAudio:(id)arg1;	// IMP=0x00000000000064d5
- (void)_startNewRequestWithContext:(id)arg1;	// IMP=0x00000000000061ca
- (void)endAudio;	// IMP=0x0000000000006169
- (void)addAudio:(id)arg1;	// IMP=0x00000000000060c1
- (void)startNewRequestWithContext:(id)arg1;	// IMP=0x0000000000006019
- (id)initWithConfig:(id)arg1 withDelegate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000545d

@end
