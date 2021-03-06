//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <LinkPresentation/LPComponentMediaPlayable-Protocol.h>
#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, LPAudioPlayButtonStyle, LPAudioPlayButtonTheme, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface LPPlayButtonControl : UIControl <UIGestureRecognizerDelegate, LPComponentMediaPlayable>
{
    LPAudioPlayButtonStyle *_style;	// 8 = 0x8
    LPAudioPlayButtonTheme *_theme;	// 16 = 0x10
    CAShapeLayer *_borderLayer;	// 24 = 0x18
    CAShapeLayer *_innerProgressLayer;	// 32 = 0x20
    CAShapeLayer *_outerProgressLayer;	// 40 = 0x28
    CAShapeLayer *_highlightLayer;	// 48 = 0x30
    UILongPressGestureRecognizer *_highlightRecognizer;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    UIImageView *_imageView;	// 72 = 0x48
    _Bool _indeterminate;	// 80 = 0x50
    float _progress;	// 84 = 0x54
    _Bool _showingProgress;	// 88 = 0x58
    _Bool _isPlaying;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x000000000007d5b9
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)playable;	// IMP=0x000000000007d558
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000007d546
- (void)_updateEnabledState;	// IMP=0x000000000007d4df
- (void)_updateInnerProgressLayerStroke;	// IMP=0x000000000007d46b
- (void)_toggleToPlayState;	// IMP=0x000000000007d407
- (void)_showPlayIndicator:(_Bool)arg1;	// IMP=0x000000000007d386
- (void)_createHighlightLayer;	// IMP=0x000000000007d1f9
- (void)_createOuterProgressView;	// IMP=0x000000000007d0a0
- (void)_createInnerProgressView;	// IMP=0x000000000007cf2e
- (void)_createImageView;	// IMP=0x000000000007cdf5
- (void)_createBackgroundView;	// IMP=0x000000000007cd0b
- (void)_createBorderView;	// IMP=0x000000000007cb2a
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;	// IMP=0x000000000007c9df
- (void)_updateOuterProgressLayerStroke;	// IMP=0x000000000007c976
- (void)showPlayIndicator:(_Bool)arg1;	// IMP=0x000000000007c964
- (void)setShowOuterBorder:(_Bool)arg1;	// IMP=0x000000000007c925
- (void)setShowBorder:(_Bool)arg1;	// IMP=0x000000000007c902
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007c708
- (void)hideProgressAnimated:(_Bool)arg1;	// IMP=0x000000000007c62c
- (void)endIndeterminateAnimation;	// IMP=0x000000000007c53b
- (void)beginIndeterminateAnimation;	// IMP=0x000000000007c3cb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007c3b9
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000007c378
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000007c366
- (void)_hideTapHighlight;	// IMP=0x000000000007c2dc
- (void)_highlightLongPressRecognized:(id)arg1;	// IMP=0x000000000007c270
- (void)_didScroll;	// IMP=0x000000000007c228
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;	// IMP=0x000000000007c220
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000007c1c4
- (void)buttonPressed:(id)arg1;	// IMP=0x000000000007c1be
- (void)installRecognizersOnView:(id)arg1;	// IMP=0x000000000007c0cf
- (void)layoutPlayButton;	// IMP=0x000000000007c022
- (void)layoutSubviews;	// IMP=0x000000000007bfe1
- (float)buttonCornerRadius;	// IMP=0x000000000007bed8
- (struct CGSize)buttonSize;	// IMP=0x000000000007be73
- (id)defaultBackgroundColor;	// IMP=0x000000000007be3f
- (id)outerBorderColor;	// IMP=0x000000000007be22
- (id)pauseImage;	// IMP=0x000000000007bdcb
- (id)playImage;	// IMP=0x000000000007bd74
- (void)setPlayButtonState:(unsigned long long)arg1;	// IMP=0x000000000007bb8d
- (_Bool)isFlipped;	// IMP=0x000000000007bb85
- (id)initWithStyle:(id)arg1 theme:(id)arg2;	// IMP=0x000000000007b98b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

