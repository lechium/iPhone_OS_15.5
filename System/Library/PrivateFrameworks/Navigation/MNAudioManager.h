//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNAudioHardwareEngineObserver-Protocol.h>
#import <Navigation/MNAudioProvider-Protocol.h>

@class MNAudioHardwareEngine, MNObserverHashTable, MNUserOptions, NSString;

__attribute__((visibility("hidden")))
@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver, MNAudioProvider>
{
    int _transportType;	// 8 = 0x8
    MNObserverHashTable *_observers;	// 16 = 0x10
    MNUserOptions *_options;	// 24 = 0x18
    MNAudioHardwareEngine *_audioEngine;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f5d9d
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)audioHardwareEngine:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000f5d7b
- (void)audioHardwareEngine:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x00000000000f5d62
- (double)durationOf:(id)arg1;	// IMP=0x00000000000f5d4c
- (_Bool)vibrateForShortPrompt:(unsigned long long)arg1;	// IMP=0x00000000000f5b10
- (void)clearAllAnnouncements;	// IMP=0x00000000000f5afa
- (_Bool)isSpeaking;	// IMP=0x00000000000f5ae4
- (void)stopSpeaking;	// IMP=0x00000000000f5ace
- (void)speak:(id)arg1 withVoiceGuidanceLevel:(unsigned long long)arg2 andCondition:(unsigned long long)arg3 usingShortPrompt:(unsigned long long)arg4 thenCallCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f5ac8
- (_Bool)voiceGuidanceEnabled;	// IMP=0x00000000000f5ac0
- (void)changeVoiceGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;	// IMP=0x00000000000f5aba
- (void)changeTransportType:(int)arg1;	// IMP=0x00000000000f5ab4
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000f5aae
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000f5aa8
- (void)addObserver:(id)arg1;	// IMP=0x00000000000f5aa2
@property(readonly, nonatomic) unsigned long long voiceGuidanceLevel;
- (void)dealloc;	// IMP=0x00000000000f5a25
- (id)initWithTransportType:(int)arg1 andVoiceGuidanceLevel:(unsigned long long)arg2 andVoiceLanguage:(id)arg3;	// IMP=0x00000000000f5944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

