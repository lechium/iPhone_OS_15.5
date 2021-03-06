//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStyledImageButton : UIControl
{
    _Bool _didInitialHighlightForTouch;	// 8 = 0x8
    SKUIImageView *_imageView;	// 16 = 0x10
    SKUIImageView *_additionalImageView;	// 24 = 0x18
    struct UIEdgeInsets _bigHitInsets;	// 32 = 0x20
    _Bool _useBigHitTarget;	// 64 = 0x40
    struct UIEdgeInsets _hitRectInsets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000028917d
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(readonly, nonatomic) SKUIImageView *additionalImageView; // @synthesize additionalImageView=_additionalImageView;
@property(nonatomic) _Bool useBigHitTarget; // @synthesize useBigHitTarget=_useBigHitTarget;
@property(readonly, nonatomic) SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002890a2
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000288f99
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000288ed9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000288e8a
- (void)layoutSubviews;	// IMP=0x0000000000288d5b
- (struct CGRect)hitRect;	// IMP=0x0000000000288c88
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000288c4e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000288ae5

@end

