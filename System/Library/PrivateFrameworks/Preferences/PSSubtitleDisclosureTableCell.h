//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface PSSubtitleDisclosureTableCell
{
    UILabel *_valueLabel;	// 120 = 0x78
}

+ (long long)cellStyle;	// IMP=0x00000000000058da
- (void).cxx_destruct;	// IMP=0x00000000000065b9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000006448
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000063da
- (_Bool)canReload;	// IMP=0x00000000000063d2
- (void)layoutSubviews;	// IMP=0x0000000000005c77
- (void)_valueLabelForSpecifier:(id)arg1;	// IMP=0x00000000000059e1
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000058e5
@property(retain, nonatomic) UILabel *valueLabel;

@end
