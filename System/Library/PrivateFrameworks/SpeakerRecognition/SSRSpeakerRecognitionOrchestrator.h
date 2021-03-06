//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/SSRSpeakerRecognizerDelegate-Protocol.h>
#import <SpeakerRecognition/SSRVoiceActivityDetectorDelegate-Protocol.h>

@class NSDictionary, NSString, SSRSpeakerRecognitionContext, SSRVoiceActivityDetector;
@protocol CSAudioFileWriter, OS_dispatch_queue, OS_os_transaction, SSRSpeakerRecognitionOrchestratorDelegate, SSRSpeakerRecognizer;

@interface SSRSpeakerRecognitionOrchestrator : NSObject <SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate>
{
    double _lastScoreReportTimeStamp;	// 8 = 0x8
    double _lastSegmentStartTime;	// 16 = 0x10
    unsigned long long _segmentCounter;	// 24 = 0x18
    unsigned long long _numSamplesAddedToSpeakerRecognizers;	// 32 = 0x20
    _Bool _endAudioCalled;	// 40 = 0x28
    _Bool _startPointReported;	// 41 = 0x29
    SSRSpeakerRecognitionContext *_context;	// 48 = 0x30
    id <SSRSpeakerRecognitionOrchestratorDelegate> _delegate;	// 56 = 0x38
    id <CSAudioFileWriter> _ssrUttLogger;	// 64 = 0x40
    unsigned long long _myriadResult;	// 72 = 0x48
    id <SSRSpeakerRecognizer> _psrRecognizer;	// 80 = 0x50
    id <SSRSpeakerRecognizer> _satRecognizer;	// 88 = 0x58
    SSRVoiceActivityDetector *_vad;	// 96 = 0x60
    NSDictionary *_psrLastSpeakerInfo;	// 104 = 0x68
    NSDictionary *_satLastSpeakerInfo;	// 112 = 0x70
    NSDictionary *_combinedScores;	// 120 = 0x78
    NSDictionary *_psrFinalSpeakerInfo;	// 128 = 0x80
    NSDictionary *_satFinalSpeakerInfo;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    NSString *_debugUtteranceAudioFilePath;	// 152 = 0x98
    NSString *_debugUtteranceJsonFilePath;	// 160 = 0xa0
    NSObject<OS_os_transaction> *_transaction;	// 168 = 0xa8
    NSString *_transDesc;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000008174
@property(retain, nonatomic) NSString *transDesc; // @synthesize transDesc=_transDesc;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSString *debugUtteranceJsonFilePath; // @synthesize debugUtteranceJsonFilePath=_debugUtteranceJsonFilePath;
@property(retain, nonatomic) NSString *debugUtteranceAudioFilePath; // @synthesize debugUtteranceAudioFilePath=_debugUtteranceAudioFilePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *satFinalSpeakerInfo; // @synthesize satFinalSpeakerInfo=_satFinalSpeakerInfo;
@property(retain, nonatomic) NSDictionary *psrFinalSpeakerInfo; // @synthesize psrFinalSpeakerInfo=_psrFinalSpeakerInfo;
@property(retain, nonatomic) NSDictionary *combinedScores; // @synthesize combinedScores=_combinedScores;
@property(retain, nonatomic) NSDictionary *satLastSpeakerInfo; // @synthesize satLastSpeakerInfo=_satLastSpeakerInfo;
@property(retain, nonatomic) NSDictionary *psrLastSpeakerInfo; // @synthesize psrLastSpeakerInfo=_psrLastSpeakerInfo;
@property(retain, nonatomic) SSRVoiceActivityDetector *vad; // @synthesize vad=_vad;
@property(retain, nonatomic) id <SSRSpeakerRecognizer> satRecognizer; // @synthesize satRecognizer=_satRecognizer;
@property(retain, nonatomic) id <SSRSpeakerRecognizer> psrRecognizer; // @synthesize psrRecognizer=_psrRecognizer;
@property(nonatomic) unsigned long long myriadResult; // @synthesize myriadResult=_myriadResult;
@property(retain, nonatomic) id <CSAudioFileWriter> ssrUttLogger; // @synthesize ssrUttLogger=_ssrUttLogger;
@property(nonatomic) __weak id <SSRSpeakerRecognitionOrchestratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSRSpeakerRecognitionContext *context; // @synthesize context=_context;
- (void)SSRVoiceActivityDetector:(id)arg1 didDetectEndPointAt:(unsigned long long)arg2;	// IMP=0x0000000000007df0
- (void)SSRVoiceActivityDetector:(id)arg1 didDetectStartPointAt:(unsigned long long)arg2;	// IMP=0x0000000000007ca1
- (void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2;	// IMP=0x00000000000073ff
- (void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2;	// IMP=0x000000000000702c
- (id)getLatestVoiceRecognitionInfo;	// IMP=0x0000000000006b7e
- (void)updateDebugFilePathsForSegment:(unsigned long long)arg1;	// IMP=0x00000000000069be
- (void)_resetWithContext:(id)arg1;	// IMP=0x000000000000678f
- (id)orchestratorScoresWithPSRScores:(id)arg1 withSATScores:(id)arg2 withSegmentStartTime:(double)arg3;	// IMP=0x000000000000647e
- (void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg1 hasFinished:(_Bool)arg2;	// IMP=0x0000000000006193
- (id)resetWithContext:(id)arg1;	// IMP=0x0000000000005e43
- (void)endAudio;	// IMP=0x0000000000005d8e
- (void)processAudio:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0000000000005a85
- (void)dealloc;	// IMP=0x00000000000059ab
- (id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000503f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

