//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSString, UIFont, UILabel;

@interface PKCollectionSectionHeaderView : UICollectionViewListCell
{
    UILabel *_primaryLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    NSString *_primaryText;	// 24 = 0x18
    NSString *_secondaryText;	// 32 = 0x20
    UIFont *_primaryFont;	// 40 = 0x28
    UIFont *_secondaryFont;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004ac32a
@property(copy, nonatomic) UIFont *secondaryFont; // @synthesize secondaryFont=_secondaryFont;
@property(copy, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)prepareForReuse;	// IMP=0x00000000004ac201
- (void)_resetFont;	// IMP=0x00000000004ac15d
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000004aba5b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004aba12
- (void)layoutSubviews;	// IMP=0x00000000004ab971
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004ab914
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000004ab8d0
- (id)init;	// IMP=0x00000000004ab89e

@end

