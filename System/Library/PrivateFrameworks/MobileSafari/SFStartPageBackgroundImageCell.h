//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImage, UIImageView, UIView;
@protocol SFStartPageBackgroundImageCellDelegate;

__attribute__((visibility("hidden")))
@interface SFStartPageBackgroundImageCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
    UIView *_selectionIndicator;	// 24 = 0x18
    UIButton *_clearButton;	// 32 = 0x20
    id <SFStartPageBackgroundImageCellDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000790a6
@property(nonatomic) __weak id <SFStartPageBackgroundImageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsSelectionRing;
@property(nonatomic) _Bool showsCustomImageControls;
@property(retain, nonatomic) UIImage *image;
- (void)didSelectClearButton:(id)arg1;	// IMP=0x0000000000078ef3
- (void)updateSelectionIndicatorColor;	// IMP=0x0000000000078e12
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000078db2
- (void)tintColorDidChange;	// IMP=0x0000000000078d71
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000078cbf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000078627

@end
