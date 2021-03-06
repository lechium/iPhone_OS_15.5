//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFSpeechRecognitionResult;
@protocol _SFSpeechRecognitionTaskDelegatePrivate;

@interface _SFSpeechRecognitionDelegateTask
{
    id <_SFSpeechRecognitionTaskDelegatePrivate> _delegate;	// 88 = 0x58
    SFSpeechRecognitionResult *_recognitionResultToReportAfterFinalSearchResults;	// 96 = 0x60
    _SFSpeechRecognitionDelegateTask *_selfReference;	// 104 = 0x68
    _Bool _waitForVoiceSearchResult;	// 112 = 0x70
    _Bool _hasSentRealSearchResults;	// 113 = 0x71
}

- (void).cxx_destruct;	// IMP=0x0000000000005d69
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0000000000005d23
- (void)localSpeechRecognitionClient:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x0000000000005d11
- (void)localSpeechRecognitionClient:(id)arg1 didFinishRecognition:(id)arg2;	// IMP=0x0000000000005c69
- (void)localSpeechRecognitionClient:(id)arg1 didRecognizePartialResult:(id)arg2 rawPartialResult:(id)arg3;	// IMP=0x0000000000005bc1
- (void)localSpeechRecognitionClient:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x0000000000005b7e
- (void)localSpeechRecognitionClient:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x0000000000005b3b
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg1;	// IMP=0x0000000000005afa
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x000000000000555e
- (void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x000000000000554c
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x0000000000005469
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x0000000000005177
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0000000000005131
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x00000000000050ee
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x000000000000501e
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x0000000000004fdb
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x0000000000004f9a
- (void)_tellDelegateDidFinishSuccessfully:(_Bool)arg1;	// IMP=0x0000000000004e3a
- (void)_handleDidProcessAudioDuration:(double)arg1;	// IMP=0x0000000000004cff
- (void)_handleDidFinishRecognition:(id)arg1;	// IMP=0x0000000000004ab5
- (void)_handleDidRecognizePartialResult:(id)arg1;	// IMP=0x00000000000048d4
- (void)_handleSpeechRecordingDidCancel;	// IMP=0x0000000000004806
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5;	// IMP=0x00000000000046fc

@end

