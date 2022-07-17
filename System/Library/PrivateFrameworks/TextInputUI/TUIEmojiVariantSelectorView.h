//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class EMFEmojiToken, NSArray, ShapeView, UIView;

@interface TUIEmojiVariantSelectorView : UIControl
{
    UIView *_variantCellContainerView;	// 8 = 0x8
    EMFEmojiToken *_selectedVariant;	// 16 = 0x10
    NSArray *_allVariants;	// 24 = 0x18
    UIView *_deepShadowView;	// 32 = 0x20
    UIView *_keyShadowView;	// 40 = 0x28
    UIView *_backdropView;	// 48 = 0x30
    ShapeView *_backgroundMaskView;	// 56 = 0x38
    ShapeView *_borderView;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    EMFEmojiToken *_baseEmojiToken;	// 80 = 0x50
    NSArray *_arrangedVariantCells;	// 88 = 0x58
    struct CGRect _originRect;	// 96 = 0x60
}

+ (id)emojiTextAttributes;	// IMP=0x0000000000045fd1
- (void).cxx_destruct;	// IMP=0x0000000000045871
@property(retain, nonatomic) NSArray *arrangedVariantCells; // @synthesize arrangedVariantCells=_arrangedVariantCells;
@property(retain, nonatomic) EMFEmojiToken *baseEmojiToken; // @synthesize baseEmojiToken=_baseEmojiToken;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) ShapeView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) ShapeView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *keyShadowView; // @synthesize keyShadowView=_keyShadowView;
@property(retain, nonatomic) UIView *deepShadowView; // @synthesize deepShadowView=_deepShadowView;
@property(readonly, nonatomic) NSArray *allVariants; // @synthesize allVariants=_allVariants;
@property(readonly, nonatomic) EMFEmojiToken *selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(readonly, nonatomic) UIView *variantCellContainerView; // @synthesize variantCellContainerView=_variantCellContainerView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000045648
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000045613
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000455df
- (_Bool)_highlightCellAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000045571
- (id)_variantCellAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000004537b
- (void)_unhighlightAllViews;	// IMP=0x0000000000045249
- (void)layoutSubviews;	// IMP=0x000000000004483f
- (id)_backgroundBezierPathForContainerRect:(struct CGRect)arg1 originRect:(struct CGRect)arg2;	// IMP=0x0000000000044347
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000044285
- (unsigned long long)_numberOfVariants;	// IMP=0x0000000000044236
- (struct CGSize)_emojiCellSize;	// IMP=0x00000000000441b5
- (id)initWithFrame:(struct CGRect)arg1 emojiToken:(id)arg2 originRect:(struct CGRect)arg3;	// IMP=0x000000000004342d

@end
