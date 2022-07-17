//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/PXVideoScrubberControllerTarget-Protocol.h>

@class ISLivePhotoPlayer, ISWrappedAVPlayer, NSArray, NSMutableSet, NSString, PHLivePhoto, PUBrowsingIrisPlayerChange, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingIrisPlayer <ISChangeObserver, PXVideoScrubberControllerTarget>
{
    struct {
        _Bool livePhoto;
        _Bool playerContent;
        _Bool playerLoadingTarget;
        _Bool playerItemScrubbingPhotoTime;
        _Bool playing;
    } _isValid;	// 8 = 0x8
    id _videoPeriodicObserver;	// 16 = 0x10
    _Bool _livePhotoLoadingAllowed;	// 24 = 0x18
    _Bool _isLivePhotoPlaybackAllowed;	// 25 = 0x19
    _Bool _activated;	// 26 = 0x1a
    _Bool _playing;	// 27 = 0x1b
    _Bool _allowLargeVitalityInset;	// 28 = 0x1c
    _Bool _appIsInBackground;	// 29 = 0x1d
    int _livePhotoRequestID;	// 32 = 0x20
    ISLivePhotoPlayer *_player;	// 40 = 0x28
    CDUnknownBlockType durationChangeHandler;	// 48 = 0x30
    CDUnknownBlockType statusChangeHandler;	// 56 = 0x38
    CDUnknownBlockType playerItemChangeHandler;	// 64 = 0x40
    id <PUDisplayAsset> _asset;	// 72 = 0x48
    PUMediaProvider *_mediaProvider;	// 80 = 0x50
    ISWrappedAVPlayer *_videoPlayer;	// 88 = 0x58
    long long _loadingTarget;	// 96 = 0x60
    NSArray *_currentlyDisplayedTimes;	// 104 = 0x68
    NSMutableSet *_livePhotoLoadingDisablingReasons;	// 112 = 0x70
    NSMutableSet *_livePhotoPlaybackDisablingReasons;	// 120 = 0x78
    long long __currentUnloadRequestId;	// 128 = 0x80
    PHLivePhoto *_livePhoto;	// 136 = 0x88
    long long _livePhotoRequestState;	// 144 = 0x90
    CDUnknownBlockType _seekCompletionHandler;	// 152 = 0x98
    CDStruct_1b6d18a9 _scrubbingPhotoTime;	// 160 = 0xa0
    CDStruct_8e0628e6 _vitalityTransform;	// 192 = 0xc0
}

+ (id)new;	// IMP=0x00000000000c2878
- (void).cxx_destruct;	// IMP=0x00000000000c1a8c
@property(nonatomic) _Bool appIsInBackground; // @synthesize appIsInBackground=_appIsInBackground;
@property(copy, nonatomic) CDUnknownBlockType seekCompletionHandler; // @synthesize seekCompletionHandler=_seekCompletionHandler;
@property(nonatomic) int livePhotoRequestID; // @synthesize livePhotoRequestID=_livePhotoRequestID;
@property(nonatomic) long long livePhotoRequestState; // @synthesize livePhotoRequestState=_livePhotoRequestState;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) long long _currentUnloadRequestId; // @synthesize _currentUnloadRequestId=__currentUnloadRequestId;
@property(readonly, nonatomic) NSMutableSet *livePhotoPlaybackDisablingReasons; // @synthesize livePhotoPlaybackDisablingReasons=_livePhotoPlaybackDisablingReasons;
@property(readonly, nonatomic) NSMutableSet *livePhotoLoadingDisablingReasons; // @synthesize livePhotoLoadingDisablingReasons=_livePhotoLoadingDisablingReasons;
@property(readonly, nonatomic) _Bool allowLargeVitalityInset; // @synthesize allowLargeVitalityInset=_allowLargeVitalityInset;
@property(readonly, nonatomic) CDStruct_8e0628e6 vitalityTransform; // @synthesize vitalityTransform=_vitalityTransform;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(copy, nonatomic) NSArray *currentlyDisplayedTimes; // @synthesize currentlyDisplayedTimes=_currentlyDisplayedTimes;
@property(readonly, nonatomic) CDStruct_1b6d18a9 scrubbingPhotoTime; // @synthesize scrubbingPhotoTime=_scrubbingPhotoTime;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) _Bool isLivePhotoPlaybackAllowed; // @synthesize isLivePhotoPlaybackAllowed=_isLivePhotoPlaybackAllowed;
@property(nonatomic, getter=isLivePhotoLoadingAllowed) _Bool livePhotoLoadingAllowed; // @synthesize livePhotoLoadingAllowed=_livePhotoLoadingAllowed;
@property(nonatomic) long long loadingTarget; // @synthesize loadingTarget=_loadingTarget;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
- (id)playerItem;	// IMP=0x00000000000c180f
- (long long)playerStatus;	// IMP=0x00000000000c17cb
- (void)removeTimeObserver:(id)arg1;	// IMP=0x00000000000c1759
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c16ac
- (float)playRate;	// IMP=0x00000000000c165c
- (void)cancelPendingSeeks;	// IMP=0x00000000000c15f2
- (CDStruct_1b6d18a9)playerCurrentTime;	// IMP=0x00000000000c1594
- (CDStruct_1b6d18a9)currentItemDuration;	// IMP=0x00000000000c1536
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c1494
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000c1279
- (id)debugDetailedDescription;	// IMP=0x00000000000c1030
- (void)_handlePlaybackStyleChanged;	// IMP=0x00000000000c0fe4
- (void)_updatePlayingIfNeeded;	// IMP=0x00000000000c0f0e
- (void)_invalidatePlaying;	// IMP=0x00000000000c0efc
- (void)_handlePeriodicObserverWithTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000c0ea0
- (void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;	// IMP=0x00000000000c0c25
- (void)_invalidatePlayerItemScrubbingPhotoTime;	// IMP=0x00000000000c0c13
- (void)_updatePlayerItemLoadingTargetIfNeeded;	// IMP=0x00000000000c0b7a
- (void)_invalidatePlayerItemLoadingTarget;	// IMP=0x00000000000c0b68
- (void)setVitalityTransform:(CDStruct_8e0628e6)arg1 limitingAllowed:(_Bool)arg2;	// IMP=0x00000000000c0abf
- (void)_handleLoadedVitalityTransform:(CDStruct_8e0628e6)arg1 limitingAllowed:(_Bool)arg2 forAsset:(id)arg3;	// IMP=0x00000000000c098b
- (void)_updateVitalityTransform;	// IMP=0x00000000000c093f
- (void)_updatePlayerContentIfNeeded;	// IMP=0x00000000000c0711
- (void)_invalidatePlayerContent;	// IMP=0x00000000000c06ff
- (void)_updateLivePhotoIfNeeded;	// IMP=0x00000000000c0458
- (void)_invalidateLivePhoto;	// IMP=0x00000000000c0430
- (void)unloadLivePhoto;	// IMP=0x00000000000c0400
- (void)_updateIfNeeded;	// IMP=0x00000000000c0320
- (_Bool)_needsUpdate;	// IMP=0x00000000000c02ee
- (_Bool)isContentLoadingRequestInProgress;	// IMP=0x00000000000c02b1
- (void)_cancelAllRequests;	// IMP=0x00000000000c0259
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;	// IMP=0x00000000000bfe14
- (long long)_contentMode;	// IMP=0x00000000000bfe0c
- (struct CGSize)_targetSize;	// IMP=0x00000000000bfd60
- (id)playerCreateIfNeeded;	// IMP=0x00000000000bfd49
@property(readonly, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
- (id)_playerCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000000bfc87
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x00000000000bfc33
- (void)registerChangeObserver:(id)arg1;	// IMP=0x00000000000bfc04
@property(readonly, nonatomic) PUBrowsingIrisPlayerChange *currentChange;
- (id)newViewModelChange;	// IMP=0x00000000000bfbac
- (void)setLivePhotoLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000bf84a
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPhotoTime;
- (void)setScrubbingPhotoTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bf56c
- (void)setLivePhotoPlaybackDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000000bf3a0
- (void)didPerformChanges;	// IMP=0x00000000000bf35f
- (void)playPreviewHintWhenReady;	// IMP=0x00000000000bf313
- (void)dealloc;	// IMP=0x00000000000bf092
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000000bee81
- (id)init;	// IMP=0x00000000000bee07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
