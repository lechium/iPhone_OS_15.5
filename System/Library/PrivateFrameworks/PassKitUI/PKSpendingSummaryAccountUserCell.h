//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

@interface PKSpendingSummaryAccountUserCell
{
    UILabel *_amountLabel;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UIImageView *_avatarView;	// 24 = 0x18
    _Bool _isTemplateLayout;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_amount;	// 56 = 0x38
    UIImage *_avatar;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000485acd
@property(copy, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000485480
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000485422
- (void)layoutSubviews;	// IMP=0x00000000004853b5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000484ea8

@end
