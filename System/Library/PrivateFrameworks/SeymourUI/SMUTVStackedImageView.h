//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSShadow, UIImage, UILayoutGuide, UIMotionEffectGroup, _SMUTVStackedImageNamedLayerStack, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

@interface SMUTVStackedImageView : UIView
{
    UIImage *_staticImage;	// 8 = 0x8
    _UIStackedImageContainerLayer *_imageStackLayer;	// 16 = 0x10
    _UIStackedImageConfiguration *_imageStackConfig;	// 24 = 0x18
    _SMUTVStackedImageNamedLayerStack *_uiLayerStack;	// 32 = 0x20
    UIMotionEffectGroup *_motionEffectGroup;	// 40 = 0x28
    NSLayoutConstraint *_widthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_heightConstraint;	// 56 = 0x38
    double _layerSelectionDuration;	// 64 = 0x40
    double _layerUnselectionDuration;	// 72 = 0x48
    double _shadowSelectionDuration;	// 80 = 0x50
    double _shadowUnselectionDuration;	// 88 = 0x58
    double _repositionUnselectionDuration;	// 96 = 0x60
    _Bool _overlayComposited;	// 104 = 0x68
    UILayoutGuide *_focusLayoutGuide;	// 112 = 0x70
    long long _state;	// 120 = 0x78
    NSShadow *_shadow;	// 128 = 0x80
    UIView *_overlayView;	// 136 = 0x88
    UIView *_unmaskedOverlayView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000007c4b
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic, getter=isOverlayComposited) _Bool overlayComposited; // @synthesize overlayComposited=_overlayComposited;
@property(copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) UILayoutGuide *focusLayoutGuide; // @synthesize focusLayoutGuide=_focusLayoutGuide;
- (void)_updateStackedImageConfiguration;	// IMP=0x00000000000079ed
- (void)_detachMotionEffects;	// IMP=0x00000000000079d0
- (void)_attachMotionEffects;	// IMP=0x0000000000007835
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x000000000000776a
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000000774d
- (void)_commitLayerStack:(id)arg1;	// IMP=0x0000000000007693
- (void)_updateLayerStack:(id)arg1 withImage:(struct CGImage *)arg2 size:(struct CGSize)arg3;	// IMP=0x00000000000073f9
- (void)_loadImage;	// IMP=0x0000000000006c96
- (struct CGSize)_scaledSize;	// IMP=0x0000000000006bfb
- (void)layoutSubviews;	// IMP=0x0000000000006b6e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000006b2d
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000006b10
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x0000000000006ab9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000006a9c
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000006a45
@property(nonatomic) struct CGPoint focusDirection;
- (void)_updateMotionEffectsForState:(unsigned long long)arg1;	// IMP=0x00000000000069e8
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000068e1
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000006899
@property(readonly, nonatomic) unsigned long long controlState;
- (void)_updateFocusLayoutGuideForControlState:(unsigned long long)arg1;	// IMP=0x00000000000067c5
@property(nonatomic) double focusSizeIncrease;
@property(nonatomic) _Bool flatImageContainsCornerRadius;
@property(nonatomic) double cornerRadius;
@property(nonatomic) _Bool allowsNonOpaqueShadow;
@property(readonly, nonatomic) unsigned long long primaryControlState;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) UIImage *image;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000062be
- (void)dealloc;	// IMP=0x0000000000006232
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005da4

@end
