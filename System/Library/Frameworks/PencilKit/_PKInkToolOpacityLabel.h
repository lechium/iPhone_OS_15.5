//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkToolOpacityLabel : UIView
{
    unsigned long long _sizeState;	// 8 = 0x8
    double _inkOpacity;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

+ (id)_fontForSizeState:(unsigned long long)arg1;	// IMP=0x00000000000cee53
+ (double)_maxLabelHeightForSizeState:(unsigned long long)arg1;	// IMP=0x00000000000cee38
+ (double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)arg1;	// IMP=0x00000000000cee1d
+ (double)_toolOffsetForSizeState:(unsigned long long)arg1;	// IMP=0x00000000000cee0f
+ (id)_formattedStringForInkOpacity:(double)arg1;	// IMP=0x00000000000ced1a
+ (double)_labelAlphaForInkOpacity:(double)arg1;	// IMP=0x00000000000cecfb
+ (_Bool)_shouldHideLabel:(double)arg1;	// IMP=0x00000000000cecd7
- (void).cxx_destruct;	// IMP=0x00000000000ceed4
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double inkOpacity; // @synthesize inkOpacity=_inkOpacity;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
- (struct CGRect)_frameForRotatedLabel;	// IMP=0x00000000000ceae9
- (id)_inkOpacityLabelString;	// IMP=0x00000000000cea5e
- (void)setInkOpacity:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000ce8cd
- (void)layoutSubviews;	// IMP=0x00000000000ce5cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ce4ec

@end
