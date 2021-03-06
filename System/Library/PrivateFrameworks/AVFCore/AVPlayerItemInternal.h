//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMediaSelection, AVPlayerConnection, AVPlayerItem, AVPlayerItemInterstitialEventCollector, AVPlayerPlaybackCoordinator, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol AVLoggingIdentifier, AVPlayerItemDelegate, NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemInternal : NSObject
{
    NSURL *URL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 16 = 0x10
    AVWeakReference *weakReference;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *figConfigurationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *figPlaybackItemSetterQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *seekQueue;	// 56 = 0x38
    struct OpaqueFigSimpleMutex *seekIDMutex;	// 64 = 0x40
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;	// 72 = 0x48
    struct OpaqueCMTimebase *proxyUnfoldedTimebase;	// 80 = 0x50
    struct OpaqueCMTimebase *proxyFoldedTimebase;	// 88 = 0x58
    NSArray *automaticallyLoadedAssetKeys;	// 96 = 0x60
    _Bool wasInitializedWithURL;	// 104 = 0x68
    AVAsset *asset;	// 112 = 0x70
    struct OpaqueFigPlaybackItem *figPlaybackItem;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *stateDispatchQueue;	// 128 = 0x80
    NSArray *cachedTracks;	// 136 = 0x88
    NSArray *tracks;	// 144 = 0x90
    NSMutableArray *syncLayers;	// 152 = 0x98
    NSArray *itemOutputs;	// 160 = 0xa0
    NSMutableArray *itemVideoOutputs;	// 168 = 0xa8
    NSMutableDictionary *itemLegibleOutputsForKeys;	// 176 = 0xb0
    NSMutableDictionary *itemMetadataOutputsForKeys;	// 184 = 0xb8
    _Bool suppressesVideoLayers;	// 192 = 0xc0
    struct OpaqueCMTimebase *foldedTimebase;	// 200 = 0xc8
    struct OpaqueCMTimebase *unfoldedFigTimebase;	// 208 = 0xd0
    _Bool didBecomeReadyForInspectionOfTracks;	// 216 = 0xd8
    _Bool didBecomeReadyForInspectionOfPresentationSize;	// 217 = 0xd9
    _Bool didBecomeReadyForInspectionOfDuration;	// 218 = 0xda
    _Bool figAssetDidBecomeReadyForInspectionOfMediaSelectionOptions;	// 219 = 0xdb
    _Bool didBecomeReadyForInspectionOfRecommendedTimeOffsetFromLive;	// 220 = 0xdc
    AVAsset *assetWithFigPlaybackItem;	// 224 = 0xe0
    NSArray *trackIDsForAssetWithFigPlaybackItem;	// 232 = 0xe8
    _Bool needTimedMetadataNotification;	// 240 = 0xf0
    _Bool didBecomeReadyForBasicInspection;	// 241 = 0xf1
    id <AVPlayerItemDelegate> delegate;	// 248 = 0xf8
    AVAudioMix *audioMix;	// 256 = 0x100
    long long status;	// 264 = 0x108
    NSError *error;	// 272 = 0x110
    CDStruct_1b6d18a9 forwardPlaybackEndTime;	// 280 = 0x118
    CDStruct_1b6d18a9 reversePlaybackEndTime;	// 304 = 0x130
    CDStruct_1b6d18a9 timeToPauseBuffering;	// 328 = 0x148
    CDStruct_1b6d18a9 timeToPausePlayback;	// 352 = 0x160
    CDStruct_1b6d18a9 advanceTimeForOverlappedPlayback;	// 376 = 0x178
    _Bool advanceTimeForOverlappedPlaybackWasSet;	// 400 = 0x190
    _Bool snapTimeToPausePlayback;	// 401 = 0x191
    _Bool preservesTimeOffsetFromLive;	// 402 = 0x192
    CDStruct_1b6d18a9 configuredTimeOffsetFromLive;	// 404 = 0x194
    CDStruct_1b6d18a9 recommendedTimeOffsetFromLive;	// 428 = 0x1ac
    CDStruct_1b6d18a9 duration;	// 452 = 0x1c4
    _Bool seekingWaitsForVideoCompositionRendering;	// 476 = 0x1dc
    NSArray *textStyleRules;	// 480 = 0x1e0
    NSArray *textHighlightArray;	// 488 = 0x1e8
    struct __CFString *initialFigTimePitchAlgorithm;	// 496 = 0x1f0
    _Bool canUseNetworkResourcesForLiveStreamingWhilePaused;	// 504 = 0x1f8
    CDStruct_1b6d18a9 maximumForwardBufferDuration;	// 508 = 0x1fc
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;	// 532 = 0x214
    double preferredPeakBitRate;	// 560 = 0x230
    double preferredPeakBitRateForExpensiveNetworks;	// 568 = 0x238
    int startsOnFirstEligibleVariant;	// 576 = 0x240
    NSArray *itemCollectors;	// 584 = 0x248
    NSMutableArray *itemMetadataCollectors;	// 592 = 0x250
    AVPlayerItemInterstitialEventCollector *interstitialEventCollector;	// 600 = 0x258
    unsigned int RTCReportingFlags;	// 608 = 0x260
    NSDictionary *gaplessInfo;	// 616 = 0x268
    float soundCheckVolumeNormalization;	// 624 = 0x270
    float volumeAdjustment;	// 628 = 0x274
    NSDictionary *loudnessInfo;	// 632 = 0x278
    struct opaqueMTAudioProcessingTap *audioProcessingTap;	// 640 = 0x280
    _Bool initialLimitReadAhead;	// 648 = 0x288
    unsigned long long restrictions;	// 656 = 0x290
    NSString *mediaKind;	// 664 = 0x298
    _Bool reversesMoreVideoFramesInMemory;	// 672 = 0x2a0
    _Bool reversesMoreVideoFramesInMemoryWasSet;	// 673 = 0x2a1
    _Bool aggressivelyCachesVideoFrames;	// 674 = 0x2a2
    _Bool aggressivelyCachesVideoFramesWasSet;	// 675 = 0x2a3
    _Bool decodesAllFramesDuringOrdinaryPlayback;	// 676 = 0x2a4
    _Bool decodesAllFramesDuringOrdinaryPlaybackWasSet;	// 677 = 0x2a5
    _Bool initialContinuesPlayingDuringPrerollForSeek;	// 678 = 0x2a6
    _Bool initialContinuesPlayingDuringPrerollForRateChange;	// 679 = 0x2a7
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;	// 680 = 0x2a8
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEdits;	// 681 = 0x2a9
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;	// 684 = 0x2ac
    _Bool minimumIntervalForIFrameOnlyPlaybackWasSet;	// 708 = 0x2c4
    float speedThresholdForIFrameOnlyPlayback;	// 712 = 0x2c8
    _Bool speedThresholdForIFrameOnlyPlaybackWasSet;	// 716 = 0x2cc
    NSDate *initialDate;	// 720 = 0x2d0
    NSDate *initialEstimatedDate;	// 728 = 0x2d8
    _Bool requiresAccessLog;	// 736 = 0x2e0
    _Bool suppressesAudioOnlyVariants;	// 737 = 0x2e1
    _Bool prefersOfflinePlayableVariants;	// 738 = 0x2e2
    _Bool autoSwitchAtmosStreamVariants;	// 739 = 0x2e3
    unsigned long long variantPreferences;	// 744 = 0x2e8
    double preferredMaximumAudioSampleRate;	// 752 = 0x2f0
    NSArray *imageQueueInterpolationCurve;	// 760 = 0x2f8
    _Bool imageQueueInterpolationCurveWasSet;	// 768 = 0x300
    _Bool blendsVideoFrames;	// 769 = 0x301
    _Bool blendsVideoFramesWasSet;	// 770 = 0x302
    _Bool appliesPerFrameHDRDisplayMetadata;	// 771 = 0x303
    _Bool appliesPerFrameHDRDisplayMetadataWasSet;	// 772 = 0x304
    NSString *videoApertureMode;	// 776 = 0x308
    _Bool usesMinimalLatencyForVideoCompositionRendering;	// 784 = 0x310
    _Bool initialAlwaysMonitorsPlayability;	// 785 = 0x311
    long long initialPlaybackLikelyToKeepUpTrigger;	// 792 = 0x318
    _Bool savesDownloadedDataToDiskWhenDone;	// 800 = 0x320
    _Bool networkUsuallyExceedsMaxBitRate;	// 801 = 0x321
    _Bool allowProgressiveSwitchUp;	// 802 = 0x322
    _Bool allowProgressiveStartup;	// 803 = 0x323
    _Bool allowProgressiveResume;	// 804 = 0x324
    struct CGSize IFramePrefetchTargetDimensions;	// 808 = 0x328
    id <NSObject><NSCopying> AVKitData;	// 824 = 0x338
    struct CGSize preferredMaximumResolution;	// 832 = 0x340
    struct CGSize preferredMaximumResolutionForExpensiveNetworks;	// 848 = 0x350
    struct CGSize preferredMinimumResolution;	// 864 = 0x360
    _Bool canPlayFastForward;	// 880 = 0x370
    _Bool canPlayFastReverse;	// 881 = 0x371
    _Bool canPlayReverse;	// 882 = 0x372
    _Bool canPlaySlowReverse;	// 883 = 0x373
    _Bool canPlaySlowForward;	// 884 = 0x374
    _Bool canStepForward;	// 885 = 0x375
    _Bool canStepBackward;	// 886 = 0x376
    struct CGSize presentationSize;	// 888 = 0x378
    _Bool playbackBufferEmpty;	// 904 = 0x388
    _Bool playbackBufferFull;	// 905 = 0x389
    _Bool playbackLikelyToKeepUp;	// 906 = 0x38a
    _Bool restrictsAutomaticMediaSelectionToAvailableOfflineOptions;	// 907 = 0x38b
    _Bool nonForcedSubtitlesEnabled;	// 908 = 0x38c
    _Bool hasEnabledVideo;	// 909 = 0x38d
    _Bool hasVideo;	// 910 = 0x38e
    _Bool hasEnabledAudio;	// 911 = 0x38f
    _Bool hasEnqueuedVideoFrame;	// 912 = 0x390
    _Bool externalProtectionRequested;	// 913 = 0x391
    _Bool automaticallyHandlesInterstitialEvents;	// 914 = 0x392
    NSArray *seekableTimeRanges;	// 920 = 0x398
    double seekableTimeRangesLastModifiedTime;	// 928 = 0x3a0
    NSArray *loadedTimeRanges;	// 936 = 0x3a8
    CDStruct_e83c9415 loopTimeRange;	// 944 = 0x3b0
    id <AVLoggingIdentifier> loggingIdentifier;	// 992 = 0x3e0
    AVMediaSelection *currentMediaSelection;	// 1000 = 0x3e8
    NSString *videoEnhancementMode;	// 1008 = 0x3f0
    _Bool isRenderingSpatialAudio;	// 1016 = 0x3f8
    AVPlayerPlaybackCoordinator *playerPlaybackCoordinator;	// 1024 = 0x400
    id coordinatedPlaybackIdentifierChangeNotificationToken;	// 1032 = 0x408
    _Bool needToSeekAfterCreatingFigPlaybackItem;	// 1040 = 0x410
    CDStruct_1b6d18a9 initialTime;	// 1044 = 0x414
    unsigned int initialSetTimeFlags;	// 1068 = 0x42c
    CDStruct_1b6d18a9 initialMinSnapTime;	// 1072 = 0x430
    CDStruct_1b6d18a9 initialMaxSnapTime;	// 1096 = 0x448
    unsigned int nextSeekIDToGenerate;	// 1120 = 0x460
    int pendingSeekID;	// 1124 = 0x464
    CDUnknownBlockType seekCompletionHandler;	// 1128 = 0x468
    AVPlayerItem *previousItem;	// 1136 = 0x470
    AVPlayerItem *nextItem;	// 1144 = 0x478
    AVPlayerConnection *playerConnection;	// 1152 = 0x480
    _Bool initialWillNeverSeekBackwardsHint;	// 1160 = 0x488
    AVVideoComposition *videoComposition;	// 1168 = 0x490
    AVWeakReference *clientsOriginalVideoComposition;	// 1176 = 0x498
    AVCustomVideoCompositorSession *customVideoCompositorSession;	// 1184 = 0x4a0
    void *figVideoCompositor;	// 1192 = 0x4a8
    AVPlayerItem *interstitialTemplate;	// 1200 = 0x4b0
    int eqPreset;	// 1208 = 0x4b8
    NSDictionary *rampInOutInfo;	// 1216 = 0x4c0
    NSDictionary *audibleDRMInfo;	// 1224 = 0x4c8
    long long initialVariantIndex;	// 1232 = 0x4d0
    NSString *currentStableVariantID;	// 1240 = 0x4d8
    NSMutableDictionary *mediaOptionsSelectedByClient;	// 1248 = 0x4e0
    NSString *serviceIdentifier;	// 1256 = 0x4e8
    NSArray *timedMetadata;	// 1264 = 0x4f0
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;	// 1272 = 0x4f8
    _Bool haveInitialSamples;	// 1280 = 0x500
    _Bool haveCPEProtector;	// 1281 = 0x501
    _Bool didInformObserversAboutAvailabilityOfTracks;	// 1282 = 0x502
    _Bool didFireKVOForAssetForNonStreamingItem;	// 1283 = 0x503
    AVAudioMix *mostRecentlyAppliedAudioMix;	// 1288 = 0x508
    _Bool audioSpatializationAllowed;	// 1296 = 0x510
    _Bool audioSpatializationAllowedWasSet;	// 1297 = 0x511
    unsigned long long allowedAudioSpatializationFormats;	// 1304 = 0x518
    _Bool allowedAudioSpatializationFormatsWasSet;	// 1312 = 0x520
    AVWeakReference *playerReference;	// 1320 = 0x528
    _Bool didSetAssetToAssetWithFigPlaybackItem;	// 1328 = 0x530
    struct OpaqueFigCPEProtector *figCPEProtector;	// 1336 = 0x538
}

@end

