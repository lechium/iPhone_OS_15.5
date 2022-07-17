//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVPlayerItemInternal, NSArray, NSDate, NSError, NSString;
@protocol NSObject><NSCopying;

@interface AVPlayerItem : NSObject <NSCopying>
{
    AVPlayerItemInternal *_playerItem;	// 8 = 0x8
}

+ (_Bool)automaticallyNotifiesObserversOfTracks;	// IMP=0x000000000006ec2e
+ (_Bool)automaticallyNotifiesObserversOfPresentationSize;	// IMP=0x000000000006ec26
+ (_Bool)automaticallyNotifiesObserversOfLoadedTimeRanges;	// IMP=0x000000000006ec1e
+ (_Bool)automaticallyNotifiesObserversOfSeekableTimeRanges;	// IMP=0x000000000006ec16
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferFull;	// IMP=0x000000000006ec0e
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// IMP=0x000000000006ec06
+ (_Bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// IMP=0x000000000006ebfe
+ (_Bool)automaticallyNotifiesObserversOfAsset;	// IMP=0x000000000006ebf6
+ (_Bool)automaticallyNotifiesObserversOfStatus;	// IMP=0x000000000006ebee
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveResume;	// IMP=0x000000000006bfb8
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveStartup;	// IMP=0x000000000006bfb0
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;	// IMP=0x000000000006bfa8
+ (_Bool)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;	// IMP=0x000000000006b758
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledAudio;	// IMP=0x000000000006b097
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledVideo;	// IMP=0x000000000006aefe
+ (_Bool)automaticallyNotifiesObserversOfVariantIndex;	// IMP=0x0000000000067d71
+ (_Bool)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;	// IMP=0x00000000000653da
+ (_Bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;	// IMP=0x0000000000062aa9
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;	// IMP=0x0000000000060d62
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer *)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned int)arg4 options:(struct __CFDictionary *)arg5 playbackItem:(struct OpaqueFigPlaybackItem **)arg6;	// IMP=0x00000000000576c6
+ (_Bool)_hasOverrideForSelector:(SEL)arg1;	// IMP=0x00000000000541bc
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;	// IMP=0x0000000000054042
+ (id)playerItemWithAsset:(id)arg1;	// IMP=0x0000000000054013
+ (id)playerItemWithURL:(id)arg1;	// IMP=0x0000000000053fe4
+ (_Bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// IMP=0x0000000000053fd6
+ (_Bool)_forStreamingItemsVendAssetWithFigPlaybackItem;	// IMP=0x0000000000053fc8
+ (void)initialize;	// IMP=0x0000000000053eab
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;	// IMP=0x000000000007029f
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000070106
- (void)_setPlaybackCoordinator:(id)arg1;	// IMP=0x000000000006fd8b
- (id)_playbackCoordinator;	// IMP=0x000000000006fc96
- (void)_updateItemIdentifierForCoordinatedPlayback;	// IMP=0x000000000006f896
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;	// IMP=0x000000000006f7e6
- (unsigned long long)allowedAudioSpatializationFormats;	// IMP=0x000000000006f71f
- (void)_updateAllowedAudioSpatializationFormatsFromFigItem;	// IMP=0x000000000006f53e
- (void)_updateAllowedAudioSpatializationFormats;	// IMP=0x000000000006f38d
- (_Bool)allowedAudioSpatializationFormatsWasSet;	// IMP=0x000000000006f2c8
- (void)setAudioSpatializationAllowed:(_Bool)arg1;	// IMP=0x000000000006f23e
- (void)_updateAudioSpatializationAllowed;	// IMP=0x000000000006f14e
- (_Bool)audioSpatializationAllowedWasSet;	// IMP=0x000000000006f089
- (_Bool)isAudioSpatializationAllowed;	// IMP=0x000000000006efc4
- (void)setAdvanceTimeForOverlappedPlayback:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000006ef20
- (void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;	// IMP=0x000000000006edfa
- (_Bool)advanceTimeForOverlappedPlaybackWasSet;	// IMP=0x000000000006ed35
- (CDStruct_1b6d18a9)advanceTimeForOverlappedPlayback;	// IMP=0x000000000006ec36
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 updateStatusToReadyToPlay:(_Bool)arg2;	// IMP=0x000000000006e7a4
- (void)_removeInterstitialEventCollector;	// IMP=0x000000000006e66f
- (void)_addInterstitialEventCollector;	// IMP=0x000000000006e51b
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x000000000006e474
- (void)_updateAudioTapProcessorOnFigPlaybackItem;	// IMP=0x000000000006e399
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;	// IMP=0x000000000006e2d2
- (void)setLoudnessInfo:(id)arg1;	// IMP=0x000000000006e222
- (void)_updateLoudnessInfoOnFigPlaybackItem;	// IMP=0x000000000006e147
- (id)loudnessInfo;	// IMP=0x000000000006e04b
- (void)setMediaKind:(id)arg1;	// IMP=0x000000000006df9b
- (void)_updateMediaKindOnFigPlaybackItem;	// IMP=0x000000000006deaf
- (id)mediaKind;	// IMP=0x000000000006ddb3
- (unsigned long long)restrictions;	// IMP=0x000000000006dcec
- (void)setRestrictions:(unsigned long long)arg1;	// IMP=0x000000000006dc03
- (void)_updateRestrictionsOnFigPlaybackItem;	// IMP=0x000000000006dbfd
- (id)videoApertureMode;	// IMP=0x000000000006db14
- (void)setVideoApertureMode:(id)arg1;	// IMP=0x000000000006da6b
- (void)_updateVideoApertureModeOnFigPlaybackItem;	// IMP=0x000000000006d993
- (void)setAutoSwitchAtmosStreamVariants:(_Bool)arg1;	// IMP=0x000000000006d918
- (void)_updateAutoSwitchAtmosStreamVariantsOnFigPlaybackItem;	// IMP=0x000000000006d82b
- (_Bool)autoSwitchAtmosStreamVariants;	// IMP=0x000000000006d766
- (void)setPreferredMaximumAudioSampleRate:(double)arg1;	// IMP=0x000000000006d6e5
- (void)_updatePreferredMaximumAudioSampleRateOnFigPlaybackItem;	// IMP=0x000000000006d5e6
- (double)preferredMaximumAudioSampleRate;	// IMP=0x000000000006d515
- (void)setVariantPreferences:(unsigned long long)arg1;	// IMP=0x000000000006d497
- (void)_updateVariantPreferencesOnFigPlaybackItem;	// IMP=0x000000000006d3a0
- (unsigned long long)variantPreferences;	// IMP=0x000000000006d2d9
- (_Bool)prefersOfflinePlayableVariants;	// IMP=0x000000000006d214
- (void)setPrefersOfflinePlayableVariants:(_Bool)arg1;	// IMP=0x000000000006d0e2
- (_Bool)suppressesAudioOnlyVariants;	// IMP=0x000000000006d01d
- (void)setSuppressesAudioOnlyVariants:(_Bool)arg1;	// IMP=0x000000000006ceeb
- (void)setRequiresAccessLog:(_Bool)arg1;	// IMP=0x000000000006cdb9
- (_Bool)requiresAccessLog;	// IMP=0x000000000006ccf4
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;	// IMP=0x000000000006cbc9
- (void)setPreferredMinimumResolution:(struct CGSize)arg1;	// IMP=0x000000000006cb45
- (void)_updatePreferredMinimumResolutionOnFigPlaybackItem;	// IMP=0x000000000006ca61
- (struct CGSize)preferredMaximumResolutionForExpensiveNetworks;	// IMP=0x000000000006c96c
- (void)setPreferredMaximumResolutionForExpensiveNetworks:(struct CGSize)arg1;	// IMP=0x000000000006c8e8
- (void)_updatePreferredMaximumResolutionForExpensiveNetworksOnFigPlaybackItem;	// IMP=0x000000000006c804
- (struct CGSize)preferredMinimumResolution;	// IMP=0x000000000006c70f
- (void)setPreferredMaximumResolution:(struct CGSize)arg1;	// IMP=0x000000000006c68b
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;	// IMP=0x000000000006c5a7
- (struct CGSize)preferredMaximumResolution;	// IMP=0x000000000006c4b2
- (void)setPreferredPeakPresentationSize:(struct CGSize)arg1;	// IMP=0x000000000006c4a0
- (struct CGSize)preferredPeakPresentationSize;	// IMP=0x000000000006c48e
- (void)setMaximumBitRate:(float)arg1;	// IMP=0x000000000006c478
- (float)maximumBitRate;	// IMP=0x000000000006c461
- (void)setPreferredPeakBitRateForExpensiveNetworks:(double)arg1;	// IMP=0x000000000006c3e0
- (void)_updatePreferredPeakBitRateForExpensiveNetworksOnFigPlaybackItem;	// IMP=0x000000000006c2e5
- (double)preferredPeakBitRateForExpensiveNetworks;	// IMP=0x000000000006c214
- (void)setPreferredPeakBitRate:(double)arg1;	// IMP=0x000000000006c193
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;	// IMP=0x000000000006c091
- (double)preferredPeakBitRate;	// IMP=0x000000000006bfc0
- (void)setIFramePrefetchTargetDimensions:(struct CGSize)arg1;	// IMP=0x000000000006bf24
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;	// IMP=0x000000000006be3a
- (struct CGSize)IFramePrefetchTargetDimensions;	// IMP=0x000000000006bd45
- (void)setAllowProgressiveResume:(_Bool)arg1;	// IMP=0x000000000006bc13
- (_Bool)allowProgressiveResume;	// IMP=0x000000000006bb4e
- (void)setAllowProgressiveStartup:(_Bool)arg1;	// IMP=0x000000000006ba1c
- (_Bool)allowProgressiveStartup;	// IMP=0x000000000006b957
- (void)setAllowProgressiveSwitchUp:(_Bool)arg1;	// IMP=0x000000000006b825
- (_Bool)allowProgressiveSwitchUp;	// IMP=0x000000000006b760
- (void)setNetworkUsuallyExceedsMaxBitRate:(_Bool)arg1;	// IMP=0x000000000006b626
- (_Bool)networkUsuallyExceedsMaxBitRate;	// IMP=0x000000000006b561
- (_Bool)_hasEnqueuedVideoFrame;	// IMP=0x000000000006b49c
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;	// IMP=0x000000000006b42f
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;	// IMP=0x000000000006b39f
- (void)_setSuppressesVideoLayers:(_Bool)arg1;	// IMP=0x000000000006b27d
- (_Bool)_suppressesVideoLayers;	// IMP=0x000000000006b1b8
- (_Bool)_suppressionForOutputs:(id)arg1;	// IMP=0x000000000006b09f
- (_Bool)hasEnabledAudio;	// IMP=0x000000000006afd2
- (_Bool)_hasEnabledAudio;	// IMP=0x000000000006af06
- (_Bool)isRenderingSpatialAudio;	// IMP=0x000000000006ae39
- (_Bool)hasVideo;	// IMP=0x000000000006ad74
- (_Bool)hasEnabledVideo;	// IMP=0x000000000006acaf
- (_Bool)_hasEnabledVideo;	// IMP=0x000000000006abe3
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)arg1;	// IMP=0x000000000006aaa4
- (void)_addSyncLayer:(id)arg1;	// IMP=0x000000000006a932
- (void)_removeSyncLayer:(id)arg1;	// IMP=0x000000000006a7ff
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;	// IMP=0x000000000006a787
- (void)_setTimedMetadata:(id)arg1;	// IMP=0x000000000006a723
- (id)timedMetadata;	// IMP=0x000000000006a705
- (struct OpaqueFigCPEProtector *)_figCPEProtector;	// IMP=0x000000000006a633
- (void)setNonForcedSubtitleDisplayEnabled:(_Bool)arg1;	// IMP=0x000000000006a593
- (_Bool)isNonForcedSubtitleDisplayEnabled;	// IMP=0x000000000006a4ce
- (_Bool)_isNonForcedSubtitleDisplayEnabled;	// IMP=0x000000000006a42b
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;	// IMP=0x000000000006a33e
- (void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(_Bool)arg1;	// IMP=0x000000000006a2d5
- (_Bool)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;	// IMP=0x000000000006a210
- (id)currentMediaSelection;	// IMP=0x0000000000069d1b
- (void)_setCurrentMediaSelection:(id)arg1;	// IMP=0x0000000000069bd4
- (id)_currentMediaSelectionFromFigSelectedMediaArray:(id)arg1;	// IMP=0x0000000000069768
- (id)_figSelectedMediaArray;	// IMP=0x00000000000696e9
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x00000000000695f5
- (_Bool)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1;	// IMP=0x0000000000069517
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000069392
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;	// IMP=0x0000000000069254
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;	// IMP=0x00000000000691af
- (void)_selectMediaOption:(id)arg1 inGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;	// IMP=0x0000000000069137
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;	// IMP=0x0000000000068edc
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;	// IMP=0x0000000000068d7e
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;	// IMP=0x0000000000068c58
- (_Bool)_hasSelectionInCachedMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000068c3f
- (void)_clearCachedMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000068c28
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;	// IMP=0x0000000000068bcc
- (void)_applyMediaSelectionOptions;	// IMP=0x0000000000068914
- (void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;	// IMP=0x00000000000688b0
- (_Bool)_isFigAssetReadyForInspectionOfMediaSelectionOptions;	// IMP=0x00000000000687eb
- (_Bool)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;	// IMP=0x0000000000068719
- (void)_removeMediaOptionsSelectedByClient;	// IMP=0x00000000000686a9
- (void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000068610
- (id)_mediaOptionsSelectedByClientForKey:(id)arg1;	// IMP=0x0000000000068503
- (id)_mediaOptionsSelectedByClient;	// IMP=0x0000000000068407
- (float)volumeAdjustment;	// IMP=0x0000000000068331
- (void)setVolumeAdjustment:(float)arg1;	// IMP=0x0000000000068243
- (void)_updateVolumeAdjustmentOnFigPlaybackItem;	// IMP=0x000000000006813e
- (float)soundCheckVolumeNormalization;	// IMP=0x0000000000068068
- (void)setSoundCheckVolumeNormalization:(float)arg1;	// IMP=0x0000000000067f7a
- (void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;	// IMP=0x0000000000067e75
- (id)currentStableVariantID;	// IMP=0x0000000000067d79
- (void)setVariantIndex:(long long)arg1;	// IMP=0x0000000000067d46
- (void)_quietlySetVariantIndex:(long long)arg1;	// IMP=0x0000000000067cca
- (double)liveUpdateInterval;	// IMP=0x0000000000067c23
- (long long)variantIndex;	// IMP=0x0000000000067b64
- (id)configurationGroup;	// IMP=0x0000000000067ae7
- (void)setGaplessInfo:(id)arg1;	// IMP=0x00000000000679d5
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;	// IMP=0x0000000000067630
- (id)_playbackProperties;	// IMP=0x0000000000067595
- (id)gaplessInfo;	// IMP=0x00000000000674a0
- (id)loadedTimeRanges;	// IMP=0x0000000000067389
- (id)_loadedTimeRanges;	// IMP=0x00000000000672d3
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;	// IMP=0x0000000000066f81
- (double)seekableTimeRangesLastModifiedTime;	// IMP=0x0000000000066eb0
- (id)seekableTimeRanges;	// IMP=0x0000000000066d99
- (id)_seekableTimeRanges;	// IMP=0x0000000000066cb2
- (void)setLoopTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000066a72
- (CDStruct_e83c9415)loopTimeRange;	// IMP=0x000000000006694f
- (void)_updateLoopTimeRangeOnFigPlaybackItem;	// IMP=0x00000000000667a5
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;	// IMP=0x0000000000066453
- (id)playabilityMetrics;	// IMP=0x00000000000663c8
- (void)setStartsOnFirstEligibleVariant:(_Bool)arg1;	// IMP=0x000000000006634c
- (void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;	// IMP=0x000000000006625c
- (_Bool)startsOnFirstEligibleVariant;	// IMP=0x0000000000066195
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(_Bool)arg1;	// IMP=0x000000000006611a
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;	// IMP=0x000000000006602a
- (_Bool)canUseNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x0000000000065f60
- (float)progressTowardsPlaybackLikelyToKeepUp;	// IMP=0x0000000000065eb8
- (_Bool)isPlaybackBufferEmpty;	// IMP=0x0000000000065df3
- (_Bool)isPlaybackBufferFull;	// IMP=0x0000000000065d2e
- (_Bool)isPlaybackLikelyToKeepUp;	// IMP=0x0000000000065c69
- (void)setAudioTimePitchAlgorithm:(id)arg1;	// IMP=0x0000000000065ba7
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;	// IMP=0x0000000000065acc
- (id)audioTimePitchAlgorithm;	// IMP=0x00000000000659c4
- (void)setTextHighlightArray:(id)arg1;	// IMP=0x00000000000658b2
- (void)setTextStyleRules:(id)arg1;	// IMP=0x00000000000657a0
- (void)_updateTextHighlightArrayOnFigPlaybackItem;	// IMP=0x00000000000656c5
- (void)_updateTextStyleRulesOnFigPlaybackItem;	// IMP=0x00000000000655cc
- (id)textHighlightArray;	// IMP=0x00000000000654d7
- (id)textStyleRules;	// IMP=0x00000000000653e2
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(_Bool)arg1;	// IMP=0x00000000000652f5
- (void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;	// IMP=0x0000000000065208
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;	// IMP=0x000000000006511b
- (_Bool)usesMinimalLatencyForVideoCompositionRendering;	// IMP=0x0000000000065056
- (void)setSeekingWaitsForVideoCompositionRendering:(_Bool)arg1;	// IMP=0x0000000000064f71
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;	// IMP=0x0000000000064e81
- (_Bool)seekingWaitsForVideoCompositionRendering;	// IMP=0x0000000000064dbc
- (id)customVideoCompositor;	// IMP=0x0000000000064c8f
- (void)_setVideoCompositor:(void *)arg1;	// IMP=0x0000000000064c40
- (void)_setVideoCompositionSourceSampleDataTrackIDs:(id)arg1;	// IMP=0x0000000000064bf1
- (void)_setVideoCompositionInstructions:(id)arg1;	// IMP=0x0000000000064ba2
- (void)_setVideoCompositionColorTransferFunction:(id)arg1;	// IMP=0x0000000000064b53
- (void)_setVideoCompositionColorYCbCrMatrix:(id)arg1;	// IMP=0x0000000000064b04
- (void)_setVideoCompositionColorPrimaries:(id)arg1;	// IMP=0x0000000000064ab5
- (void)_setVideoCompositionRenderScale:(float)arg1;	// IMP=0x0000000000064a34
- (void)_setVideoCompositionRenderSize:(struct CGSize)arg1;	// IMP=0x00000000000649cf
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1;	// IMP=0x0000000000064966
- (void)_setVideoCompositionFrameDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000648d7
- (void)setVideoComposition:(id)arg1;	// IMP=0x0000000000064410
- (id)videoComposition;	// IMP=0x00000000000642e2
- (void)setAudioMix:(id)arg1;	// IMP=0x00000000000641d2
- (void)_applyCurrentAudioMix;	// IMP=0x0000000000063d76
- (void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2;	// IMP=0x0000000000063b02
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;	// IMP=0x0000000000063aab
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrackID:(int)arg2;	// IMP=0x0000000000063a54
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000639bf
- (id)audioMix;	// IMP=0x00000000000638ca
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;	// IMP=0x000000000006383a
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;	// IMP=0x0000000000063735
- (_Bool)speedThresholdForIFrameOnlyPlaybackWasSet;	// IMP=0x0000000000063670
- (float)speedThresholdForIFrameOnlyPlayback;	// IMP=0x000000000006359a
- (void)setMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000634f6
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;	// IMP=0x00000000000633d0
- (_Bool)minimumIntervalForIFrameOnlyPlaybackWasSet;	// IMP=0x000000000006330b
- (CDStruct_1b6d18a9)minimumIntervalForIFrameOnlyPlayback;	// IMP=0x000000000006320c
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(_Bool)arg1;	// IMP=0x0000000000063182
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;	// IMP=0x0000000000063095
- (_Bool)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;	// IMP=0x0000000000062fd0
- (_Bool)usesIFrameOnlyPlaybackForHighRateScaledEdits;	// IMP=0x0000000000062f0b
- (void)setContinuesPlayingDuringPrerollForRateChange:(_Bool)arg1;	// IMP=0x0000000000062e90
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;	// IMP=0x0000000000062da3
- (_Bool)continuesPlayingDuringPrerollForRateChange;	// IMP=0x0000000000062cde
- (void)setContinuesPlayingDuringPrerollForSeek:(_Bool)arg1;	// IMP=0x0000000000062c63
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;	// IMP=0x0000000000062b76
- (_Bool)continuesPlayingDuringPrerollForSeek;	// IMP=0x0000000000062ab1
- (void)setSavesDownloadedDataToDiskWhenDone:(_Bool)arg1;	// IMP=0x000000000006297a
- (_Bool)savesDownloadedDataToDiskWhenDone;	// IMP=0x00000000000628b5
- (void)setWillNeverSeekBackwardsHint:(_Bool)arg1;	// IMP=0x000000000006283a
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;	// IMP=0x000000000006274d
- (_Bool)willNeverSeekBackwardsHint;	// IMP=0x0000000000062688
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;	// IMP=0x000000000006260a
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;	// IMP=0x000000000006251c
- (long long)playbackLikelyToKeepUpTrigger;	// IMP=0x0000000000062455
- (void)setAlwaysMonitorsPlayability:(_Bool)arg1;	// IMP=0x00000000000623da
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;	// IMP=0x00000000000622ed
- (_Bool)alwaysMonitorsPlayability;	// IMP=0x0000000000062228
- (void)setMaximumForwardBufferDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000062193
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;	// IMP=0x000000000006205b
- (CDStruct_1b6d18a9)maximumForwardBufferDuration;	// IMP=0x0000000000061f5c
- (void)setMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000061ec7
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;	// IMP=0x0000000000061d3a
- (CDStruct_1b6d18a9)maximumTrailingBufferDuration;	// IMP=0x0000000000061c3b
- (void)setPreferredForwardBufferDuration:(double)arg1;	// IMP=0x0000000000061b4f
- (double)preferredForwardBufferDuration;	// IMP=0x0000000000061aee
- (void)setAllowsExtendedReadAhead:(_Bool)arg1;	// IMP=0x0000000000061a08
- (_Bool)allowsExtendedReadAhead;	// IMP=0x000000000006197e
- (void)setLimitReadAhead:(_Bool)arg1;	// IMP=0x0000000000061903
- (void)_updateLimitReadAheadOnFigPlaybackItem;	// IMP=0x0000000000061816
- (_Bool)limitReadAhead;	// IMP=0x0000000000061751
- (unsigned int)RTCReportingFlags;	// IMP=0x0000000000061689
- (void)setRTCReportingFlags:(unsigned int)arg1;	// IMP=0x000000000006160e
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;	// IMP=0x000000000006150b
- (void)_updateTimebase;	// IMP=0x0000000000061019
- (struct OpaqueCMTimebase *)timebase;	// IMP=0x0000000000060fec
- (struct OpaqueCMTimebase *)unfoldedTimebase;	// IMP=0x0000000000060fbf
- (struct OpaqueCMTimebase *)_copyUnfoldedFigTimebase;	// IMP=0x0000000000060ee0
- (struct OpaqueCMTimebase *)_copyProxyTimebase;	// IMP=0x0000000000060ece
- (struct OpaqueCMTimebase *)_copyProxyFoldedTimebase;	// IMP=0x0000000000060ebc
- (struct OpaqueCMTimebase *)_copyProxyUnfoldedTimebase;	// IMP=0x0000000000060eaa
- (struct OpaqueCMTimebase *)_copyFoldedTimebase;	// IMP=0x0000000000060dcb
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(_Bool)arg1;	// IMP=0x0000000000060cd8
- (void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;	// IMP=0x0000000000060beb
- (_Bool)decodesAllFramesDuringOrdinaryPlaybackWasSet;	// IMP=0x0000000000060b26
- (_Bool)decodesAllFramesDuringOrdinaryPlayback;	// IMP=0x0000000000060a61
- (void)setAggressivelyCachesVideoFrames:(_Bool)arg1;	// IMP=0x00000000000609d7
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;	// IMP=0x00000000000608ea
- (_Bool)aggressivelyCachesVideoFramesWasSet;	// IMP=0x0000000000060825
- (_Bool)aggressivelyCachesVideoFrames;	// IMP=0x0000000000060760
- (void)setReversesMoreVideoFramesInMemory:(_Bool)arg1;	// IMP=0x00000000000606d6
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;	// IMP=0x00000000000605e9
- (_Bool)reversesMoreVideoFramesInMemoryWasSet;	// IMP=0x0000000000060524
- (_Bool)reversesMoreVideoFramesInMemory;	// IMP=0x000000000006045f
- (void)setAppliesPerFrameHDRDisplayMetadata:(_Bool)arg1;	// IMP=0x00000000000603d5
- (void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;	// IMP=0x00000000000602e8
- (_Bool)appliesPerFrameHDRDisplayMetadataWasSet;	// IMP=0x0000000000060223
- (_Bool)appliesPerFrameHDRDisplayMetadata;	// IMP=0x000000000006015e
- (void)setBlendsVideoFrames:(_Bool)arg1;	// IMP=0x00000000000600d4
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;	// IMP=0x000000000005ffe7
- (_Bool)blendsVideoFramesWasSet;	// IMP=0x000000000005ff22
- (_Bool)blendsVideoFrames;	// IMP=0x000000000005fe5d
- (void)setImageQueueInterpolationCurve:(id)arg1;	// IMP=0x000000000005fda4
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;	// IMP=0x000000000005fcc9
- (_Bool)imageQueueInterpolationCurveWasSet;	// IMP=0x000000000005fc04
- (id)imageQueueInterpolationCurve;	// IMP=0x000000000005fb08
- (void)setSnapTimeToPausePlayback:(unsigned char)arg1;	// IMP=0x000000000005fa8b
- (void)_updateSnapTimeToPausePlaybackOnFigPlaybackItem;	// IMP=0x000000000005f99e
- (unsigned char)snapTimeToPausePlayback;	// IMP=0x000000000005f8d3
- (unsigned char)_snapTimeToPausePlayback;	// IMP=0x000000000005f80d
- (void)setTimeToPausePlayback:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005f778
- (void)_updateTimeToPausePlaybackOnFigPlaybackItem;	// IMP=0x000000000005f652
- (CDStruct_1b6d18a9)timeToPausePlayback;	// IMP=0x000000000005f547
- (CDStruct_1b6d18a9)_timeToPausePlayback;	// IMP=0x000000000005f448
- (void)setTimeToPauseBuffering:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005f3b3
- (void)_updateTimeToPauseBufferingOnFigPlaybackItem;	// IMP=0x000000000005f28d
- (CDStruct_1b6d18a9)timeToPauseBuffering;	// IMP=0x000000000005f184
- (CDStruct_1b6d18a9)_timeToPauseBuffering;	// IMP=0x000000000005f085
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005eff0
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;	// IMP=0x000000000005eeca
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x000000000005edcb
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005ed36
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;	// IMP=0x000000000005ec10
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x000000000005eb11
- (void)stepByCount:(long long)arg1;	// IMP=0x000000000005e96a
- (void)setInitialEstimatedDate:(id)arg1;	// IMP=0x000000000005e8d9
- (id)initialEstimatedDate;	// IMP=0x000000000005e7e4
- (id)currentEstimatedDate;	// IMP=0x000000000005e752
- (void)setInitialDate:(id)arg1;	// IMP=0x000000000005e6c1
- (id)initialDate;	// IMP=0x000000000005e5cc
- (_Bool)seekToDate:(id)arg1;	// IMP=0x000000000005e49a
- (_Bool)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e3e5
- (id)currentDate;	// IMP=0x000000000005e353
- (void)cancelPendingSeeks;	// IMP=0x000000000005e337
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005d8f6
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d882
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000005d86e
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005d85a
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 completeAnyPendingSeek:(_Bool)arg2 finished:(_Bool)arg3;	// IMP=0x000000000005d7c0
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d702
- (int)_CreateSeekID;	// IMP=0x000000000005d6bf
- (CDStruct_1b6d18a9)currentTime;	// IMP=0x000000000005d658
- (CDStruct_1b6d18a9)currentUnfoldedTime;	// IMP=0x000000000005d61f
- (CDStruct_1b6d18a9)_currentTimeWithOptionalFoldedTimebase:(struct OpaqueCMTimebase *)arg1;	// IMP=0x000000000005d48c
- (struct CGSize)presentationSize;	// IMP=0x000000000005d397
- (struct CGSize)_presentationSize;	// IMP=0x000000000005d2da
- (void)_markAsReadyForInspectionOfPresentationSize;	// IMP=0x000000000005d276
- (_Bool)_isReadyForInspectionOfPresentationSize;	// IMP=0x000000000005d1b1
- (CDStruct_1b6d18a9)recommendedTimeOffsetFromLive;	// IMP=0x000000000005d0b2
- (CDStruct_1b6d18a9)_recommendedTimeOffsetFromLive;	// IMP=0x000000000005cfba
- (void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;	// IMP=0x000000000005cf56
- (_Bool)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;	// IMP=0x000000000005ce91
- (void)setConfiguredTimeOffsetFromLive:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005cdfc
- (void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem;	// IMP=0x000000000005ccd8
- (CDStruct_1b6d18a9)configuredTimeOffsetFromLive;	// IMP=0x000000000005cbd9
- (CDStruct_1b6d18a9)_configuredTimeOffsetFromLive;	// IMP=0x000000000005ca49
- (void)setAutomaticallyPreservesTimeOffsetFromLive:(_Bool)arg1;	// IMP=0x000000000005c9ce
- (void)_updatePreservesTimeOffsetFromLive;	// IMP=0x000000000005c8e1
- (_Bool)automaticallyPreservesTimeOffsetFromLive;	// IMP=0x000000000005c81c
- (_Bool)canStepBackward;	// IMP=0x000000000005c757
- (_Bool)_canStepBackward;	// IMP=0x000000000005c745
- (_Bool)canStepForward;	// IMP=0x000000000005c680
- (_Bool)_canStepForward;	// IMP=0x000000000005c5ab
- (_Bool)canPlaySlowReverse;	// IMP=0x000000000005c4e6
- (_Bool)canPlaySlowForward;	// IMP=0x000000000005c421
- (_Bool)canPlayReverse;	// IMP=0x000000000005c35c
- (_Bool)_canPlayReverse;	// IMP=0x000000000005c294
- (_Bool)_isAFileBasedItemThatsReadyToPlay;	// IMP=0x000000000005c256
- (_Bool)canPlayFastReverse;	// IMP=0x000000000005c191
- (_Bool)_canPlayFastReverse;	// IMP=0x000000000005c0bc
- (_Bool)canPlayFastForward;	// IMP=0x000000000005bff7
- (_Bool)_canPlayFastForward;	// IMP=0x000000000005bf22
- (void)_makeReadyForEnqueueingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bca4
- (void)_invokeReadyForEnqueueingHandlers;	// IMP=0x000000000005bb46
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005ba18
- (void)_markAsReadyForBasicInspection;	// IMP=0x000000000005b9b4
- (_Bool)_isReadyForBasicInspection;	// IMP=0x000000000005b8ef
- (void)_respondToBecomingReadyForBasicInspection;	// IMP=0x000000000005b8ad
- (void)_removeFoldedTBListeners;	// IMP=0x000000000005b7ef
- (void)_addFoldedTBListeners;	// IMP=0x000000000005b6fc
- (void)_removeFAListeners;	// IMP=0x000000000005b656
- (void)_addFAListeners;	// IMP=0x000000000005b3bb
- (void)_removeFPListeners;	// IMP=0x000000000005b146
- (void)_addFPListeners;	// IMP=0x000000000005ab21
- (id)_fpNotificationNames;	// IMP=0x000000000005a96c
- (id)_enabledTrackFormatDescriptions;	// IMP=0x000000000005a7b7
- (id)_trackWithTrackID:(int)arg1;	// IMP=0x000000000005a651
- (id)tracks;	// IMP=0x000000000005a53a
- (id)_tracks;	// IMP=0x000000000005a402
- (void)_markAsReadyForInspectionOfTracks;	// IMP=0x000000000005a39e
- (_Bool)_isReadyForInspectionOfTracks;	// IMP=0x000000000005a2d9
- (id)_tracksFromAssetTrackIDs;	// IMP=0x0000000000059f55
- (id)_cachedTracks;	// IMP=0x0000000000059e59
- (id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2;	// IMP=0x0000000000059be2
- (CDStruct_1b6d18a9)duration;	// IMP=0x0000000000059ae3
- (CDStruct_1b6d18a9)_duration;	// IMP=0x0000000000059790
- (void)_markAsReadyForInspectionOfDuration;	// IMP=0x000000000005972c
- (_Bool)_isReadyForInspectionOfDuration;	// IMP=0x0000000000059667
- (id)automaticallyLoadedAssetKeys;	// IMP=0x000000000005963f
- (id)asset;	// IMP=0x0000000000059624
- (void)_changeStatusToFailedWithError:(id)arg1;	// IMP=0x00000000000593d8
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)_informObserversAboutAvailabilityOfCurrentMediaSelection;	// IMP=0x00000000000591c2
- (void)_informObserversAboutAvailabilityOfDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000058eca
- (void)_informObserversAboutAvailabilityOfPresentationSize;	// IMP=0x0000000000058cf8
- (void)_informObserversAboutAvailabilityOfTracks:(id)arg1;	// IMP=0x0000000000058bae
- (void)_kickAssetObserversIfAppropriate;	// IMP=0x0000000000058b2e
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;	// IMP=0x0000000000058a29
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// IMP=0x0000000000058868
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;	// IMP=0x00000000000587e1
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1;	// IMP=0x00000000000584ff
- (void)_setAsset:(id)arg1;	// IMP=0x000000000005829a
- (void)_setURL:(id)arg1;	// IMP=0x000000000005826e
- (id)_URL;	// IMP=0x0000000000058260
- (id)_propertyListForMediaSelection:(id)arg1 forGroup:(id)arg2;	// IMP=0x0000000000058153
- (id)nonForcedSubtitleDisplayEnabledPublisher;	// IMP=0x0000000000058129
- (id)tracksPublisher;	// IMP=0x00000000000580ff
- (id)presentationSizePublisher;	// IMP=0x00000000000580d5
- (void)_removeFromItems;	// IMP=0x000000000005807a
- (void)_insertAfterItem:(id)arg1;	// IMP=0x0000000000057fb8
- (id)_previousItem;	// IMP=0x0000000000057fa7
- (id)_nextItem;	// IMP=0x0000000000057f96
- (void)_playerChangeStatusToFailedWithError:(id)arg1;	// IMP=0x0000000000057f84
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;	// IMP=0x0000000000057f3c
- (_Bool)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2;	// IMP=0x0000000000057e5f
- (void)_attachToFigPlayer;	// IMP=0x0000000000057882
- (void)_attachToPlayer:(id)arg1;	// IMP=0x00000000000575aa
- (id)_playerConnection;	// IMP=0x0000000000057599
- (id)_player;	// IMP=0x000000000005757c
- (_Bool)_configurePlaybackItemAndReturnError:(id *)arg1;	// IMP=0x0000000000056440
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0000000000056301
- (_Bool)_getCachedNonForcedSubtitleEnabled:(_Bool *)arg1;	// IMP=0x00000000000562db
- (_Bool)_getCachedPresentationSize:(struct CGSize *)arg1;	// IMP=0x000000000005628b
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;	// IMP=0x00000000000561af
- (id)_copyStateDispatchQueue;	// IMP=0x00000000000560bb
- (id)_weakReference;	// IMP=0x00000000000560ad
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000055fe8
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000055f7c
- (id)delegate;	// IMP=0x0000000000055e75
- (id)_nameForLogging;	// IMP=0x0000000000055e2d
- (id)description;	// IMP=0x0000000000055d24
- (id)copy;	// IMP=0x0000000000055bee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055bda
- (id)copyWithZone:(struct _NSZone *)arg1 newAssetOptions:(id)arg2;	// IMP=0x00000000000550d7
- (void)dealloc;	// IMP=0x0000000000054a5a
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;	// IMP=0x00000000000541f3
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000005410c
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000540b6
- (id)init;	// IMP=0x0000000000054076
@property(readonly, nonatomic, getter=isContentAuthorizedForPlayback) _Bool contentAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) _Bool applicationAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) _Bool authorizationRequiredForPlayback;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) _Bool _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic, getter=_isRental) _Bool _rental;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) _Bool _externalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;	// IMP=0x00000000000702eb
- (id)errorLog;	// IMP=0x0000000000070a75
- (id)accessLog;	// IMP=0x00000000000709b7
- (long long)_availableFileSize;	// IMP=0x0000000000071339
- (long long)_fileSize;	// IMP=0x0000000000071293
- (void)_setAudibleDRMInfo:(id)arg1;	// IMP=0x0000000000071229
- (void)_setRampInOutInfo:(id)arg1;	// IMP=0x00000000000711bf
- (void)_setEQPreset:(int)arg1;	// IMP=0x000000000007118e
- (void)_quietlySetEQPreset:(int)arg1;	// IMP=0x0000000000071113
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;	// IMP=0x0000000000072745
- (void)_removeMetadataOutput:(id)arg1;	// IMP=0x0000000000072681
- (void)_removeLegibleOutput:(id)arg1;	// IMP=0x00000000000725bd
- (void)_removeVideoOutput:(id)arg1;	// IMP=0x00000000000724d2
- (void)addOutput:(id)arg1;	// IMP=0x00000000000721f6
- (void)_addMetadataOutput:(id)arg1;	// IMP=0x0000000000072124
- (void)_addLegibleOutput:(id)arg1;	// IMP=0x0000000000072052
- (void)_addVideoOutput:(id)arg1;	// IMP=0x0000000000071f50
- (id)_preferredPixelBufferAttributes;	// IMP=0x0000000000071f0c
- (void)_configureVideoCompositionColorProperties;	// IMP=0x0000000000071e2c
- (void)_evaluateMetadataOutputs;	// IMP=0x0000000000071baa
- (void)_evaluateLegibleOutputs;	// IMP=0x000000000007191c
- (void)_evaluateVideoOutputs;	// IMP=0x00000000000716d3
- (id)_metadataOutputsForKeys;	// IMP=0x00000000000715d7
- (id)_legibleOutputsForKeys;	// IMP=0x00000000000714db
- (id)_videoOutputs;	// IMP=0x00000000000713df
- (void)_updateTaggedMetadataArray:(id)arg1;	// IMP=0x000000000007320e
- (id)_metadataCollectors;	// IMP=0x0000000000073119
@property(readonly, nonatomic) NSArray *mediaDataCollectors;
- (void)removeMediaDataCollector:(id)arg1;	// IMP=0x0000000000072e9a
- (void)addMediaDataCollector:(id)arg1;	// IMP=0x0000000000072c6f
- (void)_removeMetadataCollector:(id)arg1;	// IMP=0x0000000000072b5c
- (void)_addMetadataCollector:(id)arg1;	// IMP=0x0000000000072a49
@property(copy, nonatomic) NSString *serviceIdentifier;
- (void)_quietlySetServiceIdentifier:(id)arg1;	// IMP=0x000000000007334e
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;	// IMP=0x000000000007349f
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;	// IMP=0x000000000007345c
- (id)_legibleOutputForKey:(id)arg1;	// IMP=0x000000000007342b
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;	// IMP=0x0000000000073704
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;	// IMP=0x00000000000734fe
- (id)_metadataOutputForKey:(id)arg1;	// IMP=0x00000000000734cd
@property(retain) id <NSObject><NSCopying> AVKitData;
- (void)setVideoEnhancementMode:(id)arg1;	// IMP=0x0000000000073b4d
- (void)_updateVideoEnhancementModeOnFigPlaybackItem;	// IMP=0x0000000000073a75
- (id)videoEnhancementMode;	// IMP=0x0000000000073980
- (void)_setTemplatePlayerItem:(id)arg1;	// IMP=0x0000000000074097
@property(readonly, nonatomic) AVPlayerItem *templatePlayerItem;
@property(nonatomic) _Bool automaticallyHandlesInterstitialEvents;

@end
