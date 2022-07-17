//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class GEOSearchCategory, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface NavCategoryCell : UITableViewCell
{
    UIImageView *_leadingImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    GEOSearchCategory *_category;	// 24 = 0x18
}

+ (double)heightForCellWithCategory:(id)arg1 width:(double)arg2;	// IMP=0x004000000085b1bc
- (void).cxx_destruct;	// IMP=0x002000000085b396
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x001000000085b078
- (void)_updateContent;	// IMP=0x001000000085aea2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000085ad05
- (void)prepareForReuse;	// IMP=0x001000000085acc2
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000085a51e

@end
