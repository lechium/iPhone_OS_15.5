//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, _SBFloatingDockPlatterMetrics;

@interface SBFloatingDockPlatterView : UIView
{
    _Bool _hasShadow;	// 8 = 0x8
    double _referenceHeight;	// 16 = 0x10
    double _maximumContinuousCornerRadius;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIImageView *_shadowView;	// 40 = 0x28
    _SBFloatingDockPlatterMetrics *_metrics;	// 48 = 0x30
}

+ (id)borderColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000028ccec
- (void).cxx_destruct;	// IMP=0x000000000028cf65
@property(retain, nonatomic) _SBFloatingDockPlatterMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double maximumContinuousCornerRadius; // @synthesize maximumContinuousCornerRadius=_maximumContinuousCornerRadius;
@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028ce22
- (void)updateBorderVisualStyling;	// IMP=0x000000000028cd36
- (struct UIEdgeInsets)_shadowInsetsForMetrics:(id)arg1;	// IMP=0x000000000028cc99
- (struct UIEdgeInsets)_shadowOutsetsForMetrics:(id)arg1;	// IMP=0x000000000028cbbc
- (id)_shadowImageForMetrics:(id)arg1;	// IMP=0x000000000028c817
- (id)_shadowImageViewForMetrics:(id)arg1;	// IMP=0x000000000028c737
- (id)_metricsForBounds:(struct CGRect)arg1;	// IMP=0x000000000028c642
- (double)_maxShadowViewAlpha;	// IMP=0x000000000028c61e
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000028c5dd
- (void)layoutSubviews;	// IMP=0x000000000028bdc2
- (struct UIEdgeInsets)shadowOutsetsForBounds:(struct CGRect)arg1;	// IMP=0x000000000028bce4
@property(readonly, nonatomic) struct UIEdgeInsets shadowOutsets;
@property(copy, nonatomic) NSString *backdropGroupNamespace;
@property(copy, nonatomic) NSString *backdropGroupName;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000028b819

@end

