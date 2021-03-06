//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SUPlayerStatus;

@interface SUScriptAudioPlayer
{
    SUPlayerStatus *_playerStatus;	// 72 = 0x48
    NSURL *_url;	// 80 = 0x50
    NSURL *_keyUrl;	// 88 = 0x58
    NSURL *_certificateUrl;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x000000000010b7ac
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000010b6e3
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000010b68f
- (id)scriptAttributeKeys;	// IMP=0x000000000010b749
- (id)attributeKeys;	// IMP=0x000000000010b737
- (void)_audioPlayerStateChangeNotification:(id)arg1;	// IMP=0x000000000010b605
@property(readonly) long long playerStateUnplayed;
@property(readonly) long long playerStatePaused;
@property(readonly) long long playerStateFinished;
@property(readonly) long long playerStateFailed;
@property(readonly) long long playerStateBuffering;
@property(readonly) long long playerStateActive;
@property(readonly) NSString *nowPlayingKeyTitle;
@property(readonly) NSString *nowPlayingKeyPlaybackDuration;
@property(readonly) NSString *nowPlayingKeyPersistentID;
@property(readonly) NSString *nowPlayingKeyGenre;
@property(readonly) NSString *nowPlayingKeyDiscNumber;
@property(readonly) NSString *nowPlayingKeyDiscCount;
@property(readonly) NSString *nowPlayingKeyComposer;
@property(readonly) NSString *nowPlayingKeyArtwork;
@property(readonly) NSString *nowPlayingKeyArtist;
@property(readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property(readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property(readonly) NSString *nowPlayingKeyAlbumTitle;
@property(readonly) NSString *URL;
@property(readonly) long long state;
@property(readonly) NSString *keyURL;
@property(readonly) double duration;
@property(readonly) double currentTime;
@property(readonly) NSString *certificateURL;
- (id)_className;	// IMP=0x000000000010b39f
- (void)stop;	// IMP=0x000000000010b307
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;	// IMP=0x000000000010b10d
- (void)pause;	// IMP=0x000000000010b075
- (void)play;	// IMP=0x000000000010af76
- (void)dealloc;	// IMP=0x000000000010aecd
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;	// IMP=0x000000000010ad25

@end

