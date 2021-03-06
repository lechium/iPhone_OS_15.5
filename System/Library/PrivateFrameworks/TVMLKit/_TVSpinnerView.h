//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVSpinnerView : UIView
{
    _Bool _shouldResumeAnimation;	// 8 = 0x8
    UIView *_spinnerContainer;	// 16 = 0x10
    UIView *_spinnerOverlayContainer;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    _Bool _animating;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000090487
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_removeAnimations;	// IMP=0x000000000009036f
- (void)_addAnimations;	// IMP=0x000000000008ff1c
- (void)_updateImagesForTraitCollection:(id)arg1;	// IMP=0x000000000008fd10
- (id)_spinnerImageForTraitCollection:(id)arg1 size:(struct CGSize)arg2 alpha:(double)arg3;	// IMP=0x000000000008fc3c
- (void)stopAnimating;	// IMP=0x000000000008fc17
- (void)startAnimating;	// IMP=0x000000000008fb9f
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000000008fb40
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000008faea
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008f931
- (void)didMoveToWindow;	// IMP=0x000000000008f8b6
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000008f853
- (void)dealloc;	// IMP=0x000000000008f7b1
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x000000000008eecb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008eeb7

@end

