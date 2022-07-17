//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface CNLabeledBadge : UIView
{
    UILabel *_label;	// 8 = 0x8
    double _height;	// 16 = 0x10
    struct CGSize _cachedTextSize;	// 24 = 0x18
}

+ (id)labeledBadgeWithText:(id)arg1;	// IMP=0x00000000001405f1
- (void).cxx_destruct;	// IMP=0x00000000001405de
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001405cc
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000014058f
- (void)layoutSubviews;	// IMP=0x00000000001404bc
- (void)cacheTextSizeIfNeeded;	// IMP=0x0000000000140448
- (void)invalidateCachedTextSize;	// IMP=0x0000000000140408
@property(copy, nonatomic) UIColor *textColor;
@property(copy, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000140049

@end
