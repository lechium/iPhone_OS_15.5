//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UILabel;

@interface PKTransactionStatusCell : UITableViewCell
{
    UILabel *_primaryLabel;	// 8 = 0x8
    UILabel *_secondaryTitleLabel;	// 16 = 0x10
    UILabel *_secondaryValueLabel;	// 24 = 0x18
    _Bool _templateLayout;	// 32 = 0x20
    _Bool _isBridge;	// 33 = 0x21
    NSString *_primaryText;	// 40 = 0x28
    NSString *_secondaryTitle;	// 48 = 0x30
    NSString *_secondaryValue;	// 56 = 0x38
    UIColor *_primaryTextOverrideColor;	// 64 = 0x40
    UIColor *_secondaryTextOverrideColor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002dba4
@property(nonatomic) _Bool isBridge; // @synthesize isBridge=_isBridge;
@property(retain, nonatomic) UIColor *secondaryTextOverrideColor; // @synthesize secondaryTextOverrideColor=_secondaryTextOverrideColor;
@property(retain, nonatomic) UIColor *primaryTextOverrideColor; // @synthesize primaryTextOverrideColor=_primaryTextOverrideColor;
@property(copy, nonatomic) NSString *secondaryValue; // @synthesize secondaryValue=_secondaryValue;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x000000000002d700
- (void)_updateTextColors;	// IMP=0x000000000002d583
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002d13a
- (void)layoutSubviews;	// IMP=0x000000000002d09b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002ce54

@end
