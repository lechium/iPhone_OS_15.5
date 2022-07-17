//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, NSString;
@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    id <IMAssistantAudioPlayerDelegate> _delegate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    AVAudioPlayer *_player;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001a0c
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000001952
- (void)cleanupAudioSession;	// IMP=0x000000000000190a
- (_Bool)setupAudioSession;	// IMP=0x00000000000017b1
- (long long)playerState;	// IMP=0x0000000000001794
- (void)stopPlaying;	// IMP=0x000000000000177e
- (_Bool)startPlayingAudioURL:(id)arg1;	// IMP=0x000000000000161b
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000001577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
