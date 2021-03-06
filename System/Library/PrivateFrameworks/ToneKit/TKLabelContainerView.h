//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView
{
    UILabel *_label;	// 8 = 0x8
    struct UIEdgeInsets _labelPaddingInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e9a6
@property(nonatomic) struct UIEdgeInsets labelPaddingInsets; // @synthesize labelPaddingInsets=_labelPaddingInsets;
- (void)layoutSubviews;	// IMP=0x000000000000e7ed
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000e74d
@property(nonatomic) struct UIOffset labelShadowOffset;
@property(retain, nonatomic) UIColor *labelShadowColor;
@property(retain, nonatomic) UIColor *labelTextColor;
@property(retain, nonatomic) UIFont *labelFont;
@property(copy, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000e3df

@end

