//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface NCGradientView : UIView
{
    CAGradientLayer *_gradient;	// 8 = 0x8
    _Bool _isVertical;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bb541
- (void)layoutSubviews;	// IMP=0x00000000000bb44b
- (id)initWithVerticalStartColor:(id)arg1 verticalEndColor:(id)arg2;	// IMP=0x00000000000bb28e
- (id)initWithHorizontalStartColor:(id)arg1 horizontalEndColor:(id)arg2;	// IMP=0x00000000000bb062

@end

