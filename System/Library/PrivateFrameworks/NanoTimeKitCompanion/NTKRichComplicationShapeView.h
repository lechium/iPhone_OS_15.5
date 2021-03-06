//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CAGradientLayer, CALayer, CAShapeLayer, CLKDevice, NSArray, NSString;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationShapeView : UIView <CLKMonochromeComplicationView>
{
    CLKDevice *_device;	// 8 = 0x8
    struct CGRect _previousBounds;	// 16 = 0x10
    _Bool _willUnfreezeForTransaction;	// 48 = 0x30
    UIView *_filterView;	// 56 = 0x38
    CALayer *_freezeLayer;	// 64 = 0x40
    CAShapeLayer *_shapeLayer;	// 72 = 0x48
    CAGradientLayer *_gradientLayer;	// 80 = 0x50
    NSArray *_gradientColors;	// 88 = 0x58
    NSArray *_filteredGradientColors;	// 96 = 0x60
    NSArray *_gradientLocations;	// 104 = 0x68
    double _monochromeFraction;	// 112 = 0x70
    id <CLKMonochromeFilterProvider> _filterProvider;	// 120 = 0x78
    double _progress;	// 128 = 0x80
    long long _filterStyle;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000285798
@property(readonly, nonatomic) long long filterStyle; // @synthesize filterStyle=_filterStyle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (id)shapeLayer;	// IMP=0x0000000000285722
- (id)gradientLayer;	// IMP=0x000000000028570d
- (id)device;	// IMP=0x00000000002856f8
- (_Bool)_shouldReverseGradient;	// IMP=0x0000000000317f1a
- (struct CGPath *)_generatePath;	// IMP=0x0000000000317ef3
- (id)_normalizeGradientLocations:(id)arg1;	// IMP=0x0000000000317ecc
- (struct CGPoint)_pointAtProgress:(float)arg1;	// IMP=0x0000000000317e97
- (double)_shapeLineWidth;	// IMP=0x0000000000317e6f
- (void)_setupGradientLayer:(id)arg1;	// IMP=0x0000000000317e4b
- (void)_setupShapeLayer:(id)arg1;	// IMP=0x00000000002856f2
- (id)_shapeStrokeColor;	// IMP=0x0000000000285685
- (void)_updateGradient;	// IMP=0x000000000028520c
- (void)updateMonochromeColor;	// IMP=0x0000000000285085
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x0000000000284f35
- (void)_updatePath;	// IMP=0x0000000000284e86
- (struct CGPoint)pointAtProgress:(float)arg1;	// IMP=0x0000000000284e74
- (void)setGradientColors:(id)arg1 locations:(id)arg2;	// IMP=0x0000000000284aa3
- (void)unfreezeForTransaction;	// IMP=0x0000000000284834
- (void)layoutSubviews;	// IMP=0x00000000002845f8
- (id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2;	// IMP=0x0000000000284316

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

