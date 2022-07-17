//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <VideosUICore/VUIAuxiliaryViewSelecting-Protocol.h>

@class NSShadow, NSString, UIImage, UIMotionEffectGroup, VUIImageProxy, VUIStackedImageNamedLayerStack, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

@interface VUIStackedImageView : UIView <VUIAuxiliaryViewSelecting>
{
    UIImage *_staticImage;	// 8 = 0x8
    _UIStackedImageContainerLayer *_imageStackLayer;	// 16 = 0x10
    _UIStackedImageConfiguration *_imageStackConfig;	// 24 = 0x18
    VUIStackedImageNamedLayerStack *_uiLayerStack;	// 32 = 0x20
    UIMotionEffectGroup *_motionEffectGroup;	// 40 = 0x28
    double _layerSelectionDuration;	// 48 = 0x30
    double _layerUnselectionDuration;	// 56 = 0x38
    double _shadowSelectionDuration;	// 64 = 0x40
    double _shadowUnselectionDuration;	// 72 = 0x48
    double _repositionUnselectionDuration;	// 80 = 0x50
    _Bool _overlayComposited;	// 88 = 0x58
    _Bool _imageLoaded;	// 89 = 0x59
    VUIImageProxy *_imageProxy;	// 96 = 0x60
    NSShadow *_shadow;	// 104 = 0x68
    UIView *_overlayView;	// 112 = 0x70
    UIView *_unmaskedOverlayView;	// 120 = 0x78
    struct CGSize _stackSize;	// 128 = 0x80
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x0000000000016f66
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 selectionStyle:(long long)arg2;	// IMP=0x0000000000016ed8
+ (Class)layerClass;	// IMP=0x00000000000143c8
- (void).cxx_destruct;	// IMP=0x0000000000017040
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic, getter=isOverlayComposited) _Bool overlayComposited; // @synthesize overlayComposited=_overlayComposited;
@property(copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(retain, nonatomic) VUIImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000016f7f
- (void)_updateStackedImageConfiguration;	// IMP=0x0000000000016ceb
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x0000000000016cce
- (void)_resetShadowSettings;	// IMP=0x0000000000016b7d
- (void)_setShadowVerticalOffset:(double)arg1;	// IMP=0x0000000000016b1d
- (void)_setShadowRadius:(double)arg1;	// IMP=0x0000000000016abd
- (void)_setShadowOpacity:(double)arg1;	// IMP=0x0000000000016a5d
- (void)_updateImageSamplingOverlays;	// IMP=0x000000000001689e
- (void)_commitLayerStack:(id)arg1;	// IMP=0x000000000001679b
- (void)_updateLayerStack:(id)arg1 withImage:(struct CGImage *)arg2 size:(struct CGSize)arg3;	// IMP=0x0000000000016501
- (void)_loadImage;	// IMP=0x000000000001581d
- (id)_layerBelowTitles;	// IMP=0x0000000000015800
- (double)_idleModeFocusSizeOffset;	// IMP=0x00000000000157e3
- (id)_layeredImageContainerLayer;	// IMP=0x00000000000157ce
- (id)_imageConfiguration;	// IMP=0x00000000000157b1
- (id)_newImageConfiguration;	// IMP=0x0000000000015765
- (void)animateWithAuxiliarySelectionState:(_Bool)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00000000000156e3
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000000155e5
@property(readonly, nonatomic) unsigned long long primaryControlState;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000001558f
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000015572
@property(nonatomic) unsigned long long controlState;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001551b
@property(nonatomic) struct CGPoint focusDirection;
- (void)setPressed:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015304
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000152e7
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000152ca
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setFocused:(_Bool)arg1;	// IMP=0x000000000001526e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x00000000000151d9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000015144
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000150dc
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)_detachMotionEffects;	// IMP=0x0000000000015077
- (void)_attachMotionEffects;	// IMP=0x0000000000014edc
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x0000000000014e11
@property(nonatomic) long long selectionStyle;
@property(nonatomic) _Bool allowsNonOpaqueShadow;
@property(nonatomic) double focusSizeIncrease;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)setImage:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000014844
@property(readonly, nonatomic) UIImage *image;
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000014673
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000014612
- (void)dealloc;	// IMP=0x0000000000014586
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000143d9
- (id)initWithImageProxy:(id)arg1;	// IMP=0x0000000000014359

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
