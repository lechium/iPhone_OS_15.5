//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer, NTKDelayedBlock, NTKTaskScheduler, UIView;
@protocol NTKAVListing;

@interface NTKAVListingFaceBaseView
{
    _Bool _updateWhenUnpausing;	// 8 = 0x8
    NTKTaskScheduler *_taskScheduler;	// 16 = 0x10
    _Bool _preLoadingVideoOnSleep;	// 24 = 0x18
    _Bool _preLoadedVideoOnSleep;	// 25 = 0x19
    _Bool _shouldPlayOnWake;	// 26 = 0x1a
    _Bool _isPauseLockedout;	// 27 = 0x1b
    _Bool _isPaused;	// 28 = 0x1c
    _Bool _shouldPause;	// 29 = 0x1d
    NSTimer *_playOnWakeTimeout;	// 32 = 0x20
    NTKDelayedBlock *_playNextVideoDelayBlock;	// 40 = 0x28
    NTKDelayedBlock *_pauseLockoutBlock;	// 48 = 0x30
    UIView *_blackView;	// 56 = 0x38
    long long _previousDataMode;	// 64 = 0x40
    _Bool _shouldChangeVariantForScreenWake;	// 72 = 0x48
    _Bool _contentUnloadedForFaceSwiping;	// 73 = 0x49
    _Bool _handlingScreenWake;	// 74 = 0x4a
    id <NTKAVListing> _currentListing;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001dd52
@property(getter=isHandlingScreenWake) _Bool handlingScreenWake; // @synthesize handlingScreenWake=_handlingScreenWake;
@property(getter=isContentUnloadedForFaceSwiping) _Bool contentUnloadedForFaceSwiping; // @synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping;
@property(nonatomic) _Bool shouldChangeVariantForScreenWake; // @synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake;
@property(retain, nonatomic) id <NTKAVListing> currentListing; // @synthesize currentListing=_currentListing;
@property(readonly, nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(readonly, nonatomic) _Bool paused; // @synthesize paused=_isPaused;
- (void)_reset;	// IMP=0x000000000001db2d
- (void)_updateImageToBlur;	// IMP=0x000000000001db27
- (void)_cancelPauseLockout;	// IMP=0x000000000001dae4
- (void)_activatePauseLockout;	// IMP=0x000000000001d99f
- (void)_cancelDelayedPlayback;	// IMP=0x000000000001d967
- (void)_handleFaceStyleDidChange;	// IMP=0x000000000001d961
- (void)_playNextVideoAfterDelay:(double)arg1;	// IMP=0x000000000001d85b
- (void)_playNextVideo;	// IMP=0x000000000001d7e1
- (void)_playQueuedUpVideo;	// IMP=0x000000000001d77b
- (void)_transitionToPosterView:(id)arg1;	// IMP=0x000000000001d6e8
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d57e
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d510
- (void)_cancelAllTasks;	// IMP=0x000000000001d4b8
- (id)_complicationFlickerWorkgroundAnimationWithDuration:(double)arg1 applier:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d4a2
- (void)_unpauseFromSwitcher;	// IMP=0x000000000001d459
- (void)_playVideoForScreenWake:(id)arg1;	// IMP=0x000000000001d39d
- (void)_playVideo;	// IMP=0x000000000001d2c6
- (void)_pauseImmediately;	// IMP=0x000000000001d276
- (void)_updatePaused;	// IMP=0x000000000001d195
- (_Bool)_timeLabelUsesLegibility;	// IMP=0x000000000001d18d
- (void)_prepareForEditing;	// IMP=0x000000000001d137
- (void)_applySlow;	// IMP=0x000000000001d0f6
- (void)_applyFrozen;	// IMP=0x000000000001d0b5
- (void)faultInFaceContentSkippedDuringSwiping;	// IMP=0x000000000001cf90
- (void)_applyDataMode;	// IMP=0x000000000001cb97
- (void)_unloadSnapshotContentViews;	// IMP=0x000000000001cb36
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x000000000001cb07
- (void)_loadSnapshotContentViews;	// IMP=0x000000000001cac6
- (void)_cleanupAfterOrb:(_Bool)arg1;	// IMP=0x000000000001ca85
- (void)_prepareForOrb;	// IMP=0x000000000001ca44
- (id)_curtainView;	// IMP=0x000000000001ca2f
- (_Bool)_curtainViewVisible;	// IMP=0x000000000001c9f1
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c841
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c6dd
- (void)_hideCurtainView;	// IMP=0x000000000001c6a5
- (void)_showCurtainView;	// IMP=0x000000000001c574
- (void)_handleScreenWake;	// IMP=0x000000000001c4d9
- (void)_handleOrdinaryScreenWake;	// IMP=0x000000000001c4c7
- (void)_handleWristRaiseScreenWake;	// IMP=0x000000000001c4b5
- (void)screenWillTurnOnAnimated:(_Bool)arg1;	// IMP=0x000000000001c474
- (void)screenDidTurnOffAnimated:(_Bool)arg1;	// IMP=0x000000000001c3b5
- (void)_queuePreloadVideoTask;	// IMP=0x000000000001c29e
- (void)_performPreloadVideoTask;	// IMP=0x000000000001c216
- (id)_onDeckPosterImageView;	// IMP=0x000000000001c20e
- (id)_nextListing;	// IMP=0x000000000001c206
- (void)_resetVideoForListing;	// IMP=0x000000000001c19a
- (void)_loadVideoForListing;	// IMP=0x000000000001c105
- (void)_selectDefaultListing;	// IMP=0x000000000001c0ff
- (_Bool)_changeCurrentListing;	// IMP=0x000000000001bff6
- (void)dealloc;	// IMP=0x000000000001bf42
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x000000000001be84

@end
