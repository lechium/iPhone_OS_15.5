//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVAudioSessionParticipant-Protocol.h>

@class AVAudioSession, AVPlayerInternal, AVPlayerPlaybackCoordinator, NSArray, NSError, NSNumber, NSString;
@protocol AVLoggingIdentifier;

@interface AVPlayer : NSObject <AVAudioSessionParticipant>
{
    AVPlayerInternal *_player;	// 8 = 0x8
}

+ (_Bool)eligibleForHDRPlayback;	// IMP=0x0000000000042e8f
+ (long long)availableHDRModes;	// IMP=0x0000000000042dec
+ (void)registerForScreenConnectionChanges;	// IMP=0x0000000000042d7f
+ (void)fireEligibleForHDRPlaybackDidChangeNotification;	// IMP=0x0000000000042d34
+ (void)fireAvailableHDRModesDidChangeNotification;	// IMP=0x0000000000042ce9
+ (void)checkForAvailableHDRModesChanges;	// IMP=0x0000000000042c82
+ (_Bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// IMP=0x000000000003ea07
+ (_Bool)automaticallyNotifiesObserversOfAirPlayVideoActive;	// IMP=0x000000000003e9e7
+ (_Bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;	// IMP=0x000000000003e42b
+ (_Bool)automaticallyNotifiesObserversOfExternalPlaybackActive;	// IMP=0x000000000003e31a
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// IMP=0x000000000003d2cb
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// IMP=0x000000000003d017
+ (id)keyPathsForValuesAffectingMuted;	// IMP=0x000000000003cbc7
+ (id)keyPathsForValuesAffectingVolume;	// IMP=0x000000000003c84a
+ (_Bool)automaticallyNotifiesObserversOfVibrationPattern;	// IMP=0x000000000003c482
+ (_Bool)automaticallyNotifiesObserversOfUserVolume;	// IMP=0x000000000003c468
+ (_Bool)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;	// IMP=0x000000000003b60c
+ (_Bool)automaticallyNotifiesObserversOfRate;	// IMP=0x000000000003aaac
+ (int)_createFigPlayerWithType:(long long)arg1 options:(const struct __CFDictionary *)arg2 player:(struct OpaqueFigPlayer **)arg3;	// IMP=0x0000000000036ad3
+ (_Bool)automaticallyNotifiesObserversOfCurrentItem;	// IMP=0x000000000003587b
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer *)arg1;	// IMP=0x0000000000032c0d
+ (_Bool)worksAroundConcurrentKVOCrash;	// IMP=0x000000000003202d
+ (id)playerWithPlayerItem:(id)arg1;	// IMP=0x0000000000031e2a
+ (id)playerWithURL:(id)arg1;	// IMP=0x0000000000031dfb
+ (void)initialize;	// IMP=0x0000000000031d54
+ (_Bool)isIAPDExtendedModeActive;	// IMP=0x00000000000443f5
+ (_Bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;	// IMP=0x00000000000477f2
+ (id)makePlayerLoggingIdentifier;	// IMP=0x0000000000048b1a
- (void)_setSuppressesAudioRendering:(_Bool)arg1;	// IMP=0x0000000000042f6d
- (_Bool)_suppressesAudioRendering;	// IMP=0x0000000000042ea8
- (long long)audiovisualBackgroundPlaybackPolicy;	// IMP=0x0000000000042bb5
- (void)setAudiovisualBackgroundPlaybackPolicy:(long long)arg1;	// IMP=0x0000000000042aa1
- (_Bool)_pausesAudioVisualPlaybackInBackground;	// IMP=0x0000000000042a87
- (void)_setPausesAudioVisualPlaybackInBackground:(_Bool)arg1;	// IMP=0x0000000000042a6f
- (_Bool)_isVideoPlaybackAllowedWhileInBackground;	// IMP=0x0000000000042a67
- (_Bool)_limitsBandwidthForCellularAccess;	// IMP=0x00000000000429a2
- (void)_setLimitsBandwidthForCellularAccess:(_Bool)arg1;	// IMP=0x00000000000427d3
- (_Bool)_dynamicallyChoosesInitialVariant;	// IMP=0x000000000004270e
- (void)_setDynamicallyChoosesInitialVariant:(_Bool)arg1;	// IMP=0x000000000004253f
- (void)_logPerformanceDataForCurrentItem;	// IMP=0x0000000000042462
- (id)_copyPerformanceDataForCurrentItem;	// IMP=0x00000000000423ec
- (void)_logPerformanceDataForPreviousItem;	// IMP=0x000000000004228b
- (_Bool)_shouldLogPerformanceData;	// IMP=0x000000000004227e
- (_Bool)_getDisplayVideoRange:(id *)arg1 displaySize:(struct CGSize *)arg2 refreshRate:(id *)arg3;	// IMP=0x0000000000042276
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;	// IMP=0x0000000000042265
- (void)_removeFPListeners;	// IMP=0x00000000000420c1
- (void)_addFPListeners;	// IMP=0x0000000000041eae
- (void)_removeFPInterstitialCoordinatorListeners;	// IMP=0x0000000000041e1b
- (void)_addFPInterstitialCoordinatorListeners;	// IMP=0x0000000000041cf4
- (id)_fpNotificationNames;	// IMP=0x0000000000041c2c
- (void)_setNeroVideoGravityOnFigPlayer;	// IMP=0x0000000000041a21
- (void)setExternalPlaybackVideoGravity:(id)arg1;	// IMP=0x00000000000418f1
- (id)externalPlaybackVideoGravity;	// IMP=0x00000000000418df
- (id)_externalPlaybackVideoGravity;	// IMP=0x00000000000417e3
- (id)_performanceDictionary;	// IMP=0x00000000000414a8
- (void)_updatePixelBufferAttributesForLayer:(id)arg1;	// IMP=0x0000000000041374
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;	// IMP=0x0000000000041362
- (_Bool)_hasForegroundLayers;	// IMP=0x0000000000041232
- (void)_addLayer:(id)arg1;	// IMP=0x0000000000040ce4
- (void)_removeLayer:(id)arg1 videoLayer:(id)arg2 closedCaptionLayer:(id)arg3 subtitleLayer:(id)arg4 interstitialLayer:(id)arg5;	// IMP=0x000000000004058f
- (void)_removeLayer:(id)arg1;	// IMP=0x00000000000404ea
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;	// IMP=0x00000000000404a6
- (void)_attachClosedCaptionLayersToFigPlayer;	// IMP=0x0000000000040421
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;	// IMP=0x00000000000403d6
- (void)_attachVideoLayersToFigPlayer;	// IMP=0x00000000000402b0
- (void)_detachFigPlayerFromSubtitleLayers;	// IMP=0x000000000004019f
- (void)_attachFigPlayerToSubtitleLayers;	// IMP=0x0000000000040055
- (void)_evaluateDisplaySizeOfAllAttachedLayers;	// IMP=0x000000000003ff6a
- (struct CGSize)_maximumAVPlayerLayerDisplaySize;	// IMP=0x000000000003fcf2
- (void)_removeCaptionLayer:(id)arg1 subtitleLayer:(id)arg2;	// IMP=0x000000000003fa5d
- (void)_addCaptionLayer:(id)arg1 subtitleLayer:(id)arg2;	// IMP=0x000000000003f729
- (void)_updateClosedCaptionLayerBounds:(id)arg1 videoRelativeToViewport:(const struct CGRect *)arg2 captionsAvoidanceMargins:(const struct NSEdgeInsets *)arg3;	// IMP=0x000000000003f3d9
- (id)_avPlayerLayers;	// IMP=0x000000000003f2d4
- (id)_videoLayers;	// IMP=0x000000000003f1c8
- (id)_closedCaptionLayers;	// IMP=0x000000000003f0bc
- (id)_subtitleLayers;	// IMP=0x000000000003efb0
- (id)_pixelBufferAttributeMediator;	// IMP=0x000000000003efa2
- (void)_removeAllLayers;	// IMP=0x000000000003eeee
- (void)removeTimeObserver:(id)arg1;	// IMP=0x000000000003ee3a
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ed4e
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ec50
- (void)pause;	// IMP=0x000000000003eb32
- (void)play;	// IMP=0x000000000003ea0f
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(_Bool)arg1;	// IMP=0x000000000003ea01
- (_Bool)usesAirPlayVideoWhileAirPlayScreenIsActive;	// IMP=0x000000000003e9ef
- (_Bool)isAirPlayVideoActive;	// IMP=0x000000000003e9d5
- (_Bool)_isAirPlayVideoActive;	// IMP=0x000000000003e910
- (_Bool)_airPlayVideoActive;	// IMP=0x000000000003e820
- (void)setAllowsAirPlayVideo:(_Bool)arg1;	// IMP=0x000000000003e80e
- (_Bool)allowsAirPlayVideo;	// IMP=0x000000000003e7fc
- (void)setOutputContext:(id)arg1;	// IMP=0x000000000003e52d
- (id)outputContext;	// IMP=0x000000000003e433
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1;	// IMP=0x000000000003e425
- (_Bool)usesAudioOnlyModeForExternalPlayback;	// IMP=0x000000000003e360
- (long long)externalPlaybackType;	// IMP=0x000000000003e322
- (_Bool)isExternalPlaybackActive;	// IMP=0x000000000003e24a
- (_Bool)_externalPlaybackActive;	// IMP=0x000000000003e15a
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1;	// IMP=0x000000000003dfde
- (_Bool)usesExternalPlaybackWhileExternalScreenIsActive;	// IMP=0x000000000003df19
- (void)setAllowsExternalPlayback:(_Bool)arg1;	// IMP=0x000000000003dd9d
- (_Bool)allowsExternalPlayback;	// IMP=0x000000000003dcd8
- (void)setPlayerRole:(id)arg1;	// IMP=0x000000000003dcc4
- (void)setPlayerRole:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x000000000003db24
- (id)playerRole;	// IMP=0x000000000003da47
- (void)setResourceConservationLevelWhilePaused:(long long)arg1;	// IMP=0x000000000003d8c3
- (long long)resourceConservationLevelWhilePaused;	// IMP=0x000000000003d7fc
- (void)setShouldReduceResourceUsage:(_Bool)arg1;	// IMP=0x000000000003d51c
- (_Bool)shouldReduceResourceUsage;	// IMP=0x000000000003d457
- (_Bool)isDisplayingClosedCaptions;	// IMP=0x000000000003d392
- (_Bool)_isDisplayingClosedCaptions;	// IMP=0x000000000003d2eb
- (void)setClosedCaptionDisplayEnabled:(_Bool)arg1;	// IMP=0x000000000003d0fc
- (_Bool)isClosedCaptionDisplayEnabled;	// IMP=0x000000000003d037
- (void)setActionAtItemEnd:(long long)arg1;	// IMP=0x000000000003d003
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(_Bool)arg2;	// IMP=0x000000000003cceb
- (struct __CFString *)figPlayerActionForActionAtItemEnd:(long long)arg1;	// IMP=0x000000000003ccb4
- (long long)actionAtItemEnd;	// IMP=0x000000000003cbe7
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000003c9f8
- (_Bool)isMuted;	// IMP=0x000000000003c933
- (_Bool)_isMuted;	// IMP=0x000000000003c86a
- (void)setVolume:(float)arg1;	// IMP=0x000000000003c671
- (float)volume;	// IMP=0x000000000003c59b
- (float)_playerVolume;	// IMP=0x000000000003c48a
- (void)setVibrationPattern:(id)arg1;	// IMP=0x000000000003c47c
- (id)vibrationPattern;	// IMP=0x000000000003c470
- (void)_setUserVolume:(float)arg1;	// IMP=0x000000000003c35c
- (float)_userVolume;	// IMP=0x000000000003c1df
- (void)setSourceClock:(struct OpaqueCMClock *)arg1;	// IMP=0x000000000003c1cd
- (struct OpaqueCMClock *)sourceClock;	// IMP=0x000000000003c1bb
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;	// IMP=0x000000000003bfe4
- (struct OpaqueCMClock *)masterClock;	// IMP=0x000000000003befd
- (void)prerollOperationDidComplete:(_Bool)arg1 notificationPayload:(struct __CFDictionary *)arg2;	// IMP=0x000000000003bdf7
- (void)cancelPendingPrerolls;	// IMP=0x000000000003bde3
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003bd23
- (CDUnknownBlockType)_unregisterAndReturnRetainedPrerollCompletionHandler;	// IMP=0x000000000003bcf9
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bc48
- (int)_createPrerollID;	// IMP=0x000000000003bc04
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000003b884
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b83f
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b797
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000003b76c
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000003b741
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b6f9
- (void)seekToDate:(id)arg1;	// IMP=0x000000000003b6bc
- (CDStruct_1b6d18a9)currentUnfoldedTime;	// IMP=0x000000000003b668
- (CDStruct_1b6d18a9)currentTime;	// IMP=0x000000000003b614
- (_Bool)_usesLegacyAutomaticWaitingBehavior;	// IMP=0x000000000003b547
- (void)_setUsesLegacyAutomaticWaitingBehavior:(_Bool)arg1;	// IMP=0x000000000003b38b
- (void)setAutomaticallyWaitsToMinimizeStalling:(_Bool)arg1;	// IMP=0x000000000003b093
- (_Bool)automaticallyWaitsToMinimizeStalling;	// IMP=0x000000000003afce
- (id)reasonForWaitingToPlay;	// IMP=0x000000000003aef1
- (long long)timeControlStatus;	// IMP=0x000000000003ae2a
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1;	// IMP=0x000000000003ad18
- (long long)_inferredTimeControlStatusAndWaitingReason:(id *)arg1 forRate:(float)arg2;	// IMP=0x000000000003abfc
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1 forPlaybackState:(int)arg2;	// IMP=0x000000000003ab54
- (long long)_updateWaitingReasonAccordingToInterstitialEventCoordinator:(id *)arg1 forTimeControlStatus:(long long)arg2;	// IMP=0x000000000003aab4
- (void)_setRateDidChangeNotificationIncludesExtendedDiagnosticPayload:(_Bool)arg1;	// IMP=0x000000000003aa43
- (_Bool)_rateDidChangeNotificationIncludesExtendedDiagnosticPayload;	// IMP=0x000000000003a97e
- (void)pauseWithoutAffectingCoordinatedPlayback;	// IMP=0x000000000003a92f
- (void)playImmediatelyAtRate:(float)arg1;	// IMP=0x000000000003a7c8
- (void)setRate:(float)arg1;	// IMP=0x000000000003a664
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000003a645
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2 playImmediately:(_Bool)arg3 rateChangeReason:(int)arg4 affectsCoordinatedPlayback:(_Bool)arg5;	// IMP=0x000000000003a11a
- (void)_updatePlayerRate:(float)arg1 rateChangeReason:(int)arg2 rateChangeIdentifier:(id)arg3 figPlayerSetRateHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039f73
- (float)rate;	// IMP=0x0000000000039e9d
- (float)_rate;	// IMP=0x0000000000039e0c
- (id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)arg1 rateChangeIdentifier:(id)arg2 rateChangeOriginator:(id)arg3;	// IMP=0x0000000000039d50
- (id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)arg1 reasonIsExtendedDiagnostic:(_Bool)arg2 rateChangeIdentifier:(id)arg3 rateChangeOriginator:(id)arg4;	// IMP=0x0000000000039c54
- (void)_removeAllItems;	// IMP=0x0000000000039b16
- (id)_items;	// IMP=0x0000000000039a15
- (id)_items_invokeOnIvarAccessQueue;	// IMP=0x0000000000039966
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039901
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;	// IMP=0x0000000000039598
- (void)_removeItem:(id)arg1;	// IMP=0x000000000003939d
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;	// IMP=0x0000000000039246
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;	// IMP=0x00000000000391e6
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038d35
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038adf
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;	// IMP=0x00000000000389af
- (id)_ancillaryPerformanceInformationForDisplay;	// IMP=0x00000000000388d2
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;	// IMP=0x000000000003883a
- (void)setExpectedAssetTypes:(id)arg1;	// IMP=0x000000000003836f
- (id)expectedAssetTypes;	// IMP=0x000000000003835e
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036bc7
- (void)linkInterstitialFigPlayersOnQueue;	// IMP=0x0000000000036a28
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003698f
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;	// IMP=0x0000000000036882
- (id)_pendingFigPlayerProperties;	// IMP=0x0000000000036786
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000036482
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035f0c
- (void)_advanceToNextItem;	// IMP=0x0000000000035d64
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;	// IMP=0x0000000000035883
- (void)_itemIsReadyToPlay:(id)arg1;	// IMP=0x000000000003571f
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;	// IMP=0x000000000003566b
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;	// IMP=0x00000000000354d5
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;	// IMP=0x00000000000353da
- (_Bool)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;	// IMP=0x0000000000035315
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;	// IMP=0x00000000000351cf
- (struct CGSize)_cachedPresentationSizeOfCurrentItem;	// IMP=0x00000000000350da
- (_Bool)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(CDUnknownBlockType)arg1 modificationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000034311
- (void)_updateProxyTimebaseFromNewCurrentItem;	// IMP=0x00000000000341fa
- (id)_synchronizeWithNewCurrentItem;	// IMP=0x0000000000033f61
- (void)_setCurrentItem:(id)arg1;	// IMP=0x0000000000033d49
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;	// IMP=0x0000000000033bd8
- (id)closedCaptionsDisplayPublisher;	// IMP=0x0000000000033bae
- (id)currentItemPublisher;	// IMP=0x0000000000033b84
- (id)currentItem;	// IMP=0x0000000000033a8f
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer *)arg2;	// IMP=0x0000000000033a45
- (void)_changeStatusToFailedWithError:(id)arg1;	// IMP=0x0000000000033703
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000033477
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000333e0
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0000000000033339
- (struct OpaqueFigPlayer *)_copyFigPlayer;	// IMP=0x00000000000331f7
- (id)_stateDispatchQueue;	// IMP=0x00000000000331e9
- (id)dispatchQueue;	// IMP=0x00000000000331d7
- (id)_weakReference;	// IMP=0x00000000000331c9
- (id)_nameForLogging;	// IMP=0x0000000000033181
- (void)dealloc;	// IMP=0x0000000000032c3c
- (id)initWithFigPlayer:(struct OpaqueFigPlayer *)arg1;	// IMP=0x0000000000032b8c
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000000032b39
- (id)init;	// IMP=0x0000000000032064
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000031ff5
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x0000000000031e59
@property(nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
- (_Bool)outputObscuredDueToInsufficientExternalProtection;	// IMP=0x0000000000043673
- (long long)_extractFPExternalProtectionStatus:(id)arg1;	// IMP=0x000000000004360c
@property(readonly, nonatomic) long long _externalProtectionStatus;
- (long long)_externalProtectionStatusCopiedFromFig;	// IMP=0x0000000000043454
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;	// IMP=0x0000000000043310
@property(readonly, nonatomic, getter=_isPIPModePossible) _Bool PIPModePossible;
@property float maxRateForAudioPlayback;
@property float minRateForAudioPlayback;
@property(readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) _Bool audioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;	// IMP=0x00000000000437fd
- (void)_ensureVideoLayersAreAttached;	// IMP=0x00000000000452d5
- (void)_willEnterForeground:(id)arg1;	// IMP=0x0000000000045236
- (_Bool)_rateUpdateDuringTransitionDecided;	// IMP=0x0000000000045226
- (void)_detachVideoLayersForSuspension;	// IMP=0x0000000000044e50
- (void)_didFinishSuspension:(id)arg1;	// IMP=0x0000000000044e3e
- (void)_didEnterBackground:(id)arg1;	// IMP=0x0000000000044ceb
- (id)_acquireBackgroundAssertion;	// IMP=0x0000000000044c06
- (void)_layerForegroundStateChanged:(id)arg1;	// IMP=0x0000000000044b26
- (_Bool)_shouldDetachVideoLayersFromFigPlayer;	// IMP=0x0000000000044aaf
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;	// IMP=0x000000000004477b
- (void)_forceHostApplicationInForeground:(_Bool)arg1;	// IMP=0x0000000000044769
- (_Bool)_canContinuePlaybackInBackgrounBasedOnAudiovisualBackgroundPlaybackPolicy:(long long)arg1;	// IMP=0x000000000004471c
- (void)_setHostApplicationInForeground:(_Bool)arg1;	// IMP=0x00000000000446b3
- (_Bool)_hostApplicationInForeground;	// IMP=0x00000000000445ee
- (_Bool)_hostApplicationHasForegroundExemption;	// IMP=0x000000000004453e
- (_Bool)_carplayIsActive;	// IMP=0x000000000004451e
- (_Bool)_isIAPDExtendedModeActive;	// IMP=0x0000000000044461
- (_Bool)_hasAssociatedOnscreenAVPlayerLayer;	// IMP=0x00000000000442db
- (_Bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// IMP=0x00000000000440b7
- (_Bool)_hasAssociatedAVPlayerLayerInPIPMode;	// IMP=0x0000000000043f9e
- (_Bool)_resumePlayback:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000046141
- (void)_setPreferredLanguageList:(id)arg1;	// IMP=0x00000000000460ce
- (_Bool)_preventsSleepDuringVideoPlayback;	// IMP=0x00000000000460b9
- (void)_setPreventsSleepDuringVideoPlayback:(_Bool)arg1;	// IMP=0x00000000000460a1
- (_Bool)_isConnectedToPhysicalSecondScreen;	// IMP=0x0000000000045fdc
- (void)_updateConnectionToSecondScreen;	// IMP=0x0000000000045dca
- (_Bool)_CALayerDestinationIsTVOut;	// IMP=0x0000000000045d05
- (void)_setCALayerDestinationIsTVOut:(_Bool)arg1;	// IMP=0x0000000000045b36
- (void)_setClientPriority:(long long)arg1;	// IMP=0x000000000004595c
- (long long)_clientPriority;	// IMP=0x0000000000045895
- (void)_setClientName:(id)arg1;	// IMP=0x00000000000456ee
- (id)_clientName;	// IMP=0x0000000000045611
- (void)_setStoppingFadeOutDuration:(float)arg1;	// IMP=0x0000000000045575
- (void)_setEQPreset:(int)arg1;	// IMP=0x00000000000454d3
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(_Bool)arg1;	// IMP=0x000000000004544c
- (id)playerAVAudioSession;	// IMP=0x0000000000046365
@property _Bool allowsPixelBufferPoolSharing;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(_Bool)arg1;	// IMP=0x000000000004696d
- (_Bool)disallowsHardwareAcceleratedVideoDecoder;	// IMP=0x00000000000468a8
@property _Bool disallowsAMRAudio;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;	// IMP=0x0000000000046ffd
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;	// IMP=0x0000000000046dda
@property _Bool appliesMediaSelectionCriteriaAutomatically;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;	// IMP=0x00000000000471d9
- (void)setPreparesItemsForPlaybackAsynchronously:(_Bool)arg1;	// IMP=0x00000000000478bf
- (_Bool)preparesItemsForPlaybackAsynchronously;	// IMP=0x00000000000477fa
- (void)setAutoSwitchStreamVariants:(_Bool)arg1;	// IMP=0x0000000000047623
- (_Bool)autoSwitchStreamVariants;	// IMP=0x000000000004755e
@property(copy) NSString *audioOutputDeviceUniqueID;
@property _Bool allowsOutOfBandTextTrackRendering;
@property(copy) NSString *multichannelAudioStrategy;
@property(copy, nonatomic) NSString *captionRenderingStrategy;
@property(copy, nonatomic) NSString *captionPipelineStrategy;
@property(nonatomic, getter=_preservesAudioSessionSampleRate, setter=_setPreservesAudioSessionSampleRate:) _Bool preservesAudioSessionSampleRate;
@property(retain) AVAudioSession *audioSession;
@property(nonatomic) unsigned long long preferredVideoDecoderGPURegistryID;
@property(retain, nonatomic) id <AVLoggingIdentifier> loggingIdentifier;
@property(nonatomic, getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio, setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:) _Bool disallowsAutoPauseOnRouteRemovalIfNoAudio;
- (_Bool)_ensuresActiveAudioSessionWhenStartingPlayback;	// IMP=0x0000000000048e56
- (void)_setEnsuresActiveAudioSessionWhenStartingPlayback:(_Bool)arg1;	// IMP=0x0000000000048ded
@property(retain, nonatomic, getter=_STSLabel, setter=_setSTSLabel:) NSString *STSLabel;
@property(copy, nonatomic) NSString *backgroundPIPAuthorizationToken;
@property(readonly, nonatomic) NSNumber *mxSessionID;
@property(nonatomic, getter=_silencesOtherPlaybackDuringPIP, setter=_setSilencesOtherPlaybackDuringPIP:) _Bool silencesOtherPlaybackDuringPIP;
@property(readonly, nonatomic) _Bool isSilencedDueToConflictWithOtherPlayback;
@property(nonatomic) _Bool prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
@property(readonly, nonatomic) NSArray *videoTargets;
- (void)removeVideoTarget:(struct OpaqueFigVideoTarget *)arg1;	// IMP=0x0000000000049c97
- (void)addVideoTarget:(struct OpaqueFigVideoTarget *)arg1;	// IMP=0x0000000000049b44
- (void)_updateVideoTargetOnFigPlayer;	// IMP=0x0000000000049aa3
- (void)_noteCurrentRemoteInterstitialEvent:(id)arg1;	// IMP=0x000000000004a93f
- (void)_noteRemoteInterstitialEvents:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000004a8d3
- (void)_setInterstitialPlayer:(id)arg1;	// IMP=0x000000000004a79a
- (struct OpaqueFigPlayerInterstitialCoordinator *)retainInterstitialEventCoordinator;	// IMP=0x000000000004a62e
- (struct OpaqueFigPlayerInterstitialCoordinator *)_retainInterstitialCoordinatorIfCreated;	// IMP=0x000000000004a54f
- (id)interstitialPlayer;	// IMP=0x000000000004a3af
- (id)_interstitialPlayerIfCreated;	// IMP=0x000000000004a2ba
- (void)_setInterstitialPlayerGuts:(id)arg1;	// IMP=0x000000000004a0a7
- (void)syncAudioSessionToInterstitialPlayer:(id)arg1;	// IMP=0x000000000004a01e
- (void)_setIsInterstitialPlayer:(_Bool)arg1;	// IMP=0x0000000000049fb5
- (_Bool)_isInterstitialPlayer;	// IMP=0x0000000000049ef0
- (void)_ensureFigPlaybackCoordinatorIsConnected;	// IMP=0x000000000004ac3e
@property(readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
- (id)_playbackCoordinatorWithoutTriggeringFullSetup;	// IMP=0x000000000004aa6d
- (_Bool)_clientRequestedPlaybackCoordinator;	// IMP=0x000000000004a9a8

@end

