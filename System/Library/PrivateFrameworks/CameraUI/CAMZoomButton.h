//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAMZoomFactorLabel, UIImageView, UIView;
@protocol CAMZoomButtonDelegate;

@interface CAMZoomButton : UIControl
{
    _Bool _shouldHideBackground;	// 8 = 0x8
    _Bool _overPlatter;	// 9 = 0x9
    _Bool _abbreviateAndEnlargeText;	// 10 = 0xa
    id <CAMZoomButtonDelegate> _delegate;	// 16 = 0x10
    long long _contentType;	// 24 = 0x18
    double _zoomFactor;	// 32 = 0x20
    long long _zoomSymbol;	// 40 = 0x28
    long long _accessoryState;	// 48 = 0x30
    long long _orientation;	// 56 = 0x38
    UIView *__contentContainerView;	// 64 = 0x40
    CAMZoomFactorLabel *__zoomFactorLabel;	// 72 = 0x48
    UIImageView *__zoomSymbolView;	// 80 = 0x50
    UIImageView *__circleImageView;	// 88 = 0x58
    UIImageView *__backgroundImageView;	// 96 = 0x60
    UIImageView *__accessoryBackgroundView;	// 104 = 0x68
    UIImageView *__accessoryImageView;	// 112 = 0x70
    struct UIEdgeInsets _tappableEdgeInsets;	// 120 = 0x78
    struct CGAffineTransform _highlightingTransform;	// 152 = 0x98
}

+ (double)fontSizeForContentSize:(id)arg1;	// IMP=0x000000000002659a
+ (double)circleDiameterForContentSize:(id)arg1;	// IMP=0x0000000000026495
+ (_Bool)_shouldUseLargeButtonSizeForContentSize:(id)arg1;	// IMP=0x00000000000264e0
+ (id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(_Bool)arg2 useLeadingZero:(_Bool)arg3;	// IMP=0x0000000000121f12
+ (id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(_Bool)arg2;	// IMP=0x0000000000121efb
+ (id)zoomFactorFormatter;	// IMP=0x0000000000121d9e
+ (_Bool)_useOutline;	// IMP=0x000000000011fb6f
- (void).cxx_destruct;	// IMP=0x0000000000122798
@property(retain, nonatomic) UIImageView *_accessoryImageView; // @synthesize _accessoryImageView=__accessoryImageView;
@property(retain, nonatomic) UIImageView *_accessoryBackgroundView; // @synthesize _accessoryBackgroundView=__accessoryBackgroundView;
@property(readonly, nonatomic) UIImageView *_backgroundImageView; // @synthesize _backgroundImageView=__backgroundImageView;
@property(readonly, nonatomic) UIImageView *_circleImageView; // @synthesize _circleImageView=__circleImageView;
@property(readonly, nonatomic) UIImageView *_zoomSymbolView; // @synthesize _zoomSymbolView=__zoomSymbolView;
@property(readonly, nonatomic) CAMZoomFactorLabel *_zoomFactorLabel; // @synthesize _zoomFactorLabel=__zoomFactorLabel;
@property(readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView=__contentContainerView;
@property(nonatomic) _Bool abbreviateAndEnlargeText; // @synthesize abbreviateAndEnlargeText=_abbreviateAndEnlargeText;
@property(nonatomic, setter=_setHighlightingTransform:) struct CGAffineTransform highlightingTransform; // @synthesize highlightingTransform=_highlightingTransform;
@property(nonatomic, getter=isOverPlatter) _Bool overPlatter; // @synthesize overPlatter=_overPlatter;
@property(nonatomic) _Bool shouldHideBackground; // @synthesize shouldHideBackground=_shouldHideBackground;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long accessoryState; // @synthesize accessoryState=_accessoryState;
@property(nonatomic) long long zoomSymbol; // @synthesize zoomSymbol=_zoomSymbol;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) __weak id <CAMZoomButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_backgroundImageDiameterForContentSize:(id)arg1;	// IMP=0x0000000000122524
- (double)_circleLineWidthForContentSize:(id)arg1;	// IMP=0x00000000001224de
- (id)_createCircleImageForContentSize:(id)arg1;	// IMP=0x0000000000122364
- (id)_createBackgroundImageForContentSize:(id)arg1 color:(id)arg2;	// IMP=0x0000000000122273
- (id)_createBackgroundImageForContentSize:(id)arg1;	// IMP=0x00000000001221e6
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012213b
@property(nonatomic) _Bool useLeadingZero;
- (void)_updateZoomFactorLabel;	// IMP=0x0000000000121e81
- (void)_performHighlightAnimation;	// IMP=0x00000000001219dd
- (void)_updateBackgroundImageViewAlpha;	// IMP=0x00000000001218c2
- (struct CGAffineTransform)_transformForEnlargeText:(_Bool)arg1 orientation:(long long)arg2;	// IMP=0x00000000001217ca
- (struct CGAffineTransform)_highlightingTransformForHighlighted:(_Bool)arg1;	// IMP=0x0000000000121766
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001216c3
- (void)tintColorDidChange;	// IMP=0x000000000012166f
- (void)layoutSubviews;	// IMP=0x0000000000120e96
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000120dd6
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000120d4a
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000120d2b
- (void)setShouldHideBackground:(_Bool)arg1 animationDuration:(double)arg2;	// IMP=0x0000000000120bfc
- (void)_updateAccessoryBackgroundView;	// IMP=0x00000000001209cc
- (void)_updateAccessoryAlphas;	// IMP=0x000000000012091f
@property(readonly, nonatomic) struct CGRect accessoryFrame;
- (void)setAccessoryState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012044b
- (id)_imageForZoomSymbol:(long long)arg1;	// IMP=0x00000000001203a3
- (void)_createZoomSymbolViewIfNecessary;	// IMP=0x00000000001202cc
- (void)setZoomSymbol:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000120189
- (void)setContentType:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000120060
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011ffee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011ff7f
- (void)_updateForContentSize;	// IMP=0x000000000011fe16
- (void)_commonCAMZoomButtonInitialization;	// IMP=0x000000000011fbbf

@end

