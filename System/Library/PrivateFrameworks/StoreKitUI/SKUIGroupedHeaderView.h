//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SKUIGroupedHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIView *_topBorder;	// 16 = 0x10
    UIView *_botBorder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000107f7f
- (void)layoutSubviews;	// IMP=0x0000000000107ce8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000107c67
@property(nonatomic) _Bool hasBottomBorder;
@property(nonatomic) _Bool hasTopBorder;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000107945

@end

