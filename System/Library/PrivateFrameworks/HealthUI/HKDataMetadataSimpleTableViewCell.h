//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell
{
    UILabel *_titleTextLabel;	// 8 = 0x8
    UILabel *_subtitleTextLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010d347
@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000010d203
- (void)setupConstraints;	// IMP=0x000000000010cc72
- (void)layoutSubviews;	// IMP=0x000000000010cabe
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000010c9dd
- (void)setupSubviews;	// IMP=0x000000000010c75e
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000010c6e6

@end

