//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUBrowsingAnimatedImagePlayerChange, PUBrowsingIrisPlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange
{
    _Bool _assetChanged;	// 8 = 0x8
    _Bool _assetContentChanged;	// 9 = 0x9
    _Bool _modelTileTransformChanged;	// 10 = 0xa
    _Bool _isUserTransformingTileDidChange;	// 11 = 0xb
    _Bool _focusValueChanged;	// 12 = 0xc
    _Bool _loadingStatusChanged;	// 13 = 0xd
    _Bool _saveProgressChanged;	// 14 = 0xe
    _Bool _saveStateChanged;	// 15 = 0xf
    _Bool _importStateChanged;	// 16 = 0x10
    _Bool _forceBadgesVisibleChanged;	// 17 = 0x11
    _Bool _badgeInfoChanged;	// 18 = 0x12
    _Bool _isUpdatingDisplayedContentChanged;	// 19 = 0x13
    _Bool _isFavoriteChanged;	// 20 = 0x14
    _Bool _isAssetSyndicationStateChanged;	// 21 = 0x15
    _Bool _accessoryViewVisibilityChanged;	// 22 = 0x16
    _Bool _isAccessoryViewDoneAnimatingInChanged;	// 23 = 0x17
    _Bool _contentOffsetChanged;	// 24 = 0x18
    _Bool _isInEditModeChanged;	// 25 = 0x19
    _Bool _toggleCTMChanged;	// 26 = 0x1a
    _Bool _flippingFullSizeRenderStateChanged;	// 27 = 0x1b
    _Bool _revealsGainMapImageChanged;	// 28 = 0x1c
    _Bool _isPresentedForPreviewChanged;	// 29 = 0x1d
    PUBrowsingVideoPlayerChange *_videoPlayerChange;	// 32 = 0x20
    PUBrowsingIrisPlayerChange *_irisPlayerChange;	// 40 = 0x28
    PUBrowsingAnimatedImagePlayerChange *_animatedImageChange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000aa10d
@property(nonatomic, setter=_setIsPresentedForPreviewChanged:) _Bool isPresentedForPreviewChanged; // @synthesize isPresentedForPreviewChanged=_isPresentedForPreviewChanged;
@property(nonatomic) _Bool revealsGainMapImageChanged; // @synthesize revealsGainMapImageChanged=_revealsGainMapImageChanged;
@property(nonatomic, setter=_setFlippingFullSizeRenderStateChanged:) _Bool flippingFullSizeRenderStateChanged; // @synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged;
@property(nonatomic, setter=_setToggleCTMChanged:) _Bool toggleCTMChanged; // @synthesize toggleCTMChanged=_toggleCTMChanged;
@property(nonatomic, setter=_setIsInEditModeChanged:) _Bool isInEditModeChanged; // @synthesize isInEditModeChanged=_isInEditModeChanged;
@property(nonatomic, setter=_setContentOffsetChanged:) _Bool contentOffsetChanged; // @synthesize contentOffsetChanged=_contentOffsetChanged;
@property(nonatomic, setter=_setIsAccessoryViewDoneAnimatingInChangedChanged:) _Bool isAccessoryViewDoneAnimatingInChanged; // @synthesize isAccessoryViewDoneAnimatingInChanged=_isAccessoryViewDoneAnimatingInChanged;
@property(nonatomic, setter=_setAccessoryViewVisibilityChanged:) _Bool accessoryViewVisibilityChanged; // @synthesize accessoryViewVisibilityChanged=_accessoryViewVisibilityChanged;
@property(nonatomic, setter=_setIsAssetSyndicationStateChanged:) _Bool isAssetSyndicationStateChanged; // @synthesize isAssetSyndicationStateChanged=_isAssetSyndicationStateChanged;
@property(nonatomic, setter=_setIsFavoriteChanged:) _Bool isFavoriteChanged; // @synthesize isFavoriteChanged=_isFavoriteChanged;
@property(nonatomic, setter=_setIsUpdatingDisplayedContentChanged:) _Bool isUpdatingDisplayedContentChanged; // @synthesize isUpdatingDisplayedContentChanged=_isUpdatingDisplayedContentChanged;
@property(retain, nonatomic, setter=_setAnimatedImageChange:) PUBrowsingAnimatedImagePlayerChange *animatedImageChange; // @synthesize animatedImageChange=_animatedImageChange;
@property(nonatomic, setter=_setBadgeInfoChanged:) _Bool badgeInfoChanged; // @synthesize badgeInfoChanged=_badgeInfoChanged;
@property(retain, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange; // @synthesize irisPlayerChange=_irisPlayerChange;
@property(nonatomic, setter=_setForceBadgesVisibleChanged:) _Bool forceBadgesVisibleChanged; // @synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged;
@property(retain, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange; // @synthesize videoPlayerChange=_videoPlayerChange;
@property(nonatomic, setter=_setImportStateChanged:) _Bool importStateChanged; // @synthesize importStateChanged=_importStateChanged;
@property(nonatomic, setter=_setSaveStateChanged:) _Bool saveStateChanged; // @synthesize saveStateChanged=_saveStateChanged;
@property(nonatomic, setter=_setSaveProgressChanged:) _Bool saveProgressChanged; // @synthesize saveProgressChanged=_saveProgressChanged;
@property(nonatomic, setter=_setLoadingStatusChanged:) _Bool loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
@property(nonatomic, setter=_setFocusValueChanged:) _Bool focusValueChanged; // @synthesize focusValueChanged=_focusValueChanged;
@property(nonatomic, setter=_setUserTransformingTileDidChange:) _Bool isUserTransformingTileDidChange; // @synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange;
@property(nonatomic, setter=_setModelTileTransformChanged:) _Bool modelTileTransformChanged; // @synthesize modelTileTransformChanged=_modelTileTransformChanged;
@property(nonatomic, setter=_setAssetContentChanged:) _Bool assetContentChanged; // @synthesize assetContentChanged=_assetContentChanged;
@property(nonatomic, setter=_setAssetChanged:) _Bool assetChanged; // @synthesize assetChanged=_assetChanged;
- (_Bool)hasChanges;	// IMP=0x00000000000a9b19

@end

