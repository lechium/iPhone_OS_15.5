//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUAnimationApplier, HUShapeLayerView, HUVisualEffectContainerView, NSArray, UIView;

@interface HUGenericSensorIconContentView
{
    HUShapeLayerView *_bodyView;	// 8 = 0x8
    HUVisualEffectContainerView *_bodyContainerView;	// 16 = 0x10
    NSArray *_indicatorViews;	// 24 = 0x18
    NSArray *_indicatorContainerViews;	// 32 = 0x20
    UIView *_indicatorClippingView;	// 40 = 0x28
    HUAnimationApplier *_animationApplier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002625ac
@property(retain, nonatomic) HUAnimationApplier *animationApplier; // @synthesize animationApplier=_animationApplier;
@property(retain, nonatomic) UIView *indicatorClippingView; // @synthesize indicatorClippingView=_indicatorClippingView;
@property(retain, nonatomic) NSArray *indicatorContainerViews; // @synthesize indicatorContainerViews=_indicatorContainerViews;
@property(retain, nonatomic) NSArray *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(retain, nonatomic) HUVisualEffectContainerView *bodyContainerView; // @synthesize bodyContainerView=_bodyContainerView;
@property(retain, nonatomic) HUShapeLayerView *bodyView; // @synthesize bodyView=_bodyView;
- (struct CGRect)_frameForIndicatorContainerViewInPosition:(unsigned long long)arg1;	// IMP=0x0000000000262438
- (struct CGRect)_frameForIndicatorViewInPosition:(unsigned long long)arg1 showIndicators:(_Bool)arg2;	// IMP=0x000000000026237a
- (struct CGAffineTransform)_transformForIndicatorContainerViewInPosition:(unsigned long long)arg1;	// IMP=0x0000000000262340
- (void)_layoutIndicatorViewsShowingIndicators:(_Bool)arg1;	// IMP=0x0000000000262235
- (void)layoutSubviews;	// IMP=0x0000000000261f77
- (id)_animationSettingsForShowingIndicators:(_Bool)arg1;	// IMP=0x0000000000261e83
- (void)_updateIndicatorAlpha;	// IMP=0x0000000000261dae
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;	// IMP=0x0000000000261b7e
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000026175f
- (id)managedVisualEffectViews;	// IMP=0x00000000002616df
- (_Bool)wantsManagedVibrancyEffect;	// IMP=0x00000000002616d7
- (_Bool)showIndicators;	// IMP=0x000000000026168e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000026110d

@end

