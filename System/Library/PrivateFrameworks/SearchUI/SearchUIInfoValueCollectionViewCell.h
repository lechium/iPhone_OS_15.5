//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class SearchUIImageView, TLKLabel, TLKStackView;

@interface SearchUIInfoValueCollectionViewCell : UICollectionViewCell
{
    TLKLabel *_valueLabel;	// 8 = 0x8
    TLKStackView *_stackView;	// 16 = 0x10
    SearchUIImageView *_imageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ae25c
@property(retain, nonatomic) SearchUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) TLKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)layoutSubviews;	// IMP=0x00000000000ae157
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000000ae0eb
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x00000000000ae0e3
- (void)updateWithString:(id)arg1 image:(id)arg2;	// IMP=0x00000000000adff2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000adbd6

@end

