//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PUBrowsingVideoPlayerChange
{
    _Bool _playStateDidChange;	// 8 = 0x8
    _Bool _desiredPlayStateDidChange;	// 9 = 0x9
    _Bool _isPlayingAllowedDidChange;	// 10 = 0xa
    _Bool _isActivatedDidChange;	// 11 = 0xb
    _Bool _isPlayerLoadingAllowedDidChange;	// 12 = 0xc
    _Bool _avPlayerDidChange;	// 13 = 0xd
    _Bool _playerItemDidChange;	// 14 = 0xe
    _Bool _errorDidChange;	// 15 = 0xf
    _Bool _isAtBeginningDidChange;	// 16 = 0x10
    _Bool _isAtEndDidChange;	// 17 = 0x11
    _Bool _isStalledDidChange;	// 18 = 0x12
    _Bool _alwaysRespectsMuteSwitchDidChange;	// 19 = 0x13
    _Bool _isPlayableDidChange;	// 20 = 0x14
    _Bool _isMutedDidChange;	// 21 = 0x15
    _Bool _audioStatusDidChange;	// 22 = 0x16
    _Bool _audioSessionVolumeIncreaseDidOccur;	// 23 = 0x17
}

@property(nonatomic, setter=_setAudioSessionVolumeIncreaseDidOccur:) _Bool audioSessionVolumeIncreaseDidOccur; // @synthesize audioSessionVolumeIncreaseDidOccur=_audioSessionVolumeIncreaseDidOccur;
@property(nonatomic, setter=_setAudioStatusDidChange:) _Bool audioStatusDidChange; // @synthesize audioStatusDidChange=_audioStatusDidChange;
@property(nonatomic, setter=_setIsMutedDidChange:) _Bool isMutedDidChange; // @synthesize isMutedDidChange=_isMutedDidChange;
@property(nonatomic, setter=_setPlayableDidChange:) _Bool isPlayableDidChange; // @synthesize isPlayableDidChange=_isPlayableDidChange;
@property(nonatomic, setter=_setAlwaysRespectsMuteSwitchDidChange:) _Bool alwaysRespectsMuteSwitchDidChange; // @synthesize alwaysRespectsMuteSwitchDidChange=_alwaysRespectsMuteSwitchDidChange;
@property(nonatomic, setter=_setStalledDidChange:) _Bool isStalledDidChange; // @synthesize isStalledDidChange=_isStalledDidChange;
@property(nonatomic, setter=_setAtEndDidChange:) _Bool isAtEndDidChange; // @synthesize isAtEndDidChange=_isAtEndDidChange;
@property(nonatomic, setter=_setAtBeginningDidChange:) _Bool isAtBeginningDidChange; // @synthesize isAtBeginningDidChange=_isAtBeginningDidChange;
@property(nonatomic, setter=_setErrorDidChange:) _Bool errorDidChange; // @synthesize errorDidChange=_errorDidChange;
@property(nonatomic, setter=_setPlayerItemDidChange:) _Bool playerItemDidChange; // @synthesize playerItemDidChange=_playerItemDidChange;
@property(nonatomic, setter=_setAVPlayerDidChange:) _Bool avPlayerDidChange; // @synthesize avPlayerDidChange=_avPlayerDidChange;
@property(nonatomic, setter=_setPlayerLoadingAllowedDidChange:) _Bool isPlayerLoadingAllowedDidChange; // @synthesize isPlayerLoadingAllowedDidChange=_isPlayerLoadingAllowedDidChange;
@property(nonatomic, setter=_setActivatedDidChange:) _Bool isActivatedDidChange; // @synthesize isActivatedDidChange=_isActivatedDidChange;
@property(nonatomic, setter=_setPlayingAllowedDidChange:) _Bool isPlayingAllowedDidChange; // @synthesize isPlayingAllowedDidChange=_isPlayingAllowedDidChange;
@property(nonatomic, setter=_setDesiredPlayStateDidChange:) _Bool desiredPlayStateDidChange; // @synthesize desiredPlayStateDidChange=_desiredPlayStateDidChange;
@property(nonatomic, setter=_setPlayStateDidChange:) _Bool playStateDidChange; // @synthesize playStateDidChange=_playStateDidChange;
- (_Bool)hasChanges;	// IMP=0x00000000000c861c

@end

