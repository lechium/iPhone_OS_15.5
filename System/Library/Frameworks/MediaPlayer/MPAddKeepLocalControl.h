//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MPDownloadProgressView, NSMutableDictionary, UIColor, UIImageView, UILabel, UIView;

@interface MPAddKeepLocalControl : UIControl
{
    UILabel *_controlTitleLabel;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIImageView *_controlImageView;	// 24 = 0x18
    NSMutableDictionary *_controlStatusTypeToTitle;	// 32 = 0x20
    long long _controlStatusRevision;	// 40 = 0x28
    MPDownloadProgressView *_downloadProgressView;	// 48 = 0x30
    _Bool _hadFirstTouchHighlight;	// 56 = 0x38
    struct UIEdgeInsets _controlImageEdgeInsets;	// 64 = 0x40
    UIView *_transientContentView;	// 96 = 0x60
    long long _transientContentViewTransactionCount;	// 104 = 0x68
    _Bool _traitCollectionDidChangeWasCalled;	// 112 = 0x70
    _Bool _allowsAddImage;	// 113 = 0x71
    _Bool _scaleImageForAccessibility;	// 114 = 0x72
    long long _displayStyle;	// 120 = 0x78
    UIColor *_filledTintColor;	// 128 = 0x80
    struct MPAddKeepLocalControlStatus _controlStatus;	// 136 = 0x88
}

+ (id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00000000000fcabc
+ (id)controlTitleFontForControlStatusType:(long long)arg1;	// IMP=0x00000000000fca87
+ (id)_newControlTitleLabel;	// IMP=0x00000000000fc9fd
+ (struct CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(_Bool)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5;	// IMP=0x00000000000fc78f
- (void).cxx_destruct;	// IMP=0x00000000000fc5b2
@property(retain, nonatomic) UIColor *filledTintColor; // @synthesize filledTintColor=_filledTintColor;
@property(nonatomic) _Bool scaleImageForAccessibility; // @synthesize scaleImageForAccessibility=_scaleImageForAccessibility;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) struct MPAddKeepLocalControlStatus controlStatus; // @synthesize controlStatus=_controlStatus;
@property(nonatomic) _Bool allowsAddImage; // @synthesize allowsAddImage=_allowsAddImage;
- (void)_updateControlImageViewAnimation;	// IMP=0x00000000000fc2e0
- (void)_updateControlStatusProperties;	// IMP=0x00000000000fb952
- (void)_updateBackgroundViewCornerRadius;	// IMP=0x00000000000fb88c
- (void)_updateControlTitleLabelVisualProperties;	// IMP=0x00000000000fb7f8
- (id)_currentContentSuperview;	// IMP=0x00000000000fb7d5
- (void)_endTransientContentViewTransaction;	// IMP=0x00000000000fb60c
- (void)_beginTransientContentViewTransaction;	// IMP=0x00000000000fb3fa
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000fb3e8
- (id)titleForControlStatusType:(long long)arg1;	// IMP=0x00000000000fb37a
- (void)setTitle:(id)arg1 forControlStatusType:(long long)arg2;	// IMP=0x00000000000fb275
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000faeb7
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000faccb
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000fac8f
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000fac53
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000000fabd7
- (void)_removeAllAnimations:(_Bool)arg1;	// IMP=0x00000000000fabd1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000faaaf
- (void)tintColorDidChange;	// IMP=0x00000000000fa9f2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000fa90a
- (struct CGSize)maximumSizeWithPreferredHeight:(double)arg1;	// IMP=0x00000000000fa721
- (void)layoutSubviews;	// IMP=0x00000000000f986d
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f9759
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f9710
- (void)didMoveToWindow;	// IMP=0x00000000000f96bb
- (void)dealloc;	// IMP=0x00000000000f95fa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f955c

@end

