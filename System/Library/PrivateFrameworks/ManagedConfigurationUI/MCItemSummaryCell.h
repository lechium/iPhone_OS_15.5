//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MCItemSummaryCell : UITableViewCell
{
    UIImageView *_itemImageView;	// 8 = 0x8
    UIView *_itemTitleView;	// 16 = 0x10
    UILabel *_itemTitleLabel;	// 24 = 0x18
    UILabel *_itemSubtitleLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013e88
@property(retain, nonatomic) UILabel *itemSubtitleLabel; // @synthesize itemSubtitleLabel=_itemSubtitleLabel;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIView *itemTitleView; // @synthesize itemTitleView=_itemTitleView;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void)_setupConstraints;	// IMP=0x0000000000013077
- (void)_setupCell;	// IMP=0x0000000000012cea
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000012c87

@end
