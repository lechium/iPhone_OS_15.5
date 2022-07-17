//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryViewLayoutSpec-Protocol.h>

@class NSAttributedString, NSDictionary, NSNumberFormatter, NSString, PXExtendedImageConfiguration, PXStoryChromeButtonSpec, PXStoryPlayButtonSpec, PXStoryRelatedLayoutMetrics, UIColor, UIImage, UIImageConfiguration;

@interface PXStoryConcreteViewLayoutSpec <PXStoryViewLayoutSpec>
{
    _Bool _shouldUseUnifiedButtonLayout;	// 8 = 0x8
    _Bool _canShowCloseButton;	// 9 = 0x9
    _Bool _canShowStyleSwitcherButton;	// 10 = 0xa
    _Bool _shouldHorizontallyCenterPlayButton;	// 11 = 0xb
    _Bool _shouldVerticallyCenterPlayButton;	// 12 = 0xc
    _Bool _shouldHorizontallyCenterPlaybackEndButtons;	// 13 = 0xd
    _Bool _onlyShowReplayEndButtonAtTopOfTitle;	// 14 = 0xe
    _Bool _shouldUseAssetCollectionForTitleAndSubtitle;	// 15 = 0xf
    _Bool _shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView;	// 16 = 0x10
    _Bool _styleSwitcherCanShowEditButtons;	// 17 = 0x11
    unsigned short _rightEdgeHighlightImageVersion;	// 18 = 0x12
    UIColor *_backgroundColor;	// 24 = 0x18
    unsigned long long _fullsizePlayerDefaultChromeItems;	// 32 = 0x20
    double _tapNavigationAreaWidth;	// 40 = 0x28
    double _interChromeButtonSpacing;	// 48 = 0x30
    PXStoryChromeButtonSpec *_chromeButtonSpec;	// 56 = 0x38
    PXStoryPlayButtonSpec *_playButtonSpec;	// 64 = 0x40
    NSString *_replayButtonImageName;	// 72 = 0x48
    double _playbackEndButtonSystemImagePointSize;	// 80 = 0x50
    double _playbackEndButtonSystemImageWeight;	// 88 = 0x58
    double _interPlaybackEndButtonSpacing;	// 96 = 0x60
    PXStoryChromeButtonSpec *_playbackEndButtonSpec;	// 104 = 0x68
    double _spacingBetweenPlaybackEndButtonAndTitles;	// 112 = 0x70
    NSDictionary *_chromeTitleAttributes;	// 120 = 0x78
    NSDictionary *_chromeSubtitleAttributes;	// 128 = 0x80
    NSDictionary *_playbackEndTitleAttributes;	// 136 = 0x88
    NSDictionary *_playbackEndSubtitleAttributes;	// 144 = 0x90
    long long _playbackEndChromeTitleNumberOfLines;	// 152 = 0x98
    long long _playbackEndChromeSubtitleNumberOfLines;	// 160 = 0xa0
    long long _browseChromeTitleNumberOfLines;	// 168 = 0xa8
    long long _browseChromeSubtitleNumberOfLines;	// 176 = 0xb0
    long long _generalChromeTitleNumberOfLines;	// 184 = 0xb8
    long long _generalChromeSubtitleNumberOfLines;	// 192 = 0xc0
    double _distanceFromBottomChromeTextToGrid;	// 200 = 0xc8
    double _minimumWidthRequiredForChromeText;	// 208 = 0xd0
    PXExtendedImageConfiguration *_rightEdgeHighlightImageConfiguration;	// 216 = 0xd8
    double _edgeHighlightAlpha;	// 224 = 0xe0
    double _topLegibilityGradientHeight;	// 232 = 0xe8
    double _bottomLegibilityGradientHeight;	// 240 = 0xf0
    PXExtendedImageConfiguration *_legibilityGradientImageConfiguration;	// 248 = 0xf8
    double _distanceFromTopEdgeToTopButtonCenter;	// 256 = 0x100
    double _distanceFromLateralEdgesToTopButtonCenter;	// 264 = 0x108
    double _scrubberAssetCornerRadius;	// 272 = 0x110
    double _scrubberRegularAssetPadding;	// 280 = 0x118
    double _scrubberCurrentAssetPadding;	// 288 = 0x120
    double _scrubberHorizontalLayoutMargin;	// 296 = 0x128
    PXStoryRelatedLayoutMetrics *_relatedLayoutMetrics;	// 304 = 0x130
    NSAttributedString *_relatedAttributedTitle;	// 312 = 0x138
    double _spacingBetweenRelatedTitleAndMainRelated;	// 320 = 0x140
    double _spacingBetweenPlaybackEndTitleAndSubtitle;	// 328 = 0x148
    double _maximumWidthForRelatedTitleAndSubtitle;	// 336 = 0x150
    double _spacingBetweenRelatedNavigationButtonAndRelated;	// 344 = 0x158
    PXStoryChromeButtonSpec *_relatedNavigationChromeButtonSpec;	// 352 = 0x160
    double _canShowRelatedNavigationButton;	// 360 = 0x168
    double _relatedNavigationButtonFadeDuration;	// 368 = 0x170
    double _relatedNavigationButtonSystemImagePointSize;	// 376 = 0x178
    NSNumberFormatter *_upNextCountDownFormatter;	// 384 = 0x180
    NSDictionary *_upNextCountDownAttributes;	// 392 = 0x188
    PXExtendedImageConfiguration *_upNextCountDownDecorationImageConfiguration;	// 400 = 0x190
    double _spacingBetweenRelatedTitleAndUpNextCountDown;	// 408 = 0x198
    double _upNextCountDownVerticalOffset;	// 416 = 0x1a0
    double _upNextCountDownFadeOutDuration;	// 424 = 0x1a8
    double _upNextCountDownAppearDelay;	// 432 = 0x1b0
    double _upNextCountDownInitialVisibleValue;	// 440 = 0x1b8
    unsigned long long _upNextTargetMemoryCount;	// 448 = 0x1c0
    long long _upNextAnimationStyle;	// 456 = 0x1c8
    long long _upNextCountdownPlacement;	// 464 = 0x1d0
    NSDictionary *_styleSwitcherDetailsLabelAttributesA;	// 472 = 0x1d8
    NSDictionary *_styleSwitcherDetailsLabelAttributesAAccessory;	// 480 = 0x1e0
    NSDictionary *_styleSwitcherDetailsLabelAttributesB;	// 488 = 0x1e8
    NSDictionary *_styleSwitcherDetailsLabelAttributesC;	// 496 = 0x1f0
    long long _styleSwitcherChromeArrangement;	// 504 = 0x1f8
    double _styleSwitcherDetailsTitleAccessoryPadding;	// 512 = 0x200
    double _styleSwitcherDistanceBetweenAlbumArtAndLabels;	// 520 = 0x208
    double _styleSwitcherDistanceBetweenEditButtons;	// 528 = 0x210
    UIImage *_styleSwitcherColorGradeNameGlyphImage;	// 536 = 0x218
    double _bufferingIndicatorCornerRadius;	// 544 = 0x220
    double _predictedBrowseChromeTextHeight;	// 552 = 0x228
    double _infoPanelHeight;	// 560 = 0x230
    double _infoPanelAnimationDistance;	// 568 = 0x238
    double _infoPanelAssetAspectRatio;	// 576 = 0x240
    double _infoPanelButtonHeight;	// 584 = 0x248
    double _infoPanelDistanceBetweenAssetAndTitleLabel;	// 592 = 0x250
    double _infoPanelAssetToSymbolCenter;	// 600 = 0x258
    double _infoPanelAssetToMetadataLabel;	// 608 = 0x260
    double _infoPanelFooterLabelBaselineFromBottom;	// 616 = 0x268
    double _infoPanelTitleLabelBaselineFromTop;	// 624 = 0x270
    double _infoPanelTitleToMetadataBaselines;	// 632 = 0x278
    double _infoPanelMetadataToMetadataBaselines;	// 640 = 0x280
    UIImageConfiguration *_chromeTitleMusicSystemImageConfiguration;	// 648 = 0x288
    NSString *_chromeTitleLocalizedSongFormat;	// 656 = 0x290
    struct CGSize _chromeButtonSize;	// 664 = 0x298
    struct CGSize _chromeButtonPadding;	// 680 = 0x2a8
    struct CGSize _playbackEndButtonSize;	// 696 = 0x2b8
    struct CGSize _playbackEndButtonPadding;	// 712 = 0x2c8
    struct CGSize _rightEdgeHighlightImageSize;	// 728 = 0x2d8
    struct CGSize _scrubberRegularAssetSize;	// 744 = 0x2e8
    struct CGSize _relatedTitleSize;	// 760 = 0x2f8
    struct CGSize _relatedNavigationButtonSize;	// 776 = 0x308
    struct CGSize _upNextCountDownSize;	// 792 = 0x318
    struct CGSize _infoPanelButtonOffset;	// 808 = 0x328
    struct UIEdgeInsets _tapNavigationAreaInsets;	// 824 = 0x338
    struct UIEdgeInsets _browseGridLayoutMargins;	// 856 = 0x358
    struct UIEdgeInsets _scrubberFadeAreaInsets;	// 888 = 0x378
    struct UIEdgeInsets _infoPanelMargins;	// 920 = 0x398
    struct UIEdgeInsets _infoPanelPadding;	// 952 = 0x3b8
}

- (void).cxx_destruct;	// IMP=0x0000000000664a68
@property(readonly, nonatomic) NSString *chromeTitleLocalizedSongFormat; // @synthesize chromeTitleLocalizedSongFormat=_chromeTitleLocalizedSongFormat;
@property(readonly, nonatomic) UIImageConfiguration *chromeTitleMusicSystemImageConfiguration; // @synthesize chromeTitleMusicSystemImageConfiguration=_chromeTitleMusicSystemImageConfiguration;
@property(readonly, nonatomic) double infoPanelMetadataToMetadataBaselines; // @synthesize infoPanelMetadataToMetadataBaselines=_infoPanelMetadataToMetadataBaselines;
@property(readonly, nonatomic) double infoPanelTitleToMetadataBaselines; // @synthesize infoPanelTitleToMetadataBaselines=_infoPanelTitleToMetadataBaselines;
@property(readonly, nonatomic) double infoPanelTitleLabelBaselineFromTop; // @synthesize infoPanelTitleLabelBaselineFromTop=_infoPanelTitleLabelBaselineFromTop;
@property(readonly, nonatomic) double infoPanelFooterLabelBaselineFromBottom; // @synthesize infoPanelFooterLabelBaselineFromBottom=_infoPanelFooterLabelBaselineFromBottom;
@property(readonly, nonatomic) double infoPanelAssetToMetadataLabel; // @synthesize infoPanelAssetToMetadataLabel=_infoPanelAssetToMetadataLabel;
@property(readonly, nonatomic) double infoPanelAssetToSymbolCenter; // @synthesize infoPanelAssetToSymbolCenter=_infoPanelAssetToSymbolCenter;
@property(readonly, nonatomic) double infoPanelDistanceBetweenAssetAndTitleLabel; // @synthesize infoPanelDistanceBetweenAssetAndTitleLabel=_infoPanelDistanceBetweenAssetAndTitleLabel;
@property(readonly, nonatomic) double infoPanelButtonHeight; // @synthesize infoPanelButtonHeight=_infoPanelButtonHeight;
@property(readonly, nonatomic) struct CGSize infoPanelButtonOffset; // @synthesize infoPanelButtonOffset=_infoPanelButtonOffset;
@property(readonly, nonatomic) double infoPanelAssetAspectRatio; // @synthesize infoPanelAssetAspectRatio=_infoPanelAssetAspectRatio;
@property(readonly, nonatomic) double infoPanelAnimationDistance; // @synthesize infoPanelAnimationDistance=_infoPanelAnimationDistance;
@property(readonly, nonatomic) double infoPanelHeight; // @synthesize infoPanelHeight=_infoPanelHeight;
@property(readonly, nonatomic) struct UIEdgeInsets infoPanelPadding; // @synthesize infoPanelPadding=_infoPanelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets infoPanelMargins; // @synthesize infoPanelMargins=_infoPanelMargins;
@property(readonly, nonatomic) double predictedBrowseChromeTextHeight; // @synthesize predictedBrowseChromeTextHeight=_predictedBrowseChromeTextHeight;
@property(readonly, nonatomic) double bufferingIndicatorCornerRadius; // @synthesize bufferingIndicatorCornerRadius=_bufferingIndicatorCornerRadius;
@property(readonly, nonatomic) UIImage *styleSwitcherColorGradeNameGlyphImage; // @synthesize styleSwitcherColorGradeNameGlyphImage=_styleSwitcherColorGradeNameGlyphImage;
@property(readonly, nonatomic) _Bool styleSwitcherCanShowEditButtons; // @synthesize styleSwitcherCanShowEditButtons=_styleSwitcherCanShowEditButtons;
@property(readonly, nonatomic) double styleSwitcherDistanceBetweenEditButtons; // @synthesize styleSwitcherDistanceBetweenEditButtons=_styleSwitcherDistanceBetweenEditButtons;
@property(readonly, nonatomic) double styleSwitcherDistanceBetweenAlbumArtAndLabels; // @synthesize styleSwitcherDistanceBetweenAlbumArtAndLabels=_styleSwitcherDistanceBetweenAlbumArtAndLabels;
@property(readonly, nonatomic) double styleSwitcherDetailsTitleAccessoryPadding; // @synthesize styleSwitcherDetailsTitleAccessoryPadding=_styleSwitcherDetailsTitleAccessoryPadding;
@property(readonly, nonatomic) long long styleSwitcherChromeArrangement; // @synthesize styleSwitcherChromeArrangement=_styleSwitcherChromeArrangement;
@property(readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesC; // @synthesize styleSwitcherDetailsLabelAttributesC=_styleSwitcherDetailsLabelAttributesC;
@property(readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesB; // @synthesize styleSwitcherDetailsLabelAttributesB=_styleSwitcherDetailsLabelAttributesB;
@property(readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesAAccessory; // @synthesize styleSwitcherDetailsLabelAttributesAAccessory=_styleSwitcherDetailsLabelAttributesAAccessory;
@property(readonly, nonatomic) NSDictionary *styleSwitcherDetailsLabelAttributesA; // @synthesize styleSwitcherDetailsLabelAttributesA=_styleSwitcherDetailsLabelAttributesA;
@property(readonly, nonatomic) long long upNextCountdownPlacement; // @synthesize upNextCountdownPlacement=_upNextCountdownPlacement;
@property(readonly, nonatomic) long long upNextAnimationStyle; // @synthesize upNextAnimationStyle=_upNextAnimationStyle;
@property(readonly, nonatomic) unsigned long long upNextTargetMemoryCount; // @synthesize upNextTargetMemoryCount=_upNextTargetMemoryCount;
@property(readonly, nonatomic) double upNextCountDownInitialVisibleValue; // @synthesize upNextCountDownInitialVisibleValue=_upNextCountDownInitialVisibleValue;
@property(readonly, nonatomic) double upNextCountDownAppearDelay; // @synthesize upNextCountDownAppearDelay=_upNextCountDownAppearDelay;
@property(readonly, nonatomic) double upNextCountDownFadeOutDuration; // @synthesize upNextCountDownFadeOutDuration=_upNextCountDownFadeOutDuration;
@property(readonly, nonatomic) double upNextCountDownVerticalOffset; // @synthesize upNextCountDownVerticalOffset=_upNextCountDownVerticalOffset;
@property(readonly, nonatomic) double spacingBetweenRelatedTitleAndUpNextCountDown; // @synthesize spacingBetweenRelatedTitleAndUpNextCountDown=_spacingBetweenRelatedTitleAndUpNextCountDown;
@property(readonly, nonatomic) PXExtendedImageConfiguration *upNextCountDownDecorationImageConfiguration; // @synthesize upNextCountDownDecorationImageConfiguration=_upNextCountDownDecorationImageConfiguration;
@property(readonly, nonatomic) NSDictionary *upNextCountDownAttributes; // @synthesize upNextCountDownAttributes=_upNextCountDownAttributes;
@property(readonly, nonatomic) NSNumberFormatter *upNextCountDownFormatter; // @synthesize upNextCountDownFormatter=_upNextCountDownFormatter;
@property(readonly, nonatomic) struct CGSize upNextCountDownSize; // @synthesize upNextCountDownSize=_upNextCountDownSize;
@property(readonly, nonatomic) struct CGSize relatedNavigationButtonSize; // @synthesize relatedNavigationButtonSize=_relatedNavigationButtonSize;
@property(readonly, nonatomic) double relatedNavigationButtonSystemImagePointSize; // @synthesize relatedNavigationButtonSystemImagePointSize=_relatedNavigationButtonSystemImagePointSize;
@property(readonly, nonatomic) double relatedNavigationButtonFadeDuration; // @synthesize relatedNavigationButtonFadeDuration=_relatedNavigationButtonFadeDuration;
@property(readonly, nonatomic) double canShowRelatedNavigationButton; // @synthesize canShowRelatedNavigationButton=_canShowRelatedNavigationButton;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *relatedNavigationChromeButtonSpec; // @synthesize relatedNavigationChromeButtonSpec=_relatedNavigationChromeButtonSpec;
@property(readonly, nonatomic) double spacingBetweenRelatedNavigationButtonAndRelated; // @synthesize spacingBetweenRelatedNavigationButtonAndRelated=_spacingBetweenRelatedNavigationButtonAndRelated;
@property(readonly, nonatomic) double maximumWidthForRelatedTitleAndSubtitle; // @synthesize maximumWidthForRelatedTitleAndSubtitle=_maximumWidthForRelatedTitleAndSubtitle;
@property(readonly, nonatomic) double spacingBetweenPlaybackEndTitleAndSubtitle; // @synthesize spacingBetweenPlaybackEndTitleAndSubtitle=_spacingBetweenPlaybackEndTitleAndSubtitle;
@property(readonly, nonatomic) double spacingBetweenRelatedTitleAndMainRelated; // @synthesize spacingBetweenRelatedTitleAndMainRelated=_spacingBetweenRelatedTitleAndMainRelated;
@property(readonly, nonatomic) NSAttributedString *relatedAttributedTitle; // @synthesize relatedAttributedTitle=_relatedAttributedTitle;
@property(readonly, nonatomic) struct CGSize relatedTitleSize; // @synthesize relatedTitleSize=_relatedTitleSize;
@property(readonly, nonatomic) _Bool shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView; // @synthesize shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView=_shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView;
@property(readonly, nonatomic) PXStoryRelatedLayoutMetrics *relatedLayoutMetrics; // @synthesize relatedLayoutMetrics=_relatedLayoutMetrics;
@property(readonly, nonatomic) struct UIEdgeInsets scrubberFadeAreaInsets; // @synthesize scrubberFadeAreaInsets=_scrubberFadeAreaInsets;
@property(readonly, nonatomic) double scrubberHorizontalLayoutMargin; // @synthesize scrubberHorizontalLayoutMargin=_scrubberHorizontalLayoutMargin;
@property(readonly, nonatomic) struct CGSize scrubberRegularAssetSize; // @synthesize scrubberRegularAssetSize=_scrubberRegularAssetSize;
@property(readonly, nonatomic) double scrubberCurrentAssetPadding; // @synthesize scrubberCurrentAssetPadding=_scrubberCurrentAssetPadding;
@property(readonly, nonatomic) double scrubberRegularAssetPadding; // @synthesize scrubberRegularAssetPadding=_scrubberRegularAssetPadding;
@property(readonly, nonatomic) double scrubberAssetCornerRadius; // @synthesize scrubberAssetCornerRadius=_scrubberAssetCornerRadius;
@property(readonly, nonatomic) double distanceFromLateralEdgesToTopButtonCenter; // @synthesize distanceFromLateralEdgesToTopButtonCenter=_distanceFromLateralEdgesToTopButtonCenter;
@property(readonly, nonatomic) double distanceFromTopEdgeToTopButtonCenter; // @synthesize distanceFromTopEdgeToTopButtonCenter=_distanceFromTopEdgeToTopButtonCenter;
@property(readonly, nonatomic) PXExtendedImageConfiguration *legibilityGradientImageConfiguration; // @synthesize legibilityGradientImageConfiguration=_legibilityGradientImageConfiguration;
@property(readonly, nonatomic) double bottomLegibilityGradientHeight; // @synthesize bottomLegibilityGradientHeight=_bottomLegibilityGradientHeight;
@property(readonly, nonatomic) double topLegibilityGradientHeight; // @synthesize topLegibilityGradientHeight=_topLegibilityGradientHeight;
@property(readonly, nonatomic) double edgeHighlightAlpha; // @synthesize edgeHighlightAlpha=_edgeHighlightAlpha;
@property(readonly, nonatomic) unsigned short rightEdgeHighlightImageVersion; // @synthesize rightEdgeHighlightImageVersion=_rightEdgeHighlightImageVersion;
@property(readonly, nonatomic) struct CGSize rightEdgeHighlightImageSize; // @synthesize rightEdgeHighlightImageSize=_rightEdgeHighlightImageSize;
@property(readonly, nonatomic) PXExtendedImageConfiguration *rightEdgeHighlightImageConfiguration; // @synthesize rightEdgeHighlightImageConfiguration=_rightEdgeHighlightImageConfiguration;
@property(readonly, nonatomic) struct UIEdgeInsets browseGridLayoutMargins; // @synthesize browseGridLayoutMargins=_browseGridLayoutMargins;
@property(readonly, nonatomic) double minimumWidthRequiredForChromeText; // @synthesize minimumWidthRequiredForChromeText=_minimumWidthRequiredForChromeText;
@property(readonly, nonatomic) double distanceFromBottomChromeTextToGrid; // @synthesize distanceFromBottomChromeTextToGrid=_distanceFromBottomChromeTextToGrid;
@property(readonly, nonatomic) long long generalChromeSubtitleNumberOfLines; // @synthesize generalChromeSubtitleNumberOfLines=_generalChromeSubtitleNumberOfLines;
@property(readonly, nonatomic) long long generalChromeTitleNumberOfLines; // @synthesize generalChromeTitleNumberOfLines=_generalChromeTitleNumberOfLines;
@property(readonly, nonatomic) long long browseChromeSubtitleNumberOfLines; // @synthesize browseChromeSubtitleNumberOfLines=_browseChromeSubtitleNumberOfLines;
@property(readonly, nonatomic) long long browseChromeTitleNumberOfLines; // @synthesize browseChromeTitleNumberOfLines=_browseChromeTitleNumberOfLines;
@property(readonly, nonatomic) long long playbackEndChromeSubtitleNumberOfLines; // @synthesize playbackEndChromeSubtitleNumberOfLines=_playbackEndChromeSubtitleNumberOfLines;
@property(readonly, nonatomic) long long playbackEndChromeTitleNumberOfLines; // @synthesize playbackEndChromeTitleNumberOfLines=_playbackEndChromeTitleNumberOfLines;
@property(readonly, nonatomic) _Bool shouldUseAssetCollectionForTitleAndSubtitle; // @synthesize shouldUseAssetCollectionForTitleAndSubtitle=_shouldUseAssetCollectionForTitleAndSubtitle;
@property(readonly, nonatomic) NSDictionary *playbackEndSubtitleAttributes; // @synthesize playbackEndSubtitleAttributes=_playbackEndSubtitleAttributes;
@property(readonly, nonatomic) NSDictionary *playbackEndTitleAttributes; // @synthesize playbackEndTitleAttributes=_playbackEndTitleAttributes;
@property(readonly, nonatomic) NSDictionary *chromeSubtitleAttributes; // @synthesize chromeSubtitleAttributes=_chromeSubtitleAttributes;
@property(readonly, nonatomic) NSDictionary *chromeTitleAttributes; // @synthesize chromeTitleAttributes=_chromeTitleAttributes;
@property(readonly, nonatomic) double spacingBetweenPlaybackEndButtonAndTitles; // @synthesize spacingBetweenPlaybackEndButtonAndTitles=_spacingBetweenPlaybackEndButtonAndTitles;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *playbackEndButtonSpec; // @synthesize playbackEndButtonSpec=_playbackEndButtonSpec;
@property(readonly, nonatomic) struct CGSize playbackEndButtonPadding; // @synthesize playbackEndButtonPadding=_playbackEndButtonPadding;
@property(readonly, nonatomic) _Bool onlyShowReplayEndButtonAtTopOfTitle; // @synthesize onlyShowReplayEndButtonAtTopOfTitle=_onlyShowReplayEndButtonAtTopOfTitle;
@property(readonly, nonatomic) _Bool shouldHorizontallyCenterPlaybackEndButtons; // @synthesize shouldHorizontallyCenterPlaybackEndButtons=_shouldHorizontallyCenterPlaybackEndButtons;
@property(readonly, nonatomic) double interPlaybackEndButtonSpacing; // @synthesize interPlaybackEndButtonSpacing=_interPlaybackEndButtonSpacing;
@property(readonly, nonatomic) double playbackEndButtonSystemImageWeight; // @synthesize playbackEndButtonSystemImageWeight=_playbackEndButtonSystemImageWeight;
@property(readonly, nonatomic) double playbackEndButtonSystemImagePointSize; // @synthesize playbackEndButtonSystemImagePointSize=_playbackEndButtonSystemImagePointSize;
@property(readonly, nonatomic) struct CGSize playbackEndButtonSize; // @synthesize playbackEndButtonSize=_playbackEndButtonSize;
@property(readonly, nonatomic) NSString *replayButtonImageName; // @synthesize replayButtonImageName=_replayButtonImageName;
@property(readonly, nonatomic) PXStoryPlayButtonSpec *playButtonSpec; // @synthesize playButtonSpec=_playButtonSpec;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *chromeButtonSpec; // @synthesize chromeButtonSpec=_chromeButtonSpec;
@property(readonly, nonatomic) _Bool shouldVerticallyCenterPlayButton; // @synthesize shouldVerticallyCenterPlayButton=_shouldVerticallyCenterPlayButton;
@property(readonly, nonatomic) _Bool shouldHorizontallyCenterPlayButton; // @synthesize shouldHorizontallyCenterPlayButton=_shouldHorizontallyCenterPlayButton;
@property(readonly, nonatomic) struct CGSize chromeButtonPadding; // @synthesize chromeButtonPadding=_chromeButtonPadding;
@property(readonly, nonatomic) double interChromeButtonSpacing; // @synthesize interChromeButtonSpacing=_interChromeButtonSpacing;
@property(readonly, nonatomic) struct CGSize chromeButtonSize; // @synthesize chromeButtonSize=_chromeButtonSize;
@property(readonly, nonatomic) double tapNavigationAreaWidth; // @synthesize tapNavigationAreaWidth=_tapNavigationAreaWidth;
@property(readonly, nonatomic) struct UIEdgeInsets tapNavigationAreaInsets; // @synthesize tapNavigationAreaInsets=_tapNavigationAreaInsets;
@property(readonly, nonatomic) unsigned long long fullsizePlayerDefaultChromeItems; // @synthesize fullsizePlayerDefaultChromeItems=_fullsizePlayerDefaultChromeItems;
@property(readonly, nonatomic) _Bool canShowStyleSwitcherButton; // @synthesize canShowStyleSwitcherButton=_canShowStyleSwitcherButton;
@property(readonly, nonatomic) _Bool canShowCloseButton; // @synthesize canShowCloseButton=_canShowCloseButton;
@property(readonly, nonatomic) _Bool shouldUseUnifiedButtonLayout; // @synthesize shouldUseUnifiedButtonLayout=_shouldUseUnifiedButtonLayout;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (double)_predictedChromeTextBoxHeightWithAttributes:(id)arg1 numberOfLines:(long long)arg2;	// IMP=0x0000000000664214
- (double)_calculatePredictedBrowseChromeTextHeight;	// IMP=0x00000000006640b6
- (id)chromeSongAttributedStringWithTitle:(id)arg1 artist:(id)arg2;	// IMP=0x0000000000663e5f
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000663e4a
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 storyConfigurationOptions:(unsigned long long)arg3;	// IMP=0x0000000000661e5a

// Remaining properties
@property(readonly, nonatomic) unsigned long long hash;

@end
