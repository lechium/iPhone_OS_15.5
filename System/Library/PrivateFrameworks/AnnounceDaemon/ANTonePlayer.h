//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, AVPlayer, AVPlayerItem, NSUUID;
@protocol OS_os_log;

@interface ANTonePlayer : NSObject
{
    unsigned int _proxyAudioSessionID;	// 8 = 0x8
    NSUUID *_endpointUUID;	// 16 = 0x10
    AVPlayer *_player;	// 24 = 0x18
    AVAudioSession *_audioSession;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
    AVPlayerItem *_playerItem;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000020143
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSUUID *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
@property(nonatomic) unsigned int proxyAudioSessionID; // @synthesize proxyAudioSessionID=_proxyAudioSessionID;
- (void)_callHandler:(id)arg1;	// IMP=0x0000000000020017
- (void)playerRateChangedHandler:(id)arg1;	// IMP=0x000000000001fdcb
- (void)_handlePlayerItemPlayedToEnd:(id)arg1;	// IMP=0x000000000001fc7f
- (void)_handlePlayerItemFailedToPlayToEnd:(id)arg1;	// IMP=0x000000000001fb6c
- (void)_handleFailure;	// IMP=0x000000000001fadd
- (void)audioSessionInterruptionHandler:(id)arg1;	// IMP=0x000000000001f6a9
- (void)_deregisterForNotificationsWithAudioSession:(id)arg1;	// IMP=0x000000000001f4f7
- (void)_registerForNotificationsWithAudioSession:(id)arg1;	// IMP=0x000000000001f31b
- (void)_deactivateAudioSession;	// IMP=0x000000000001f11e
- (_Bool)_activateAudioSessionForPlayer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ee76
- (void)_playFileURL:(id)arg1;	// IMP=0x000000000001ec02
- (void)_playSystemSoundWithFileURL:(id)arg1;	// IMP=0x000000000001e9c5
- (void)stop;	// IMP=0x000000000001e988
- (void)playFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e927
- (void)dealloc;	// IMP=0x000000000001e8b9
- (id)initWithAudioSessionID:(unsigned int)arg1 endpointUUID:(id)arg2;	// IMP=0x000000000001e819

@end
