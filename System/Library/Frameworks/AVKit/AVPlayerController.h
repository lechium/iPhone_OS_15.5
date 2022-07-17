//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetTrack, AVCoordinatedPlaybackSuspension, AVMediaSelectionOption, AVObservationController, AVPlayer, AVPlayerLayer, AVTimecodeController, AVValueTiming, BSSimpleAssertion, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSString, NSTimer;
@protocol AVPlayerControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerController : NSObject
{
    NSArray *_audioMediaSelectionOptions;	// 8 = 0x8
    NSArray *_visualMediaSelectionOptions;	// 16 = 0x10
    NSArray *_legibleMediaSelectionOptions;	// 24 = 0x18
    AVMediaSelectionOption *_cachedSelectedAudioMediaSelectionOption;	// 32 = 0x20
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOption;	// 40 = 0x28
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;	// 48 = 0x30
    NSString *_lastKnownPersistedExtendedLanguageTag;	// 56 = 0x38
    void *_observationInfo;	// 64 = 0x40
    _Bool _inspectionSuspended;	// 72 = 0x48
    id _updateAtMinMaxTimePeriodicObserverToken;	// 80 = 0x50
    id _timecodePeriodicObserverToken;	// 88 = 0x58
    _Bool _pictureInPictureInterrupted;	// 96 = 0x60
    _Bool _handlesAudioSessionInterruptions;	// 97 = 0x61
    _Bool _isDeallocating;	// 98 = 0x62
    _Bool _hasSetUpSeekableLiveStreamState;	// 99 = 0x63
    NSNumber *_rateToRestoreAfterAudioSessionInterruptionEnds;	// 104 = 0x68
    CDUnknownBlockType _retryPlayingImmediatelyBlock;	// 112 = 0x70
    _Bool _shouldPlayImmediately;	// 120 = 0x78
    _Bool _looping;	// 121 = 0x79
    long long _actionAtItemEnd;	// 128 = 0x80
    float _rate;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_seekQueue;	// 144 = 0x90
    NSObject<OS_dispatch_source> *_seekTimer;	// 152 = 0x98
    double _timeOfLastUpdate;	// 160 = 0xa0
    _Bool _ignoreRateKeyValueChanges;	// 168 = 0xa8
    _Bool _ignoreNextRateKeyValueChange;	// 169 = 0xa9
    _Bool _pendingSeek;	// 170 = 0xaa
    _Bool _isResumed;	// 171 = 0xab
    CDStruct_1b6d18a9 _toleranceBefore;	// 172 = 0xac
    CDStruct_1b6d18a9 _toleranceAfter;	// 196 = 0xc4
    _Bool _isScanningForward;	// 220 = 0xdc
    _Bool _isScanningBackward;	// 221 = 0xdd
    unsigned long long _scanningCount;	// 224 = 0xe0
    double _preScanningRate;	// 232 = 0xe8
    AVValueTiming *_liveStreamMinTiming;	// 240 = 0xf0
    AVValueTiming *_liveStreamMaxTiming;	// 248 = 0xf8
    _Bool _liveStreamEventModePossible;	// 256 = 0x100
    long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;	// 264 = 0x108
    _Bool _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;	// 272 = 0x110
    _Bool _shouldPlayWhenLikelyToKeepUp;	// 273 = 0x111
    _Bool _forceScanning;	// 274 = 0x112
    double _rateBeforeForceScanning;	// 280 = 0x118
    _Bool _playingOnSecondScreen;	// 288 = 0x120
    BSSimpleAssertion *_reduceResourceUsageAssertion;	// 296 = 0x128
    double _defaultPlaybackRate;	// 304 = 0x130
    _Bool _touchBarRequiresLinearPlayback;	// 312 = 0x138
    AVTimecodeController *_timecodeController;	// 320 = 0x140
    id <AVPlayerControllerDelegate> _internalDelegate;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 336 = 0x150
    NSDate *_lastTimePlayingOnMatchPointDeviceWasUpdated;	// 344 = 0x158
    NSTimer *_updatePlayingOnMatchPointDeviceThrottleTimer;	// 352 = 0x160
    _Bool _atMaxTime;	// 360 = 0x168
    _Bool _atMinTime;	// 361 = 0x169
    _Bool _playbackSuspended;	// 362 = 0x16a
    _Bool _scrubbing;	// 363 = 0x16b
    _Bool _pictureInPictureSupported;	// 364 = 0x16c
    _Bool _seekingInternal;	// 365 = 0x16d
    _Bool _seeking;	// 366 = 0x16e
    _Bool _composable;	// 367 = 0x16f
    _Bool _hasProtectedContent;	// 368 = 0x170
    _Bool _compatibleWithAirPlayVideo;	// 369 = 0x171
    _Bool _preventingIdleSystemSleep;	// 370 = 0x172
    _Bool _preventingIdleDisplaySleep;	// 371 = 0x173
    _Bool _disablingAutomaticTermination;	// 372 = 0x174
    _Bool _allowsPictureInPicturePlayback;	// 373 = 0x175
    _Bool _pictureInPictureActive;	// 374 = 0x176
    _Bool _canTogglePictureInPicture;	// 375 = 0x177
    _Bool _hasBegunInspection;	// 376 = 0x178
    _Bool _playingOnMatchPointDevice;	// 377 = 0x179
    _Bool _coordinatedPlaybackActive;	// 378 = 0x17a
    AVPlayer *_player;	// 384 = 0x180
    AVObservationController *_observationController;	// 392 = 0x188
    AVAsset *_currentAssetIfReady;	// 400 = 0x190
    NSObject<OS_dispatch_queue> *_assetInspectionQueue;	// 408 = 0x198
    AVAsset *_assetBeingPrepared;	// 416 = 0x1a0
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;	// 424 = 0x1a8
    AVValueTiming *_timing;	// 432 = 0x1b0
    AVValueTiming *_minTiming;	// 440 = 0x1b8
    AVValueTiming *_maxTiming;	// 448 = 0x1c0
    AVAssetTrack *_currentAudioTrack;	// 456 = 0x1c8
    AVAssetTrack *_currentVideoTrack;	// 464 = 0x1d0
    double _seekToTime;	// 472 = 0x1d8
    NSDictionary *_metadata;	// 480 = 0x1e0
    NSArray *_contentChapters;	// 488 = 0x1e8
    NSArray *_availableMetadataFormats;	// 496 = 0x1f0
    double _rateBeforeScrubBegan;	// 504 = 0x1f8
    AVCoordinatedPlaybackSuspension *_scrubCoordinatorSuspension;	// 512 = 0x200
    NSString *_pipActivitySessionIdentifier;	// 520 = 0x208
    AVPlayerLayer *_playerLayerForReducingResources;	// 528 = 0x210
    AVMediaSelectionOption *_currentVideoMediaSelectionOption;	// 536 = 0x218
    struct CGSize _presentationSize;	// 544 = 0x220
    CDStruct_1b6d18a9 _seekToTimeInternal;	// 560 = 0x230
}

+ (id)keyPathsForValuesAffectingPictureInPicturePossible;	// IMP=0x00000000000d3660
+ (id)keyPathsForValuesAffectingExternalPlaybackType;	// IMP=0x00000000000d3634
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;	// IMP=0x00000000000d3614
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;	// IMP=0x00000000000d35e8
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;	// IMP=0x00000000000d35c8
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;	// IMP=0x00000000000d359c
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;	// IMP=0x00000000000d3570
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;	// IMP=0x00000000000d3544
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;	// IMP=0x00000000000d3518
+ (id)keyPathsForValuesAffectingCanSeekToEnd;	// IMP=0x00000000000d34f8
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;	// IMP=0x00000000000d34d8
+ (id)keyPathsForValuesAffectingCanScanBackward;	// IMP=0x00000000000d34a1
+ (id)keyPathsForValuesAffectingCanScanForward;	// IMP=0x00000000000d346a
+ (id)keyPathsForValuesAffectingCanSeek;	// IMP=0x00000000000d3416
+ (id)keyPathsForValuesAffectingTimeControlStatus;	// IMP=0x00000000000d33f6
+ (id)keyPathsForValuesAffectingHasShareableContent;	// IMP=0x00000000000d33bf
+ (id)keyPathsForValuesAffectingHasTrimmableContent;	// IMP=0x00000000000d3393
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;	// IMP=0x00000000000d32c4
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;	// IMP=0x00000000000d3200
+ (id)keyPathsForValuesAffectingStreaming;	// IMP=0x00000000000d31e0
+ (id)keyPathsForValuesAffectingHasContentChapters;	// IMP=0x00000000000d31c0
+ (id)keyPathsForValuesAffectingHasEnabledVideo;	// IMP=0x00000000000d31a0
+ (id)keyPathsForValuesAffectingHasVideo;	// IMP=0x00000000000d3180
+ (id)keyPathsForValuesAffectingHasEnabledAudio;	// IMP=0x00000000000d3160
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;	// IMP=0x00000000000d3129
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;	// IMP=0x00000000000d3109
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x00000000000d30dd
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x00000000000d30b1
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;	// IMP=0x00000000000d3091
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x00000000000d3049
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;	// IMP=0x00000000000d3029
+ (id)keyPathsForValuesAffectingMinTime;	// IMP=0x00000000000d2ff2
+ (id)keyPathsForValuesAffectingCurrentTime;	// IMP=0x00000000000d2fd2
+ (id)keyPathsForValuesAffectingContentDimensions;	// IMP=0x00000000000d2f24
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x00000000000d2f04
+ (id)keyPathsForValuesAffectingHasContent;	// IMP=0x00000000000d2ee4
+ (id)keyPathsForValuesAffectingMuted;	// IMP=0x00000000000d2ec4
+ (id)keyPathsForValuesAffectingVolume;	// IMP=0x00000000000d2ea4
+ (id)keyPathsForValuesAffectingCanTogglePlayback;	// IMP=0x00000000000d2e78
+ (id)keyPathsForValuesAffectingCanPause;	// IMP=0x00000000000d2e58
+ (id)keyPathsForValuesAffectingPlaying;	// IMP=0x00000000000d2e38
+ (id)keyPathsForValuesAffectingCanPlay;	// IMP=0x00000000000d2e0c
+ (id)keyPathsForValuesAffectingCompletelySeekable;	// IMP=0x00000000000d2de0
+ (id)keyPathsForValuesAffectingError;	// IMP=0x00000000000d2dc0
+ (id)keyPathsForValuesAffectingReadyToPlay;	// IMP=0x00000000000d2da0
+ (id)keyPathsForValuesAffectingStatus;	// IMP=0x00000000000d2d69
+ (void)setCachedIsPictureInPictureSupported:(_Bool)arg1;	// IMP=0x00000000000d2d5d
+ (_Bool)cachedIsPictureInPictureSupported;	// IMP=0x00000000000d2d51
+ (void)initialize;	// IMP=0x00000000000d2cd7
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;	// IMP=0x0000000000014bde
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;	// IMP=0x0000000000014bbe
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;	// IMP=0x0000000000014b92
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;	// IMP=0x0000000000014a1b
+ (id)keyPathsForValuesAffectingMaximumVideoResolution;	// IMP=0x00000000000d4753
+ (id)keyPathsForValuesAffectingPreferredDisplayCriteria;	// IMP=0x00000000000d4733
+ (id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;	// IMP=0x00000000000d4713
- (void).cxx_destruct;	// IMP=0x00000000000ccf38
@property(nonatomic) _Bool coordinatedPlaybackActive; // @synthesize coordinatedPlaybackActive=_coordinatedPlaybackActive;
@property(retain, nonatomic) AVMediaSelectionOption *currentVideoMediaSelectionOption; // @synthesize currentVideoMediaSelectionOption=_currentVideoMediaSelectionOption;
@property(readonly, nonatomic) NSArray *visualMediaSelectionOptions; // @synthesize visualMediaSelectionOptions=_visualMediaSelectionOptions;
@property(nonatomic) __weak AVPlayerLayer *playerLayerForReducingResources; // @synthesize playerLayerForReducingResources=_playerLayerForReducingResources;
@property(nonatomic, getter=isPlayingOnMatchPointDevice) _Bool playingOnMatchPointDevice; // @synthesize playingOnMatchPointDevice=_playingOnMatchPointDevice;
@property(nonatomic) _Bool hasBegunInspection; // @synthesize hasBegunInspection=_hasBegunInspection;
@property(copy, nonatomic) NSString *pipActivitySessionIdentifier; // @synthesize pipActivitySessionIdentifier=_pipActivitySessionIdentifier;
@property(nonatomic) _Bool canTogglePictureInPicture; // @synthesize canTogglePictureInPicture=_canTogglePictureInPicture;
@property(nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(nonatomic, getter=isDisablingAutomaticTermination) _Bool disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(nonatomic, getter=isPreventingIdleDisplaySleep) _Bool preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(nonatomic, getter=isPreventingIdleSystemSleep) _Bool preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property(retain, nonatomic) AVCoordinatedPlaybackSuspension *scrubCoordinatorSuspension; // @synthesize scrubCoordinatorSuspension=_scrubCoordinatorSuspension;
@property(nonatomic) double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(nonatomic, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property(retain, nonatomic) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property(nonatomic) _Bool hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(nonatomic, getter=isComposable) _Bool composable; // @synthesize composable=_composable;
@property(retain, nonatomic) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(getter=isSeekingInternal) _Bool seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(retain, nonatomic) AVAssetTrack *currentVideoTrack; // @synthesize currentVideoTrack=_currentVideoTrack;
@property(retain, nonatomic) AVAssetTrack *currentAudioTrack; // @synthesize currentAudioTrack=_currentAudioTrack;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(retain, nonatomic) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property(nonatomic, getter=isPictureInPictureSupported) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(retain, nonatomic) AVAsset *assetBeingPrepared; // @synthesize assetBeingPrepared=_assetBeingPrepared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetInspectionQueue; // @synthesize assetInspectionQueue=_assetInspectionQueue;
@property(retain, nonatomic) AVAsset *currentAssetIfReady; // @synthesize currentAssetIfReady=_currentAssetIfReady;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isPlaybackSuspended) _Bool playbackSuspended; // @synthesize playbackSuspended=_playbackSuspended;
@property(nonatomic, getter=isAtMinTime) _Bool atMinTime; // @synthesize atMinTime=_atMinTime;
@property(nonatomic, getter=isAtMaxTime) _Bool atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)_prepareAssetForInspectionIfNeeded;	// IMP=0x00000000000cc539
- (id)scanningDelays;	// IMP=0x00000000000cc4df
- (void)_updateRateForScrubbingAndSeeking;	// IMP=0x00000000000cc36d
- (id)_outputContext;	// IMP=0x00000000000cc31d
- (void)_cancelPendingSeeksIfNeeded;	// IMP=0x00000000000cc2cf
- (id)_timecodeTrack;	// IMP=0x00000000000cc17a
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(_Bool)arg1;	// IMP=0x00000000000cc10b
- (_Bool)canUseNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000cc09d
- (void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000cbfa0
- (void)startUsingNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000cbeac
- (_Bool)isReducingResourcesForPictureInPicture;	// IMP=0x00000000000cbe79
@property(retain, nonatomic) BSSimpleAssertion *reduceResourceUsageAssertion;
- (void)acquireResourceReductionAssertion;	// IMP=0x00000000000cbc5b
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000cbb6a
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000cb8be
- (void)togglePictureInPicture:(id)arg1;	// IMP=0x00000000000cb8b8
- (void)setPictureInPictureInterrupted:(_Bool)arg1;	// IMP=0x00000000000cb870
- (_Bool)isPictureInPictureInterrupted;	// IMP=0x00000000000cb867
- (_Bool)isPictureInPicturePossible;	// IMP=0x00000000000cb7ae
- (void)_updateExternalPlaybackAirPlayDeviceLocalizedNameIfNeeded;	// IMP=0x00000000000cb3ec
- (long long)externalPlaybackType;	// IMP=0x00000000000cb361
- (_Bool)isExternalPlaybackActive;	// IMP=0x00000000000cb31d
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;
- (_Bool)isPlayingOnExternalScreen;	// IMP=0x00000000000cb2d8
- (void)setAllowsExternalPlayback:(_Bool)arg1;	// IMP=0x00000000000cb28c
- (_Bool)allowsExternalPlayback;	// IMP=0x00000000000cb248
- (void)_updateMinMaxTimingIfNeeded;	// IMP=0x00000000000cb207
- (void)updateMinMaxTiming;	// IMP=0x00000000000ca965
- (void)updateTiming;	// IMP=0x00000000000ca71e
- (void)seekChapterBackward:(id)arg1;	// IMP=0x00000000000ca217
- (_Bool)canSeekChapterBackward;	// IMP=0x00000000000c9fb5
- (void)seekChapterForward:(id)arg1;	// IMP=0x00000000000c9c30
- (_Bool)canSeekChapterForward;	// IMP=0x00000000000c9a20
- (void)seekToChapter:(id)arg1;	// IMP=0x00000000000c99ef
- (void)endScrubbing:(id)arg1;	// IMP=0x00000000000c99b8
- (void)beginScrubbing:(id)arg1;	// IMP=0x00000000000c9981
- (void)gotoEndOfSeekableRanges:(id)arg1;	// IMP=0x00000000000c9905
- (void)skipBackwardThirtySeconds:(id)arg1;	// IMP=0x00000000000c97e1
- (void)seekOrStepByFrameCount:(long long)arg1;	// IMP=0x00000000000c90bc
- (void)seekFrameBackward:(id)arg1;	// IMP=0x00000000000c907e
- (_Bool)canSeekFrameBackward;	// IMP=0x00000000000c9045
- (void)seekFrameForward:(id)arg1;	// IMP=0x00000000000c9009
- (_Bool)canSeekFrameForward;	// IMP=0x00000000000c8fd0
- (void)seekToEnd:(id)arg1;	// IMP=0x00000000000c8fb0
- (_Bool)canSeekToEnd;	// IMP=0x00000000000c8f9e
- (void)seekToBeginning:(id)arg1;	// IMP=0x00000000000c8f7e
- (_Bool)canSeekToBeginning;	// IMP=0x00000000000c8f6c
- (void)endScanningBackward:(id)arg1;	// IMP=0x00000000000c8df1
- (void)_updateScanningBackwardRate;	// IMP=0x00000000000c8c04
- (void)beginScanningBackward:(id)arg1;	// IMP=0x00000000000c8a50
- (void)scanBackward:(id)arg1;	// IMP=0x00000000000c8978
- (_Bool)canScanBackward;	// IMP=0x00000000000c88dd
- (void)endScanningForward:(id)arg1;	// IMP=0x00000000000c8762
- (void)_updateScanningForwardRate;	// IMP=0x00000000000c8583
- (void)beginScanningForward:(id)arg1;	// IMP=0x00000000000c83cf
- (void)scanForward:(id)arg1;	// IMP=0x00000000000c82fc
- (_Bool)canScanForward;	// IMP=0x00000000000c8261
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x00000000000c8113
- (void)seekByTimeInterval:(double)arg1;	// IMP=0x00000000000c80fb
- (void)actuallySeekToTime;	// IMP=0x00000000000c7e1a
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000c7a1e
- (void)seekToCMTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000c7a0c
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x00000000000c7969
- (void)resumePlaybackCoordinatorIfSuspended;	// IMP=0x00000000000c77c7
- (void)suspendPlaybackCoordinatorWhileActivelySeekingIfNecessary;	// IMP=0x00000000000c767d
- (void)endScrubbing;	// IMP=0x00000000000c75ac
- (void)beginScrubbing;	// IMP=0x00000000000c74cc
- (void)seekToTime:(double)arg1;	// IMP=0x00000000000c74b4
- (_Bool)canSeek;	// IMP=0x00000000000c72d7
- (long long)timeControlStatus;	// IMP=0x00000000000c7293
- (id)currentEnabledAssetTrackForMediaType:(id)arg1;	// IMP=0x00000000000c6ef5
- (void)_updatePlayingOnMatchPointDeviceIfNeeded;	// IMP=0x00000000000c6d18
- (void)_throttledUpdatePlayingOnMatchPointDeviceIfNeededWithContext:(id)arg1;	// IMP=0x00000000000c6ae5
- (void)_updateCurrentVideoTrackIfNeeded;	// IMP=0x00000000000c6a6c
- (void)_updateCurrentAudioTrackIfNeeded;	// IMP=0x00000000000c69f3
- (void)_updateCoordinatedPlaybackActive;	// IMP=0x00000000000c6954
- (_Bool)_assetContainsProResRaw:(id)arg1;	// IMP=0x00000000000c66c4
- (_Bool)_assetIsMarkedNotSerializable:(id)arg1;	// IMP=0x00000000000c6468
- (id)audioWaveform;	// IMP=0x00000000000c6460
- (_Bool)_assetIsRestrictedFromSaving:(id)arg1;	// IMP=0x00000000000c6382
- (_Bool)hasShareableContent;	// IMP=0x00000000000c6273
- (_Bool)hasTrimmableContent;	// IMP=0x00000000000c619d
- (_Bool)hasSeekableLiveStreamingContent;	// IMP=0x00000000000c5eee
- (_Bool)hasLiveStreamingContent;	// IMP=0x00000000000c5d87
- (_Bool)isStreaming;	// IMP=0x00000000000c5d12
- (_Bool)hasContentChapters;	// IMP=0x00000000000c5cc2
- (_Bool)hasEnabledVideo;	// IMP=0x00000000000c5c54
- (_Bool)hasVideo;	// IMP=0x00000000000c5be6
- (_Bool)hasEnabledAudio;	// IMP=0x00000000000c5b78
- (id)loadedTimeRanges;	// IMP=0x00000000000c57d1
- (id)seekableTimeRanges;	// IMP=0x00000000000c5757
- (double)currentTimeWithinEndTimes;	// IMP=0x00000000000c5710
@property(readonly, nonatomic) NSDate *currentOrEstimatedDate;
@property(readonly, nonatomic) NSDate *currentDate;
- (double)contentDurationWithinEndTimes;	// IMP=0x00000000000c556b
- (void)_setMinTiming:(id)arg1 maxTiming:(id)arg2;	// IMP=0x00000000000c550a
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000c548c
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x00000000000c53ff
- (void)setMaxTime:(double)arg1;	// IMP=0x00000000000c524d
- (double)maxTime;	// IMP=0x00000000000c50e0
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000c5062
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x00000000000c4fd5
- (void)setMinTime:(double)arg1;	// IMP=0x00000000000c4eee
- (double)minTime;	// IMP=0x00000000000c4db9
- (double)currentTime;	// IMP=0x00000000000c4ca8
- (struct CGSize)contentDimensions;	// IMP=0x00000000000c4c6a
- (float)nominalFrameRate;	// IMP=0x00000000000c49a5
- (double)contentDuration;	// IMP=0x00000000000c48ff
- (_Bool)hasContent;	// IMP=0x00000000000c489c
- (void)setInspectionSuspended:(_Bool)arg1;	// IMP=0x00000000000c484a
- (_Bool)isInspectionSuspended;	// IMP=0x00000000000c4841
- (void)toggleMuted:(id)arg1;	// IMP=0x00000000000c4731
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000000000c46e5
- (_Bool)isMuted;	// IMP=0x00000000000c46a1
- (void)changeVolumeToMaximum:(id)arg1;	// IMP=0x00000000000c4687
- (void)changeVolumeToMinimum:(id)arg1;	// IMP=0x00000000000c4672
- (void)decreaseVolume:(id)arg1;	// IMP=0x00000000000c4634
- (void)increaseVolume:(id)arg1;	// IMP=0x00000000000c45f6
- (void)setVolume:(double)arg1;	// IMP=0x00000000000c4504
- (double)volume;	// IMP=0x00000000000c44b0
- (void)endPlaybackSuspension;	// IMP=0x00000000000c43ae
- (void)beginPlaybackSuspension;	// IMP=0x00000000000c42a9
- (void)updateAtMinMaxTime;	// IMP=0x00000000000c421e
- (void)setLooping:(_Bool)arg1;	// IMP=0x00000000000c415b
- (_Bool)isLooping;	// IMP=0x00000000000c4152
@property(nonatomic) _Bool touchBarRequiresLinearPlayback;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;	// IMP=0x00000000000c401e
- (void)togglePlayback:(id)arg1;	// IMP=0x00000000000c3f4f
- (_Bool)canTogglePlayback;	// IMP=0x00000000000c3f18
- (void)pauseForAllCoordinatedPlaybackParticipants:(_Bool)arg1;	// IMP=0x00000000000c3df9
- (void)pause:(id)arg1;	// IMP=0x00000000000c3de2
- (_Bool)canPause;	// IMP=0x00000000000c3dd0
- (void)autoplay:(id)arg1;	// IMP=0x00000000000c3c1a
- (void)play:(id)arg1;	// IMP=0x00000000000c3b70
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00000000000c3986
- (_Bool)isPlaying;	// IMP=0x00000000000c3962
- (_Bool)canPlay;	// IMP=0x00000000000c392b
- (void)_handleSeekTimerEvent;	// IMP=0x00000000000c3753
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *seekTimer;
- (_Bool)canPlayImmediately;	// IMP=0x00000000000c329a
- (void)_retryPlayImmediatelyIfNeeded;	// IMP=0x00000000000c3201
- (void)setDefaultPlaybackRate:(double)arg1;	// IMP=0x00000000000c317a
- (double)defaultPlaybackRate;	// IMP=0x00000000000c316c
- (void)setRate:(double)arg1;	// IMP=0x00000000000c2cd2
- (double)rate;	// IMP=0x00000000000c2cc4
- (void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;	// IMP=0x00000000000c0f7c
- (_Bool)isCompletelySeekable;	// IMP=0x00000000000c0d37
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) long long status;
- (id)_queuePlayer;	// IMP=0x00000000000c0a08
- (void)setObservationInfo:(void *)arg1;	// IMP=0x00000000000c09fe
- (void *)observationInfo;	// IMP=0x00000000000c09f4
- (void)startKVO;	// IMP=0x00000000000c01da
- (void)dealloc;	// IMP=0x00000000000bfff1
- (void)startInspectionIfNeeded;	// IMP=0x00000000000bfcba
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000bf9ab
- (id)init;	// IMP=0x00000000000bf7be
- (_Bool)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;	// IMP=0x0000000000013bb6
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;	// IMP=0x0000000000013aa8
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;	// IMP=0x000000000001376d
- (void)_enableAutoMediaSelection:(id)arg1;	// IMP=0x0000000000013634
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;	// IMP=0x000000000001357e
- (void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1;	// IMP=0x00000000000134b3
- (void)_ensureUserCaptionDisplayType:(long long)arg1;	// IMP=0x00000000000133e1
- (id)legibleOptions;	// IMP=0x000000000001280b
- (id)audioOptions;	// IMP=0x0000000000012361
- (void)reloadLegibleOptions;	// IMP=0x00000000000122cf
- (void)reloadAudioOptions;	// IMP=0x000000000001223d
- (void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(_Bool)arg1;	// IMP=0x00000000000120de
- (void)reloadOptionsAndCurrentSelections;	// IMP=0x00000000000120c7
- (void)reloadOptions;	// IMP=0x00000000000120b3
- (void)selectedMediaOptionMayHaveChanged:(_Bool)arg1;	// IMP=0x0000000000011a3c
- (void)selectedMediaOptionMayHaveChanged;	// IMP=0x0000000000011a28
- (id)_optionsForGroup:(id)arg1;	// IMP=0x00000000000115d4
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;	// IMP=0x0000000000011551
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;	// IMP=0x00000000000114dc
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;	// IMP=0x00000000000114b0
- (id)currentLegibleMediaSelectionOption;	// IMP=0x00000000000111a6
- (void)setLegibleMediaSelectionOptions:(id)arg1;	// IMP=0x00000000000110d1
- (id)legibleMediaSelectionOptions;	// IMP=0x00000000000110c3
- (_Bool)hasLegibleMediaSelectionOptions;	// IMP=0x000000000001107b
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;	// IMP=0x000000000001105f
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;	// IMP=0x000000000001103b
- (id)currentAudioMediaSelectionOption;	// IMP=0x0000000000010f25
- (void)setAudioMediaSelectionOptions:(id)arg1;	// IMP=0x0000000000010e50
- (id)audioMediaSelectionOptions;	// IMP=0x0000000000010e34
- (void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(_Bool)arg3;	// IMP=0x0000000000010d63
- (_Bool)hasAudioMediaSelectionOptions;	// IMP=0x0000000000010d1a
- (_Bool)hasMediaSelectionOptions;	// IMP=0x0000000000010ce1
- (void)setRateWithForce:(double)arg1;	// IMP=0x00000000000d42fe
@property(readonly, nonatomic) struct CGSize maximumVideoResolution;
- (id)preferredDisplayCriteria;	// IMP=0x00000000000d45f5
@property(readonly, nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool handlesAudioSessionInterruptions;
- (id)maxFrameCountString;	// IMP=0x00000000000d4189
- (id)maxTimecode;	// IMP=0x00000000000d4139
- (long long)frameNumberForCurrentTime;	// IMP=0x00000000000d404c
- (id)timecodeForCurrentTime;	// IMP=0x00000000000d3fcb
- (void)seekToFrame:(long long)arg1;	// IMP=0x00000000000d3f96
- (void)seekToTimecode:(id)arg1;	// IMP=0x00000000000d3f40
- (void)stopGeneratingTimecodes;	// IMP=0x00000000000d3ecc
- (_Bool)startGeneratingTimecodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d3c52
- (double)timecodeObservationInterval;	// IMP=0x00000000000d3bb8
- (id)loadTimecodeControllerIfNeeded;	// IMP=0x00000000000d3a9d
- (_Bool)hasTimecodes;	// IMP=0x00000000000d3702
@property(readonly, nonatomic) _Bool hasReadableTimecodes;
@property(readonly, nonatomic) AVTimecodeController *timecodeController;
@property(nonatomic) __weak id <AVPlayerControllerDelegate> internalDelegate;

@end
