//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class LAUICheckmarkLayer, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKTableHeaderView : UIView
{
    struct CGSize _originalImageViewSize;	// 8 = 0x8
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UIButton *_actionButton;	// 48 = 0x30
    UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
    _Bool _isTemplateLayout;	// 64 = 0x40
    _Bool _accessoryViewsDisabled;	// 65 = 0x41
    _Bool _shouldReserveSubtitleHeight;	// 66 = 0x42
    unsigned long long _style;	// 72 = 0x48
    double _topPadding;	// 80 = 0x50
    double _bottomPadding;	// 88 = 0x58
    double _minimumHeight;	// 96 = 0x60
    double _maximumHeight;	// 104 = 0x68
    LAUICheckmarkLayer *_checkmarkLayer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000003d324f
@property(readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // @synthesize checkmarkLayer=_checkmarkLayer;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool shouldReserveSubtitleHeight; // @synthesize shouldReserveSubtitleHeight=_shouldReserveSubtitleHeight;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool accessoryViewsDisabled; // @synthesize accessoryViewsDisabled=_accessoryViewsDisabled;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_updateCheckmarkColor;	// IMP=0x00000000003d306f
- (id)_subtitleFont;	// IMP=0x00000000003d303f
- (id)_titleFont;	// IMP=0x00000000003d300c
- (void)_updateAccessoryViews;	// IMP=0x00000000003d2e6b
- (void)_updateFonts;	// IMP=0x00000000003d2d71
- (_Bool)_hasAccessibilityLargeText;	// IMP=0x00000000003d2d2c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000003d2c32
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000003d2bf1
- (void)tintColorDidChange;	// IMP=0x00000000003d2bb0
- (void)layoutSubviews;	// IMP=0x00000000003d2b3b
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 imageHeightAdjustment:(double)arg2;	// IMP=0x00000000003d2072
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000003d1ff6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003d1f2b
- (id)actionButton;	// IMP=0x00000000003d1e47
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)_updateImageView;	// IMP=0x00000000003d1a79
- (void)setImageViewImage:(id)arg1 withSize:(struct CGSize)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003d184a
- (void)setPassSnapshot:(id)arg1 withSize:(struct CGSize)arg2 animated:(_Bool)arg3 needsCorners:(_Bool)arg4;	// IMP=0x00000000003d16c6
- (void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(_Bool)arg2 needsCorners:(_Bool)arg3;	// IMP=0x00000000003d16a1
- (void)setActionTitle:(id)arg1;	// IMP=0x00000000003d1684
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003d162a

@end

