//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UIView, UIVisualEffectView, _UISystemBackgroundStrokeView;
@protocol _UIBackgroundConfigurationInternal;

@interface _UISystemBackgroundView
{
    UIView *_colorView;	// 120 = 0x78
    UIVisualEffectView *_visualEffectView;	// 128 = 0x80
    UIImageView *_imageView;	// 136 = 0x88
    _UISystemBackgroundStrokeView *_strokeView;	// 144 = 0x90
    UIView *_shadowView;	// 152 = 0x98
    double _currentlyAppliedCornerRadius;	// 160 = 0xa0
    unsigned char _subviewInsertionIndices[6];	// 168 = 0xa8
    struct {
        unsigned int currentlyAppliedCornersAreContinuous:1;
        unsigned int lockCornerCurve:1;
        unsigned int didSetCustomViewMasking:1;
    } _systemBackgroundViewFlags;	// 176 = 0xb0
    id <_UIBackgroundConfigurationInternal> _configuration;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000256769
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000256763
- (id)outlinePathInContainerView:(id)arg1;	// IMP=0x0000000000256754
- (id)currentVisiblePathInContainerView:(id)arg1;	// IMP=0x0000000000256742
- (id)currentBackgroundColor;	// IMP=0x0000000000256274
- (struct UIEdgeInsets)effectiveInsetsInContainerView:(id)arg1;	// IMP=0x000000000025608f
- (struct CGRect)frameInContainerView:(id)arg1;	// IMP=0x0000000000255d4a
- (void)layoutSubviews;	// IMP=0x0000000000255ce9
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000255c38
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000255b87
- (void)tintColorDidChange;	// IMP=0x0000000000255ae3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000255a2b
- (void)prepareForReuse;	// IMP=0x0000000000254586
@property(copy, nonatomic) id <_UIBackgroundConfigurationInternal> configuration; // @synthesize configuration=_configuration;
- (id)description;	// IMP=0x00000000002529ac
- (id)_encodableSubviews;	// IMP=0x00000000002520d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000251f9b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000251e9f
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000251e20

@end

