//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/PXActivityCoordinatorItem-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXVideoSessionDelegate-Protocol.h>

@class AVPlayerItem, ISWrappedAVPlayer, NSError, NSHashTable, NSMutableSet, NSString, PUBrowsingVideoPlayerChange, PUMediaProvider, PXActivityCoordinator, PXUpdater, PXVideoSession;
@protocol PUDisplayAsset;

@interface PUBrowsingVideoPlayer <ISChangeObserver, PXChangeObserver, PXVideoSessionDelegate, PXActivityCoordinatorItem>
{
    PXUpdater *_updater;	// 8 = 0x8
    CDStruct_1b6d18a9 _pendingSeekTime;	// 16 = 0x10
    CDUnknownBlockType _pendingSeekCompletionHandler;	// 40 = 0x28
    void *_videoSessionPresenter;	// 48 = 0x30
    _Bool _isPlayingAllowed;	// 56 = 0x38
    _Bool _alwaysRespectsMuteSwitch;	// 57 = 0x39
    _Bool _isMuted;	// 58 = 0x3a
    _Bool _isPlayerLoadingAllowed;	// 59 = 0x3b
    _Bool _isActivated;	// 60 = 0x3c
    _Bool _shouldPreloadVideoContent;	// 61 = 0x3d
    _Bool __isUpdatingAudioSession;	// 62 = 0x3e
    _Bool _shouldLoadVideoSession;	// 63 = 0x3f
    _Bool _shouldRegisterForPlayback;	// 64 = 0x40
    _Bool _shouldFadeNextVolumeChange;	// 65 = 0x41
    float _volume;	// 68 = 0x44
    unsigned long long _activityCoordinatorQueuePosition;	// 72 = 0x48
    NSHashTable *_timeObservers;	// 80 = 0x50
    NSHashTable *_videoOutputs;	// 88 = 0x58
    id <PUDisplayAsset> _asset;	// 96 = 0x60
    PUMediaProvider *_mediaProvider;	// 104 = 0x68
    long long _desiredPlayState;	// 112 = 0x70
    long long _audioStatus;	// 120 = 0x78
    PXVideoSession *_videoSession;	// 128 = 0x80
    AVPlayerItem *_playerItem;	// 136 = 0x88
    NSError *_error;	// 144 = 0x90
    NSMutableSet *__playerLoadingDisablingReasons;	// 152 = 0x98
    NSMutableSet *__playingDisablingReasons;	// 160 = 0xa0
    unsigned long long _nextPlayerLoadingEnabledUpdateID;	// 168 = 0xa8
    PXActivityCoordinator *_playbackCoordinator;	// 176 = 0xb0
    CDStruct_1b6d18a9 _desiredSeekTime;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000c7bf8
@property(nonatomic) _Bool shouldFadeNextVolumeChange; // @synthesize shouldFadeNextVolumeChange=_shouldFadeNextVolumeChange;
@property(nonatomic) _Bool shouldRegisterForPlayback; // @synthesize shouldRegisterForPlayback=_shouldRegisterForPlayback;
@property(readonly, nonatomic) PXActivityCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(nonatomic) _Bool shouldLoadVideoSession; // @synthesize shouldLoadVideoSession=_shouldLoadVideoSession;
@property(nonatomic) unsigned long long nextPlayerLoadingEnabledUpdateID; // @synthesize nextPlayerLoadingEnabledUpdateID=_nextPlayerLoadingEnabledUpdateID;
@property(nonatomic, setter=_setUpdatingAudioSession:) _Bool _isUpdatingAudioSession; // @synthesize _isUpdatingAudioSession=__isUpdatingAudioSession;
@property(retain, nonatomic, setter=_setPlayingDisablingReasons:) NSMutableSet *_playingDisablingReasons; // @synthesize _playingDisablingReasons=__playingDisablingReasons;
@property(retain, nonatomic, setter=_setPlayerLoadingDisablingReasons:) NSMutableSet *_playerLoadingDisablingReasons; // @synthesize _playerLoadingDisablingReasons=__playerLoadingDisablingReasons;
@property(retain, nonatomic, setter=_setError:) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic, setter=_setPlayerItem:) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool shouldPreloadVideoContent; // @synthesize shouldPreloadVideoContent=_shouldPreloadVideoContent;
@property(nonatomic, setter=setActivated:) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) CDStruct_1b6d18a9 desiredSeekTime; // @synthesize desiredSeekTime=_desiredSeekTime;
@property(retain, nonatomic) PXVideoSession *videoSession; // @synthesize videoSession=_videoSession;
@property(nonatomic, setter=_setPlayerLoadingAllowed:) _Bool isPlayerLoadingAllowed; // @synthesize isPlayerLoadingAllowed=_isPlayerLoadingAllowed;
@property(nonatomic, setter=setMuted:) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool alwaysRespectsMuteSwitch; // @synthesize alwaysRespectsMuteSwitch=_alwaysRespectsMuteSwitch;
@property(nonatomic, setter=_setAudioStatus:) long long audioStatus; // @synthesize audioStatus=_audioStatus;
@property(nonatomic, setter=_setPlayingAllowed:) _Bool isPlayingAllowed; // @synthesize isPlayingAllowed=_isPlayingAllowed;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) unsigned long long activityCoordinatorQueuePosition; // @synthesize activityCoordinatorQueuePosition=_activityCoordinatorQueuePosition;
- (void)_setVideoSessionVolume:(id)arg1;	// IMP=0x00000000000c7978
- (void)_performPendingSeekIfNeeded;	// IMP=0x00000000000c78a1
- (void)_updatePlayerVolume;	// IMP=0x00000000000c7813
- (void)_updateVideoSessionDesiredPlayState;	// IMP=0x00000000000c7771
- (long long)_videoSessionDesiredPlayState;	// IMP=0x00000000000c765d
- (void)_updateShouldRegisterForPlayback;	// IMP=0x00000000000c73b2
- (void)_updateVideoSession;	// IMP=0x00000000000c7012
- (void)_updatePlayerLoadingAllowedWithUpdateID:(unsigned long long)arg1;	// IMP=0x00000000000c6f61
- (void)_updateAudioSessionCategory;	// IMP=0x00000000000c6dcd
@property(readonly, nonatomic) NSHashTable *videoOutputs; // @synthesize videoOutputs=_videoOutputs;
@property(readonly, nonatomic) NSHashTable *timeObservers; // @synthesize timeObservers=_timeObservers;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;	// IMP=0x00000000000c6a9e
- (void)videoSessionAudioSessionOutputVolumeDidChange:(id)arg1 fromVolume:(float)arg2 toVolume:(float)arg3;	// IMP=0x00000000000c6520
- (void)videoSessionDidPlayToEnd:(id)arg1;	// IMP=0x00000000000c64c6
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000c6394
- (void)unregisterVideoOutput:(id)arg1;	// IMP=0x00000000000c623b
- (void)registerVideoOutput:(id)arg1;	// IMP=0x00000000000c603b
- (void)unregisterTimeObserver:(id)arg1;	// IMP=0x00000000000c5fc9
- (void)registerTimeObserver:(id)arg1;	// IMP=0x00000000000c5f57
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)rewindExistingPlayer;	// IMP=0x00000000000c5b71
- (void)setPlayingDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000c5918
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c56ee
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c567a
@property(readonly, nonatomic) _Bool isStalled;
@property(readonly, nonatomic) long long playState;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isAtEnd;
@property(readonly, nonatomic) _Bool isAtBeginning;
@property(readonly, nonatomic) _Bool isPlaybackDesired;
- (void)setPlayerLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000c4ec9
@property(readonly, nonatomic) ISWrappedAVPlayer *avPlayer;
- (void)assetContentDidChange;	// IMP=0x00000000000c4bce
- (void)invalidateExistingPlayer;	// IMP=0x00000000000c4b5d
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x00000000000c4b2e
- (void)registerChangeObserver:(id)arg1;	// IMP=0x00000000000c4aff
@property(readonly, nonatomic) PUBrowsingVideoPlayerChange *currentChange;
- (id)newViewModelChange;	// IMP=0x00000000000c4aa7
- (void)didPerformChanges;	// IMP=0x00000000000c4a5e
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000c4870
- (id)init;	// IMP=0x00000000000c47f6
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000000c447a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

