//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface NavTrayActionCell : UITableViewCell
{
    UIImageView *_leadingImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

+ (double)heightForCellWithText:(id)arg1 width:(double)arg2;	// IMP=0x004000000033dfeb
- (void).cxx_destruct;	// IMP=0x002000000033e3bb
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x001000000033e255
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000033e194
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000033d5c2

@end

