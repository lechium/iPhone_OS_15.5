//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface COSDiscoverSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

+ (double)bottomMargin;	// IMP=0x004000000011c5de
+ (double)topMargin;	// IMP=0x001000000011c5d0
+ (id)titleLabelFont;	// IMP=0x001000000011c55d
+ (id)reuseIdentifier;	// IMP=0x001000000011c173
- (void).cxx_destruct;	// IMP=0x002000000011c64a
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSectionTitle:(id)arg1;	// IMP=0x001000000011c5ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000011c180

@end

