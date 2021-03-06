//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UIVisualEffectView, UIWindow;

@interface _TVAppLoadingView : UIView
{
    UIView *_wallpaperView;	// 8 = 0x8
    UIWindow *_overlayWindow;	// 16 = 0x10
    _Bool _hiding;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    UIImageView *_maskView;	// 48 = 0x30
    UIVisualEffectView *_visualEffectView;	// 56 = 0x38
    UIActivityIndicatorView *_spinner;	// 64 = 0x40
}

+ (id)loadingScreen;	// IMP=0x000000000004922e
- (void).cxx_destruct;	// IMP=0x000000000004a1e2
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)didRotate:(id)arg1;	// IMP=0x000000000004a03f
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2;	// IMP=0x0000000000049b77
- (double)hideAnimationDuration;	// IMP=0x0000000000049b69
- (_Bool)isVisible;	// IMP=0x0000000000049b47
- (void)hide;	// IMP=0x000000000004993a
- (void)timeout;	// IMP=0x00000000000498c2
- (void)showOverKeyWindowWithSpinnerOnly:(_Bool)arg1;	// IMP=0x00000000000493f9
- (void)showOverKeyWindow;	// IMP=0x00000000000493e5
- (void)setLoadingDelay:(double)arg1;	// IMP=0x00000000000493d3
- (void)setTimeout:(double)arg1;	// IMP=0x00000000000493c1

@end

