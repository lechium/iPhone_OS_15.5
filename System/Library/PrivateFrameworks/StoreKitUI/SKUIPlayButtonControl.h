//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIButtonViewElement, SKUIPlayButtonGradientView, SKUIPlayButtonShapeView, UIColor, UIImage, UIImageView, UIView, _UIBackdropView;

@interface SKUIPlayButtonControl : UIControl
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    long long _backgroundType;	// 24 = 0x18
    SKUIPlayButtonShapeView *_borderLayer;	// 32 = 0x20
    UIView *_backgroundView;	// 40 = 0x28
    UIColor *_bufferProgressIndicatorColor;	// 48 = 0x30
    UIColor *_controlForeGroundColor;	// 56 = 0x38
    id _bufferProgressIndicatorCompositingFilter;	// 64 = 0x40
    UIImage *_customPlayImage;	// 72 = 0x48
    UIImage *_customToggleImage;	// 80 = 0x50
    _Bool _didInitialHighlightForTouch;	// 88 = 0x58
    SKUIPlayButtonGradientView *_gradientBackgroundView;	// 96 = 0x60
    NSArray *_gradientColors;	// 104 = 0x68
    long long _gradientType;	// 112 = 0x70
    UIImageView *_imageView;	// 120 = 0x78
    SKUIPlayButtonShapeView *_innerProgressLayer;	// 128 = 0x80
    _Bool _indeterminate;	// 136 = 0x88
    SKUIPlayButtonShapeView *_outerProgressLayer;	// 144 = 0x90
    float _progress;	// 152 = 0x98
    SKUIPlayButtonShapeView *_selectedLayer;	// 160 = 0xa0
    _Bool _showingProgress;	// 168 = 0xa8
    UIColor *_progressIndicatorColor;	// 176 = 0xb0
    id _progressIndicatorCompositingFilter;	// 184 = 0xb8
    UIColor *_selectionColor;	// 192 = 0xc0
    id _selectionCompositingFilter;	// 200 = 0xc8
    _Bool _usesBlurredBackground;	// 208 = 0xd0
    _Bool _showingPlayIndicator;	// 209 = 0xd1
    _Bool _showBorder;	// 210 = 0xd2
    _Bool _showOuterBorder;	// 211 = 0xd3
    _Bool _disabledButSelectable;	// 212 = 0xd4
    NSString *_backdropGroupName;	// 216 = 0xd8
    UIImage *_backgroundImageForBlurring;	// 224 = 0xe0
    SKUIButtonViewElement *_element;	// 232 = 0xe8
    struct UIEdgeInsets _bigHitInsets;	// 240 = 0xf0
}

+ (CDStruct_afa449f9)_calculateStatistics:(struct CGImage *)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000196dc0
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;	// IMP=0x00000000001938c6
+ (id)blurColorForColor:(id)arg1;	// IMP=0x00000000001937c8
- (void).cxx_destruct;	// IMP=0x00000000001975f1
@property(retain, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property(nonatomic, getter=isDisabledButSelectable) _Bool disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property(nonatomic) __weak UIImage *backgroundImageForBlurring; // @synthesize backgroundImageForBlurring=_backgroundImageForBlurring;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) struct UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
@property(readonly, nonatomic) _Bool showingProgress; // @synthesize showingProgress=_showingProgress;
@property(copy, nonatomic) UIColor *progressIndicatorColor; // @synthesize progressIndicatorColor=_progressIndicatorColor;
@property(readonly, nonatomic) _Bool showingPlayIndicator; // @synthesize showingPlayIndicator=_showingPlayIndicator;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *customToggleImage; // @synthesize customToggleImage=_customToggleImage;
@property(retain, nonatomic) UIImage *customPlayImage; // @synthesize customPlayImage=_customPlayImage;
@property(readonly, nonatomic) UIColor *controlForeGroundColor; // @synthesize controlForeGroundColor=_controlForeGroundColor;
@property(readonly, nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)_updateEnabledState;	// IMP=0x0000000000196c99
- (void)_updateInnerProgressLayerStroke;	// IMP=0x0000000000196b87
- (void)_useBlurredBackground:(_Bool)arg1;	// IMP=0x0000000000196b72
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;	// IMP=0x00000000001964fd
- (void)_updateBackdropView;	// IMP=0x000000000019643d
- (void)_toggleToPlayState;	// IMP=0x0000000000196393
- (void)_showPlayIndicator:(_Bool)arg1;	// IMP=0x0000000000196302
- (id)_selectedLayer;	// IMP=0x000000000019615a
- (id)_simpleBackdrop;	// IMP=0x0000000000196148
- (id)_playImage;	// IMP=0x00000000001960f3
- (id)_outerProgressLayer;	// IMP=0x0000000000195f62
- (id)_innerProgressLayer;	// IMP=0x0000000000195df2
- (void)_prepareForReuse;	// IMP=0x0000000000195a4b
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;	// IMP=0x00000000001958d2
- (id)_imageView;	// IMP=0x0000000000195813
- (id)_gradientBackgroundView;	// IMP=0x00000000001956e4
- (_Bool)_renderAsEnabled;	// IMP=0x00000000001956ad
- (id)_defaultBackgroundView;	// IMP=0x000000000019558d
- (id)_classicBackdropView;	// IMP=0x00000000001953c8
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;	// IMP=0x000000000019512f
- (id)_cancelImage;	// IMP=0x00000000001950da
- (id)_borderLayer;	// IMP=0x0000000000194d76
- (void)_beginIndeterminateAnimation;	// IMP=0x0000000000194b3e
- (id)_backgroundView;	// IMP=0x0000000000194ad7
- (void)updateOuterProgressLayerStroke;	// IMP=0x000000000019497f
- (void)showPlayIndicator:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x0000000000194955
- (void)showPlayIndicator:(_Bool)arg1;	// IMP=0x0000000000194941
@property(nonatomic) _Bool showOuterBorder; // @synthesize showOuterBorder=_showOuterBorder;
- (void)setShowBorder:(_Bool)arg1;	// IMP=0x000000000019484d
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x000000000019464d
- (void)setControlForegroundColor:(id)arg1;	// IMP=0x0000000000194525
- (void)setSelectionColor:(id)arg1 withCompositingFilter:(id)arg2;	// IMP=0x0000000000194400
- (void)setControlColor:(id)arg1;	// IMP=0x000000000019434c
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;	// IMP=0x000000000019426b
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;	// IMP=0x0000000000194211
- (void)setBackgroundType:(long long)arg1;	// IMP=0x0000000000193f2f
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;	// IMP=0x0000000000193e7d
- (void)refresh;	// IMP=0x0000000000193df0
- (float)playButtonDefaultAlpha;	// IMP=0x0000000000193dce
- (void)playIndicatorDidChange:(_Bool)arg1;	// IMP=0x0000000000193dc8
- (id)playImage;	// IMP=0x0000000000193dc0
- (id)outerBorderColor;	// IMP=0x0000000000193dae
- (void)hideProgressAnimated:(_Bool)arg1;	// IMP=0x0000000000193c39
- (void)endIndeterminateAnimation;	// IMP=0x0000000000193b30
- (id)defaultBackgroundColor;	// IMP=0x0000000000193afc
- (id)cancelImage;	// IMP=0x0000000000193af4
- (float)buttonCornerRadius;	// IMP=0x0000000000193ae6
- (struct CGSize)buttonSize;	// IMP=0x0000000000193ad5
- (void)beginIndeterminateAnimation;	// IMP=0x00000000001936b4
- (void)tintColorDidChange;	// IMP=0x000000000019365e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000019364c
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;	// IMP=0x000000000019356b
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000193495
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001932fb
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000019329e
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000019324f
- (void)layoutSubviews;	// IMP=0x000000000019313b
- (struct CGRect)hitRect;	// IMP=0x00000000001930af
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000019309d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000192f7d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000192e90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000192d71

@end
