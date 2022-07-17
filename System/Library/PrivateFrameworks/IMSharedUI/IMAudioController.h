//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMAudioPlayerDelegate-Protocol.h>

@class IMAudioPlayer, NSArray, NSMutableArray, NSString, NSURL;
@protocol IMAudioControllerDelegate;

@interface IMAudioController : NSObject <IMAudioPlayerDelegate>
{
    unsigned long long _currentIndex;	// 8 = 0x8
    IMAudioPlayer *_listenAudioPlayer;	// 16 = 0x10
    NSMutableArray *_audioURLs;	// 24 = 0x18
    _Bool _shouldUseSpeaker;	// 32 = 0x20
    _Bool _shouldStopPlayingWhenSilent;	// 33 = 0x21
    _Bool _shouldDuckOthers;	// 34 = 0x22
    _Bool _shouldUseAVPlayer;	// 35 = 0x23
    _Bool _playing;	// 36 = 0x24
    _Bool _paused;	// 37 = 0x25
    _Bool _interrupted;	// 38 = 0x26
    NSURL *_currentURL;	// 40 = 0x28
    id <IMAudioControllerDelegate> _delegate;	// 48 = 0x30
    IMAudioPlayer *_audioPlayer;	// 56 = 0x38
}

+ (id)audioControllerWithContentsOfURLs:(id)arg1;	// IMP=0x0000000000007c2f
+ (Class)audioControllerClass;	// IMP=0x0000000000007c1e
- (void).cxx_destruct;	// IMP=0x00000000000096eb
@property(retain, nonatomic) IMAudioPlayer *listenAudioPlayer; // @synthesize listenAudioPlayer=_listenAudioPlayer;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) IMAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <IMAudioControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool shouldUseAVPlayer; // @synthesize shouldUseAVPlayer=_shouldUseAVPlayer;
@property(nonatomic) _Bool shouldDuckOthers; // @synthesize shouldDuckOthers=_shouldDuckOthers;
@property(nonatomic) _Bool shouldStopPlayingWhenSilent; // @synthesize shouldStopPlayingWhenSilent=_shouldStopPlayingWhenSilent;
@property(nonatomic) _Bool shouldUseSpeaker; // @synthesize shouldUseSpeaker=_shouldUseSpeaker;
- (void)playListenEndSound:(CDUnknownBlockType)arg1;	// IMP=0x000000000000954e
- (void)playListenSound:(CDUnknownBlockType)arg1;	// IMP=0x00000000000094e2
- (void)_playSoundWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000930e
- (void)_notifyPlayerDidPrepareAudioURL:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000009284
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000009230
- (void)audioPlayerDidFinishPlaying:(id)arg1;	// IMP=0x00000000000090a7
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;	// IMP=0x0000000000008fdc
@property(nonatomic) float volume;
@property(readonly, nonatomic) double currentMediaObjectDuration;
@property(readonly, nonatomic) double currentMediaObjectTime;
- (id)currentMediaObject;	// IMP=0x0000000000008e60
- (void)stop;	// IMP=0x0000000000008cce
- (void)pause;	// IMP=0x0000000000008c30
- (void)prepareToPlay;	// IMP=0x00000000000087ef
- (void)playAfterDelay:(double)arg1;	// IMP=0x0000000000007ee0
- (void)play;	// IMP=0x0000000000007ecb
- (unsigned long long)audioSessionControllerOptions;	// IMP=0x0000000000007e6e
- (void)addContentsOfURLs:(id)arg1;	// IMP=0x0000000000007cc6
- (void)addContentsOfURL:(id)arg1;	// IMP=0x0000000000007cb0
@property(readonly, copy, nonatomic) NSArray *audioURLs;
- (id)initWithContentsOfURLs:(id)arg1;	// IMP=0x0000000000007b99
- (void)dealloc;	// IMP=0x0000000000007b3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
