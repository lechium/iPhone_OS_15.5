//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/SFSpeechRecognitionTaskDelegate-Protocol.h>
#import <WebCore/SFSpeechRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechRecognizerTaskImpl : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate>
{
    ObjectIdentifier_0a27c126 _identifier;	// 8 = 0x8
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;	// 16 = 0x10
    _Bool _doMultipleRecognitions;	// 24 = 0x18
    unsigned long long _maxAlternatives;	// 32 = 0x20
    struct RetainPtr<SFSpeechRecognizer> _recognizer;	// 40 = 0x28
    struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> _request;	// 48 = 0x30
    struct WeakObjCPtr<SFSpeechRecognitionTask> _task;	// 56 = 0x38
    _Bool _hasSentSpeechStart;	// 64 = 0x40
    _Bool _hasSentSpeechEnd;	// 65 = 0x41
    _Bool _hasSentEnd;	// 66 = 0x42
}

- (id).cxx_construct;	// IMP=0x000000000021e490
- (void).cxx_destruct;	// IMP=0x000000000021e440
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;	// IMP=0x000000000021e2d0
- (void)speechRecognitionTaskWasCancelled:(id)arg1;	// IMP=0x000000000021e2a0
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;	// IMP=0x000000000021e230
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;	// IMP=0x000000000021e1d0
- (void)speechRecognizer:(id)arg1 availabilityDidChange:(_Bool)arg2;	// IMP=0x000000000021e080
- (void)sendEndIfNeeded;	// IMP=0x000000000021dff0
- (void)sendSpeechEndIfNeeded;	// IMP=0x000000000021df50
- (void)sendSpeechStartIfNeeded;	// IMP=0x000000000021dec0
- (void)stop;	// IMP=0x000000000021de00
- (void)abort;	// IMP=0x000000000021dd40
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000021dd20
- (void)callbackWithTranscriptions:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000021d4d0
- (id)initWithIdentifier:(ObjectIdentifier_0a27c126)arg1 locale:(id)arg2 doMultipleRecognitions:(_Bool)arg3 reportInterimResults:(_Bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000021d270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

