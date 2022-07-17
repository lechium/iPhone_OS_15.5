//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, CAShapeLayer, UIButton, UILabel, UIVisualEffectView;
@protocol CAMDescriptionOverlayViewDelegate;

@interface CAMDescriptionOverlayView : UIView
{
    _Bool _blackoutFrameVisible;	// 8 = 0x8
    id <CAMDescriptionOverlayViewDelegate> _delegate;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
    UIVisualEffectView *__blurEffectView;	// 32 = 0x20
    UIView *__blackoutView;	// 40 = 0x28
    CAShapeLayer *__blackoutMask;	// 48 = 0x30
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *__primaryVibrancyEffectView;	// 56 = 0x38
    UILabel *__titleLabel;	// 64 = 0x40
    UILabel *__descriptionTitleLabel;	// 72 = 0x48
    UILabel *__descriptionLabel;	// 80 = 0x50
    UILabel *__infoTitleLabel;	// 88 = 0x58
    UILabel *__infoLabel;	// 96 = 0x60
    UIButton *__detailButton;	// 104 = 0x68
    UIButton *__acknowledgmentButton;	// 112 = 0x70
    double __descriptionFontSizeMultiplier;	// 120 = 0x78
    double __infoFontSizeMultiplier;	// 128 = 0x80
    struct CGRect _viewportFrame;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001e484f
@property(nonatomic, setter=_setInfoFontSizeMultiplier:) double _infoFontSizeMultiplier; // @synthesize _infoFontSizeMultiplier=__infoFontSizeMultiplier;
@property(nonatomic, setter=_setDescriptionFontSizeMultiplier:) double _descriptionFontSizeMultiplier; // @synthesize _descriptionFontSizeMultiplier=__descriptionFontSizeMultiplier;
@property(readonly, nonatomic) UIButton *_acknowledgmentButton; // @synthesize _acknowledgmentButton=__acknowledgmentButton;
@property(readonly, nonatomic) UIButton *_detailButton; // @synthesize _detailButton=__detailButton;
@property(readonly, nonatomic) UILabel *_infoLabel; // @synthesize _infoLabel=__infoLabel;
@property(readonly, nonatomic) UILabel *_infoTitleLabel; // @synthesize _infoTitleLabel=__infoTitleLabel;
@property(readonly, nonatomic) UILabel *_descriptionLabel; // @synthesize _descriptionLabel=__descriptionLabel;
@property(readonly, nonatomic) UILabel *_descriptionTitleLabel; // @synthesize _descriptionTitleLabel=__descriptionTitleLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(readonly, nonatomic) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView; // @synthesize _primaryVibrancyEffectView=__primaryVibrancyEffectView;
@property(readonly, nonatomic) CAShapeLayer *_blackoutMask; // @synthesize _blackoutMask=__blackoutMask;
@property(readonly, nonatomic) UIView *_blackoutView; // @synthesize _blackoutView=__blackoutView;
@property(readonly, nonatomic) UIVisualEffectView *_blurEffectView; // @synthesize _blurEffectView=__blurEffectView;
@property(nonatomic, getter=isBlackoutFrameVisible) _Bool blackoutFrameVisible; // @synthesize blackoutFrameVisible=_blackoutFrameVisible;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMDescriptionOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_additionalSpacingForContentSize:(id)arg1;	// IMP=0x00000000001e4513
- (double)additionalSpacing;	// IMP=0x00000000001e44bc
- (id)currentContentSize;	// IMP=0x00000000001e4465
- (double)maxInfoTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;	// IMP=0x00000000001e445c
- (double)maxDescriptionTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;	// IMP=0x00000000001e4453
- (double)maxTitleTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2;	// IMP=0x00000000001e444a
- (id)infoTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e443d
- (id)infoTitleTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e4435
- (id)descriptionTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e4428
- (id)descriptionTitleTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e4420
- (id)acknowledgmentTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e4413
- (id)detailTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e440b
- (_Bool)isTitleMultiline;	// IMP=0x00000000001e4403
- (id)titleTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e43f6
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e3e5a
- (_Bool)_isVisible;	// IMP=0x00000000001e3df9
- (void)_layoutBlackoutMaskForFrame:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;	// IMP=0x00000000001e3d5d
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e3bf1
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;	// IMP=0x00000000001e3ba1
@property(nonatomic, getter=isAcknowledgmentButtonHighlighted) _Bool acknowledgmentButtonHighlighted;
- (void)_handleDetailButtonTapped:(id)arg1;	// IMP=0x00000000001e3ad5
@property(nonatomic, getter=isDetailButtonHighlighted) _Bool detailButtonHighlighted;
- (void)layoutSubviews;	// IMP=0x00000000001e2125
- (void)_updateTextUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e1eb8
- (void)_updateFontsUsingNarrowWidth:(_Bool)arg1;	// IMP=0x00000000001e1a4b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001e1995
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e10db

@end
