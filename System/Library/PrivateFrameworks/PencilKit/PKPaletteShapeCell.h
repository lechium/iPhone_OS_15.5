//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class PKPaletteShape, UIImageView;

@interface PKPaletteShapeCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    PKPaletteShape *_shape;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000070267
@property(retain, nonatomic) PKPaletteShape *shape; // @synthesize shape=_shape;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;	// IMP=0x0000000000070103
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006ff3e

@end
