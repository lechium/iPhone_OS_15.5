//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface CNRepeatingGradientSeparatorView : UIView
{
    UIColor *_startColor;	// 8 = 0x8
    UIColor *_endColor;	// 16 = 0x10
    long long _lineCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000163eea
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
@property(readonly, nonatomic) NSArray *gradientColors;
- (void)layoutSubviews;	// IMP=0x0000000000163a91
- (void)_updateGradients;	// IMP=0x00000000001638d0
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001637f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001636f3

@end

