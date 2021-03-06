//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLMoviePlayerControllerDelegate-Protocol.h>
#import <PhotoLibrary/PLSlalomRegionEditorDelegate-Protocol.h>
#import <PhotoLibrary/UIMovieScrubberDataSource-Protocol.h>
#import <PhotoLibrary/UIMovieScrubberDelegate-Protocol.h>

@class AVAssetExportSession, NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, NSURL, PFVideoAVObjectBuilder, PFVideoAdjustments, PLManagedAsset, PLMoviePlayerController, PLPhotoBakedThumbnails, PLPhotoTileViewController, PLProgressStack, PLSlalomRegionEditor, PLVideoEditingOverlayView, PLVideoPosterFrameView, UIActivityIndicatorView, UIImage, UIImageView, UIMovieScrubber;
@protocol OS_dispatch_queue, PLVideoOverlayButton, PLVideoViewDelegate;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate>
{
    PLManagedAsset *_videoCameraImage;	// 8 = 0x8
    NSString *_pathToOriginalVideo;	// 16 = 0x10
    NSURL *_videoURL;	// 24 = 0x18
    PLPhotoTileViewController *_imageTile;	// 32 = 0x20
    PLVideoPosterFrameView *_posterFrameView;	// 40 = 0x28
    UIView *_videoOverlayBackgroundView;	// 48 = 0x30
    PLVideoEditingOverlayView *_trimMessageView;	// 56 = 0x38
    UIImage *_posterFrameImage;	// 64 = 0x40
    UIImage *_snapshotImage;	// 72 = 0x48
    double _scrubberWidth;	// 80 = 0x50
    long long _scaleMode;	// 88 = 0x58
    UIView *_scrubberBackgroundView;	// 96 = 0x60
    UIView *_scrubberTitleView;	// 104 = 0x68
    NSTimer *_scrubberUpdateTimer;	// 112 = 0x70
    NSDictionary *_thumbnailOptionsDict;	// 120 = 0x78
    struct CGSize _thumbnailSize;	// 128 = 0x80
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;	// 144 = 0x90
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;	// 152 = 0x98
    AVAssetExportSession *_exportSession;	// 160 = 0xa0
    double _remakerStartTime;	// 168 = 0xa8
    double _remakerEndTime;	// 176 = 0xb0
    NSString *_trimmedPath;	// 184 = 0xb8
    NSString *_videoPathAfterTrim;	// 192 = 0xc0
    NSTimer *_trimProgressTimer;	// 200 = 0xc8
    PLManagedAsset *_trimmedVideoClip;	// 208 = 0xd0
    PLProgressStack *_trimProgressStack;	// 216 = 0xd8
    float _progress;	// 224 = 0xe0
    PLMoviePlayerController *_moviePlayer;	// 232 = 0xe8
    id <PLVideoViewDelegate> _delegate;	// 240 = 0xf0
    double _maximumTrimLength;	// 248 = 0xf8
    double _lastScrubbedValue;	// 256 = 0x100
    double _lastActualValue;	// 264 = 0x108
    double _duration;	// 272 = 0x110
    double _cachedCurrentPlaybackTime;	// 280 = 0x118
    NSArray *_imageGenerators;	// 288 = 0x120
    NSLock *_thumbnailReqlock;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;	// 304 = 0x130
    AVAssetExportSession *_airplayExportSession;	// 312 = 0x138
    _Bool _isAirPlay;	// 320 = 0x140
    unsigned int _showsPlayButton:1;	// 321 = 0x141
    unsigned int _showsScrubber:1;	// 321 = 0x141
    unsigned int _canEdit:1;	// 321 = 0x141
    unsigned int _loadMediaImmediately:1;	// 321 = 0x141
    unsigned int _scrubberIsSubview:1;	// 321 = 0x141
    unsigned int _viewWillAppear:1;	// 321 = 0x141
    unsigned int _didLayout:1;	// 321 = 0x141
    unsigned int _wasPlayingBeforeScrub:1;	// 321 = 0x141
    unsigned int _playFromBeginning:1;	// 322 = 0x142
    unsigned int _needsReloadScrubberThumbnails:1;	// 322 = 0x142
    unsigned int _playing:1;	// 322 = 0x142
    unsigned int _editing:1;	// 322 = 0x142
    unsigned int _disableEditAfterTrim:1;	// 322 = 0x142
    unsigned int _scrubbing:1;	// 322 = 0x142
    unsigned int _scrubbingToRight:1;	// 322 = 0x142
    unsigned int _deleteOriginalFile:1;	// 322 = 0x142
    unsigned int _passthroughTrimming:1;	// 323 = 0x143
    unsigned int _preparingMoviePlayer:1;	// 323 = 0x143
    unsigned int _preparedMoviePlayer:1;	// 323 = 0x143
    unsigned int _isMoviePlayerActive:1;	// 323 = 0x143
    unsigned int _moviePlayerIsReady:1;	// 323 = 0x143
    unsigned int _moviePlayerIsReadyForDisplay:1;	// 323 = 0x143
    unsigned int _moviePlayerDidBuffer:1;	// 323 = 0x143
    unsigned int _showingOverlay:1;	// 323 = 0x143
    unsigned int _showingScrubber:1;	// 324 = 0x144
    unsigned int _showScrubberWhenMovieIsReady:1;	// 324 = 0x144
    unsigned int _playbackDidBegin:1;	// 324 = 0x144
    unsigned int _loadScrubberThumbnails:1;	// 324 = 0x144
    unsigned int _videoIsLandscape:1;	// 324 = 0x144
    unsigned int _canCreateMetadata:1;	// 324 = 0x144
    unsigned int _createPreviewPosterFrame:1;	// 324 = 0x144
    unsigned int _isTrimming:1;	// 324 = 0x144
    unsigned int _wasTrimmedInPlace:1;	// 325 = 0x145
    unsigned int _remakingFailed:1;	// 325 = 0x145
    NSMutableArray *_summaryThumbnailRequestTimestamps;	// 328 = 0x148
    NSMutableArray *_detailThumbnailRequestTimestamps;	// 336 = 0x150
    UIMovieScrubber *_scrubber;	// 344 = 0x158
    PLSlalomRegionEditor *_slalomRegionEditor;	// 352 = 0x160
    NSMutableDictionary *_cachedThumbnails;	// 360 = 0x168
    NSArray *_landscapeSummaryThumbnailTimestamps;	// 368 = 0x170
    NSArray *_portraitSummaryThumbnailTimestamps;	// 376 = 0x178
    UIActivityIndicatorView *_spinner;	// 384 = 0x180
    UIActivityIndicatorView *_shadowSpinner;	// 392 = 0x188
    UIView<PLVideoOverlayButton> *_videoOverlayPlayButton;	// 400 = 0x190
    _Bool _useLandscapeCache;	// 408 = 0x198
    double _videoStreamingStartTime;	// 416 = 0x1a0
    _Bool _allowSlalomEditor;	// 424 = 0x1a8
    _Bool _prepareMoviePlayerForScrubberAutomatically;	// 425 = 0x1a9
    _Bool _shouldPlayVideoWhenViewAppears;	// 426 = 0x1aa
    _Bool __didInsertMoviePlayerView;	// 427 = 0x1ab
    _Bool __didEditSlalom;	// 428 = 0x1ac
    _Bool __isFetchingVideo;	// 429 = 0x1ad
    _Bool __localVideoUnavailable;	// 430 = 0x1ae
    _Bool __canAttemptFetchingVideoDerivative;	// 431 = 0x1af
    _Bool __attemptFetchingVideoDerivative;	// 432 = 0x1b0
    _Bool __slalomRegionEditorCreatedForScrubber;	// 433 = 0x1b1
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;	// 440 = 0x1b8
    long long __expectedNotificationsCount;	// 448 = 0x1c0
    PFVideoAdjustments *__adjustmentsToCommit;	// 456 = 0x1c8
}

+ (void)_enqueueOverlayPlayButton:(id)arg1;	// IMP=0x0000000000044352
+ (id)_dequeueOverlayPlayButton;	// IMP=0x00000000000442b3
+ (id)videoViewForVideoFileAtURL:(id)arg1;	// IMP=0x0000000000044210
@property(readonly, nonatomic) _Bool _slalomRegionEditorCreatedForScrubber; // @synthesize _slalomRegionEditorCreatedForScrubber=__slalomRegionEditorCreatedForScrubber;
@property(nonatomic, setter=_setAttemptFetchingVideoDerivative:) _Bool _attemptFetchingVideoDerivative; // @synthesize _attemptFetchingVideoDerivative=__attemptFetchingVideoDerivative;
@property(nonatomic, setter=_setCanAttemptFetchingVideoDerivative:) _Bool _canAttemptFetchingVideoDerivative; // @synthesize _canAttemptFetchingVideoDerivative=__canAttemptFetchingVideoDerivative;
@property(readonly, nonatomic) PFVideoAdjustments *_adjustmentsToCommit; // @synthesize _adjustmentsToCommit=__adjustmentsToCommit;
@property(readonly, nonatomic) long long _expectedNotificationsCount; // @synthesize _expectedNotificationsCount=__expectedNotificationsCount;
@property(nonatomic, setter=_setLocalVideoUnavailable:) _Bool _localVideoUnavailable; // @synthesize _localVideoUnavailable=__localVideoUnavailable;
@property(readonly, nonatomic) _Bool _isFetchingVideo; // @synthesize _isFetchingVideo=__isFetchingVideo;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
@property(nonatomic, setter=_setDidEditSlalom:) _Bool _didEditSlalom; // @synthesize _didEditSlalom=__didEditSlalom;
@property(nonatomic) _Bool _didInsertMoviePlayerView; // @synthesize _didInsertMoviePlayerView=__didInsertMoviePlayerView;
@property(nonatomic) _Bool shouldPlayVideoWhenViewAppears; // @synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears;
@property(nonatomic) _Bool prepareMoviePlayerForScrubberAutomatically; // @synthesize prepareMoviePlayerForScrubberAutomatically=_prepareMoviePlayerForScrubberAutomatically;
@property(readonly, nonatomic) UIView *scrubberBackgroundView; // @synthesize scrubberBackgroundView=_scrubberBackgroundView;
@property(nonatomic) _Bool allowSlalomEditor; // @synthesize allowSlalomEditor=_allowSlalomEditor;
@property(retain, nonatomic) PLProgressStack *trimProgressStack; // @synthesize trimProgressStack=_trimProgressStack;
@property(readonly, retain, nonatomic) PLVideoPosterFrameView *posterFrameView; // @synthesize posterFrameView=_posterFrameView;
@property(nonatomic) double scrubberWidth; // @synthesize scrubberWidth=_scrubberWidth;
- (void)_cancelAirplayExportSession;	// IMP=0x0000000000042758
- (void)_flattenVideoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042576
- (void)_deleteFileAtPath:(id)arg1;	// IMP=0x00000000000424f2
- (id)_filePathForFlattenedVideoMetadata;	// IMP=0x00000000000424c0
- (id)_filePathForFlattenedVideo;	// IMP=0x000000000004247d
- (void)_writeMetadata:(id)arg1 toPath:(id)arg2;	// IMP=0x00000000000423ea
- (id)_readMetadataFromPath:(id)arg1;	// IMP=0x00000000000423d1
- (id)_metadataForFlattenedVideo;	// IMP=0x0000000000042325
- (_Bool)_isFlattenedVideoUpToDate;	// IMP=0x0000000000042256
- (_Bool)_shouldPlayFlattenedVideo;	// IMP=0x0000000000042230
- (_Bool)_canAirPlayCurrentVideo;	// IMP=0x0000000000042177
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;	// IMP=0x000000000004215a
- (_Bool)slalomRegionEditorRequestForceZoom:(id)arg1;	// IMP=0x000000000004213d
- (void)_scrubToSlalomRegionEditorStartHandle:(_Bool)arg1;	// IMP=0x00000000000420e7
- (void)slalomRegionEditorEndValueChanged:(id)arg1;	// IMP=0x00000000000420d3
- (void)slalomRegionEditorStartValueChanged:(id)arg1;	// IMP=0x00000000000420bc
- (void)_commitPendingAdjustmentsUpdateAndWait:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041e43
- (void)_cancelDelayedCommitPendingAdjustmentsUpdate;	// IMP=0x0000000000041e12
- (void)_commitPendingAdjustmentsUpdate;	// IMP=0x0000000000041dfc
- (void)_enqueueAdjustmentsForCommit;	// IMP=0x0000000000041d73
- (void)slalomRegionEditorDidEndEditing:(id)arg1;	// IMP=0x0000000000041a6d
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;	// IMP=0x0000000000041a25
- (void)updateForRotationWithDuration:(double)arg1 isLandscape:(_Bool)arg2;	// IMP=0x00000000000419a3
- (void)_updateScrubberValue;	// IMP=0x0000000000041847
- (void)_updateSlalomRegionEditorRange;	// IMP=0x0000000000041700
- (void)_setDuration:(double)arg1;	// IMP=0x00000000000416d3
@property(readonly, nonatomic) double duration;
- (void)_playbackFinished;	// IMP=0x000000000004155f
- (id)_moviePlayer;	// IMP=0x000000000004154e
- (void)_handleScreenConnectionChange:(_Bool)arg1;	// IMP=0x00000000000414d0
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x00000000000414bc
- (void)_screenDidConnect:(id)arg1;	// IMP=0x00000000000414a5
- (_Bool)shouldShowCopyCalloutAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000041469
- (double)_scrubberTimeFromMovieTime:(double)arg1;	// IMP=0x00000000000413a4
- (double)_movieTimeFromScrubberTime:(double)arg1;	// IMP=0x00000000000412df
- (double)_thumbnailTimeFromScrubberTime:(double)arg1;	// IMP=0x000000000004121b
- (id)_thumbnailSourceAsset;	// IMP=0x000000000004118b
- (double)_movieScrubberDuration;	// IMP=0x00000000000410fa
- (_Bool)_scrubberTimeNeedsMapping;	// IMP=0x00000000000410a7
- (void)notifyOfChange:(id)arg1 shouldReloadBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040fe5
- (void)_scrubToMovieTime:(double)arg1;	// IMP=0x0000000000040f7b
@property(nonatomic) double currentTime;
@property(nonatomic) _Bool loadMediaImmediately;
@property(nonatomic) _Bool scrubberIsSubview;
- (_Bool)_canEditDuration:(double)arg1;	// IMP=0x0000000000040e79
@property(nonatomic) _Bool canEdit;
- (void)notifyRequiredResourcesDownloaded;	// IMP=0x0000000000040d96
- (void)prepareMoviePlayer;	// IMP=0x0000000000040d84
@property(nonatomic) _Bool showsScrubber;
- (void)setShowsScrubber:(_Bool)arg1 duration:(double)arg2;	// IMP=0x0000000000040cc3
@property(nonatomic) _Bool showsPlayOverlay;
- (void)_updatePosterFrameVisibility;	// IMP=0x0000000000040a8c
- (void)_updatePosterImageView;	// IMP=0x00000000000408c8
- (void)_invalidateSnapshotImage;	// IMP=0x00000000000408a0
- (void)_updateSnapshotImage;	// IMP=0x0000000000040807
@property(readonly, nonatomic) UIImage *posterFrameImage;
- (void)setPosterFrameImage:(id)arg1;	// IMP=0x0000000000040799
- (void)didMoveToSuperview;	// IMP=0x000000000004067c
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000004064d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000004054a
- (void)applicationDidEnterBackground;	// IMP=0x0000000000040534
- (void)applicationWillResignActive;	// IMP=0x000000000004051e
- (void)commitPendingUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040507
- (void)viewDidDisappear;	// IMP=0x0000000000040412
- (void)viewDidAppear;	// IMP=0x0000000000040354
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000402a1
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;	// IMP=0x0000000000040110
- (void)forceStop;	// IMP=0x0000000000040038
- (void)stop;	// IMP=0x000000000003fef1
- (void)pause;	// IMP=0x000000000003fdd0
- (void)play;	// IMP=0x000000000003f8f4
- (void)_removePlaySpinner;	// IMP=0x000000000003f87f
- (void)_displayPlaySpinner;	// IMP=0x000000000003f783
- (_Bool)playingToVideoOut;	// IMP=0x000000000003f766
- (_Bool)playingToAirTunes;	// IMP=0x000000000003f749
- (void)playButtonClicked:(id)arg1;	// IMP=0x000000000003f6e0
- (void)_verifyOrRestartPlayback;	// IMP=0x000000000003f50c
- (void)_didBeginPlayback;	// IMP=0x000000000003f444
- (_Bool)isPlaying;	// IMP=0x000000000003f42f
- (void)handleDoubleTap;	// IMP=0x000000000003f3d6
- (void)toggleScaleMode:(float)arg1;	// IMP=0x000000000003f2c2
@property(nonatomic) PLPhotoTileViewController *imageTile;
@property(readonly, nonatomic) PLManagedAsset *videoCameraImage;
@property(readonly, nonatomic) UIImageView *previewImageView;
- (id)_videoSnapshot;	// IMP=0x000000000003f26a
- (id)newPreviewImageData:(id *)arg1;	// IMP=0x000000000003f048
@property(retain, nonatomic) PLManagedAsset *trimmedVideoClip;
@property(readonly, nonatomic) NSString *videoPathAfterTrim;
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) double startTime;
- (double)_scrubberStartTime;	// IMP=0x000000000003ef47
- (void)cancelTrim;	// IMP=0x000000000003ee39
- (_Bool)isTrimming;	// IMP=0x000000000003ee26
- (void)_exportCompletedWithSuccess:(_Bool)arg1;	// IMP=0x000000000003e1f5
- (void)_cancelRemaking:(id)arg1;	// IMP=0x000000000003e1e3
- (void)setProgress:(id)arg1;	// IMP=0x000000000003e1a6
- (void)_updateTrimProgress;	// IMP=0x000000000003e13e
- (void)_informDelegateAboutProgressChange:(float)arg1;	// IMP=0x000000000003e0d0
- (void)_resetTrimProgressTimer;	// IMP=0x000000000003dff4
- (void)_removeTrimProgressTimer;	// IMP=0x000000000003dfbb
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;	// IMP=0x000000000003ddfe
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void *)arg3;	// IMP=0x000000000003dd8b
- (void)_scrubberAnimationFinished;	// IMP=0x000000000003dcc3
- (void)movieScrubberEditingAnimationFinished:(id)arg1;	// IMP=0x000000000003dca0
- (void)_reset;	// IMP=0x000000000003da47
- (void)_setPlaybackDidBegin:(_Bool)arg1;	// IMP=0x000000000003da20
- (void)_setPlaying:(_Bool)arg1;	// IMP=0x000000000003da05
- (void)_updateSlalomRegionEditorState;	// IMP=0x000000000003d987
- (void)_updateForEditing;	// IMP=0x000000000003d975
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003d84f
- (void)hideTrimMessage;	// IMP=0x000000000003d83b
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;	// IMP=0x000000000003d6b9
- (void)setMaximumTrimLength:(double)arg1;	// IMP=0x000000000003d690
- (void)_clearImageGenerators;	// IMP=0x000000000003d668
- (void)_configureImageGenerator:(id)arg1 thumbnailSize:(struct CGSize)arg2 forSummaryThumbnails:(_Bool)arg3;	// IMP=0x000000000003d549
- (void)_serviceImageGenerationRequests;	// IMP=0x000000000003d4f7
- (void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(_Bool)arg2;	// IMP=0x000000000003d49e
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;	// IMP=0x000000000003d481
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;	// IMP=0x000000000003d3c2
- (void)movieScrubberDidCancelEditing:(id)arg1;	// IMP=0x000000000003d36d
- (void)movieScrubberDidBeginEditing:(id)arg1;	// IMP=0x000000000003d300
- (void)movieScrubberWillBeginEditing:(id)arg1;	// IMP=0x000000000003d2ab
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;	// IMP=0x000000000003d281
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;	// IMP=0x000000000003d27b
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;	// IMP=0x000000000003d264
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;	// IMP=0x000000000003d24d
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;	// IMP=0x000000000003d239
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;	// IMP=0x000000000003d151
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;	// IMP=0x000000000003cf4a
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;	// IMP=0x000000000003cdc2
- (void)_resetScrubberUpdateTimer;	// IMP=0x000000000003cd69
- (void)_removeScrubberUpdateTimer;	// IMP=0x000000000003cd30
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;	// IMP=0x000000000003cb75
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(_Bool)arg2 aspectRatio:(float)arg3;	// IMP=0x000000000003ca17
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(_Bool)arg3;	// IMP=0x000000000003c99b
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;	// IMP=0x000000000003c983
@property(readonly, nonatomic) _Bool _didSetPhotoData;
- (_Bool)_canPlayCloudSharedStreamedVideoWithLocalVideo;	// IMP=0x000000000003c8c3
- (_Bool)_shouldStreamVideo;	// IMP=0x000000000003c88a
- (_Bool)_shouldStreamCloudPhotoLibraryVideo;	// IMP=0x000000000003c840
- (_Bool)_mediaIsCloudSharedStreamedVideo;	// IMP=0x000000000003c81a
- (_Bool)_mediaIsVideo;	// IMP=0x000000000003c7f4
@property(readonly, nonatomic) _Bool _mediaIsPlayable;
@property(readonly, retain, nonatomic) NSString *_pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, retain, nonatomic) NSString *_pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, retain, nonatomic) NSString *_pathForVideoPreviewFile;
- (id)_pathForOriginalFile;	// IMP=0x000000000003c65c
@property(readonly, retain, nonatomic) NSString *pathForVideoFile;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;	// IMP=0x000000000003c5ff
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;	// IMP=0x000000000003c5dd
- (void)_saveCachedThumbnailsIfNecessary;	// IMP=0x000000000003c26e
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;	// IMP=0x000000000003c266
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;	// IMP=0x000000000003c0aa
- (double)movieScrubberDuration:(id)arg1;	// IMP=0x000000000003c098
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;	// IMP=0x000000000003c05a
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;	// IMP=0x000000000003c013
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;	// IMP=0x000000000003bf3f
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;	// IMP=0x000000000003beed
- (_Bool)_playerIsAirplay;	// IMP=0x000000000003bec8
- (void)moviePlayerDidChangeExternalPlaybackType:(id)arg1;	// IMP=0x000000000003be48
- (_Bool)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;	// IMP=0x000000000003be40
- (void)moviePlayerEncounteredAuthenticationError:(id)arg1;	// IMP=0x000000000003bdd1
- (_Bool)moviePlayerShouldNotifyOnPreparationError:(id)arg1;	// IMP=0x000000000003bd5c
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;	// IMP=0x000000000003bd4a
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;	// IMP=0x000000000003bcac
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;	// IMP=0x000000000003bc31
- (void)_setMoviePlayerActive:(_Bool)arg1;	// IMP=0x000000000003bc0a
- (void)_updateScrubberForSlowMotion;	// IMP=0x000000000003bbc4
- (void)_configurePlayerForStreamedVideoIfNecessary;	// IMP=0x000000000003bb0f
- (id)_assetForVideoURL:(id)arg1;	// IMP=0x000000000003bad7
- (id)_assetForVideoPath:(id)arg1;	// IMP=0x000000000003ba7f
- (id)_optionsForAVURLAsset;	// IMP=0x000000000003b958
- (void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg1;	// IMP=0x000000000003b81e
- (_Bool)_canHandleAdjustmentData:(id)arg1;	// IMP=0x000000000003b77b
- (_Bool)_prepareMoviePlayerIfNeeded;	// IMP=0x000000000003b141
- (void)_fetchLocalContentEditingInput;	// IMP=0x000000000003b04a
- (void)_fetchNonlocalVideo;	// IMP=0x000000000003af03
- (void)_prepareAndResumePlayback;	// IMP=0x000000000003ae9b
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;	// IMP=0x000000000003ae89
- (void)moviePlayerDurationAvailable:(id)arg1;	// IMP=0x000000000003ae23
- (void)moviePlayerReadyToDisplay:(id)arg1;	// IMP=0x000000000003ad88
- (void)moviePlayerReadyToPlay:(id)arg1;	// IMP=0x000000000003abb5
- (void)_savePreviewPosterFrameImage:(struct CGImage *)arg1;	// IMP=0x000000000003aad6
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize)arg1;	// IMP=0x000000000003a910
- (void)moviePlayerPlaybackDidEnd:(id)arg1;	// IMP=0x000000000003a8fe
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;	// IMP=0x000000000003a7dc
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;	// IMP=0x000000000003a6f3
- (void)moviePlayerBufferingStateDidChange:(id)arg1;	// IMP=0x000000000003a5d1
- (_Bool)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;	// IMP=0x000000000003a5bc
- (void)_reloadScrubberThumbnailsIfNeeded;	// IMP=0x000000000003a531
- (void)_setNeedsReloadScrubberThumbnails:(_Bool)arg1;	// IMP=0x000000000003a517
- (void)layoutSubviews;	// IMP=0x000000000003a423
- (_Bool)_canCreateMetadata;	// IMP=0x000000000003a40e
- (void)_updateScaleModeForSize:(struct CGSize)arg1;	// IMP=0x000000000003a336
- (void)updateScaleMode;	// IMP=0x000000000003a298
- (void)_hideTrimMessageView:(_Bool)arg1;	// IMP=0x000000000003a1ab
- (void)removeVideoOverlay;	// IMP=0x000000000003a145
- (void)_hideVideoOverlay:(_Bool)arg1;	// IMP=0x000000000003a068
- (void)_videoOverlayFadeOutDidFinish;	// IMP=0x000000000003a018
- (void)_showVideoOverlay;	// IMP=0x0000000000039e04
- (id)videoOverlayPlayButton;	// IMP=0x0000000000039df3
- (id)slalomRegionEditor;	// IMP=0x0000000000039de2
- (id)videoScrubber;	// IMP=0x0000000000039dd1
- (_Bool)_canAccessVideo;	// IMP=0x0000000000039d67
- (_Bool)_shouldShowSlalomEditor;	// IMP=0x0000000000039cdd
- (void)_removeScrubber;	// IMP=0x0000000000039c1d
- (void)_createScrubberIfNeeded;	// IMP=0x0000000000039733
- (double)_scrubberBackgroundHeight;	// IMP=0x000000000003970a
- (void)_updateScrubberFrame;	// IMP=0x00000000000394de
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000039370
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003932a
@property(readonly, copy) NSString *description;
@property(nonatomic) id <PLVideoViewDelegate> delegate;
- (void)_tearDownMoviePlayer;	// IMP=0x00000000000390f2
- (void)_insertMoviePlayerViewIfNecessary;	// IMP=0x0000000000039028
- (void)_setupMoviePlayerIfNecessary;	// IMP=0x0000000000038fab
- (void)dealloc;	// IMP=0x0000000000038cd3
- (void)_networkReachabilityDidChange:(id)arg1;	// IMP=0x0000000000038c20
- (id)_initWithFrame:(struct CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;	// IMP=0x0000000000038937
- (id)initWithFrame:(struct CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;	// IMP=0x0000000000038894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

