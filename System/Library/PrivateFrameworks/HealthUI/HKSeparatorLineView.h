//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView
{
    UIColor *_color;	// 8 = 0x8
    double _separatorThickness;	// 16 = 0x10
    long long _dashStyle;	// 24 = 0x18
    double _leadingMargin;	// 32 = 0x20
    double _trailingMargin;	// 40 = 0x28
}

+ (id)_hkecg_separatorView;	// IMP=0x0000000000085aed
- (void).cxx_destruct;	// IMP=0x0000000000099adb
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) long long dashStyle; // @synthesize dashStyle=_dashStyle;
@property(nonatomic) double separatorThickness; // @synthesize separatorThickness=_separatorThickness;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)_applyStyleToContext:(struct CGContext *)arg1;	// IMP=0x00000000000999e2
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000099855
- (_Bool)isOpaque;	// IMP=0x000000000009984d
- (_Bool)_isVertical;	// IMP=0x0000000000099810
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000009977f
- (id)init;	// IMP=0x000000000009974d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000099697

@end

