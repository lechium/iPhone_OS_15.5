//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/CLKUIQuadViewHierarchyObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationDisplayWrapperViewAnimationDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravelModuleViewTapClient-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>
#import <NanoTimeKitCompanion/PUICCrownInputSequencerDelegate-Protocol.h>

@class CAFilter, CLKDevice, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NTKContainerView, NTKExtraLargeTimeView, NTKFaceColorPalette, NTKInterpolatedColorPalette, NTKTimeTravelModuleView, UIColor, UIImage, UIImageView;
@protocol NTKFaceViewComplicationFactory, NTKFaceViewDelegate, NTKTimeView;

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, CLKUIQuadViewHierarchyObserver, NTKContainerViewLayoutDelegate, CLKMonochromeFilterProvider, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKTimeView, NTKClockHardwareInput>
{
    double _accumulatedTimeTravelEntryRotation;	// 8 = 0x8
    NSTimer *_accumulateTimeTravelEntryRotationTimeoutTimer;	// 16 = 0x10
    NSTimer *_fastCrownModeTimeoutTimer;	// 24 = 0x18
    _Bool _fastCrownMode;	// 32 = 0x20
    _Bool _transitioningBetweenLiveAndScrubbing;	// 33 = 0x21
    _Bool _wasScrubbingAtStartOfTransition;	// 34 = 0x22
    _Bool _canHandleHardwareEvents;	// 35 = 0x23
    NSDate *_timeTravelEnterDate;	// 40 = 0x28
    NSDate *_scrubDate;	// 48 = 0x30
    NTKTimeTravelModuleView *_timeTravelModuleView;	// 56 = 0x38
    UIView *_timeTravelCaptionView;	// 64 = 0x40
    UIImage *_timeTravelCaptionImage;	// 72 = 0x48
    double _timeTravelDistanceToYesterdayStart;	// 80 = 0x50
    double _timeTravelDistanceToTomorrowEnd;	// 88 = 0x58
    NSDate *_yesterdayStart;	// 96 = 0x60
    NSDate *_tomorrowEnd;	// 104 = 0x68
    NSTimer *_crownIdleTimer;	// 112 = 0x70
    double _lastCrownOffset;	// 120 = 0x78
    NSDate *_analyticsTimeTravelSessionStart;	// 128 = 0x80
    double _analyticsTimeTravelMaximumOffset;	// 136 = 0x88
    _Bool _statusIconVisible;	// 144 = 0x90
    NTKExtraLargeTimeView *_sensitiveUIShieldView;	// 152 = 0x98
    NTKFaceColorPalette *_faceColorPalette;	// 160 = 0xa0
    NTKInterpolatedColorPalette *_interpolatedColorPalette;	// 168 = 0xa8
    NSMutableSet *_allSubQuadViews;	// 176 = 0xb0
    NSMutableDictionary *_complicationDisplayWrappers;	// 184 = 0xb8
    NSMutableDictionary *_complicationLayouts;	// 192 = 0xc0
    NSMutableDictionary *_editConfigurations;	// 200 = 0xc8
    NSMutableSet *_hiddenComplicationSlots;	// 208 = 0xd0
    NSString *_timeTravelCaptionKey;	// 216 = 0xd8
    struct CGSize _boundsSizeForComputedLayouts;	// 224 = 0xe0
    NTKContainerView *_foregroundContainerView;	// 240 = 0xf0
    NSDate *_overrideDate;	// 248 = 0xf8
    _Bool _needsRender;	// 256 = 0x100
    _Bool _needsImageQueueDiscardOnRender;	// 257 = 0x101
    _Bool _removedFromWindowDuringThisTransaction;	// 258 = 0x102
    _Bool _unadornedSnapshotRemoved;	// 259 = 0x103
    float _complicationEditingSaturationValue;	// 260 = 0x104
    CAFilter *_complicationEditingSaturationFilter;	// 264 = 0x108
    _Bool _shouldShowUnsnapshotableContent;	// 272 = 0x110
    _Bool _showsCanonicalContent;	// 273 = 0x111
    _Bool _showContentForUnadornedSnapshot;	// 274 = 0x112
    _Bool _showsLockedUI;	// 275 = 0x113
    _Bool _zooming;	// 276 = 0x114
    _Bool _everyComplicationHidden;	// 277 = 0x115
    _Bool _frozen;	// 278 = 0x116
    _Bool _slow;	// 279 = 0x117
    _Bool _orbing;	// 280 = 0x118
    _Bool _complicationsShowEditingContent;	// 281 = 0x119
    _Bool _timeScrubbing;	// 282 = 0x11a
    _Bool _editing;	// 283 = 0x11b
    UIView *_contentView;	// 288 = 0x120
    UIView *_complicationContainerView;	// 296 = 0x128
    UIView *_rootContainerView;	// 304 = 0x130
    UIColor *_alternateComplicationColor;	// 312 = 0x138
    UIColor *_complicationColor;	// 320 = 0x140
    UIColor *_interpolatedComplicationColor;	// 328 = 0x148
    long long _faceStyle;	// 336 = 0x150
    CLKDevice *_device;	// 344 = 0x158
    NSString *_clientIdentifier;	// 352 = 0x160
    long long _dataMode;	// 360 = 0x168
    id <NTKFaceViewDelegate> _delegate;	// 368 = 0x170
    UIView *_unadornedSnapshotView;	// 376 = 0x178
    UIImageView *_switcherSnapshotView;	// 384 = 0x180
    id <NTKFaceViewComplicationFactory> _complicationFactory;	// 392 = 0x188
    NSString *_resourceDirectory;	// 400 = 0x190
    NSString *_selectedComplicationSlot;	// 408 = 0x198
    long long _detailMode;	// 416 = 0x1a0
    UIView<NTKTimeView> *_timeView;	// 424 = 0x1a8
    long long _fromEditMode;	// 432 = 0x1b0
    long long _toEditMode;	// 440 = 0x1b8
    double _editModeTransitionFraction;	// 448 = 0x1c0
}

+ (id)pigmentFromOption:(id)arg1;	// IMP=0x00000000002edd99
+ (long long)numberOfDetailModesForFaceStyle:(long long)arg1;	// IMP=0x00000000002edb8a
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 color:(id)arg3 size:(struct CGSize)arg4;	// IMP=0x00000000002e8c7e
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000002e89ab
+ (id)_prewarmSharedData;	// IMP=0x00000000002e7a6f
+ (void)_prewarmForDevice:(id)arg1;	// IMP=0x00000000002e7a69
+ (id)swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000002e6782
+ (long long)uiSensitivity;	// IMP=0x00000000002e3737
+ (id)newFaceViewForFace:(id)arg1;	// IMP=0x00000000002e2f86
- (void).cxx_destruct;	// IMP=0x00000000002ee3c5
@property(readonly, nonatomic) double editModeTransitionFraction; // @synthesize editModeTransitionFraction=_editModeTransitionFraction;
@property(readonly, nonatomic) long long toEditMode; // @synthesize toEditMode=_toEditMode;
@property(readonly, nonatomic) long long fromEditMode; // @synthesize fromEditMode=_fromEditMode;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView<NTKTimeView> *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long detailMode; // @synthesize detailMode=_detailMode;
@property(readonly) _Bool timeScrubbing; // @synthesize timeScrubbing=_timeScrubbing;
@property(retain, nonatomic) NSString *selectedComplicationSlot; // @synthesize selectedComplicationSlot=_selectedComplicationSlot;
@property(retain, nonatomic) NSMutableDictionary *editConfigurations; // @synthesize editConfigurations=_editConfigurations;
@property(nonatomic) _Bool complicationsShowEditingContent; // @synthesize complicationsShowEditingContent=_complicationsShowEditingContent;
@property(readonly, nonatomic) _Bool orbing; // @synthesize orbing=_orbing;
@property(nonatomic, getter=isSlow) _Bool slow; // @synthesize slow=_slow;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isEveryComplicationHidden) _Bool everyComplicationHidden; // @synthesize everyComplicationHidden=_everyComplicationHidden;
@property(copy, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(retain, nonatomic) id <NTKFaceViewComplicationFactory> complicationFactory; // @synthesize complicationFactory=_complicationFactory;
@property(readonly, nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
@property(retain, nonatomic) UIImageView *switcherSnapshotView; // @synthesize switcherSnapshotView=_switcherSnapshotView;
@property(retain, nonatomic) UIView *unadornedSnapshotView; // @synthesize unadornedSnapshotView=_unadornedSnapshotView;
@property(nonatomic) __weak id <NTKFaceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(nonatomic) _Bool showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool shouldShowUnsnapshotableContent; // @synthesize shouldShowUnsnapshotableContent=_shouldShowUnsnapshotableContent;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long faceStyle; // @synthesize faceStyle=_faceStyle;
@property(retain, nonatomic) UIColor *interpolatedComplicationColor; // @synthesize interpolatedComplicationColor=_interpolatedComplicationColor;
@property(retain, nonatomic) UIColor *complicationColor; // @synthesize complicationColor=_complicationColor;
@property(retain, nonatomic) UIColor *alternateComplicationColor; // @synthesize alternateComplicationColor=_alternateComplicationColor;
@property(retain, nonatomic) UIView *rootContainerView; // @synthesize rootContainerView=_rootContainerView;
@property(retain, nonatomic) UIView *complicationContainerView; // @synthesize complicationContainerView=_complicationContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *foregroundContainerView; // @synthesize foregroundContainerView=_foregroundContainerView;
@property(readonly, nonatomic) NTKInterpolatedColorPalette *interpolatedColorPalette;
@property(readonly, nonatomic) NTKFaceColorPalette *faceColorPalette;
- (void)_updateFaceColorPaletteWithOption:(id)arg1 mode:(long long)arg2;	// IMP=0x00000000002eddfc
- (id)createFaceColorPalette;	// IMP=0x00000000002edd49
- (void)changeComplicationsAlpha:(double)arg1;	// IMP=0x00000000002edcfa
- (id)interpolatedColorForView:(id)arg1;	// IMP=0x00000000002edce8
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;	// IMP=0x00000000002edcb6
- (id)filterForView:(id)arg1 style:(long long)arg2;	// IMP=0x00000000002edc2d
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;	// IMP=0x00000000002edb9a
- (id)_additionalPrelaunchApplicationIdentifiers;	// IMP=0x00000000002edb92
- (void)_setComplicationEditingSaturationValue:(float)arg1;	// IMP=0x00000000002edb6c
- (void)_updateSaturationForComplicationEditing;	// IMP=0x00000000002ed869
- (void)_addSaturationFilterToViews:(id)arg1;	// IMP=0x00000000002ed3ba
- (id)_allViewsWithComplicationEditingDesaturationFilter;	// IMP=0x00000000002ed235
- (void)_resetSequencerBoundaries;	// IMP=0x00000000002ed22f
- (void)_prepareScrubbingSequencerBoundaries;	// IMP=0x00000000002ed229
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;	// IMP=0x00000000002ed221
- (_Bool)_wheelChangedWithEvent:(id)arg1;	// IMP=0x00000000002ed219
- (void)_disableCrown;	// IMP=0x00000000002ed208
- (void)_enableCrown;	// IMP=0x00000000002ed1f7
- (struct UIEdgeInsets)timeTravelModuleTouchInsets;	// IMP=0x00000000002ecfb7
- (void)performTimeTravelModuleTapAction;	// IMP=0x00000000002ecf7b
- (void)_layoutTimeTravelCaptionView:(id)arg1;	// IMP=0x00000000002ece54
- (void)_layoutTimeTravelStatusModule:(id)arg1;	// IMP=0x00000000002ecd7e
- (struct CGPoint)_timeTravelStatusModuleCenter;	// IMP=0x00000000002ecce8
- (_Bool)_wantsTimeTravelStatusModule;	// IMP=0x00000000002ecce0
- (void)applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;	// IMP=0x00000000002eccce
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002eccc3
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ec751
- (void)endScrubbingAnimated:(_Bool)arg1;	// IMP=0x00000000002ec4eb
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002ec4e5
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ec4da
- (void)scrubToDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002ec474
- (double)_timeTravelCaptionLabelMaxWidth;	// IMP=0x00000000002ec466
- (id)_createTimeTravelCaptionImage;	// IMP=0x00000000002ebf1f
- (id)_timeTravelCaptionCacheKey;	// IMP=0x00000000002ebe56
- (id)_timeTravelCaptionAttributedText;	// IMP=0x00000000002eb87f
- (id)_timeTravelCaptionFontSizeOverrides;	// IMP=0x00000000002eb82f
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;	// IMP=0x00000000002eb822
- (double)_timeTravelStatusModuleCaptionConstraintPadding;	// IMP=0x00000000002eb814
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002eaef2
- (void)startScrubbingAnimated:(_Bool)arg1;	// IMP=0x00000000002eae8f
- (void)_setupTimeTravel;	// IMP=0x00000000002eac72
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;	// IMP=0x00000000002eac6a
- (_Bool)_wantsDimWithDesaturationFilterDuringComplicationEditing;	// IMP=0x00000000002eac62
- (id)_complicationContainerViewForSlot:(id)arg1;	// IMP=0x00000000002eac4d
- (void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002eaad7
- (void)layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002eaac5
- (void)_layoutComplicationViewForSlot:(id)arg1;	// IMP=0x00000000002eaa56
- (void)_layoutComplicationViews;	// IMP=0x00000000002ea92e
- (id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(long long)arg2 inEditMode:(long long)arg3;	// IMP=0x00000000002ea89d
- (void)_getKeylineFrame:(struct CGRect *)arg1 padding:(struct UIEdgeInsets *)arg2 forComplicationSlot:(id)arg3 selected:(_Bool)arg4;	// IMP=0x00000000002ea5bc
- (struct CGSize)_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(long long)arg2;	// IMP=0x00000000002ea434
- (void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2;	// IMP=0x00000000002ea398
- (void)_updateComplicationMaxSize;	// IMP=0x00000000002ea282
- (struct CGAffineTransform)_displayContentTransformForComplicationSlot:(id)arg1;	// IMP=0x00000000002e9fed
- (struct CGAffineTransform)_displayEditingTransformForComplicationSlot:(id)arg1;	// IMP=0x00000000002e9d58
- (struct CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;	// IMP=0x00000000002e9aac
- (double)_alphaForComplicationSlot:(id)arg1 inEditOption:(id)arg2 ofEditMode:(long long)arg3;	// IMP=0x00000000002e99f2
- (void)_setTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;	// IMP=0x00000000002e97f7
- (void)_updateTimeOffset;	// IMP=0x00000000002e97e2
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;	// IMP=0x00000000002e97dc
- (void)_didLayoutComplicationViews;	// IMP=0x00000000002e97d6
@property(readonly, nonatomic) double alphaForDimmedState;
- (void)complicationDisplayWrapperView:(id)arg1 updateCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(_Bool)arg4 animationType:(unsigned long long)arg5 animationDuration:(double)arg6 animationFraction:(float)arg7;	// IMP=0x00000000002e96f2
- (_Bool)complicationDisplayWrapperView:(id)arg1 shouldStartCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(_Bool)arg4 animationType:(unsigned long long)arg5;	// IMP=0x00000000002e9647
- (void)_updateStatusIconVisibility;	// IMP=0x00000000002e95cf
- (void)prepareForStatusChange:(_Bool)arg1;	// IMP=0x00000000002e95b3
- (double)horizontalPaddingForStatusBar;	// IMP=0x00000000002e95a1
- (double)verticalPaddingForStatusBar;	// IMP=0x00000000002e958f
- (_Bool)wantsStatusBarIconShadow;	// IMP=0x00000000002e957d
- (_Bool)wantsStatusBarHidden;	// IMP=0x00000000002e956b
- (id)_swatchColorForColorOption:(id)arg1;	// IMP=0x00000000002e92c1
- (id)swatchPrimaryColorForColorOption:(id)arg1;	// IMP=0x00000000002e90c9
- (id)_swatchImageForColorOption:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002e89e7
- (id)swatchImageForColorOption:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002e89d5
- (id)swatchImageForColorOption:(id)arg1;	// IMP=0x00000000002e89b3
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 refreshHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e8999
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;	// IMP=0x00000000002e895a
- (long long)_swatchImageContentMode;	// IMP=0x00000000002e894f
- (struct CGRect)_faceViewFrameForEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3;	// IMP=0x00000000002e8931
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e8852
- (void)_prepareForSnapshotting;	// IMP=0x00000000002e884c
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;	// IMP=0x00000000002e883b
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;	// IMP=0x00000000002e8833
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;	// IMP=0x00000000002e8829
- (long long)_keylineStyleForComplicationSlot:(id)arg1;	// IMP=0x00000000002e8821
- (id)_defaultKeylineViewForComplicationSlot:(id)arg1;	// IMP=0x00000000002e87a3
- (id)_keylineViewForComplicationSlot:(id)arg1;	// IMP=0x00000000002e86e4
- (long long)_complicationPickerStyleForSlot:(id)arg1;	// IMP=0x00000000002e85f4
- (void)hideAppropriateComplicationsForCurrentConfigurationInEditMode:(long long)arg1;	// IMP=0x00000000002e8388
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;	// IMP=0x00000000002e80d4
- (void)_teardownComplicationViewsIfNeeded;	// IMP=0x00000000002e80a0
- (void)_setupComplicationViewsIfHidden;	// IMP=0x00000000002e806c
- (void)setComplicationHidden:(_Bool)arg1 atSlot:(id)arg2;	// IMP=0x00000000002e7fcd
- (_Bool)complicationIsHiddenAtSlot:(id)arg1;	// IMP=0x00000000002e7fb0
- (id)_complicationSlotsHiddenByCurrentConfiguration;	// IMP=0x00000000002e7d61
- (id)_complicationSlotsHiddenByEditOption:(id)arg1;	// IMP=0x00000000002e7c9a
- (id)_editOptionThatHidesAllComplications;	// IMP=0x00000000002e7c4a
- (id)allVisibleComplicationsForCurrentConfiguration;	// IMP=0x00000000002e7bfa
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;	// IMP=0x00000000002e7bf4
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e7bee
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e7be8
- (unsigned long long)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7bdd
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7bcf
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7bba
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;	// IMP=0x00000000002e7bb2
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3;	// IMP=0x00000000002e7b8f
- (struct CGRect)_relativeKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7b71
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 selectedSlot:(id)arg3;	// IMP=0x00000000002e7b5f
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7b55
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e7b4f
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;	// IMP=0x00000000002e7b49
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e7b43
- (void)_updateForResourceDirectoryChange:(id)arg1;	// IMP=0x00000000002e7b3d
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;	// IMP=0x00000000002e7b37
- (void)_configureForEditMode:(long long)arg1;	// IMP=0x00000000002e7b31
- (void)_cleanupAfterEditing;	// IMP=0x00000000002e7b2b
- (void)_prepareForEditing;	// IMP=0x00000000002e7b25
- (void)_cleanupAfterOrb:(_Bool)arg1;	// IMP=0x00000000002e7b1f
- (void)_prepareForOrb;	// IMP=0x00000000002e7b19
- (void)_cleanupAfterZoom;	// IMP=0x00000000002e7b13
- (void)_prepareToZoom;	// IMP=0x00000000002e7b0d
- (_Bool)_usesSimplifiedZoom;	// IMP=0x00000000002e7b05
- (_Bool)_usesCustomZoom;	// IMP=0x00000000002e7afd
- (void)_performWristRaiseAnimation;	// IMP=0x00000000002e7af7
- (void)_prepareWristRaiseAnimation;	// IMP=0x00000000002e7af1
- (void)_handleOrdinaryScreenWake;	// IMP=0x00000000002e7aeb
- (void)_handleWristRaiseScreenWake;	// IMP=0x00000000002e7ae5
- (id)_accessPrewarmedData;	// IMP=0x00000000002e7a77
- (void)_applySlow;	// IMP=0x00000000002e7a63
- (void)_applyFrozen;	// IMP=0x00000000002e79da
- (void)_layoutForegroundContainerView;	// IMP=0x00000000002e79d4
- (_Bool)_needsForegroundContainerView;	// IMP=0x00000000002e79cc
- (void)_bringForegroundViewsToFront;	// IMP=0x00000000002e791b
- (void)_adjustUIForBoundsChange;	// IMP=0x00000000002e7915
- (void)_loadLayoutRules;	// IMP=0x00000000002e78d8
- (id)_detachedComplicationDisplays;	// IMP=0x00000000002e78d0
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;	// IMP=0x00000000002e77a9
- (_Bool)_slotSupportsCurvedText:(id)arg1;	// IMP=0x00000000002e76fb
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002e7675
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e7577
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e74e4
- (void)setTimeOffset:(double)arg1;	// IMP=0x00000000002e74b3
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;	// IMP=0x00000000002e7426
- (void)cleanupAfterZoom;	// IMP=0x00000000002e73ed
- (void)prepareToZoom;	// IMP=0x00000000002e737d
- (void)_becameInactiveFace;	// IMP=0x00000000002e7377
- (void)_becameActiveFace;	// IMP=0x00000000002e7340
- (_Bool)_wantsOpportunisticLiveFaceLoading;	// IMP=0x00000000002e7338
- (_Bool)_canStartTimeScrubbing;	// IMP=0x00000000002e7330
- (_Bool)_supportsTimeScrubbing;	// IMP=0x00000000002e7328
- (double)_horizontalPaddingForStatusBar;	// IMP=0x00000000002e731f
- (double)_verticalPaddingForStatusBar;	// IMP=0x00000000002e72ed
- (void)_prepareForStatusChange:(_Bool)arg1;	// IMP=0x00000000002e72bc
- (_Bool)_wantsStatusBarIconShadow;	// IMP=0x00000000002e72b4
- (_Bool)_wantsStatusBarHidden;	// IMP=0x00000000002e72ac
- (id)_blurSourceImage;	// IMP=0x00000000002e72a4
- (void)quadViewWillLeaveSubtree:(id)arg1;	// IMP=0x00000000002e7287
- (void)quadViewWillEnterSubtree:(id)arg1;	// IMP=0x00000000002e726a
- (_Bool)_renderSynchronouslyIfNeededInGroup:(id)arg1;	// IMP=0x00000000002e71d3
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;	// IMP=0x00000000002e7086
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;	// IMP=0x00000000002e6f4b
- (void)enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e6e1c
- (void)_applyShowsLockedUI;	// IMP=0x00000000002e6e16
- (void)_reorderSwitcherSnapshotView;	// IMP=0x00000000002e6df2
- (void)handleUnadornedSnapshotRemoved;	// IMP=0x00000000002e6de1
- (void)loadContentToReplaceUnadornedSnapshot;	// IMP=0x00000000002e6d63
- (void)_applyEditConfigurationsWithForce:(_Bool)arg1;	// IMP=0x00000000002e6afe
- (void)_loadContentToReplaceUnadornedSnapshot;	// IMP=0x00000000002e6af8
- (_Bool)_supportsUnadornedSnapshot;	// IMP=0x00000000002e6af0
- (_Bool)supportsUnadornedSnapshot;	// IMP=0x00000000002e6abd
- (void)_applyShowContentForUnadornedSnapshot;	// IMP=0x00000000002e6ab7
- (void)_applyShowsCanonicalContent;	// IMP=0x00000000002e6ab1
- (void)_applyDataMode;	// IMP=0x00000000002e6aab
- (void)_unloadSnapshotContentViews;	// IMP=0x00000000002e6aa5
- (void)_loadSnapshotContentViews;	// IMP=0x00000000002e6a61
- (void)reloadSnapshotContentViews;	// IMP=0x00000000002e69e6
- (void)invalidateComplicationLayout;	// IMP=0x00000000002e69bf
- (void)enumerateComplicationDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e6913
- (id)complicationLayoutforSlot:(id)arg1;	// IMP=0x00000000002e688f
- (void)layoutContainerView:(id)arg1;	// IMP=0x00000000002e6831
- (_Bool)_isAnalog;	// IMP=0x00000000002e6829
- (_Bool)isAnalog;	// IMP=0x00000000002e6817
- (id)blurSourceImage;	// IMP=0x00000000002e6794
- (id)swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 refreshHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e6770
- (long long)swatchImageContentMode;	// IMP=0x00000000002e675e
- (struct CGRect)faceViewFrameForEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3;	// IMP=0x00000000002e673f
- (void)applyRubberBandingFraction:(double)arg1 forComplicationSlot:(id)arg2;	// IMP=0x00000000002e6739
- (void)applyBreathingFraction:(double)arg1 forComplicationSlot:(id)arg2;	// IMP=0x00000000002e660b
- (id)keylineViewForComplicationSlot:(id)arg1;	// IMP=0x00000000002e65f9
- (struct CGRect)_keylineFrameForComplicationSlot:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00000000002e64f4
- (struct CGRect)keylineFrameForComplicationSlot:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00000000002e64d5
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;	// IMP=0x00000000002e64c3
- (_Bool)slotSupportsCurvedText:(id)arg1;	// IMP=0x00000000002e64b1
- (id)layoutRuleForComplicationSlot:(id)arg1 inState:(long long)arg2 layoutOverride:(long long)arg3;	// IMP=0x00000000002e6442
- (long long)complicationPickerStyleForSlot:(id)arg1;	// IMP=0x00000000002e63c2
- (void)shiftSelectedComplicationSlotIfHidden;	// IMP=0x00000000002e633f
- (id)closestVisibleComplicationSlotToSlot:(id)arg1;	// IMP=0x00000000002e619b
- (id)closestVisibleSlotToSlot:(id)arg1 editMode:(long long)arg2;	// IMP=0x00000000002e6135
- (id)customEditingViewController;	// IMP=0x00000000002e60a3
- (_Bool)becomeFirstResponder;	// IMP=0x00000000002e5e61
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002e5c4f
- (_Bool)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;	// IMP=0x00000000002e5c47
- (void)cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;	// IMP=0x00000000002e5c35
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e5c23
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e5c11
- (unsigned long long)detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e5bff
- (double)editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e5bed
- (unsigned long long)keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e5bdb
- (_Bool)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;	// IMP=0x00000000002e5bc9
- (struct CGRect)_keylineFrameFromRelativeFrame:(struct CGRect)arg1 forEditingMode:(long long)arg2 option:(id)arg3 slot:(id)arg4;	// IMP=0x00000000002e5a2c
- (double)_faceEditingScaleForEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e592a
- (void)_keylineSelectionChangingTo:(id)arg1 editMode:(long long)arg2;	// IMP=0x00000000002e5924
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3 selectedSlot:(id)arg4;	// IMP=0x00000000002e5906
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e587b
- (struct CGRect)_keylineFrameForEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3 selectedSlot:(id)arg4;	// IMP=0x00000000002e5779
- (struct CGRect)keylineFrameForCustomEditMode:(long long)arg1 option:(id)arg2 slot:(id)arg3;	// IMP=0x00000000002e5756
- (struct CGRect)keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 selectedSlot:(id)arg3;	// IMP=0x00000000002e56ad
- (id)keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 selectedSlot:(id)arg3;	// IMP=0x00000000002e569b
- (void)cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e5689
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;	// IMP=0x00000000002e52c5
- (void)configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;	// IMP=0x00000000002e5271
- (void)configureForEditMode:(long long)arg1;	// IMP=0x00000000002e522e
- (void)populateFaceViewEditOptionsFromFace:(id)arg1;	// IMP=0x00000000002e521a
- (void)populateFaceViewEditOptionsFromFace:(id)arg1 forced:(_Bool)arg2;	// IMP=0x00000000002e4fc1
- (void)cleanupAfterEditing;	// IMP=0x00000000002e4f39
- (void)prepareForEditing;	// IMP=0x00000000002e4ec9
- (void)cleanupAfterOrb:(_Bool)arg1;	// IMP=0x00000000002e4eac
- (void)prepareForOrb;	// IMP=0x00000000002e4e8f
- (void)performWristRaiseAnimation;	// IMP=0x00000000002e4ddd
- (void)prepareWristRaiseAnimation;	// IMP=0x00000000002e4da4
- (void)handleOrdinaryScreenWake;	// IMP=0x00000000002e4d92
- (void)handleWristRaiseScreenWake;	// IMP=0x00000000002e4d80
- (void)screenDidTurnOffAnimated:(_Bool)arg1;	// IMP=0x00000000002e4d7a
- (void)screenWillTurnOnAnimated:(_Bool)arg1;	// IMP=0x00000000002e4d74
- (_Bool)needsImageQueueDiscardOnRender;	// IMP=0x00000000002e4d64
- (void)setNeedsRender;	// IMP=0x00000000002e4c1e
- (_Bool)renderIfNeeded;	// IMP=0x00000000002e4b5c
- (void)layoutComplicationViews;	// IMP=0x00000000002e4b0b
- (id)detachedComplicationDisplayWrapperForSlot:(id)arg1;	// IMP=0x00000000002e4aee
- (void)setDetachedComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002e4a38
- (id)normalComplicationDisplayWrapperForSlot:(id)arg1;	// IMP=0x00000000002e4a1b
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002e4771
- (void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002e4565
- (long long)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2;	// IMP=0x00000000002e44fd
- (id)newLegacyComplicationViewForSlot:(id)arg1 family:(long long)arg2 complication:(id)arg3;	// IMP=0x00000000002e44e2
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 forceApply:(_Bool)arg4;	// IMP=0x00000000002e4325
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000002e4310
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;	// IMP=0x00000000002e425a
@property(readonly, nonatomic) NSDate *currentDisplayDate;
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000002e3b6d
- (void)layoutSubviews;	// IMP=0x00000000002e385b
- (void)dealloc;	// IMP=0x00000000002e37e6
- (_Bool)_shouldHideUI;	// IMP=0x00000000002e377a
@property(readonly, nonatomic) _Bool monochromeRichComplicationsEnabled;
- (void)_handleLocaleDidChange;	// IMP=0x00000000002e36fe
- (void)performScrollTestNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e36a5
- (void)_stopOutputtingTime;	// IMP=0x00000000002e369f
- (void)_outputTime:(id)arg1;	// IMP=0x00000000002e3699
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;	// IMP=0x00000000002e3045
- (void)updateRichCornerComplicationsInnerColor:(id)arg1 outerColor:(id)arg2;	// IMP=0x00000000001b5026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

