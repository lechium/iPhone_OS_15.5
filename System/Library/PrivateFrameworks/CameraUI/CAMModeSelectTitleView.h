//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMModeSelectTitleView : UIView
{
    UIColor *_textColor;	// 8 = 0x8
    UILabel *__titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011c450
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)layoutSubviews;	// IMP=0x000000000011c398
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011c0c6

@end
