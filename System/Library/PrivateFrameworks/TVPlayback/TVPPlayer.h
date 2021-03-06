//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/AVPlayerPlaybackCoordinatorDelegate-Protocol.h>
#import <TVPlayback/TVPAVFPlayback-Protocol.h>

@class AVPlayer, AVPlayerItem, AVQueuePlayer, NSArray, NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPExternalImagePlayer, TVPInterstitial, TVPInterstitialCollection, TVPMediaItemLoader, TVPPlaybackState, TVPPlayerBookmarkMonitor, TVPPlayerItem, TVPPlayerReporter, TVPPlaylist, TVPProgressiveJumpingScrubber, TVPStateMachine, TVPSubtitleOption, TVPTimeRange;
@protocol TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@interface TVPPlayer : NSObject <AVPlayerPlaybackCoordinatorDelegate, TVPAVFPlayback>
{
    _Bool _currentMediaItemHasVideoContent;	// 8 = 0x8
    _Bool _currentMediaItemIsStreaming;	// 9 = 0x9
    _Bool _currentMediaItemHasDates;	// 10 = 0xa
    _Bool _muted;	// 11 = 0xb
    _Bool _interactive;	// 12 = 0xc
    _Bool _waitsAfterPreparingMediaItems;	// 13 = 0xd
    _Bool _currentMediaItemInitialLoadingComplete;	// 14 = 0xe
    _Bool _preventsSleepDuringVideoPlayback;	// 15 = 0xf
    _Bool _updatesMediaRemoteInfoAutomatically;	// 16 = 0x10
    _Bool _isLive;	// 17 = 0x11
    _Bool _prefersSDRVideo;	// 18 = 0x12
    _Bool _limitsBandwidthForCellularAccess;	// 19 = 0x13
    _Bool _allowsCellularUsage;	// 20 = 0x14
    _Bool _allowsConstrainedNetworkUsage;	// 21 = 0x15
    _Bool _allowsExternalPlayback;	// 22 = 0x16
    _Bool _invalidated;	// 23 = 0x17
    _Bool _handleRemoteCommandsWithoutUpdatingMediaRemote;	// 24 = 0x18
    _Bool _pausesOnRouteChange;	// 25 = 0x19
    _Bool _updatesBookmarks;	// 26 = 0x1a
    _Bool _sendsPlayerReports;	// 27 = 0x1b
    _Bool _pausesOnHDCPProtectionDown;	// 28 = 0x1c
    _Bool _wasMutedPriorToScreenRecording;	// 29 = 0x1d
    _Bool _loadingInitialItemInPlaylist;	// 30 = 0x1e
    _Bool _currentPlayerItemContainsDates;	// 31 = 0x1f
    _Bool _currentPlayerItemContainsRealDates;	// 32 = 0x20
    _Bool _modifyingAVPlayerRate;	// 33 = 0x21
    _Bool _modifyingAVPlayerQueue;	// 34 = 0x22
    _Bool _playerItemChangeIsHappening;	// 35 = 0x23
    _Bool _sceneCompletelyBuffered;	// 36 = 0x24
    _Bool _outputObscuredDueToInsufficientExternalProtection;	// 37 = 0x25
    _Bool _asyncDelegateInProgress;	// 38 = 0x26
    _Bool _usesLegacyDelegateBehavior;	// 39 = 0x27
    _Bool _createsPlayerItemButDoesNotEnqueue;	// 40 = 0x28
    _Bool _mediaRemoteUpdatingEnabled;	// 41 = 0x29
    _Bool _remainLoadingWhenSeekCompletes;	// 42 = 0x2a
    _Bool _initialMediaItemHasCompletedInitialLoading;	// 43 = 0x2b
    _Bool _haveEverEnqueuedPlayerItem;	// 44 = 0x2c
    float _volume;	// 48 = 0x30
    id <TVPPlaybackDelegate> _delegate;	// 56 = 0x38
    id <TVPASyncPlaybackDelegate> _asyncDelegate;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    TVPPlaybackState *_state;	// 80 = 0x50
    long long _errorBehavior;	// 88 = 0x58
    double _rateUsedForPlayback;	// 96 = 0x60
    long long _mediaItemEndAction;	// 104 = 0x68
    double _maximumBitRate;	// 112 = 0x70
    NSArray *_chapterCollections;	// 120 = 0x78
    TVPChapterCollection *_currentChapterCollection;	// 128 = 0x80
    TVPChapter *_currentChapter;	// 136 = 0x88
    TVPInterstitialCollection *_currentInterstitialCollection;	// 144 = 0x90
    TVPInterstitial *_currentInterstitial;	// 152 = 0x98
    NSArray *_audioOptions;	// 160 = 0xa0
    NSArray *_subtitleOptions;	// 168 = 0xa8
    double _preferredForwardBufferDuration;	// 176 = 0xb0
    TVPStateMachine *_stateMachine;	// 184 = 0xb8
    TVPPlaylist *_playlistInternal;	// 192 = 0xc0
    TVPPlaybackState *_postLoadingState;	// 200 = 0xc8
    TVPPlaybackState *_postAVKitScanningState;	// 208 = 0xd0
    TVPMediaItemLoader *_currentMediaItemLoader;	// 216 = 0xd8
    NSMutableDictionary *_elapsedTimeObserverBlocks;	// 224 = 0xe0
    NSMutableDictionary *_boundaryTimeObserverInfos;	// 232 = 0xe8
    id _periodicTimeObserverToken;	// 240 = 0xf0
    id _highFrequencyTimeObserverToken;	// 248 = 0xf8
    NSDate *_startDate;	// 256 = 0x100
    TVPPlayerBookmarkMonitor *_bookmarkMonitor;	// 264 = 0x108
    TVPPlayerReporter *_playerReporter;	// 272 = 0x110
    long long _numOutstandingSeeks;	// 280 = 0x118
    NSHashTable *_videoViewWeakReferences;	// 288 = 0x120
    NSMutableSet *_mediaItemLoaders;	// 296 = 0x128
    long long _currentMediaItemVideoRange;	// 304 = 0x130
    long long _currentMediaItemAudioFormat;	// 312 = 0x138
    long long _currentMediaItemAudioChannels;	// 320 = 0x140
    NSArray *_pendingSelectedMediaArray;	// 328 = 0x148
    TVPPlayerItem *_currentPlayerItem;	// 336 = 0x150
    NSDate *_dateBeingSeekedTo;	// 344 = 0x158
    NSDate *_playbackDateAtStartOfSeek;	// 352 = 0x160
    long long _currentDirectionOfPlaylistChange;	// 360 = 0x168
    id _chapterBoundaryTimeObserverToken;	// 368 = 0x170
    TVPExternalImagePlayer *_externalImagePlayer;	// 376 = 0x178
    id _interstitialBoundaryTimeObserverToken;	// 384 = 0x180
    TVPProgressiveJumpingScrubber *_progressiveJumpingScrubber;	// 392 = 0x188
    NSString *_mediaItemChangeReason;	// 400 = 0x190
    NSMutableArray *_asyncDelegateOperations;	// 408 = 0x198
    NSNumber *_temporarySubtitleOverrideType;	// 416 = 0x1a0
    NSArray *_playbackEndTimeBoundaryObserverTokens;	// 424 = 0x1a8
    TVPAudioOption *_cachedSelectedAudioOption;	// 432 = 0x1b0
    AVQueuePlayer *_earlyAVQueuePlayer;	// 440 = 0x1b8
    NSArray *_cachedLoadedTimeRanges;	// 448 = 0x1c0
    NSArray *_cachedSeekableTimeRanges;	// 456 = 0x1c8
    AVQueuePlayer *_AVQueuePlayer;	// 464 = 0x1d0
    TVPPlayerItem *_playerItemFromCacheManager;	// 472 = 0x1d8
    double _startPosition;	// 480 = 0x1e0
    CDUnknownBlockType _highFrequencyElapsedTimeObserverBlock;	// 488 = 0x1e8
    AVPlayerItem *_unqueuedPlayerItem;	// 496 = 0x1f0
    CDUnknownBlockType _AVKitExternalImageScanningUpdateBlock;	// 504 = 0x1f8
    struct CGSize _currentMediaItemPresentationSize;	// 512 = 0x200
    struct CGSize _preferredMaximumResolution;	// 528 = 0x210
    struct CGSize _preferredMaximumResolutionForExpensiveNetworks;	// 544 = 0x220
    struct CGSize _iFramePrefetchMaxSize;	// 560 = 0x230
    CDStruct_1b6d18a9 _startTime;	// 576 = 0x240
    CDStruct_1b6d18a9 _startingSeekPrecision;	// 600 = 0x258
    CDStruct_1b6d18a9 _lastTimeSentToAVKitImageHandler;	// 624 = 0x270
    CDStruct_1b6d18a9 _timeBeingSeekedTo;	// 648 = 0x288
    CDStruct_1b6d18a9 _timeAtStartOfSeek;	// 672 = 0x2a0
    CDStruct_1b6d18a9 _cachedElapsedTime;	// 696 = 0x2b8
    CDStruct_1b6d18a9 _cachedDuration;	// 720 = 0x2d0
}

+ (id)_stringForAudioFormat:(long long)arg1;	// IMP=0x0000000000035d89
+ (long long)_audioFormatForFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000035a87
+ (id)_audioSelectionCriteriaForMediaItemLoader:(id)arg1;	// IMP=0x0000000000030292
+ (id)_newAVQueuePlayer;	// IMP=0x0000000000030249
+ (void)setSavedPreferredAudioLanguageCode:(id)arg1;	// IMP=0x0000000000028d3c
+ (id)savedPreferredAudioLanguageCode;	// IMP=0x0000000000028d34
+ (void)_playerDidBecomeInactive:(id)arg1;	// IMP=0x000000000001ed99
+ (void)setShouldDeactivateAVAudioSession:(_Bool)arg1;	// IMP=0x000000000001ed8d
+ (_Bool)shouldDeactivateAVAudioSession;	// IMP=0x000000000001ed81
+ (void)_playerWillBecomeActive:(id)arg1;	// IMP=0x000000000001ed5a
+ (long long)tvpVideoRangeForVideoDynamicRange:(int)arg1;	// IMP=0x000000000001ed3c
+ (void)removeTemporaryDownloadDirectory;	// IMP=0x000000000001ed23
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000001eadf
+ (void)initialize;	// IMP=0x000000000001ea38
- (void).cxx_destruct;	// IMP=0x00000000000549f0
@property(nonatomic) _Bool haveEverEnqueuedPlayerItem; // @synthesize haveEverEnqueuedPlayerItem=_haveEverEnqueuedPlayerItem;
@property(nonatomic) _Bool initialMediaItemHasCompletedInitialLoading; // @synthesize initialMediaItemHasCompletedInitialLoading=_initialMediaItemHasCompletedInitialLoading;
@property(nonatomic) _Bool remainLoadingWhenSeekCompletes; // @synthesize remainLoadingWhenSeekCompletes=_remainLoadingWhenSeekCompletes;
@property(nonatomic) _Bool mediaRemoteUpdatingEnabled; // @synthesize mediaRemoteUpdatingEnabled=_mediaRemoteUpdatingEnabled;
@property(copy, nonatomic) CDUnknownBlockType AVKitExternalImageScanningUpdateBlock; // @synthesize AVKitExternalImageScanningUpdateBlock=_AVKitExternalImageScanningUpdateBlock;
@property(retain, nonatomic) AVPlayerItem *unqueuedPlayerItem; // @synthesize unqueuedPlayerItem=_unqueuedPlayerItem;
@property(nonatomic) _Bool createsPlayerItemButDoesNotEnqueue; // @synthesize createsPlayerItemButDoesNotEnqueue=_createsPlayerItemButDoesNotEnqueue;
@property(copy, nonatomic) CDUnknownBlockType highFrequencyElapsedTimeObserverBlock; // @synthesize highFrequencyElapsedTimeObserverBlock=_highFrequencyElapsedTimeObserverBlock;
@property(nonatomic) _Bool usesLegacyDelegateBehavior; // @synthesize usesLegacyDelegateBehavior=_usesLegacyDelegateBehavior;
@property(nonatomic) _Bool asyncDelegateInProgress; // @synthesize asyncDelegateInProgress=_asyncDelegateInProgress;
@property(nonatomic) struct CGSize iFramePrefetchMaxSize; // @synthesize iFramePrefetchMaxSize=_iFramePrefetchMaxSize;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) _Bool outputObscuredDueToInsufficientExternalProtection; // @synthesize outputObscuredDueToInsufficientExternalProtection=_outputObscuredDueToInsufficientExternalProtection;
@property(retain, nonatomic) TVPPlayerItem *playerItemFromCacheManager; // @synthesize playerItemFromCacheManager=_playerItemFromCacheManager;
@property(retain, nonatomic) AVQueuePlayer *AVQueuePlayer; // @synthesize AVQueuePlayer=_AVQueuePlayer;
@property(retain, nonatomic) NSArray *cachedSeekableTimeRanges; // @synthesize cachedSeekableTimeRanges=_cachedSeekableTimeRanges;
@property(retain, nonatomic) NSArray *cachedLoadedTimeRanges; // @synthesize cachedLoadedTimeRanges=_cachedLoadedTimeRanges;
@property(nonatomic) CDStruct_1b6d18a9 cachedDuration; // @synthesize cachedDuration=_cachedDuration;
@property(retain, nonatomic) AVQueuePlayer *earlyAVQueuePlayer; // @synthesize earlyAVQueuePlayer=_earlyAVQueuePlayer;
@property(retain, nonatomic) TVPAudioOption *cachedSelectedAudioOption; // @synthesize cachedSelectedAudioOption=_cachedSelectedAudioOption;
@property(retain, nonatomic) NSArray *playbackEndTimeBoundaryObserverTokens; // @synthesize playbackEndTimeBoundaryObserverTokens=_playbackEndTimeBoundaryObserverTokens;
@property(retain, nonatomic) NSNumber *temporarySubtitleOverrideType; // @synthesize temporarySubtitleOverrideType=_temporarySubtitleOverrideType;
@property(retain, nonatomic) NSMutableArray *asyncDelegateOperations; // @synthesize asyncDelegateOperations=_asyncDelegateOperations;
@property(nonatomic) _Bool sceneCompletelyBuffered; // @synthesize sceneCompletelyBuffered=_sceneCompletelyBuffered;
@property(retain, nonatomic) NSString *mediaItemChangeReason; // @synthesize mediaItemChangeReason=_mediaItemChangeReason;
@property(retain, nonatomic) TVPProgressiveJumpingScrubber *progressiveJumpingScrubber; // @synthesize progressiveJumpingScrubber=_progressiveJumpingScrubber;
@property(nonatomic) CDStruct_1b6d18a9 cachedElapsedTime; // @synthesize cachedElapsedTime=_cachedElapsedTime;
@property(retain, nonatomic) id interstitialBoundaryTimeObserverToken; // @synthesize interstitialBoundaryTimeObserverToken=_interstitialBoundaryTimeObserverToken;
@property(retain, nonatomic) TVPExternalImagePlayer *externalImagePlayer; // @synthesize externalImagePlayer=_externalImagePlayer;
@property(retain, nonatomic) id chapterBoundaryTimeObserverToken; // @synthesize chapterBoundaryTimeObserverToken=_chapterBoundaryTimeObserverToken;
@property(nonatomic) long long currentDirectionOfPlaylistChange; // @synthesize currentDirectionOfPlaylistChange=_currentDirectionOfPlaylistChange;
@property(nonatomic) CDStruct_1b6d18a9 timeAtStartOfSeek; // @synthesize timeAtStartOfSeek=_timeAtStartOfSeek;
@property(retain, nonatomic) NSDate *playbackDateAtStartOfSeek; // @synthesize playbackDateAtStartOfSeek=_playbackDateAtStartOfSeek;
@property(retain, nonatomic) NSDate *dateBeingSeekedTo; // @synthesize dateBeingSeekedTo=_dateBeingSeekedTo;
@property(nonatomic) CDStruct_1b6d18a9 timeBeingSeekedTo; // @synthesize timeBeingSeekedTo=_timeBeingSeekedTo;
@property(nonatomic) _Bool playerItemChangeIsHappening; // @synthesize playerItemChangeIsHappening=_playerItemChangeIsHappening;
@property(nonatomic) _Bool modifyingAVPlayerQueue; // @synthesize modifyingAVPlayerQueue=_modifyingAVPlayerQueue;
@property(nonatomic) _Bool modifyingAVPlayerRate; // @synthesize modifyingAVPlayerRate=_modifyingAVPlayerRate;
@property(nonatomic) _Bool currentPlayerItemContainsRealDates; // @synthesize currentPlayerItemContainsRealDates=_currentPlayerItemContainsRealDates;
@property(nonatomic) _Bool currentPlayerItemContainsDates; // @synthesize currentPlayerItemContainsDates=_currentPlayerItemContainsDates;
@property(retain, nonatomic) TVPPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(nonatomic) _Bool loadingInitialItemInPlaylist; // @synthesize loadingInitialItemInPlaylist=_loadingInitialItemInPlaylist;
@property(nonatomic) _Bool wasMutedPriorToScreenRecording; // @synthesize wasMutedPriorToScreenRecording=_wasMutedPriorToScreenRecording;
@property(copy, nonatomic) NSArray *pendingSelectedMediaArray; // @synthesize pendingSelectedMediaArray=_pendingSelectedMediaArray;
@property(nonatomic) long long currentMediaItemAudioChannels; // @synthesize currentMediaItemAudioChannels=_currentMediaItemAudioChannels;
@property(nonatomic) long long currentMediaItemAudioFormat; // @synthesize currentMediaItemAudioFormat=_currentMediaItemAudioFormat;
@property(nonatomic) long long currentMediaItemVideoRange; // @synthesize currentMediaItemVideoRange=_currentMediaItemVideoRange;
@property(nonatomic) _Bool pausesOnHDCPProtectionDown; // @synthesize pausesOnHDCPProtectionDown=_pausesOnHDCPProtectionDown;
@property(nonatomic) CDStruct_1b6d18a9 lastTimeSentToAVKitImageHandler; // @synthesize lastTimeSentToAVKitImageHandler=_lastTimeSentToAVKitImageHandler;
@property(nonatomic) _Bool sendsPlayerReports; // @synthesize sendsPlayerReports=_sendsPlayerReports;
@property(nonatomic) _Bool updatesBookmarks; // @synthesize updatesBookmarks=_updatesBookmarks;
@property(nonatomic) _Bool pausesOnRouteChange; // @synthesize pausesOnRouteChange=_pausesOnRouteChange;
@property(nonatomic) _Bool handleRemoteCommandsWithoutUpdatingMediaRemote; // @synthesize handleRemoteCommandsWithoutUpdatingMediaRemote=_handleRemoteCommandsWithoutUpdatingMediaRemote;
@property(retain, nonatomic) NSMutableSet *mediaItemLoaders; // @synthesize mediaItemLoaders=_mediaItemLoaders;
@property(retain, nonatomic) NSHashTable *videoViewWeakReferences; // @synthesize videoViewWeakReferences=_videoViewWeakReferences;
@property(nonatomic) long long numOutstandingSeeks; // @synthesize numOutstandingSeeks=_numOutstandingSeeks;
@property(retain, nonatomic) TVPPlayerReporter *playerReporter; // @synthesize playerReporter=_playerReporter;
@property(retain, nonatomic) TVPPlayerBookmarkMonitor *bookmarkMonitor; // @synthesize bookmarkMonitor=_bookmarkMonitor;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) CDStruct_1b6d18a9 startingSeekPrecision; // @synthesize startingSeekPrecision=_startingSeekPrecision;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id highFrequencyTimeObserverToken; // @synthesize highFrequencyTimeObserverToken=_highFrequencyTimeObserverToken;
@property(retain, nonatomic) id periodicTimeObserverToken; // @synthesize periodicTimeObserverToken=_periodicTimeObserverToken;
@property(retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // @synthesize boundaryTimeObserverInfos=_boundaryTimeObserverInfos;
@property(retain, nonatomic) NSMutableDictionary *elapsedTimeObserverBlocks; // @synthesize elapsedTimeObserverBlocks=_elapsedTimeObserverBlocks;
@property(retain, nonatomic) TVPMediaItemLoader *currentMediaItemLoader; // @synthesize currentMediaItemLoader=_currentMediaItemLoader;
@property(retain, nonatomic) TVPPlaybackState *postAVKitScanningState; // @synthesize postAVKitScanningState=_postAVKitScanningState;
@property(retain, nonatomic) TVPPlaybackState *postLoadingState; // @synthesize postLoadingState=_postLoadingState;
@property(retain, nonatomic) TVPPlaylist *playlistInternal; // @synthesize playlistInternal=_playlistInternal;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically=_updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_registerStateMachineHandlers;	// IMP=0x0000000000037586
- (void)_savePreferredAudioLanguageFromAudioOption:(id)arg1;	// IMP=0x000000000003750c
- (void)_populatePlayerItem:(id)arg1 withMetadataFromMediaItem:(id)arg2;	// IMP=0x00000000000362c5
- (_Bool)_isScreenBeingRecorded;	// IMP=0x00000000000362ac
- (_Bool)_getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forMediaItem:(id)arg3;	// IMP=0x000000000003615c
- (_Bool)_hasDolbyAtmosForTracks:(id)arg1;	// IMP=0x0000000000035de0
- (void)_updateCurrentMediaItemAudioInfoForPlayerItem:(id)arg1 tracks:(id)arg2;	// IMP=0x0000000000035619
- (void)_updateMetadataWithVideoQualityColorRangeAndDolbyAtmosForPlayerItem:(id)arg1 tracks:(id)arg2;	// IMP=0x0000000000034e48
- (id)_descriptionForVideoRange:(long long)arg1;	// IMP=0x0000000000034e0e
- (id)_descriptionForVideoResolutionClass:(long long)arg1;	// IMP=0x0000000000034dd4
- (id)_audioAssetTracksFromTracks:(id)arg1;	// IMP=0x0000000000034b8f
- (id)_videoAssetTracksFromTracks:(id)arg1;	// IMP=0x000000000003494a
- (void)_updateMediaRemoteManager;	// IMP=0x0000000000034944
- (id)_bitRateString:(double)arg1;	// IMP=0x00000000000348d9
- (void)_logAccessLogEvents;	// IMP=0x00000000000344f9
- (void)_populateCurrentPlayerItemWithUpNextMetadata;	// IMP=0x00000000000344f3
- (void)_setScrubPlayerItem:(id)arg1 onPlayerItem:(id)arg2;	// IMP=0x00000000000344ed
- (_Bool)_beingUsedForIFrameOnlyPlayback;	// IMP=0x00000000000344b8
- (id)_currentDateFromPlayerItem:(id)arg1;	// IMP=0x000000000003443e
- (void)_configureSoundCheckForPlayerItem:(id)arg1 tracks:(id)arg2;	// IMP=0x000000000003408c
- (void)_processNextAsyncDelegateOperation;	// IMP=0x0000000000033eda
- (void)_enqueueAsyncDelegateOperation:(id)arg1;	// IMP=0x0000000000033e03
- (void)_updateIsLiveForElapsedTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000033bc8
- (id)_soundCheckNormalizationForMediaItem:(id)arg1;	// IMP=0x0000000000033b07
- (void)endCoordinatedPlaybackSuspension:(id)arg1;	// IMP=0x0000000000033a36
- (id)beginCoordinatedPlaybackSuspensionWithReason:(id)arg1;	// IMP=0x00000000000338c1
- (id)playbackErrorFromError:(id)arg1 forMediaItem:(id)arg2;	// IMP=0x0000000000032dfe
- (_Bool)_isPlaybackLikelyToKeepUp;	// IMP=0x0000000000032d5f
- (void)_updateVideoViewsWithAVQueuePlayer:(id)arg1;	// IMP=0x0000000000032aa2
- (CDStruct_1b6d18a9)_currentMediaItemReversePlaybackEndTime;	// IMP=0x000000000003293b
- (CDStruct_1b6d18a9)_currentMediaItemForwardPlaybackEndTime;	// IMP=0x00000000000327cd
- (void)_setSelectedSubtitleOption:(id)arg1 userOverridesSystemSubtitleSettings:(_Bool)arg2;	// IMP=0x0000000000032348
- (void)_updateSelectedSubtitleForFilteredOptions:(id)arg1;	// IMP=0x0000000000032161
- (void)_resetAndReselectAudioOptions;	// IMP=0x000000000003206e
- (void)_updateAudioSelectionCriteriaForMediaItemLoader:(id)arg1;	// IMP=0x0000000000031f03
- (int)_videoTrackIDFromTracks:(id)arg1;	// IMP=0x0000000000031c97
- (void)_setState:(id)arg1 updatedRate:(double)arg2 reason:(id)arg3 notifyListeners:(_Bool)arg4;	// IMP=0x00000000000315f1
- (void)_setState:(id)arg1 updatedRate:(double)arg2 notifyListeners:(_Bool)arg3;	// IMP=0x00000000000315da
- (_Bool)_currentPlayerItemCanScanAtRate:(double)arg1;	// IMP=0x00000000000314db
- (void)_notifyOfBoundaryCrossingBetweenPreviousTime:(CDStruct_1b6d18a9)arg1 updatedTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000003114f
- (id)_statesThatReturnSeekTime;	// IMP=0x00000000000310d7
- (id)_statesThatReturnAVPlayerTime;	// IMP=0x000000000003102d
- (id)_statesThatReturnStartTime;	// IMP=0x0000000000030f83
- (void)_updateAVPlayerActionAtItemEnd;	// IMP=0x0000000000030e91
- (void)_notifyListenersOfElapsedTimeChange:(CDStruct_1b6d18a9)arg1 playbackDate:(id)arg2 dueToTimeJump:(_Bool)arg3;	// IMP=0x0000000000030add
- (id)_estimatedPlaybackDateForCMTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000030997
- (CDStruct_1b6d18a9)_estimatedCMTimeForPlaybackDate:(id)arg1 referenceTime:(CDStruct_1b6d18a9)arg2 referenceDate:(id)arg3;	// IMP=0x000000000003092f
- (CDStruct_1b6d18a9)_clampInfiniteTimeToSeekableRange:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000003083c
- (CDStruct_1b6d18a9)_clampedSceneTimeForPlayerTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000030714
- (CDStruct_1b6d18a9)_clampedElapsedTimeForTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000305e0
- (void)_avPlayerRateDidChange:(id)arg1;	// IMP=0x000000000003015e
- (void)_screenRecordingStateDidChange:(id)arg1;	// IMP=0x000000000002fee2
- (void)_audioRouteChanged:(id)arg1;	// IMP=0x000000000002fc84
- (void)_currentMediaItemMetadataDidChange:(id)arg1;	// IMP=0x000000000002f1da
- (void)_currentPlayerItemReachedTimeToPausePlayback:(id)arg1;	// IMP=0x000000000002f15a
- (void)_currentPlayerItemReachedTimeToPauseBuffering:(id)arg1;	// IMP=0x000000000002f0da
- (void)_currentPlayerItemMediaSelectionDidChange:(id)arg1;	// IMP=0x000000000002ef1a
- (void)_currentPlayerItemTracksDidChangeTo:(id)arg1 from:(id)arg2;	// IMP=0x000000000002eb0a
- (void)_currentPlayerItemTimedMetadataDidChange;	// IMP=0x000000000002eac6
- (void)_currentPlayerItemSeekableTimeRangesDidChangeTo:(id)arg1;	// IMP=0x000000000002ea5e
- (void)_currentPlayerItemLoadedTimeRangesDidChangeTo:(id)arg1;	// IMP=0x000000000002e665
- (void)_currentPlayerItemDidFailToPlayToEnd:(id)arg1;	// IMP=0x000000000002e4b4
- (void)_currentPlayerItemDidStall:(id)arg1;	// IMP=0x000000000002e423
- (void)_currentPlayerItemErrorLogDidChange:(id)arg1;	// IMP=0x000000000002e334
- (void)_currentPlayerItemAccessLogDidChange:(id)arg1;	// IMP=0x000000000002e2a4
- (void)_currentPlayerItemDidHitBeginningOrEnd:(id)arg1;	// IMP=0x000000000002e213
- (void)_currentPlayerItemBufferEmptyDidChangeTo:(_Bool)arg1;	// IMP=0x000000000002e08a
- (void)_currentPlayerItemBufferFullDidChangeTo:(_Bool)arg1;	// IMP=0x000000000002dfb1
- (void)_currentPlayerItemLikelyToKeepUpDidChangeTo:(_Bool)arg1;	// IMP=0x000000000002ded8
- (void)_currentPlayerItemPresentationSizeDidChangeTo:(struct CGSize)arg1;	// IMP=0x000000000002ddf7
- (void)_currentPlayerItemHasVideoDidChangeTo:(_Bool)arg1;	// IMP=0x000000000002dcc0
- (void)_currentPlayerItemDurationDidChangeTo:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000002dbd5
- (void)_currentPlayerItemStatusDidChangeTo:(long long)arg1 from:(long long)arg2;	// IMP=0x000000000002d855
- (void)_currentPlayerItemDidChangeTo:(id)arg1;	// IMP=0x000000000002d27a
- (void)_currentPlayerItemWillChange;	// IMP=0x000000000002d18a
- (void)_avPlayerTimeDidChangeTo:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000002cdcc
- (void)_logExternalPlaybackType;	// IMP=0x000000000002ccb6
- (void)_externalPlaybackActiveDidChange;	// IMP=0x000000000002caaa
- (void)_outputObscuredDidChangeTo:(_Bool)arg1;	// IMP=0x000000000002c8d6
- (void)_timeControlStatusDidChangeTo:(long long)arg1 oldStatusNum:(id)arg2;	// IMP=0x000000000002c53e
- (void)_avPlayerRateDidChangeTo:(float)arg1;	// IMP=0x000000000002c462
- (void)_playlistNextMediaItemDidChangeWithContext:(id)arg1;	// IMP=0x000000000002c33d
- (void)_postCurrentMediaItemDidChangeNotificationWithDirection:(id)arg1 reason:(id)arg2 didHitBeginningOfPlaylist:(_Bool)arg3 didHitEndOfPlaylist:(_Bool)arg4;	// IMP=0x000000000002c193
- (void)_postCurrentMediaItemWillChangeNotificationWithDirection:(id)arg1 reason:(id)arg2 didHitBeginningOfPlaylist:(_Bool)arg3 didHitEndOfPlaylist:(_Bool)arg4;	// IMP=0x000000000002bfe9
- (void)_playlistCurrentMediaItemDidChangeWithContext:(id)arg1;	// IMP=0x000000000002bcbd
- (void)_playlistCurrentMediaItemWillChangeWithContext:(id)arg1;	// IMP=0x000000000002ba67
- (void)_playlistEndActionDidChange;	// IMP=0x000000000002b981
- (void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2;	// IMP=0x000000000002b044
- (void)_removeObserversForMediaItem:(id)arg1;	// IMP=0x000000000002afb4
- (void)_addObserversForMediaItem:(id)arg1;	// IMP=0x000000000002af1d
- (void)_removePlaybackEndTimeBoundaryObservers;	// IMP=0x000000000002ad72
- (void)_addPlaybackEndTimeBoundaryObservers;	// IMP=0x000000000002a40c
- (void)_removeObserversForPlayerItem:(id)arg1;	// IMP=0x000000000002a2ca
- (void)_addObserversForPlayerItem:(id)arg1;	// IMP=0x000000000002a150
- (void)_removeBoundaryTimeObserversFromAVQueuePlayer:(id)arg1;	// IMP=0x000000000002a01c
- (void)_addBoundaryTimeObserversToAVQueuePlayer:(id)arg1;	// IMP=0x0000000000029d88
- (void)_removeHighFrequencyTimeObserverIfNecessary;	// IMP=0x0000000000029ca3
- (void)_addHighFrequencyTimeObserverIfNecessary;	// IMP=0x0000000000029785
- (void)_removePeriodicTimeObserverFromAVQueuePlayer:(id)arg1;	// IMP=0x0000000000029706
- (void)_addPeriodicTimeObserverToAVQueuePlayer:(id)arg1;	// IMP=0x000000000002953d
- (void)_removeObserversForPlaylist:(id)arg1;	// IMP=0x0000000000029492
- (void)_addObserversForPlaylist:(id)arg1;	// IMP=0x00000000000293d5
- (void)_removeObserversFromAVQueuePlayer:(id)arg1;	// IMP=0x00000000000291bb
- (void)_addObserversToAVQueuePlayer:(id)arg1;	// IMP=0x0000000000028f46
- (void)_removeObserversForMediaItemLoader:(id)arg1;	// IMP=0x0000000000028f16
- (void)_addObserversForMediaItemLoader:(id)arg1;	// IMP=0x0000000000028ee0
- (void)_subtitleSettingsDidChange;	// IMP=0x0000000000028e8a
- (void)_preferVideoDescriptionsSettingDidChange;	// IMP=0x0000000000028e78
- (id)playbackCoordinator:(id)arg1 identifierForPlayerItem:(id)arg2;	// IMP=0x0000000000028d42
- (long long)externalPlaybackType;	// IMP=0x0000000000028ce1
@property(nonatomic) _Bool allowsConstrainedNetworkUsage; // @synthesize allowsConstrainedNetworkUsage=_allowsConstrainedNetworkUsage;
@property(nonatomic) _Bool allowsCellularUsage; // @synthesize allowsCellularUsage=_allowsCellularUsage;
@property(nonatomic) _Bool limitsBandwidthForCellularAccess; // @synthesize limitsBandwidthForCellularAccess=_limitsBandwidthForCellularAccess;
@property(nonatomic) _Bool prefersSDRVideo; // @synthesize prefersSDRVideo=_prefersSDRVideo;
@property(nonatomic) struct CGSize preferredMaximumResolutionForExpensiveNetworks; // @synthesize preferredMaximumResolutionForExpensiveNetworks=_preferredMaximumResolutionForExpensiveNetworks;
@property(nonatomic) struct CGSize preferredMaximumResolution; // @synthesize preferredMaximumResolution=_preferredMaximumResolution;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;
- (void)setPlaybackHUDString:(id)arg1;	// IMP=0x0000000000028404
@property(nonatomic) _Bool limitReadAhead;
- (id)timedMetadata;	// IMP=0x0000000000027c6b
- (id)errorLog;	// IMP=0x0000000000027c1b
- (id)accessLog;	// IMP=0x0000000000027bcb
@property(readonly, nonatomic) AVPlayer *avPlayer;
- (void)_selectMediaArray:(id)arg1 withItem:(id)arg2;	// IMP=0x000000000002764e
- (void)restartPlaybackWithState:(id)arg1;	// IMP=0x0000000000027567
- (id)AVQueuePlayerCreateIfNecessary:(_Bool)arg1;	// IMP=0x0000000000027497
- (void)selectMediaArray:(id)arg1;	// IMP=0x0000000000027422
- (long long)currentScanMode;	// IMP=0x00000000000271e6
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000000002716b
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000000002714b
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
- (_Bool)seeking;	// IMP=0x0000000000027065
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x0000000000026fea
- (void)playerDidHitBeginningOrEnd;	// IMP=0x0000000000026fa6
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate=_maximumBitRate;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction=_mediaItemEndAction;
@property(readonly, nonatomic) double reversePlaybackEndTime;
@property(readonly, nonatomic) double forwardPlaybackEndTime;
@property(readonly, nonatomic) TVPDateRange *seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property(readonly, nonatomic) TVPTimeRange *bufferedTimeRange;
@property(nonatomic) _Bool currentMediaItemInitialLoadingComplete; // @synthesize currentMediaItemInitialLoadingComplete=_currentMediaItemInitialLoadingComplete;
- (void)updateSubtitleOptionsAndSelection;	// IMP=0x0000000000026691
- (void)updateSubtitleOptions;	// IMP=0x00000000000265b1
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption;
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x0000000000026338
@property(retain, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption;
@property(retain, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(retain, nonatomic) TVPInterstitialCollection *currentInterstitialCollection; // @synthesize currentInterstitialCollection=_currentInterstitialCollection;
@property(retain, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial=_currentInterstitial;
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x0000000000024cdb
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection=_currentChapterCollection;
@property(retain, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter=_currentChapter;
@property(retain, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections=_chapterCollections;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
- (CDStruct_1b6d18a9)durationCMTime;	// IMP=0x000000000002425b
@property(readonly, nonatomic) double duration;
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x00000000000240ea
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000240e2
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023c39
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x0000000000023bc1
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023b00
- (void)avKitDidFinishScanning;	// IMP=0x0000000000023a69
- (void)avKitSeekDidComplete;	// IMP=0x0000000000023a25
@property(copy, nonatomic) NSDate *playbackDate;
- (void)setPlaybackDate:(id)arg1 withAVKitCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002361a
- (CDStruct_1b6d18a9)elapsedCMTime;	// IMP=0x0000000000023060
@property(readonly, nonatomic) double elapsedTime;
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2 ignoreDelegate:(_Bool)arg3 withAVKitCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022c28
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022bcd
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x0000000000022bb9
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000022ba3
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x0000000000022b50
- (void)setElapsedTime:(double)arg1;	// IMP=0x0000000000022b0a
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x0000000000022a19
- (void)stop;	// IMP=0x00000000000229d5
- (void)scanWithRate:(double)arg1 withAVKitCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000227d8
- (void)scanWithRate:(double)arg1;	// IMP=0x00000000000227c4
- (void)togglePlayPause;	// IMP=0x00000000000225dd
- (void)pauseWithAVKitCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000224ec
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x0000000000022401
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x0000000000022310
- (void)pause;	// IMP=0x00000000000222cc
- (void)playWithAVKitCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000221db
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x00000000000220f0
- (void)play;	// IMP=0x00000000000220ac
- (void)continueLoadingCurrentItem;	// IMP=0x0000000000022068
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback=_rateUsedForPlayback;
@property(readonly, nonatomic) double rate;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior=_errorBehavior;
@property(readonly, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x00000000000213f3
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x00000000000213de
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x0000000000020a46
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x0000000000020a31
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x0000000000020a12
@property(nonatomic) _Bool currentMediaItemHasDates; // @synthesize currentMediaItemHasDates=_currentMediaItemHasDates;
@property(nonatomic) struct CGSize currentMediaItemPresentationSize; // @synthesize currentMediaItemPresentationSize=_currentMediaItemPresentationSize;
@property(nonatomic) _Bool currentMediaItemIsStreaming; // @synthesize currentMediaItemIsStreaming=_currentMediaItemIsStreaming;
@property(nonatomic) _Bool currentMediaItemHasVideoContent; // @synthesize currentMediaItemHasVideoContent=_currentMediaItemHasVideoContent;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading;
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property(retain, nonatomic) TVPPlaylist *playlist;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001f807
- (void)invalidate;	// IMP=0x000000000001f62d
- (void)dealloc;	// IMP=0x000000000001f495
- (id)initWithName:(id)arg1;	// IMP=0x000000000001efae
- (id)init;	// IMP=0x000000000001ef9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

