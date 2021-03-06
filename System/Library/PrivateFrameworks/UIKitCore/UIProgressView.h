//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSObservation, NSProgress, UIColor, UIImage, UIImageView, UIView, UIVisualEffectView;

@interface UIProgressView <NSCoding>
{
    long long _progressViewStyle;	// 120 = 0x78
    float _progress;	// 128 = 0x80
    long long _barStyle;	// 136 = 0x88
    UIColor *_progressTintColor;	// 144 = 0x90
    UIColor *_trackTintColor;	// 152 = 0x98
    UIView *_contentView;	// 160 = 0xa0
    UIImageView *_trackView;	// 168 = 0xa8
    UIImageView *_progressView;	// 176 = 0xb0
    _Bool _isAnimating;	// 184 = 0xb8
    NSArray *_trackColors;	// 192 = 0xc0
    NSArray *_progressColors;	// 200 = 0xc8
    UIVisualEffectView *_effectView;	// 208 = 0xd0
    NSProgress *_observedProgress;	// 216 = 0xd8
    NSObservation *_progressObservation;	// 224 = 0xe0
    UIView *_shadowView;	// 232 = 0xe8
    double _currentCornerRadius;	// 240 = 0xf0
    UIImage *_trackImage;	// 248 = 0xf8
    UIImage *_progressImage;	// 256 = 0x100
}

+ (id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3;	// IMP=0x0000000000cc5d61
+ (id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3 roundingRectCorners:(unsigned long long)arg4;	// IMP=0x0000000000cc586d
+ (id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2;	// IMP=0x0000000000cc2e9d
+ (id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2;	// IMP=0x0000000000cc2e3e
+ (void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3;	// IMP=0x0000000000cc2bbf
+ (unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;	// IMP=0x0000000000cc2b47
+ (struct CGSize)defaultSize;	// IMP=0x0000000000cc5fcb
- (void).cxx_destruct;	// IMP=0x0000000000cc5e8a
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x0000000000cc5d9d
- (id)_effectiveContentView;	// IMP=0x0000000000cc5d81
- (void)_setProgressColor:(id)arg1;	// IMP=0x0000000000cc559e
- (id)_progressColor;	// IMP=0x0000000000cc558c
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000cc546a
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cc52e0
- (void)_setProgress:(float)arg1;	// IMP=0x0000000000cc5250
- (void)tintColorDidChange;	// IMP=0x0000000000cc4f25
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000cc4ed1
- (void)layoutSubviews;	// IMP=0x0000000000cc4ac1
- (double)_shadowOpacityForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000cc4a91
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000cc4a11
- (void)_layoutShadow;	// IMP=0x0000000000cc48e9
- (void)_setupShadow;	// IMP=0x0000000000cc46e6
- (void)_updateCornerRadiusWithSize:(struct CGSize)arg1;	// IMP=0x0000000000cc46e0
- (void)_setupProgressViewCommon;	// IMP=0x0000000000cc46ce
- (void)_updateImages;	// IMP=0x0000000000cc3f6a
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;	// IMP=0x0000000000cc3f55
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;	// IMP=0x0000000000cc3f40
- (id)_defaultTrackColorForCurrentStyle;	// IMP=0x0000000000cc3eb9
- (id)_appropriateProgressImage;	// IMP=0x0000000000cc3c55
- (id)_appropriateTrackImage;	// IMP=0x0000000000cc39f1
- (_Bool)_shouldTintTrack;	// IMP=0x0000000000cc39dc
- (_Bool)_shouldTintProgress;	// IMP=0x0000000000cc39c7
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000cc377c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000cc376a
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000cc36a9
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000cc36a1
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000cc353c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000cc33e9
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000cc331c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000cc31df
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000cc2ff4
- (id)initWithProgressViewStyle:(long long)arg1;	// IMP=0x0000000000cc2f8f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000cc2efc
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;	// IMP=0x000000000000aa71
- (void)setBarStyle:(long long)arg1;	// IMP=0x0000000000cc5f87
- (long long)barStyle;	// IMP=0x0000000000cc5f76

@end

