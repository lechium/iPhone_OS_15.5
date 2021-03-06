//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardWallpaper/SBWallpaperObserver-Protocol.h>
#import <SpringBoardWallpaper/_SBWFakeBlurObserver-Protocol.h>

@class NSString, UIColor, UIImage, UIImageView;
@protocol SBWWallpaperPresenting><SBWWallpaperLegibilityProviding, _SBWFakeBlur;

@interface SBWWallpaperEffectViewBase : UIView <_SBWFakeBlurObserver, SBWallpaperObserver>
{
    long long _variant;	// 8 = 0x8
    UIColor *_wallpaperAverageColor;	// 16 = 0x10
    long long _startStyle;	// 24 = 0x18
    long long _endStyle;	// 32 = 0x20
    double _transitionFraction;	// 40 = 0x28
    UIView<_SBWFakeBlur> *_blurView;	// 48 = 0x30
    UIView *_grayscaleTintView;	// 56 = 0x38
    UIView *_colorTintView;	// 64 = 0x40
    UIView<_SBWFakeBlur> *_transitionBlurView;	// 72 = 0x48
    UIView *_transitionGrayscaleTintView;	// 80 = 0x50
    UIView *_transitionColorTintView;	// 88 = 0x58
    UIImageView *_maskImageView;	// 96 = 0x60
    UIView *_blurMaskingContainer;	// 104 = 0x68
    UIView *_tintMaskingContainer;	// 112 = 0x70
    UIImage *_maskImage;	// 120 = 0x78
    _Bool _shouldMaskBlur;	// 128 = 0x80
    _Bool _shouldMaskTint;	// 129 = 0x81
    _Bool _fullscreen;	// 130 = 0x82
    _Bool _forcesOpaque;	// 131 = 0x83
    unsigned long long _transformOptions;	// 136 = 0x88
    _Bool _accessibilityReduceTransparencyEnabled;	// 144 = 0x90
    id <SBWWallpaperPresenting><SBWWallpaperLegibilityProviding> _wallpaperPresenter;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000286a6
@property(retain, nonatomic) UIView *tintMaskingContainer; // @synthesize tintMaskingContainer=_tintMaskingContainer;
@property(retain, nonatomic) UIView *blurMaskingContainer; // @synthesize blurMaskingContainer=_blurMaskingContainer;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *transitionColorTintView; // @synthesize transitionColorTintView=_transitionColorTintView;
@property(retain, nonatomic) UIView *transitionGrayscaleTintView; // @synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView;
@property(retain, nonatomic) UIView<_SBWFakeBlur> *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(retain, nonatomic) UIView<_SBWFakeBlur> *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) _Bool forcesOpaque; // @synthesize forcesOpaque=_forcesOpaque;
@property(readonly, nonatomic) id <SBWWallpaperPresenting><SBWWallpaperLegibilityProviding> wallpaperPresenter; // @synthesize wallpaperPresenter=_wallpaperPresenter;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;	// IMP=0x0000000000028505
- (void)_setIsContainedInPopover:(_Bool)arg1;	// IMP=0x00000000000284ff
- (void)updateBackgroundImage;	// IMP=0x00000000000284f9
- (void)setAppearanceStorage:(id)arg1;	// IMP=0x00000000000284f3
- (id)appearanceStorage;	// IMP=0x00000000000284eb
- (void)setBarWantsAdaptiveBackdrop:(_Bool)arg1;	// IMP=0x00000000000284e5
- (void)setTranslucent:(_Bool)arg1;	// IMP=0x00000000000284df
- (void)setBarStyle:(long long)arg1;	// IMP=0x00000000000284d9
- (void)setBarTintColor:(id)arg1;	// IMP=0x00000000000284d3
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;	// IMP=0x0000000000028453
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(_Bool)arg1;	// IMP=0x0000000000027e20
- (void)_configureViewsForFullscreen:(_Bool)arg1;	// IMP=0x0000000000027da9
- (_Bool)_isEffectivelyFullscreen;	// IMP=0x0000000000027d76
- (void)_configureViews;	// IMP=0x0000000000027bb2
- (void)_configureForCurrentBlurStyle;	// IMP=0x000000000002784a
- (void)_configureFromScratch;	// IMP=0x00000000000275a1
- (_Bool)_needsBlurViewForStyle:(long long)arg1;	// IMP=0x0000000000027583
- (void)_setTransitionFraction:(double)arg1;	// IMP=0x0000000000027440
- (void)setWallpaperStyle:(long long)arg1;	// IMP=0x0000000000027421
- (long long)wallpaperStyle;	// IMP=0x0000000000027410
- (void)_updateWallpaperAverageColor:(id)arg1;	// IMP=0x0000000000027397
- (void)wallpaperDidChangeForVariant:(long long)arg1;	// IMP=0x00000000000272da
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;	// IMP=0x0000000000027273
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;	// IMP=0x0000000000027261
- (void)layoutSubviews;	// IMP=0x00000000000270d0
- (void)offsetWallpaperBy:(struct CGPoint)arg1;	// IMP=0x0000000000027070
- (void)setMaskImage:(id)arg1 masksBlur:(_Bool)arg2 masksTint:(_Bool)arg3;	// IMP=0x0000000000026fb0
- (_Bool)currentTransitionStateIsOpaque;	// IMP=0x0000000000026f07
- (void)setTransitionState:(CDStruct_059c2b36)arg1;	// IMP=0x0000000000026ea6
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;	// IMP=0x0000000000026ce2
@property(nonatomic) double zoomScale;
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000026b4f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000026b2d
- (void)setStyle:(long long)arg1;	// IMP=0x000000000002699f
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000026703
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000266b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026672
- (id)initWithWallpaperPresenter:(id)arg1 variant:(long long)arg2 transformOptions:(unsigned long long)arg3;	// IMP=0x00000000000264af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

