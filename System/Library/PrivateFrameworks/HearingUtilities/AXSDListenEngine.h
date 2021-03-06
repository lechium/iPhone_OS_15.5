//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioEngine, AVAudioSession, NSPointerArray;
@protocol OS_dispatch_queue;

@interface AXSDListenEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;	// 16 = 0x10
    NSPointerArray *_delegates;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    AVAudioEngine *_audioEngine;	// 40 = 0x28
    AVAudioSession *_audioSession;	// 48 = 0x30
}

+ (_Bool)_stateIsNotListening:(long long)arg1;	// IMP=0x0000000000065acc
+ (id)_stringForState:(long long)arg1;	// IMP=0x0000000000064dde
+ (id)sharedInstance;	// IMP=0x0000000000064394
- (void).cxx_destruct;	// IMP=0x00000000000676d9
@property(retain) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain) AVAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
- (void)_restartSoundRecognitionIfNecesary;	// IMP=0x00000000000675c0
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x00000000000674c4
- (void)_handleConfigurationChangeNotification:(id)arg1;	// IMP=0x00000000000673c8
- (void)_carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x0000000000067046
- (void)_handleInterruptionRequestingState:(long long)arg1;	// IMP=0x0000000000066f8b
- (void)_handleAudioSessionInterruption:(id)arg1;	// IMP=0x0000000000066cc6
- (void)_startIfPossibleAndNotify;	// IMP=0x0000000000066b53
- (void)_setupAudioInputWithError:(id *)arg1 shouldInterrupt:(_Bool)arg2;	// IMP=0x00000000000667fd
- (void)_pipedInFileUpdated;	// IMP=0x00000000000663fd
- (void)_micDisabledUpdated;	// IMP=0x00000000000661b2
- (void)_activateNotifications;	// IMP=0x0000000000065d74
- (_Bool)_stopListeningAndTransitionToState:(long long)arg1;	// IMP=0x0000000000065add
- (_Bool)_notListeningForAnyReason;	// IMP=0x0000000000065aac
- (_Bool)_startListeningWithError:(id *)arg1;	// IMP=0x0000000000065240
- (id)audioEngineInputNode;	// IMP=0x0000000000065196
- (void)_handleBuffer:(id)arg1 atTime:(id)arg2;	// IMP=0x0000000000064e4c
- (void)_setState:(long long)arg1;	// IMP=0x0000000000064d85
- (void)removeListenDelegate:(id)arg1;	// IMP=0x0000000000064b63
- (void)notifyListeningStartedWithError:(id)arg1;	// IMP=0x00000000000648fd
- (void)addListenDelegate:(id)arg1;	// IMP=0x00000000000645b2
@property(readonly) unsigned long long bufferSize;
@property(readonly) _Bool isListening;
- (void)dealloc;	// IMP=0x0000000000064525
- (id)init;	// IMP=0x00000000000643e9

@end

