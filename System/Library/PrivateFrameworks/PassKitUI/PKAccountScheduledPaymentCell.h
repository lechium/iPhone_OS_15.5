//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSTimeZone, PKAccountPayment, UIColor, UILabel, UITableViewCellLayoutManager;

@interface PKAccountScheduledPaymentCell : UITableViewCell
{
    UILabel *_frequencyLabel;	// 8 = 0x8
    UILabel *_statusLabel;	// 16 = 0x10
    UILabel *_amountLabel;	// 24 = 0x18
    UITableViewCellLayoutManager *_layoutManager;	// 32 = 0x20
    NSTimeZone *_timeZone;	// 40 = 0x28
    _Bool _hasPaymentDueDate;	// 48 = 0x30
    _Bool _sizing;	// 49 = 0x31
    _Bool _useStackedLayout;	// 50 = 0x32
    _Bool _onHold;	// 51 = 0x33
    PKAccountPayment *_payment;	// 56 = 0x38
    UIColor *_titleColor;	// 64 = 0x40
    unsigned long long _featureIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002e7c39
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool onHold; // @synthesize onHold=_onHold;
@property(nonatomic) __weak PKAccountPayment *payment; // @synthesize payment=_payment;
- (id)_dateString;	// IMP=0x00000000002e7928
- (id)_amountAttributedString;	// IMP=0x00000000002e77b5
- (id)_amountString;	// IMP=0x00000000002e7614
- (id)_frequencyString;	// IMP=0x00000000002e7521
- (id)_statusAttributedString;	// IMP=0x00000000002e7309
- (id)_frequencyAttributedString;	// IMP=0x00000000002e7185
- (void)prepareForReuse;	// IMP=0x00000000002e7143
- (void)setPayment:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000002e6e47
- (struct UIEdgeInsets)_effectiveLayoutMargins;	// IMP=0x00000000002e6d1d
- (_Bool)_useStackedLayoutForUsableWidth:(double)arg1;	// IMP=0x00000000002e6cbc
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000002e65e0
- (void)layoutSubviews;	// IMP=0x00000000002e6573
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002e650c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002e6344

@end

