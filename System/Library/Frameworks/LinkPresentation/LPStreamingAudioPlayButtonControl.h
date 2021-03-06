//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPAudioPlayerClient-Protocol.h>

@class LPAudioPlayerMediaPlayableAdaptor;
@protocol LPAudioPlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingAudioPlayButtonControl <LPAudioPlayerClient>
{
    id <LPAudioPlayer> _player;	// 8 = 0x8
    LPAudioPlayerMediaPlayableAdaptor *_playableAdaptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009df5a
- (id)playable;	// IMP=0x000000000009df45
- (void)buttonPressed:(id)arg1;	// IMP=0x000000000009ded4
- (void)audioPlayerDidFailToPlay:(id)arg1;	// IMP=0x000000000009dece
- (void)audioPlayer:(id)arg1 didChangeProgress:(float)arg2;	// IMP=0x000000000009de90
- (void)audioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x000000000009de1e
- (void)dealloc;	// IMP=0x000000000009ddd2
- (id)initWithAudio:(id)arg1 style:(id)arg2 theme:(id)arg3 player:(id)arg4;	// IMP=0x000000000009dcb8

@end

