//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/ISLivePhotoSettleBehaviorDelegate-Protocol.h>

@class ISLivePhotoVitalityFilter, NSDate, NSMutableSet, NSSet, NSString;

@interface ISLivePhotoPlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver>
{
    NSMutableSet *_playbackFilters;	// 8 = 0x8
    _Atomic int _fadeInRequestID;	// 16 = 0x10
    struct {
        _Bool scale;
        _Bool apertureMode;
    } _isValid;	// 20 = 0x14
    double _lastAppliedScale;	// 24 = 0x18
    _Bool _playingVitality;	// 32 = 0x20
    _Bool _hinting;	// 33 = 0x21
    _Bool _isAttemptingToPlayback;	// 34 = 0x22
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;	// 35 = 0x23
    _Bool _playbackAllowed;	// 36 = 0x24
    _Bool __settleAutomaticallyWhenReady;	// 37 = 0x25
    _Bool __shouldPrepareForVitalityWhenReady;	// 38 = 0x26
    _Bool __shouldPlayVitalityWhenReady;	// 39 = 0x27
    _Bool __shouldPrepareForHintWhenReady;	// 40 = 0x28
    ISLivePhotoVitalityFilter *_vitalityFilter;	// 48 = 0x30
    long long _currentPlaybackStyle;	// 56 = 0x38
    long long _targetReadiness;	// 64 = 0x40
    long long __styleToPlayWhenReady;	// 72 = 0x48
    NSDate *__vitalityTimeoutDate;	// 80 = 0x50
    CDStruct_1b6d18a9 _seekTime;	// 88 = 0x58
    CDStruct_e83c9415 _trimTimeRange;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000010543
@property(retain, nonatomic, setter=_setVitalityTimeoutDate:) NSDate *_vitalityTimeoutDate; // @synthesize _vitalityTimeoutDate=__vitalityTimeoutDate;
@property(nonatomic, setter=_setShouldPrepareForHintWhenReady:) _Bool _shouldPrepareForHintWhenReady; // @synthesize _shouldPrepareForHintWhenReady=__shouldPrepareForHintWhenReady;
@property(nonatomic, setter=_setShouldPlayVitalityWhenReady:) _Bool _shouldPlayVitalityWhenReady; // @synthesize _shouldPlayVitalityWhenReady=__shouldPlayVitalityWhenReady;
@property(nonatomic, setter=_setShouldPrepareForVitalityWhenReady:) _Bool _shouldPrepareForVitalityWhenReady; // @synthesize _shouldPrepareForVitalityWhenReady=__shouldPrepareForVitalityWhenReady;
@property(nonatomic, setter=_setSettleAutomaticallyWhenReady:) _Bool _settleAutomaticallyWhenReady; // @synthesize _settleAutomaticallyWhenReady=__settleAutomaticallyWhenReady;
@property(nonatomic, setter=_setStyleToPlayWhenReady:) long long _styleToPlayWhenReady; // @synthesize _styleToPlayWhenReady=__styleToPlayWhenReady;
@property(nonatomic) CDStruct_e83c9415 trimTimeRange; // @synthesize trimTimeRange=_trimTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) long long targetReadiness; // @synthesize targetReadiness=_targetReadiness;
@property(nonatomic, getter=isPlaybackAllowed) _Bool playbackAllowed; // @synthesize playbackAllowed=_playbackAllowed;
@property(nonatomic) _Bool immediatelyShowsPhotoWhenPlaybackEnds; // @synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds;
@property(nonatomic, setter=_setIsAttemptingToPlayback:) _Bool isAttemptingToPlayback; // @synthesize isAttemptingToPlayback=_isAttemptingToPlayback;
@property(nonatomic, setter=_setCurrentPlaybackStyle:) long long currentPlaybackStyle; // @synthesize currentPlaybackStyle=_currentPlaybackStyle;
@property(retain, nonatomic) ISLivePhotoVitalityFilter *vitalityFilter; // @synthesize vitalityFilter=_vitalityFilter;
@property(nonatomic, getter=isHinting, setter=_setHinting:) _Bool hinting; // @synthesize hinting=_hinting;
@property(nonatomic, getter=isPlayingVitality, setter=_setPlayingVitality:) _Bool playingVitality; // @synthesize playingVitality=_playingVitality;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000102c7
- (_Bool)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1;	// IMP=0x00000000000102ad
- (void)vitalityBehaviorDidEndPlaying:(id)arg1;	// IMP=0x000000000001027d
- (void)vitalityBehaviorDidBeginPlaying:(id)arg1;	// IMP=0x000000000001026b
- (void)livePhotoSettleBehaviorDidFinish:(id)arg1;	// IMP=0x00000000000101c0
- (void)livePhotoPlaybackBehaviorDidFinish:(id)arg1;	// IMP=0x0000000000010177
- (void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)arg1;	// IMP=0x000000000001015e
- (void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1;	// IMP=0x000000000001014c
- (void)didPerformChanges;	// IMP=0x0000000000010086
- (void)_fadeInAudio;	// IMP=0x000000000000ff1e
- (void)_updateHintingAndVitality;	// IMP=0x000000000000fe54
- (void)_configurePlaybackFilter:(id)arg1;	// IMP=0x000000000000fdf5
- (double)_coalescedPlaybackFilterHintProgress;	// IMP=0x000000000000fd26
- (long long)_coalescedPlaybackFilterState;	// IMP=0x000000000000fc5f
- (void)_resetPlaybackFilters;	// IMP=0x000000000000fc1b
- (void)_configurePlaybackFilters;	// IMP=0x000000000000fb9e
- (void)setIsAttemptingToPlayback:(_Bool)arg1;	// IMP=0x000000000000fb40
- (void)_updateScaleIfNeeded;	// IMP=0x000000000000f815
- (void)_invalidateScale;	// IMP=0x000000000000f804
- (void)_updateApertureModeIfNeeded;	// IMP=0x000000000000f772
- (void)_invalidateApertureMode;	// IMP=0x000000000000f760
- (void)_handlePlaybackFilterDidChange;	// IMP=0x000000000000f65c
- (void)_handleVitalityFilterDidChange:(id)arg1;	// IMP=0x000000000000f575
- (double)_photoTransitionDuration;	// IMP=0x000000000000f4ec
- (void)_prepareForVitalityIfNeeded;	// IMP=0x000000000000f3aa
- (void)_playIfNeeded;	// IMP=0x000000000000f2e0
@property(readonly, nonatomic) _Bool _canPlayVitality;
- (void)setSeekTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000efea
- (id)_createVitalityBehavior;	// IMP=0x000000000000ec28
- (void)playVitality;	// IMP=0x000000000000ea22
- (void)prepareForVitality;	// IMP=0x000000000000e85f
- (void)stopPlaybackAnimated:(_Bool)arg1;	// IMP=0x000000000000e70a
- (void)stopPlayback;	// IMP=0x000000000000e6f3
- (void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(_Bool)arg2;	// IMP=0x000000000000e2e9
- (void)startPlaybackWithStyle:(long long)arg1;	// IMP=0x000000000000e2d5
- (double)lastAppliedScale;	// IMP=0x000000000000e2c3
- (void)startPlaybackWithStyleWhenReady:(long long)arg1;	// IMP=0x000000000000e2af
- (void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(_Bool)arg2;	// IMP=0x000000000000e265
- (void)_updatePlayerItemLoadingTarget;	// IMP=0x000000000000e069
@property(readonly, nonatomic) NSSet *playbackFilters;
- (void)removePlaybackFilter:(id)arg1;	// IMP=0x000000000000dead
- (void)addPlaybackFilter:(id)arg1;	// IMP=0x000000000000de19
- (void)playHintWhenReady;	// IMP=0x000000000000de02
- (void)prepareForHintWhenReady;	// IMP=0x000000000000ddfc
- (void)activeBehaviorDidChange;	// IMP=0x000000000000dd75
- (double)videoWillPlayToPhotoInterval;	// IMP=0x000000000000dc71
- (void)statusDidChange;	// IMP=0x000000000000dc0e
- (void)playerItemDidChange;	// IMP=0x000000000000da9c
- (void)configurePlayerItem;	// IMP=0x000000000000da5b
- (id)init;	// IMP=0x000000000000d96e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
