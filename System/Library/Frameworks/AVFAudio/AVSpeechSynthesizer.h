//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject
{
    _Bool _speaking;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    _Bool _usesApplicationAudioSession;	// 10 = 0xa
    _Bool _mixToTelephonyUplink;	// 11 = 0xb
    id <AVSpeechSynthesizerDelegate> _delegate;	// 16 = 0x10
    NSArray *_outputChannels;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000887b7
- (void).cxx_destruct;	// IMP=0x000000000008887d
@property(nonatomic) _Bool mixToTelephonyUplink; // @synthesize mixToTelephonyUplink=_mixToTelephonyUplink;
@property(nonatomic) _Bool usesApplicationAudioSession; // @synthesize usesApplicationAudioSession=_usesApplicationAudioSession;
@property(retain, nonatomic) NSArray *outputChannels; // @synthesize outputChannels=_outputChannels;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic, getter=isSpeaking) _Bool speaking; // @synthesize speaking=_speaking;
@property(nonatomic) __weak id <AVSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)continueSpeaking;	// IMP=0x00000000000887fd
- (_Bool)pauseSpeakingAtBoundary:(long long)arg1;	// IMP=0x00000000000887f5
- (_Bool)stopSpeakingAtBoundary:(long long)arg1;	// IMP=0x00000000000887ed
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2 toMarkerCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000887e7
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000887e1
- (void)speakUtterance:(id)arg1;	// IMP=0x00000000000887db

@end
