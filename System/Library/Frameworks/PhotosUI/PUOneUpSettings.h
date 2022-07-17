//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

#import <PhotosUI/PXPreferencesObserver-Protocol.h>

@class NSNumber, NSString, PUScrubberSettings;

@interface PUOneUpSettings : PXSettings <PXPreferencesObserver>
{
    NSNumber *_cachedAutoplayVideoEnabled;	// 8 = 0x8
    _Bool _showSuggestionsForAllAssets;	// 16 = 0x10
    _Bool _showInitialDetailsIndicator;	// 17 = 0x11
    _Bool _enableSuggestionsAnalysis;	// 18 = 0x12
    _Bool _initialDetailsIndicatorShouldSlideIn;	// 19 = 0x13
    _Bool _allowUserTransform;	// 20 = 0x14
    _Bool _allowBadges;	// 21 = 0x15
    _Bool _allowScrubber;	// 22 = 0x16
    _Bool _allowChromeHiding;	// 23 = 0x17
    _Bool _allowDoubleTapZoom;	// 24 = 0x18
    _Bool _allowFullsizeJPEGDisplay;	// 25 = 0x19
    _Bool _allowToggleOriginalBarItem;	// 26 = 0x1a
    _Bool _showSaliencyRects;	// 27 = 0x1b
    _Bool _showFacesRect;	// 28 = 0x1c
    _Bool _showPaddedFacesRect;	// 29 = 0x1d
    _Bool _showBestSquareRect;	// 30 = 0x1e
    _Bool _showFacesTorsosRects;	// 31 = 0x1f
    _Bool _showToggleCTMButton;	// 32 = 0x20
    _Bool _showGainMapButton;	// 33 = 0x21
    _Bool _hideToolbarWhenShowingAccessoryView;	// 34 = 0x22
    _Bool _hideFloatingInfoPanelWhenHidingChrome;	// 35 = 0x23
    _Bool _hideFloatingInfoPanel;	// 36 = 0x24
    _Bool _allowsDetailsToggleButtonInBars;	// 37 = 0x25
    _Bool _useGlobalDetailsVisibility;	// 38 = 0x26
    _Bool _useGlobalCommentsVisibility;	// 39 = 0x27
    _Bool _squareImageCapToHalfHeight;	// 40 = 0x28
    _Bool _shouldFadeAccessoryView;	// 41 = 0x29
    _Bool _persistChromeVisibility;	// 42 = 0x2a
    _Bool _allowParallax;	// 43 = 0x2b
    _Bool _allowStatusBar;	// 44 = 0x2c
    _Bool _doubleTapZoomAreaExcludesBars;	// 45 = 0x2d
    _Bool _doubleTapZoomAreaExcludesBackground;	// 46 = 0x2e
    _Bool _enableFigPhotoTiledLayer;	// 47 = 0x2f
    _Bool _useURLForLargePhotosWithFigPhotoTiledLayer;	// 48 = 0x30
    _Bool _forceURLWithFigPhotoTiledLayer;	// 49 = 0x31
    _Bool _enableFigPhotoBackgroundSizeBasedDisplay;	// 50 = 0x32
    _Bool _simulateWorstCaseFigPhotoBackgroundSize;	// 51 = 0x33
    _Bool _autoplayVideo;	// 52 = 0x34
    _Bool _unmuteOnChromeHide;	// 53 = 0x35
    _Bool _allowPlayButtonInBars;	// 54 = 0x36
    _Bool _videoRemuteOnBackgrounding;	// 55 = 0x37
    _Bool _videoShowDebugBorders;	// 56 = 0x38
    _Bool _livePhotoSRLCompensationEnabled;	// 57 = 0x39
    _Bool _livePhotoSRLCompensationManualMode;	// 58 = 0x3a
    _Bool _applyPerspectiveTransformDuringVitality;	// 59 = 0x3b
    _Bool _lockScrollDuringLivePhotoPlayback;	// 60 = 0x3c
    _Bool _livePhotoScrubberShowForPlayback;	// 61 = 0x3d
    _Bool _shouldMergeOverlappingLivePhotos;	// 62 = 0x3e
    _Bool _showOffBadgeForDisabledLivePhotos;	// 63 = 0x3f
    _Bool _vitalityUseInsetLimiting;	// 64 = 0x40
    _Bool _showReframedBadge;	// 65 = 0x41
    _Bool _allowGIFPlayback;	// 66 = 0x42
    _Bool _showGIFLoadingDelays;	// 67 = 0x43
    _Bool _simulateAssetContentLoading;	// 68 = 0x44
    _Bool _simulateLoadingError;	// 69 = 0x45
    _Bool _showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls;	// 70 = 0x46
    _Bool _useDebuggingColors;	// 71 = 0x47
    _Bool _useDebuggingProgressLabel;	// 72 = 0x48
    _Bool _showBufferingIndicatorDuringPlay;	// 73 = 0x49
    _Bool _showLoadingIndicatorDuringDownload;	// 74 = 0x4a
    _Bool _alwaysShowRenderIndicator;	// 75 = 0x4b
    _Bool _alwaysShowAirPlayButton;	// 76 = 0x4c
    double _initialDetailsIndicatorDelay;	// 80 = 0x50
    double _initialDetailsIndicatorDuration;	// 88 = 0x58
    long long _titleTapAction;	// 96 = 0x60
    PUScrubberSettings *_scrubberSettings;	// 104 = 0x68
    unsigned long long _scaleToFitBehavior;	// 112 = 0x70
    long long _userNavigationMaximumDistance;	// 120 = 0x78
    long long _accessoryViewType;	// 128 = 0x80
    double _accessoryInitialTopPosition;	// 136 = 0x88
    double _minimumVisibleContentHeight;	// 144 = 0x90
    double _minimumVisibleCommentedContentHeight;	// 152 = 0x98
    double _minimumFullCommentTitleViewWidth;	// 160 = 0xa0
    double _chromeDefaultAnimationDuration;	// 168 = 0xa8
    long long _chromeAutoHideBehaviorOnLivePhoto;	// 176 = 0xb0
    long long _chromeAutoHideBehaviorOnPlayButton;	// 184 = 0xb8
    long long _chromeAutoHideBehaviorOnSwipe;	// 192 = 0xc0
    long long _chromeAutoHideBehaviorOnZoom;	// 200 = 0xc8
    double _chromeAutoHideDelay;	// 208 = 0xd0
    double _chromeTimedAutoHideAnimationDuration;	// 216 = 0xd8
    long long _chromeAnimationType;	// 224 = 0xe0
    long long _chromeBackgroundAnimationType;	// 232 = 0xe8
    double _interpageSpacing;	// 240 = 0xf0
    double _pagingSpringPullAdjustment;	// 248 = 0xf8
    double _pagingFrictionAdjustment;	// 256 = 0x100
    long long _parallaxModel;	// 264 = 0x108
    double _parallaxFactor;	// 272 = 0x110
    double _barsAreaVerticalOutset;	// 280 = 0x118
    double _defaultZoomInFactor;	// 288 = 0x120
    double _doubleTapZoomFactor;	// 296 = 0x128
    double _videoAutoplayThreshold;	// 304 = 0x130
    double _videoPauseThreshold;	// 312 = 0x138
    double _autoplayScrubberWidth;	// 320 = 0x140
    double _livePhotoSRLCompensationManualValue;	// 328 = 0x148
    NSString *_livePhotoSRLCompensationFilterName;	// 336 = 0x150
    double _livePhotoInteractionThreshold;	// 344 = 0x158
    double _livePhotoMinimumOverlappingDuration;	// 352 = 0x160
    unsigned long long _overlappingLivePhotosCountLimit;	// 360 = 0x168
    double _vitalityMaskBlur;	// 368 = 0x170
    double _vitalityFeatherScale;	// 376 = 0x178
    double _vitalityMaxAllowedInsetPoints;	// 384 = 0x180
    double _vitalityMaxAllowedLargeInsetPoints;	// 392 = 0x188
    unsigned long long _viewModelCacheCountLimit;	// 400 = 0x190
    double _visibilityDurationForEnteringQuickPagingRegime;	// 408 = 0x198
    double _visibilityDurationForExitingQuickPagingRegime;	// 416 = 0x1a0
    long long _minNavigationDistanceForQuickPagingRegime;	// 424 = 0x1a8
    double _visibilityDurationForEnteringFastRegime;	// 432 = 0x1b0
    double _visibilityDurationForExitingFastRegime;	// 440 = 0x1b8
    long long _minNavigationDistanceForFastRegime;	// 448 = 0x1c0
    double _bounceDuration;	// 456 = 0x1c8
    double _bounceDelay;	// 464 = 0x1d0
    double _bounceSpringDamping;	// 472 = 0x1d8
    double _bounceInitialVelocity;	// 480 = 0x1e0
    double _playGIFSettledThreshold;	// 488 = 0x1e8
    double _playGIFEnterThreshold;	// 496 = 0x1f0
    double _playGIFMoveOutThreshold;	// 504 = 0x1f8
    double _simulatedAssetContentLoadingDuration;	// 512 = 0x200
    long long _simulatedLoadingErrorType;	// 520 = 0x208
    long long _debuggingTitleType;	// 528 = 0x210
    unsigned long long _debuggingBadges;	// 536 = 0x218
    unsigned long long _debuggingBadgesWhenFavorite;	// 544 = 0x220
    double _simulatedRenderProgress;	// 552 = 0x228
}

+ (id)settingsControllerModule;	// IMP=0x0000000000245d86
+ (id)sharedInstance;	// IMP=0x0000000000245d56
- (void).cxx_destruct;	// IMP=0x0000000000245d14
@property(nonatomic) _Bool alwaysShowAirPlayButton; // @synthesize alwaysShowAirPlayButton=_alwaysShowAirPlayButton;
@property(nonatomic) double simulatedRenderProgress; // @synthesize simulatedRenderProgress=_simulatedRenderProgress;
@property(nonatomic) _Bool alwaysShowRenderIndicator; // @synthesize alwaysShowRenderIndicator=_alwaysShowRenderIndicator;
@property(nonatomic) _Bool showLoadingIndicatorDuringDownload; // @synthesize showLoadingIndicatorDuringDownload=_showLoadingIndicatorDuringDownload;
@property(nonatomic) _Bool showBufferingIndicatorDuringPlay; // @synthesize showBufferingIndicatorDuringPlay=_showBufferingIndicatorDuringPlay;
@property(nonatomic) _Bool useDebuggingProgressLabel; // @synthesize useDebuggingProgressLabel=_useDebuggingProgressLabel;
@property(nonatomic) unsigned long long debuggingBadgesWhenFavorite; // @synthesize debuggingBadgesWhenFavorite=_debuggingBadgesWhenFavorite;
@property(nonatomic) unsigned long long debuggingBadges; // @synthesize debuggingBadges=_debuggingBadges;
@property(nonatomic) long long debuggingTitleType; // @synthesize debuggingTitleType=_debuggingTitleType;
@property(nonatomic) _Bool useDebuggingColors; // @synthesize useDebuggingColors=_useDebuggingColors;
@property(nonatomic) _Bool showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls; // @synthesize showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls=_showFileRadarButtonForOneUpErrorPresentationsOnInternalInstalls;
@property(nonatomic) long long simulatedLoadingErrorType; // @synthesize simulatedLoadingErrorType=_simulatedLoadingErrorType;
@property(nonatomic) _Bool simulateLoadingError; // @synthesize simulateLoadingError=_simulateLoadingError;
@property(nonatomic) double simulatedAssetContentLoadingDuration; // @synthesize simulatedAssetContentLoadingDuration=_simulatedAssetContentLoadingDuration;
@property(nonatomic) _Bool simulateAssetContentLoading; // @synthesize simulateAssetContentLoading=_simulateAssetContentLoading;
@property(nonatomic) double playGIFMoveOutThreshold; // @synthesize playGIFMoveOutThreshold=_playGIFMoveOutThreshold;
@property(nonatomic) double playGIFEnterThreshold; // @synthesize playGIFEnterThreshold=_playGIFEnterThreshold;
@property(nonatomic) double playGIFSettledThreshold; // @synthesize playGIFSettledThreshold=_playGIFSettledThreshold;
@property(nonatomic) _Bool showGIFLoadingDelays; // @synthesize showGIFLoadingDelays=_showGIFLoadingDelays;
@property(nonatomic) _Bool allowGIFPlayback; // @synthesize allowGIFPlayback=_allowGIFPlayback;
@property(nonatomic) double bounceInitialVelocity; // @synthesize bounceInitialVelocity=_bounceInitialVelocity;
@property(nonatomic) double bounceSpringDamping; // @synthesize bounceSpringDamping=_bounceSpringDamping;
@property(nonatomic) double bounceDelay; // @synthesize bounceDelay=_bounceDelay;
@property(nonatomic) double bounceDuration; // @synthesize bounceDuration=_bounceDuration;
@property(nonatomic) long long minNavigationDistanceForFastRegime; // @synthesize minNavigationDistanceForFastRegime=_minNavigationDistanceForFastRegime;
@property(nonatomic) double visibilityDurationForExitingFastRegime; // @synthesize visibilityDurationForExitingFastRegime=_visibilityDurationForExitingFastRegime;
@property(nonatomic) double visibilityDurationForEnteringFastRegime; // @synthesize visibilityDurationForEnteringFastRegime=_visibilityDurationForEnteringFastRegime;
@property(nonatomic) long long minNavigationDistanceForQuickPagingRegime; // @synthesize minNavigationDistanceForQuickPagingRegime=_minNavigationDistanceForQuickPagingRegime;
@property(nonatomic) double visibilityDurationForExitingQuickPagingRegime; // @synthesize visibilityDurationForExitingQuickPagingRegime=_visibilityDurationForExitingQuickPagingRegime;
@property(nonatomic) double visibilityDurationForEnteringQuickPagingRegime; // @synthesize visibilityDurationForEnteringQuickPagingRegime=_visibilityDurationForEnteringQuickPagingRegime;
@property(nonatomic) unsigned long long viewModelCacheCountLimit; // @synthesize viewModelCacheCountLimit=_viewModelCacheCountLimit;
@property(nonatomic) _Bool showReframedBadge; // @synthesize showReframedBadge=_showReframedBadge;
@property(nonatomic) _Bool vitalityUseInsetLimiting; // @synthesize vitalityUseInsetLimiting=_vitalityUseInsetLimiting;
@property(nonatomic) double vitalityMaxAllowedLargeInsetPoints; // @synthesize vitalityMaxAllowedLargeInsetPoints=_vitalityMaxAllowedLargeInsetPoints;
@property(nonatomic) double vitalityMaxAllowedInsetPoints; // @synthesize vitalityMaxAllowedInsetPoints=_vitalityMaxAllowedInsetPoints;
@property(nonatomic) double vitalityFeatherScale; // @synthesize vitalityFeatherScale=_vitalityFeatherScale;
@property(nonatomic) double vitalityMaskBlur; // @synthesize vitalityMaskBlur=_vitalityMaskBlur;
@property(nonatomic) _Bool showOffBadgeForDisabledLivePhotos; // @synthesize showOffBadgeForDisabledLivePhotos=_showOffBadgeForDisabledLivePhotos;
@property(nonatomic) unsigned long long overlappingLivePhotosCountLimit; // @synthesize overlappingLivePhotosCountLimit=_overlappingLivePhotosCountLimit;
@property(nonatomic) double livePhotoMinimumOverlappingDuration; // @synthesize livePhotoMinimumOverlappingDuration=_livePhotoMinimumOverlappingDuration;
@property(nonatomic) _Bool shouldMergeOverlappingLivePhotos; // @synthesize shouldMergeOverlappingLivePhotos=_shouldMergeOverlappingLivePhotos;
@property(nonatomic) _Bool livePhotoScrubberShowForPlayback; // @synthesize livePhotoScrubberShowForPlayback=_livePhotoScrubberShowForPlayback;
@property(nonatomic) _Bool lockScrollDuringLivePhotoPlayback; // @synthesize lockScrollDuringLivePhotoPlayback=_lockScrollDuringLivePhotoPlayback;
@property(nonatomic) _Bool applyPerspectiveTransformDuringVitality; // @synthesize applyPerspectiveTransformDuringVitality=_applyPerspectiveTransformDuringVitality;
@property(nonatomic) double livePhotoInteractionThreshold; // @synthesize livePhotoInteractionThreshold=_livePhotoInteractionThreshold;
@property(copy, nonatomic) NSString *livePhotoSRLCompensationFilterName; // @synthesize livePhotoSRLCompensationFilterName=_livePhotoSRLCompensationFilterName;
@property(nonatomic) double livePhotoSRLCompensationManualValue; // @synthesize livePhotoSRLCompensationManualValue=_livePhotoSRLCompensationManualValue;
@property(nonatomic) _Bool livePhotoSRLCompensationManualMode; // @synthesize livePhotoSRLCompensationManualMode=_livePhotoSRLCompensationManualMode;
@property(nonatomic) _Bool livePhotoSRLCompensationEnabled; // @synthesize livePhotoSRLCompensationEnabled=_livePhotoSRLCompensationEnabled;
@property(nonatomic) _Bool videoShowDebugBorders; // @synthesize videoShowDebugBorders=_videoShowDebugBorders;
@property(nonatomic) double autoplayScrubberWidth; // @synthesize autoplayScrubberWidth=_autoplayScrubberWidth;
@property(nonatomic) _Bool videoRemuteOnBackgrounding; // @synthesize videoRemuteOnBackgrounding=_videoRemuteOnBackgrounding;
@property(nonatomic) double videoPauseThreshold; // @synthesize videoPauseThreshold=_videoPauseThreshold;
@property(nonatomic) _Bool allowPlayButtonInBars; // @synthesize allowPlayButtonInBars=_allowPlayButtonInBars;
@property(nonatomic) _Bool unmuteOnChromeHide; // @synthesize unmuteOnChromeHide=_unmuteOnChromeHide;
@property(nonatomic) double videoAutoplayThreshold; // @synthesize videoAutoplayThreshold=_videoAutoplayThreshold;
@property(nonatomic) _Bool autoplayVideo; // @synthesize autoplayVideo=_autoplayVideo;
@property(nonatomic) _Bool simulateWorstCaseFigPhotoBackgroundSize; // @synthesize simulateWorstCaseFigPhotoBackgroundSize=_simulateWorstCaseFigPhotoBackgroundSize;
@property(nonatomic) _Bool enableFigPhotoBackgroundSizeBasedDisplay; // @synthesize enableFigPhotoBackgroundSizeBasedDisplay=_enableFigPhotoBackgroundSizeBasedDisplay;
@property(nonatomic) _Bool forceURLWithFigPhotoTiledLayer; // @synthesize forceURLWithFigPhotoTiledLayer=_forceURLWithFigPhotoTiledLayer;
@property(nonatomic) _Bool useURLForLargePhotosWithFigPhotoTiledLayer; // @synthesize useURLForLargePhotosWithFigPhotoTiledLayer=_useURLForLargePhotosWithFigPhotoTiledLayer;
@property(nonatomic) _Bool enableFigPhotoTiledLayer; // @synthesize enableFigPhotoTiledLayer=_enableFigPhotoTiledLayer;
@property(nonatomic) _Bool doubleTapZoomAreaExcludesBackground; // @synthesize doubleTapZoomAreaExcludesBackground=_doubleTapZoomAreaExcludesBackground;
@property(nonatomic) _Bool doubleTapZoomAreaExcludesBars; // @synthesize doubleTapZoomAreaExcludesBars=_doubleTapZoomAreaExcludesBars;
@property(nonatomic) double doubleTapZoomFactor; // @synthesize doubleTapZoomFactor=_doubleTapZoomFactor;
@property(nonatomic) double defaultZoomInFactor; // @synthesize defaultZoomInFactor=_defaultZoomInFactor;
@property(nonatomic) double barsAreaVerticalOutset; // @synthesize barsAreaVerticalOutset=_barsAreaVerticalOutset;
@property(nonatomic) _Bool allowStatusBar; // @synthesize allowStatusBar=_allowStatusBar;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property(nonatomic) _Bool allowParallax; // @synthesize allowParallax=_allowParallax;
@property(nonatomic) double pagingFrictionAdjustment; // @synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment;
@property(nonatomic) double pagingSpringPullAdjustment; // @synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment;
@property(nonatomic) double interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(nonatomic) long long chromeBackgroundAnimationType; // @synthesize chromeBackgroundAnimationType=_chromeBackgroundAnimationType;
@property(nonatomic) long long chromeAnimationType; // @synthesize chromeAnimationType=_chromeAnimationType;
@property(nonatomic) _Bool persistChromeVisibility; // @synthesize persistChromeVisibility=_persistChromeVisibility;
@property(nonatomic) double chromeTimedAutoHideAnimationDuration; // @synthesize chromeTimedAutoHideAnimationDuration=_chromeTimedAutoHideAnimationDuration;
@property(nonatomic) double chromeAutoHideDelay; // @synthesize chromeAutoHideDelay=_chromeAutoHideDelay;
@property(nonatomic) long long chromeAutoHideBehaviorOnZoom; // @synthesize chromeAutoHideBehaviorOnZoom=_chromeAutoHideBehaviorOnZoom;
@property(nonatomic) long long chromeAutoHideBehaviorOnSwipe; // @synthesize chromeAutoHideBehaviorOnSwipe=_chromeAutoHideBehaviorOnSwipe;
@property(nonatomic) long long chromeAutoHideBehaviorOnPlayButton; // @synthesize chromeAutoHideBehaviorOnPlayButton=_chromeAutoHideBehaviorOnPlayButton;
@property(nonatomic) long long chromeAutoHideBehaviorOnLivePhoto; // @synthesize chromeAutoHideBehaviorOnLivePhoto=_chromeAutoHideBehaviorOnLivePhoto;
@property(nonatomic) double chromeDefaultAnimationDuration; // @synthesize chromeDefaultAnimationDuration=_chromeDefaultAnimationDuration;
@property(nonatomic) _Bool shouldFadeAccessoryView; // @synthesize shouldFadeAccessoryView=_shouldFadeAccessoryView;
@property(nonatomic) _Bool squareImageCapToHalfHeight; // @synthesize squareImageCapToHalfHeight=_squareImageCapToHalfHeight;
@property(nonatomic) _Bool useGlobalCommentsVisibility; // @synthesize useGlobalCommentsVisibility=_useGlobalCommentsVisibility;
@property(nonatomic) _Bool useGlobalDetailsVisibility; // @synthesize useGlobalDetailsVisibility=_useGlobalDetailsVisibility;
@property(nonatomic) _Bool allowsDetailsToggleButtonInBars; // @synthesize allowsDetailsToggleButtonInBars=_allowsDetailsToggleButtonInBars;
@property(nonatomic) _Bool hideFloatingInfoPanel; // @synthesize hideFloatingInfoPanel=_hideFloatingInfoPanel;
@property(nonatomic) _Bool hideFloatingInfoPanelWhenHidingChrome; // @synthesize hideFloatingInfoPanelWhenHidingChrome=_hideFloatingInfoPanelWhenHidingChrome;
@property(nonatomic) _Bool hideToolbarWhenShowingAccessoryView; // @synthesize hideToolbarWhenShowingAccessoryView=_hideToolbarWhenShowingAccessoryView;
@property(nonatomic) double minimumFullCommentTitleViewWidth; // @synthesize minimumFullCommentTitleViewWidth=_minimumFullCommentTitleViewWidth;
@property(nonatomic) double minimumVisibleCommentedContentHeight; // @synthesize minimumVisibleCommentedContentHeight=_minimumVisibleCommentedContentHeight;
@property(nonatomic) double minimumVisibleContentHeight; // @synthesize minimumVisibleContentHeight=_minimumVisibleContentHeight;
@property(nonatomic) double accessoryInitialTopPosition; // @synthesize accessoryInitialTopPosition=_accessoryInitialTopPosition;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(nonatomic) _Bool showGainMapButton; // @synthesize showGainMapButton=_showGainMapButton;
@property(nonatomic) _Bool showToggleCTMButton; // @synthesize showToggleCTMButton=_showToggleCTMButton;
@property(nonatomic) _Bool showFacesTorsosRects; // @synthesize showFacesTorsosRects=_showFacesTorsosRects;
@property(nonatomic) _Bool showBestSquareRect; // @synthesize showBestSquareRect=_showBestSquareRect;
@property(nonatomic) _Bool showPaddedFacesRect; // @synthesize showPaddedFacesRect=_showPaddedFacesRect;
@property(nonatomic) _Bool showFacesRect; // @synthesize showFacesRect=_showFacesRect;
@property(nonatomic) _Bool showSaliencyRects; // @synthesize showSaliencyRects=_showSaliencyRects;
@property(nonatomic) long long userNavigationMaximumDistance; // @synthesize userNavigationMaximumDistance=_userNavigationMaximumDistance;
@property(nonatomic) _Bool allowToggleOriginalBarItem; // @synthesize allowToggleOriginalBarItem=_allowToggleOriginalBarItem;
@property(nonatomic) _Bool allowFullsizeJPEGDisplay; // @synthesize allowFullsizeJPEGDisplay=_allowFullsizeJPEGDisplay;
@property(nonatomic) _Bool allowDoubleTapZoom; // @synthesize allowDoubleTapZoom=_allowDoubleTapZoom;
@property(nonatomic) _Bool allowChromeHiding; // @synthesize allowChromeHiding=_allowChromeHiding;
@property(nonatomic) _Bool allowScrubber; // @synthesize allowScrubber=_allowScrubber;
@property(nonatomic) _Bool allowBadges; // @synthesize allowBadges=_allowBadges;
@property(nonatomic) _Bool allowUserTransform; // @synthesize allowUserTransform=_allowUserTransform;
@property(nonatomic) unsigned long long scaleToFitBehavior; // @synthesize scaleToFitBehavior=_scaleToFitBehavior;
@property(retain, nonatomic) PUScrubberSettings *scrubberSettings; // @synthesize scrubberSettings=_scrubberSettings;
@property(nonatomic) long long titleTapAction; // @synthesize titleTapAction=_titleTapAction;
@property(nonatomic) double initialDetailsIndicatorDuration; // @synthesize initialDetailsIndicatorDuration=_initialDetailsIndicatorDuration;
@property(nonatomic) double initialDetailsIndicatorDelay; // @synthesize initialDetailsIndicatorDelay=_initialDetailsIndicatorDelay;
@property(nonatomic) _Bool initialDetailsIndicatorShouldSlideIn; // @synthesize initialDetailsIndicatorShouldSlideIn=_initialDetailsIndicatorShouldSlideIn;
@property(nonatomic) _Bool enableSuggestionsAnalysis; // @synthesize enableSuggestionsAnalysis=_enableSuggestionsAnalysis;
@property(nonatomic) _Bool showInitialDetailsIndicator; // @synthesize showInitialDetailsIndicator=_showInitialDetailsIndicator;
@property(nonatomic) _Bool showSuggestionsForAllAssets; // @synthesize showSuggestionsForAllAssets=_showSuggestionsForAllAssets;
- (void)preferencesDidChange;	// IMP=0x0000000000244cfb
- (_Bool)allowAutoplayVideoForAsset:(id)arg1;	// IMP=0x0000000000244c25
- (void)setDefaultValues;	// IMP=0x0000000000244299
- (void)createChildren;	// IMP=0x0000000000244259
- (long long)version;	// IMP=0x000000000024424e
- (id)parentSettings;	// IMP=0x0000000000244235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
