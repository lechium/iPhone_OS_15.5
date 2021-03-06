//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBHomeScreenMaterialView : UIView
{
    UIView *_backgroundView;	// 8 = 0x8
    UIView *_whiteTintView;	// 16 = 0x10
    UIImageView *_xColorBurnView;	// 24 = 0x18
    UIImageView *_xPlusDView;	// 32 = 0x20
    UIView *_highlightView;	// 40 = 0x28
    _Bool _highlighted;	// 48 = 0x30
    struct UIEdgeInsets _backgroundInsets;	// 56 = 0x38
}

+ (id)colorBurnContentImageForImage:(id)arg1;	// IMP=0x0000000000250d7c
- (void).cxx_destruct;	// IMP=0x0000000000251b60
@property(nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)_addHighlightViewIfNecessary;	// IMP=0x00000000002519bf
- (void)layoutSubviews;	// IMP=0x00000000002515c9
@property(nonatomic) double brightness;
- (void)setLegibilityStyle:(long long)arg1;	// IMP=0x000000000025149b
@property(retain, nonatomic) UIImage *foregroundImage;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000251332
- (id)initWithFrame:(struct CGRect)arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3;	// IMP=0x0000000000250e4a

@end

