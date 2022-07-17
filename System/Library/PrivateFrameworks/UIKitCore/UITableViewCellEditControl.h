//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl
{
    UITableViewCell *_cell;	// 120 = 0x78
    UIImageView *_imageView;	// 128 = 0x80
    UIImageView *_shadowView;	// 136 = 0x88
    double _focalY;	// 144 = 0x90
    double _focalHeight;	// 152 = 0x98
    unsigned int _style:2;	// 160 = 0xa0
    unsigned int _rotated:1;	// 160 = 0xa0
    unsigned int _rotating:1;	// 160 = 0xa0
    unsigned int _reserved:27;	// 160 = 0xa0
    UIColor *_accessoryTintColor;	// 168 = 0xa8
    UIColor *_accessoryBackgroundColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000ecc333
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (void)_createImageViewIfNeccessary;	// IMP=0x0000000000ecc0e7
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000ecc0bb
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000ecc08f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000ecbfa0
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000ecbf5f
- (void)_multiselectColorChanged;	// IMP=0x0000000000ecbf4d
@property(readonly, nonatomic) _Bool wantsImageShadow;
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)_toggleRotateAnimationDidStop;	// IMP=0x0000000000ecbf11
- (_Bool)isRotating;	// IMP=0x0000000000ecbefc
@property(nonatomic, getter=isRotated) _Bool rotated;
- (void)setRotated:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ecbd92
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000ecbd3d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000ecbcfc
- (void)layoutSubviews;	// IMP=0x0000000000ecb929
- (id)_shadowImage;	// IMP=0x0000000000ecb820
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x0000000000ecb815
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;	// IMP=0x0000000000ecb794
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;	// IMP=0x0000000000ecb5e6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000ecb520
- (struct CGSize)defaultSize;	// IMP=0x0000000000ecb47e
- (id)_renderedImage;	// IMP=0x0000000000ecb461
- (id)_currentImage;	// IMP=0x0000000000ecb3c2
- (void)_updateImageView;	// IMP=0x0000000000ecb36e
- (id)_multiSelectSelectedImage;	// IMP=0x0000000000ecb222
- (id)_multiSelectNotSelectedImage;	// IMP=0x0000000000ecb120
- (id)_insertImage;	// IMP=0x0000000000ecb0a9
- (id)_deleteImage;	// IMP=0x0000000000ecb032
- (void)_toggleRotate;	// IMP=0x0000000000ecb00b
- (id)_imageView;	// IMP=0x0000000000ecc395

@end
