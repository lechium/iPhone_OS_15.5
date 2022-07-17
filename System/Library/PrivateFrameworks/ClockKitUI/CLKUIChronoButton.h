//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView;

@interface CLKUIChronoButton : UIControl
{
    UIImageView *_ringView;	// 8 = 0x8
    UIImageView *_fillView;	// 16 = 0x10
    struct CGPoint _originalCenter;	// 24 = 0x18
    UIColor *_color;	// 40 = 0x28
    UIColor *_swapColor;	// 48 = 0x30
    UIColor *_highlightColor;	// 56 = 0x38
    UIColor *_ringColor;	// 64 = 0x40
    UIColor *_ringSwapColor;	// 72 = 0x48
    struct UIEdgeInsets _touchEdgeInsets;	// 80 = 0x50
}

+ (id)_ringImageWithRadius:(double)arg1 lineThickness:(double)arg2;	// IMP=0x000000000000e735
+ (id)_fillImageWithRadius:(double)arg1 lineThickness:(double)arg2;	// IMP=0x000000000000e565
- (void).cxx_destruct;	// IMP=0x000000000000ea77
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(retain, nonatomic) UIColor *ringSwapColor; // @synthesize ringSwapColor=_ringSwapColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *swapColor; // @synthesize swapColor=_swapColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000e4d5
- (void)_updateColors;	// IMP=0x000000000000e3d2
- (void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3;	// IMP=0x000000000000df15
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000ddf2
- (void)layoutSubviews;	// IMP=0x000000000000dd66
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000000dd08
- (void)_setupImagesWithDiameter:(double)arg1 lineThickness:(double)arg2;	// IMP=0x000000000000da4f
- (id)initWithDiameter:(double)arg1 lineThickness:(double)arg2;	// IMP=0x000000000000d9cd
- (id)initWithDiameter:(double)arg1;	// IMP=0x000000000000d94a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000d7a9

@end
