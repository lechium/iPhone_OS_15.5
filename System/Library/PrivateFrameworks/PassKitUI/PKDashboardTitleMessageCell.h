//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface PKDashboardTitleMessageCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000385755
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000000385557
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000385494
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000385233

@end
