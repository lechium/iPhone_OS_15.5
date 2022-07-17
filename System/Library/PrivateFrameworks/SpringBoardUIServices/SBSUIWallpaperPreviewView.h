//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBFIrisWallpaperPlayerDelegate-Protocol.h>

@class NSString, SBFLockScreenDateView, SBFWallpaperView, UIButton, UILabel, UIViewPropertyAnimator, _SBUIWallpaperInstructionView, _UILegibilityLabel;
@protocol SBSUIWallpaperPreviewViewDelegate;

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperPlayerDelegate>
{
    UIViewPropertyAnimator *_cropInstructionsAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_effectInstructionsAnimator;	// 16 = 0x10
    UIViewPropertyAnimator *_fadeOutInstructionsAnimator;	// 24 = 0x18
    _UILegibilityLabel *_irisInstructionsLabel1;	// 32 = 0x20
    _UILegibilityLabel *_irisInstructionsLabel2;	// 40 = 0x28
    UILabel *_effectStateLabel;	// 48 = 0x30
    _SBUIWallpaperInstructionView *_cropInstructionView;	// 56 = 0x38
    UIView *_gradientView;	// 64 = 0x40
    _Bool _irisPossible;	// 72 = 0x48
    _Bool _parallaxPossible;	// 73 = 0x49
    id <SBSUIWallpaperPreviewViewDelegate> _delegate;	// 80 = 0x50
    SBFLockScreenDateView *_dateView;	// 88 = 0x58
    SBFWallpaperView *_wallpaperView;	// 96 = 0x60
    UIButton *_irisButton;	// 104 = 0x68
    UIButton *_parallaxButton;	// 112 = 0x70
    UIButton *_cancelButton;	// 120 = 0x78
    UIButton *_setButton;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000052015
@property(retain, nonatomic) UIButton *setButton; // @synthesize setButton=_setButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *parallaxButton; // @synthesize parallaxButton=_parallaxButton;
@property(retain, nonatomic) UIButton *irisButton; // @synthesize irisButton=_irisButton;
@property(readonly, nonatomic) SBFWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak id <SBSUIWallpaperPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)irisWallpaperPlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x0000000000051f3c
- (void)_layoutSetButton;	// IMP=0x0000000000051e7d
- (void)_layoutCancelButton;	// IMP=0x0000000000051dbe
- (void)_layoutParallaxButton;	// IMP=0x0000000000051cff
- (void)_layoutIrisButton;	// IMP=0x0000000000051c40
- (void)_layoutIrisInstructionLabels;	// IMP=0x0000000000051a92
- (void)_layoutStackedButtons;	// IMP=0x0000000000050ae3
- (double)_segmentedControlInset;	// IMP=0x0000000000050ab0
- (void)_layoutDateView;	// IMP=0x00000000000509f4
- (void)_layoutWallpaperView;	// IMP=0x0000000000050998
- (void)_layoutGradientView;	// IMP=0x0000000000050843
- (void)layoutSubviews;	// IMP=0x0000000000050792
- (void)_fadeOutInstructionsWithDelay:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050575
- (void)displayInstructionsForEffect:(unsigned long long)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000004ffc5
- (void)updateForChangedSettings:(id)arg1;	// IMP=0x000000000004ff58
- (_Bool)shouldEnableParallax;	// IMP=0x000000000004ff2f
- (void)setWallpaperView:(id)arg1;	// IMP=0x000000000004fe89
- (void)dealloc;	// IMP=0x000000000004fbf7
- (void)_userDidTapOnSetButton:(id)arg1;	// IMP=0x000000000004fb85
- (void)_userDidTapOnCancelButton:(id)arg1;	// IMP=0x000000000004fb13
- (void)_userDidTapOnParallaxButton:(id)arg1;	// IMP=0x000000000004faa1
- (void)_userDidTapOnIrisButton:(id)arg1;	// IMP=0x000000000004fa2f
- (id)_makeButtonWithVisualEffectBlur;	// IMP=0x000000000004fa16
- (id)initWithFrame:(struct CGRect)arg1 wallpaperView:(id)arg2 disableParallax:(_Bool)arg3;	// IMP=0x000000000004ed0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
