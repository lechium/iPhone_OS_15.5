//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, UITextField;

@interface FPUIAuthenticationTextInputCell : UITableViewCell
{
    UIStackView *_stackView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UITextField *_textField;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002d5b
@property(readonly, nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (_Bool)_isLargeTextTraitCollection:(id)arg1;	// IMP=0x0000000000002c14
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000002b09
- (void)prepareForReuse;	// IMP=0x0000000000002a2a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000241a

@end
