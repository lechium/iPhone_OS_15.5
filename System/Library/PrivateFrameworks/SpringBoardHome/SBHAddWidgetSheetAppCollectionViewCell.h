//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <SpringBoardHome/SBHAddWidgetSheetAppCollectionViewCellConfigurable-Protocol.h>

@class MTVisualStylingProvider, NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView, UIView;

@interface SBHAddWidgetSheetAppCollectionViewCell : UICollectionViewCell <SBHAddWidgetSheetAppCollectionViewCellConfigurable>
{
    _Bool _isFocused;	// 8 = 0x8
    _Bool _separatorVisible;	// 9 = 0x9
    _Bool _separatorAlignedToLabels;	// 10 = 0xa
    _Bool _imageViewRequiresVisualStyling;	// 11 = 0xb
    _Bool _textLabelHasVisualStyling;	// 12 = 0xc
    _Bool _imageViewHasVisualStyling;	// 13 = 0xd
    unsigned long long _addWidgetSheetStyle;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    MTVisualStylingProvider *_visualStylingProvider;	// 40 = 0x28
    UILabel *_detailTextLabel;	// 48 = 0x30
    UIStackView *_horizontalStackView;	// 56 = 0x38
    UIStackView *_verticalStackView;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    NSLayoutConstraint *_iconHeightConstraint;	// 80 = 0x50
    NSLayoutConstraint *_iconWidthConstraint;	// 88 = 0x58
    NSLayoutConstraint *_leadingConstraint;	// 96 = 0x60
    NSLayoutConstraint *_trailingConstraint;	// 104 = 0x68
    NSLayoutConstraint *_topConstraint;	// 112 = 0x70
    NSLayoutConstraint *_bottomConstraint;	// 120 = 0x78
    NSLayoutConstraint *_separatorLeadingConstraint;	// 128 = 0x80
    struct NSDirectionalEdgeInsets _contentInsets;	// 136 = 0x88
    struct SBIconImageInfo _iconImageInfo;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000025e979
@property(nonatomic) _Bool imageViewHasVisualStyling; // @synthesize imageViewHasVisualStyling=_imageViewHasVisualStyling;
@property(nonatomic) _Bool textLabelHasVisualStyling; // @synthesize textLabelHasVisualStyling=_textLabelHasVisualStyling;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeadingConstraint; // @synthesize separatorLeadingConstraint=_separatorLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconWidthConstraint; // @synthesize iconWidthConstraint=_iconWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconHeightConstraint; // @synthesize iconHeightConstraint=_iconHeightConstraint;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;
@property(retain, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(nonatomic) __weak MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic) _Bool imageViewRequiresVisualStyling; // @synthesize imageViewRequiresVisualStyling=_imageViewRequiresVisualStyling;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic, getter=isSeparatorAlignedToLabels) _Bool separatorAlignedToLabels; // @synthesize separatorAlignedToLabels=_separatorAlignedToLabels;
@property(nonatomic, getter=isSeparatorVisible) _Bool separatorVisible; // @synthesize separatorVisible=_separatorVisible;
@property(nonatomic) unsigned long long addWidgetSheetStyle; // @synthesize addWidgetSheetStyle=_addWidgetSheetStyle;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000025e5e7
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000025e4f3
- (unsigned long long)_textLabelNumberOfLines;	// IMP=0x000000000025e484
- (id)_detailTextLabelFont;	// IMP=0x000000000025e3b1
- (id)_textLabelFont;	// IMP=0x000000000025e2de
- (long long)_uiHIFontStyle;	// IMP=0x000000000025e2c0
- (void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)arg1;	// IMP=0x000000000025e24e
- (void)setAddWidgetSheetAppCollectionViewCellTitle:(id)arg1;	// IMP=0x000000000025e1dc
- (void)_updateVisualStylingForImageView;	// IMP=0x000000000025e13a
- (void)_updateVisualStylingForTextLabel;	// IMP=0x000000000025e098
- (void)_updateAppearanceForFocus;	// IMP=0x000000000025dce7
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000025dc46
@property(nonatomic) double contentHorizontalSpacing;
@property(copy, nonatomic) NSString *detailText;
- (void)_updateSeparatorLeadingConstraint;	// IMP=0x000000000025d888
- (void)_updateTableViewStyle;	// IMP=0x000000000025d6a6
- (void)prepareForReuse;	// IMP=0x000000000025d5b0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000025d569
- (void)dealloc;	// IMP=0x000000000025d4e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000025c9cf

@end

