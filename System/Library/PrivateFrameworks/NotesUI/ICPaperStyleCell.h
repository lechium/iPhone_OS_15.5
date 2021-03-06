//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UIView *_selectionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a0e7
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)preferredTintColor;	// IMP=0x000000000001a05f
- (id)accessibilityHint;	// IMP=0x000000000001a033
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000000019fa9
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000019fa1
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000019f53
- (void)prepareForReuse;	// IMP=0x0000000000019eab
- (void)setupCell;	// IMP=0x0000000000019350
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000192f3

@end

