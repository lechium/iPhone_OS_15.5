//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class PKPass, PKPassHeaderView;
@protocol PKPassLibraryDataProvider;

@interface PKPassHeaderViewCell : UICollectionViewListCell
{
    PKPassHeaderView *_passHeaderView;	// 8 = 0x8
    PKPass *_pass;	// 16 = 0x10
    id <PKPassLibraryDataProvider> _passLibraryOverride;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000794dd
@property(retain, nonatomic) id <PKPassLibraryDataProvider> passLibraryOverride; // @synthesize passLibraryOverride=_passLibraryOverride;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)_configurePassHeader;	// IMP=0x00000000000793bf
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x000000000007926f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000079226
- (void)layoutSubviews;	// IMP=0x0000000000079185

@end
