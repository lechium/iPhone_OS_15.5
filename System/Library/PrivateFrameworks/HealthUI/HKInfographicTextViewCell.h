//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface HKInfographicTextViewCell : UITableViewCell
{
    UILabel *_descriptionLabel;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a7682
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)_descriptionTextColor;	// IMP=0x00000000001a761f
- (id)_descriptionFont;	// IMP=0x00000000001a75fc
- (id)_labelWithFont:(id)arg1;	// IMP=0x00000000001a74d1
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001a7025

@end
