//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillTableViewCell : UITableViewCell
{
    SFContactAutoFillValue *_value;	// 8 = 0x8
    UIButton *_checkmarkButton;	// 16 = 0x10
    UILabel *_categoryLabel;	// 24 = 0x18
    UILabel *_optionLabel;	// 32 = 0x20
    _Bool _usesDetailAppearance;	// 40 = 0x28
    _Bool _checked;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x0000000000168002
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool usesDetailAppearance; // @synthesize usesDetailAppearance=_usesDetailAppearance;
- (void)checkmarkButtonTapped:(id)arg1;	// IMP=0x0000000000167df7
- (void)setValue:(id)arg1 property:(id)arg2;	// IMP=0x0000000000167be7
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001673dd

@end
