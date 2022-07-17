//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, VUICollectionHeaderViewLayout, VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICollectionHeaderView : UICollectionReusableView
{
    CDUnknownBlockType _selectionHandler;	// 8 = 0x8
    VUICollectionHeaderViewLayout *_layout;	// 16 = 0x10
    VUILabel *_titleTextView;	// 24 = 0x18
    VUILabel *_subtitleTextView;	// 32 = 0x20
    _TVImageView *_imageView;	// 40 = 0x28
    UIButton *_headerButton;	// 48 = 0x30
    VUISeparatorView *_separatorView;	// 56 = 0x38
    struct UIEdgeInsets _padding;	// 64 = 0x40
}

+ (id)configureCollectionHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonString:(id)arg3 existingView:(id)arg4;	// IMP=0x00000000001e51fa
- (void).cxx_destruct;	// IMP=0x00000000001e6a9d
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUILabel *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) VUILabel *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) VUICollectionHeaderViewLayout *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)_selectButtonAction:(id)arg1;	// IMP=0x00000000001e69a3
- (id)_buttonWithString:(id)arg1 existingButton:(id)arg2;	// IMP=0x00000000001e67c6
- (void)tintColorDidChange;	// IMP=0x00000000001e671d
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x00000000001e5874
- (void)layoutSubviews;	// IMP=0x00000000001e5829
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001e5812

@end
