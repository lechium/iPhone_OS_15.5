//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, NSArray, PXLivePhotoTrimScrubberHiddenAnimationHelper, PXLivePhotoTrimScrubberLoupeView, PXLivePhotoTrimScrubberSpec, PXTrimScrubberLayoutHelper, UIImage, UIImageView;
@protocol PXLivePhotoTrimScrubberDelegate, PXLivePhotoTrimScrubberFilmStripView;

@interface PXLivePhotoTrimScrubber : UIView
{
    PXLivePhotoTrimScrubberLoupeView *_photoLoupe;	// 8 = 0x8
    UIView *_filmstripContainerView;	// 16 = 0x10
    UIView<PXLivePhotoTrimScrubberFilmStripView> *_filmstripView;	// 24 = 0x18
    UIView *_disabledOverlayView;	// 32 = 0x20
    struct {
        _Bool respondsToDidTapElement;
        _Bool respondsToDidBeginInteractivelyEditingElement;
        _Bool respondsToCanBeginInteractivelyEditingElement;
        _Bool respondsToDidEndInteractivelyEditingElement;
        _Bool respondsToDidChangeTimeForElement;
        _Bool respondsToAssetDurationDidChange;
        _Bool respondsToDidChangeLoupeRect;
        _Bool respondsToDidZoomToMinimumValueMaximumValue;
        _Bool respondsToDidUnzoom;
        _Bool respondsToDidLayoutSubviews;
        _Bool respondsToDebugStartRect;
        _Bool respondsToDebugEndRect;
        _Bool respondsToDebugStartOffset;
        _Bool respondsToDebugEndOffset;
    } _delegateFlags;	// 40 = 0x28
    NSArray *_keyTimeSnappingControllers;	// 56 = 0x38
    NSArray *_startTimeSnappingControllers;	// 64 = 0x40
    NSArray *_endTimeSnappingControllers;	// 72 = 0x48
    NSArray *_focusEventSnappingControllers;	// 80 = 0x50
    _Bool _hasPresentedControls;	// 88 = 0x58
    CDStruct_1b6d18a9 _photoTrimBuffer;	// 92 = 0x5c
    long long _changeDepth;	// 120 = 0x78
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_loupeHiddenHelper;	// 128 = 0x80
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_trimControlHiddenHelper;	// 136 = 0x88
    UIView *_debugStartTimeView;	// 144 = 0x90
    UIView *_debugLoupeTimeView;	// 152 = 0x98
    UIView *_debugEndTimeView;	// 160 = 0xa0
    _Bool _disabled;	// 168 = 0xa8
    _Bool _useMiniScrubber;	// 169 = 0xa9
    _Bool _allowZoom;	// 170 = 0xaa
    _Bool _showVideoScrubberDebugOverlay;	// 171 = 0xab
    UIView *_preTrimOverlayView;	// 176 = 0xb0
    UIView *_postTrimOverlayView;	// 184 = 0xb8
    PXLivePhotoTrimScrubberSpec *_spec;	// 192 = 0xc0
    Class _filmStripViewClass;	// 200 = 0xc8
    AVAsset *_asset;	// 208 = 0xd0
    AVVideoComposition *_videoComposition;	// 216 = 0xd8
    UIImage *_placeholderImage;	// 224 = 0xe0
    double _horizontalInset;	// 232 = 0xe8
    unsigned long long _playheadStyle;	// 240 = 0xf0
    NSArray *_snapKeyTimes;	// 248 = 0xf8
    NSArray *_snapTrimStartTimes;	// 256 = 0x100
    NSArray *_snapTrimEndTimes;	// 264 = 0x108
    NSArray *_focusEventTimes;	// 272 = 0x110
    id <PXLivePhotoTrimScrubberDelegate> _delegate;	// 280 = 0x118
    double __contentAspectRatio;	// 288 = 0x120
    long long __trackingElement;	// 296 = 0x128
    long long _state;	// 304 = 0x130
    PXTrimScrubberLayoutHelper *_layoutHelper;	// 312 = 0x138
    UIImageView *_trimStartHandle;	// 320 = 0x140
    UIImageView *_trimEndHandle;	// 328 = 0x148
    CDStruct_1b6d18a9 _untrimmedDuration;	// 336 = 0x150
    CDStruct_1b6d18a9 _keyTime;	// 360 = 0x168
    CDStruct_1b6d18a9 _suggestedKeyTime;	// 384 = 0x180
    CDStruct_1b6d18a9 _trimStartTime;	// 408 = 0x198
    CDStruct_1b6d18a9 _trimEndTime;	// 432 = 0x1b0
    CDStruct_1b6d18a9 _originalStartTime;	// 456 = 0x1c8
    CDStruct_1b6d18a9 _originalEndTime;	// 480 = 0x1e0
    CDStruct_1b6d18a9 _minimumTrimLength;	// 504 = 0x1f8
}

+ (id)trimEndHighlightedImageMini;	// IMP=0x000000000090d0ee
+ (id)trimEndImageMini;	// IMP=0x000000000090d0e6
+ (id)trimStartHighlightedImageMini;	// IMP=0x000000000090d0de
+ (id)trimStartImageMini;	// IMP=0x000000000090d0d6
+ (id)trimEndHighlightedImage;	// IMP=0x000000000090d0ce
+ (id)trimStartHighlightedImage;	// IMP=0x000000000090d0c6
+ (id)trimEndImage;	// IMP=0x000000000090d0be
+ (id)trimStartImage;	// IMP=0x000000000090d0b6
+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;	// IMP=0x000000000090d07b
+ (id)_createSnappingControllersForKeytimes:(id)arg1;	// IMP=0x000000000090cdcc
- (void).cxx_destruct;	// IMP=0x000000000090c1b8
@property(nonatomic) CDStruct_1b6d18a9 minimumTrimLength; // @synthesize minimumTrimLength=_minimumTrimLength;
@property(nonatomic) _Bool showVideoScrubberDebugOverlay; // @synthesize showVideoScrubberDebugOverlay=_showVideoScrubberDebugOverlay;
@property(readonly, nonatomic) UIImageView *trimEndHandle; // @synthesize trimEndHandle=_trimEndHandle;
@property(readonly, nonatomic) UIImageView *trimStartHandle; // @synthesize trimStartHandle=_trimStartHandle;
@property(retain, nonatomic) PXTrimScrubberLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, setter=_setTrackingElement:) long long _trackingElement; // @synthesize _trackingElement=__trackingElement;
@property(nonatomic, setter=_setContentAspectRatio:) double _contentAspectRatio; // @synthesize _contentAspectRatio=__contentAspectRatio;
@property(nonatomic) _Bool allowZoom; // @synthesize allowZoom=_allowZoom;
@property(nonatomic) _Bool useMiniScrubber; // @synthesize useMiniScrubber=_useMiniScrubber;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <PXLivePhotoTrimScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) CDStruct_1b6d18a9 originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) CDStruct_1b6d18a9 trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(nonatomic) CDStruct_1b6d18a9 trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) CDStruct_1b6d18a9 suggestedKeyTime; // @synthesize suggestedKeyTime=_suggestedKeyTime;
@property(copy, nonatomic) NSArray *focusEventTimes; // @synthesize focusEventTimes=_focusEventTimes;
@property(copy, nonatomic) NSArray *snapTrimEndTimes; // @synthesize snapTrimEndTimes=_snapTrimEndTimes;
@property(copy, nonatomic) NSArray *snapTrimStartTimes; // @synthesize snapTrimStartTimes=_snapTrimStartTimes;
@property(copy, nonatomic) NSArray *snapKeyTimes; // @synthesize snapKeyTimes=_snapKeyTimes;
@property(nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic, setter=_setUntrimmedDuration:) CDStruct_1b6d18a9 untrimmedDuration; // @synthesize untrimmedDuration=_untrimmedDuration;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) Class filmStripViewClass; // @synthesize filmStripViewClass=_filmStripViewClass;
@property(retain, nonatomic) PXLivePhotoTrimScrubberSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) UIView *_postTrimOverlayView; // @synthesize _postTrimOverlayView;
@property(readonly, nonatomic) UIView *_preTrimOverlayView; // @synthesize _preTrimOverlayView;
@property(readonly, nonatomic) UIView *photoLoupe; // @synthesize photoLoupe=_photoLoupe;
- (void)impactOccured;	// IMP=0x000000000090be4e
- (void)prepareForImpact;	// IMP=0x000000000090be48
- (struct CGRect)backingAlignedRectForRect:(struct CGRect)arg1;	// IMP=0x000000000090be30
- (void)_releaseAVObjects;	// IMP=0x000000000090bddc
- (struct CGRect)_disabledOverlayFrame;	// IMP=0x000000000090bc40
- (void)_trimHandleDidReachBounds;	// IMP=0x000000000090bc2e
- (void)_presentControlsIfNeeded;	// IMP=0x000000000090bb89
- (void)_setTrimControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000090bb6c
- (void)_setPhotoLoupeHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000090bb4f
- (id)_snapTimesForElement:(long long)arg1;	// IMP=0x000000000090b9f0
- (id)_snappingControllersForElement:(long long)arg1;	// IMP=0x000000000090b954
- (void)_updateFocusEventSnappingControllers;	// IMP=0x000000000090b8ef
- (void)_updateEndTimeSnappingControllers;	// IMP=0x000000000090b87c
- (void)_updateStartTimeSnappingControllers;	// IMP=0x000000000090b809
- (void)_updateKeyTimeSnappingControllers;	// IMP=0x000000000090b6f2
- (void)_updateContentAspectRatio;	// IMP=0x000000000090b2e0
- (void)_assetDidLoadValues;	// IMP=0x000000000090b0c9
- (void)handleEndTracking:(_Bool)arg1;	// IMP=0x000000000090ae84
- (void)handleChangeTrackingAtLocation:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;	// IMP=0x000000000090ab7d
- (CDStruct_1b6d18a9)_clampTimeToViewportIfZoomed:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000090aa67
@property(readonly, nonatomic) CDStruct_1b6d18a9 viewportMaxTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 viewportMinTime;
- (void)handleBeginTrackingAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000090a2e9
- (void)handleLongPressWithElement:(long long)arg1;	// IMP=0x000000000090a249
- (void)handleTapWithElement:(long long)arg1;	// IMP=0x000000000090a1e1
- (void)handleSetKeyTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000909ffd
- (CDStruct_1b6d18a9)_timeAtLocation:(struct CGPoint)arg1 forElement:(long long)arg2;	// IMP=0x0000000000909f25
- (CDStruct_1b6d18a9)timeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000909ea5
- (double)offsetForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000909e44
- (double)_offsetForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000909c0c
- (void)_updateSpecDependentUI;	// IMP=0x0000000000909816
- (void)_PXLivePhotoTrimScrubber_commonInit;	// IMP=0x0000000000909112
- (void)_zoomAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000908f91
- (void)_zoomAtTrackedElement;	// IMP=0x0000000000908f1f
- (void)_zoomDelayed;	// IMP=0x0000000000908ed2
- (void)_updateZoomState:(_Bool)arg1;	// IMP=0x0000000000908ddc
- (void)_setupZoom;	// IMP=0x0000000000908d6a
- (void)unzoom;	// IMP=0x0000000000908c56
- (_Bool)tryZoomAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000908bf2
@property(readonly, nonatomic) struct CGRect loupeRect;
@property(readonly, nonatomic) long long currentlyInteractingElement;
@property(readonly, nonatomic, getter=isAssetDurationLoaded) _Bool assetDurationLoaded;
- (double)horizontalOffsetForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000090882c
- (CDStruct_1b6d18a9)timeForElement:(long long)arg1;	// IMP=0x000000000090879f
@property(readonly, nonatomic) long long trimStatus;
- (void)performAnimatedChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000908558
- (void)_animateChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000908530
- (void)_updateTrimHandles;	// IMP=0x0000000000908325
- (void)setPlayheadStyle:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x00000000009080c0
- (struct CGRect)_keyHandleRect;	// IMP=0x0000000000907b9a
- (_Bool)isValidKeyTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000907373
- (void)_setKeyTime:(CDStruct_1b6d18a9)arg1 canHaveImpact:(_Bool)arg2;	// IMP=0x0000000000907118
@property(retain, nonatomic) UIView *loupePlayerView;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;	// IMP=0x0000000000906cb9
- (void)layoutSubviews;	// IMP=0x00000000009066b0
- (void)_newScrubberLayoutSubviews;	// IMP=0x0000000000905699
- (id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2;	// IMP=0x00000000009055ac

@end
