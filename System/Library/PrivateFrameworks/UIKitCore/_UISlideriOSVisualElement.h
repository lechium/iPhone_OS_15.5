//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>
#import <UIKitCore/_UISliderVisualElement-Protocol.h>

@class NSArray, NSString, UIImageView, UISlider, UISliderDataModel, UIView;

__attribute__((visibility("hidden")))
@interface _UISlideriOSVisualElement <UIPointerInteractionDelegate, _UISliderVisualElement>
{
    UIImageView *_innerThumbView;	// 120 = 0x78
    UIImageView *_minValueImageView;	// 128 = 0x80
    UIImageView *_maxValueImageView;	// 136 = 0x88
    UIImageView *_thumbView;	// 144 = 0x90
    UIImageView *_minTrackView;	// 152 = 0x98
    UIImageView *_maxTrackView;	// 160 = 0xa0
    UIView *_minTrackClipView;	// 168 = 0xa8
    UIView *_maxTrackClipView;	// 176 = 0xb0
    struct {
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
    } _sliderFlags;	// 184 = 0xb8
    double _hitOffset;	// 192 = 0xc0
    UIView *_thumbViewNeue;	// 200 = 0xc8
    NSArray *_trackColors;	// 208 = 0xd0
    _Bool _trackIsArtworkBased;	// 216 = 0xd8
    _Bool _thumbIsArtworkBased;	// 217 = 0xd9
    _Bool _maxColorIsValid;	// 218 = 0xda
    UISliderDataModel *_data;	// 224 = 0xe0
    UISlider *_slider;	// 232 = 0xe8
}

+ (CDStruct_6024001e)drawingMetricsForPlatform;	// IMP=0x0000000000b5f0cb
+ (id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2;	// IMP=0x0000000000b5d101
- (void).cxx_destruct;	// IMP=0x0000000000b634bb
@property(nonatomic) __weak UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UISliderDataModel *data; // @synthesize data=_data;
- (id)thumbViewNeue;	// IMP=0x0000000000b63468
- (id)thumbView;	// IMP=0x0000000000b63453
- (id)minValueImageView;	// IMP=0x0000000000b6343e
- (id)maxValueImageView;	// IMP=0x0000000000b63429
- (void)didSetValues;	// IMP=0x0000000000b63417
- (void)didSetShowValue;	// IMP=0x0000000000b63405
- (void)didSetContinuous;	// IMP=0x0000000000b633ff
- (void)didSetSelected;	// IMP=0x0000000000b633ed
- (void)didSetHighlighted;	// IMP=0x0000000000b633db
- (void)didSetEnabled;	// IMP=0x0000000000b63382
- (id)maxTrackView;	// IMP=0x0000000000b6336d
- (id)minTrackView;	// IMP=0x0000000000b63358
- (struct UIEdgeInsets)thumbHitEdgeInsets;	// IMP=0x0000000000b632c7
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;	// IMP=0x0000000000b63155
- (void)didSetThumbEnabled;	// IMP=0x0000000000b6303c
- (void)didSetMaximumTrackImageForStates;	// IMP=0x0000000000b6300e
- (void)didSetMinimumTrackImageForStates;	// IMP=0x0000000000b62fe0
- (void)didSetThumbImageForStates;	// IMP=0x0000000000b62fb2
- (id)createThumbView;	// IMP=0x0000000000b62df1
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b62d33
- (void)showValueDidChange;	// IMP=0x0000000000b62d05
- (_Bool)isAnimatingValueChange;	// IMP=0x0000000000b62cf3
- (_Bool)cancelTouchTracking;	// IMP=0x0000000000b62bf0
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b62bea
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b62be4
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b62b0f
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b6299e
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b626ba
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b620ec
- (_Bool)_shouldBeginTrackingAtPoint:(struct CGPoint)arg1 pointInKnob:(struct CGPoint *)arg2 inKnob:(_Bool *)arg3;	// IMP=0x0000000000b61fa4
- (_Bool)cancelMouseTracking;	// IMP=0x0000000000b61ee7
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b61e75
- (void)_sliderAnimationDidStop:(_Bool)arg1;	// IMP=0x0000000000b61e50
- (void)_sliderAnimationWillStart;	// IMP=0x0000000000b61e37
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;	// IMP=0x0000000000b61bbd
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b617e4
- (void)_updateAppearanceForEnabled:(_Bool)arg1;	// IMP=0x0000000000b617bc
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;	// IMP=0x0000000000b60a5f
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;	// IMP=0x0000000000b605c2
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x0000000000b602db
- (void)_setSliderNeedsLayout;	// IMP=0x0000000000b602a7
- (void)didPerformLayout;	// IMP=0x0000000000b6024d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000b601aa
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000b60107
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000b5fedf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000b5fecd
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000b5fa72
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000b5fa6a
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000b5f87f
- (double)thumbDimensionNeue;	// IMP=0x0000000000b5f850
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b5f42d
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b5f320
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b5f213
- (unsigned long long)state;	// IMP=0x0000000000b5f053
- (id)currentMaximumTrackImage;	// IMP=0x0000000000b5efe7
- (id)currentMinimumTrackImage;	// IMP=0x0000000000b5ef7b
- (id)currentThumbImage;	// IMP=0x0000000000b5ef0f
- (void)tintColorDidChange;	// IMP=0x0000000000b5eecc
- (id)maximumValueImage;	// IMP=0x0000000000b5eeaf
- (void)didSetMaximumValueImage;	// IMP=0x0000000000b5edac
- (void)didSetMinimumValueImage;	// IMP=0x0000000000b5eca9
- (void)didSetMaximumTrackTintColor;	// IMP=0x0000000000b5ec6e
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b5eb4d
- (void)didSetMinimumTrackTintColor;	// IMP=0x0000000000b5eb1f
- (void)_updateMinimumTrackTintColor;	// IMP=0x0000000000b5e8c9
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b5e7ac
- (void)didSetThumbTintColor;	// IMP=0x0000000000b5e777
- (id)thumbTintColor;	// IMP=0x0000000000b5e75a
- (void)didSetThumbImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b5e680
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000b5e3c4
- (void)dealloc;	// IMP=0x0000000000b5e342
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;	// IMP=0x0000000000b5e16a
- (void)_buildTrackArtwork;	// IMP=0x0000000000b5de08
- (double)_cornerRadiusForRect:(struct CGRect)arg1;	// IMP=0x0000000000b5ddf0
- (void)_initSubviews;	// IMP=0x0000000000b5dd50
- (void)_initImages;	// IMP=0x0000000000b5da42
- (id)createThumbViewNeue;	// IMP=0x0000000000b5d6d1
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000b5cde6
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000b5cca8
- (void)_setupFeedback;	// IMP=0x0000000000b5cba2
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x0000000000b5cb90
- (void)_listenForContentSizeCategoryChangesIfNecessary;	// IMP=0x0000000000b5cb0b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b5c9db
- (id)init;	// IMP=0x0000000000b5c964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

