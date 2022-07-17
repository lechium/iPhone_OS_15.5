//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton
{
    UIImage *_touchImage;	// 8 = 0x8
    _Bool _showsTouchOnTopWhenHighlighted;	// 16 = 0x10
}

@property(retain, nonatomic) UIImage *touchImage; // @synthesize touchImage=_touchImage;
@property(nonatomic) _Bool showsTouchOnTopWhenHighlighted; // @synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000003e409c
- (void)layoutSubviews;	// IMP=0x00000000003e3e06
- (id)_pressFeedbackImage;	// IMP=0x00000000003e3dd2
- (struct CGPoint)_pressFeedbackPosition;	// IMP=0x00000000003e3d1d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003e3c79
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003e3c09
- (void)dealloc;	// IMP=0x00000000003e3bc7

@end
