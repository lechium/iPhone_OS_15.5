//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIImageView, UISlider;

@interface SSVellumOpacityControl : UIControl
{
    UISlider *_slider;	// 8 = 0x8
    UIImageView *_leadingImageView;	// 16 = 0x10
    UIImageView *_trailingImageView;	// 24 = 0x18
}

+ (double)preferredWidth;	// IMP=0x0000000000010794
- (void).cxx_destruct;	// IMP=0x0000000000010ac4
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0000000000010aa7
@property(nonatomic) double value;
- (id)_rightImageView;	// IMP=0x0000000000010a0b
- (id)_leftImageView;	// IMP=0x00000000000109ce
- (void)layoutSubviews;	// IMP=0x00000000000107b4
- (void)tintColorDidChange;	// IMP=0x00000000000107a2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001076f
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000010756
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001024f

@end
