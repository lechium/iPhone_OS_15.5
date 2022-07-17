//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ARUIRenderer, ARUIRingsView, HKActivitySummary, _HKShapeView;

@interface HKActivityRingView : UIView
{
    ARUIRingsView *_ringsView;	// 8 = 0x8
    ARUIRenderer *_renderer;	// 16 = 0x10
    _HKShapeView *_maskView;	// 24 = 0x18
    _Bool _shouldBypassApplicationStateChecking;	// 32 = 0x20
    HKActivitySummary *_activitySummary;	// 40 = 0x28
    double _ringInsetPercentage;	// 48 = 0x30
    double _emptyRingAlpha;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000321a
@property(nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) _Bool shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;
@property(nonatomic, getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:) double emptyRingAlpha; // @synthesize emptyRingAlpha=_emptyRingAlpha;
@property(nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) double ringInsetPercentage; // @synthesize ringInsetPercentage=_ringInsetPercentage;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (void)_updateMaskPath;	// IMP=0x0000000000001be7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000003942
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000001b95
- (void)_updateRingsViewDiameterLegacy;	// IMP=0x0000000000003887
- (void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3;	// IMP=0x0000000000003083
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3;	// IMP=0x0000000000002f14
- (void)_updateRingsViewDiameter;	// IMP=0x0000000000002667
- (double)_ringDiameter;	// IMP=0x00000000000037f4
- (void)layoutSubviews;	// IMP=0x00000000000024d8
- (void)_setUpRingsView;	// IMP=0x0000000000001da9
- (id)_snapshotImage;	// IMP=0x00000000000037d7
- (void)_setActivitySummary:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003699
- (void)_displayIconsForWheelchairUser:(_Bool)arg1;	// IMP=0x00000000000035cb
- (void)_setActivityRingViewBackgroundColor:(id)arg1;	// IMP=0x00000000000024bb
- (void)_setActivityRingViewBackgroundTransparent:(_Bool)arg1;	// IMP=0x0000000000003548
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000002282
- (void)_setUpAfterInit;	// IMP=0x0000000000001cfd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000346b
- (id)initWithFrame:(struct CGRect)arg1 renderer:(id)arg2;	// IMP=0x00000000000033dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001b38

@end
