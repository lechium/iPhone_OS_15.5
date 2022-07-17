//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKDevice, CLKGaugeProvider, NSArray, NSNumber, NSString, NTKRichComplicationShapeView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>
{
    long long _family;	// 8 = 0x8
    CLKDevice *_device;	// 16 = 0x10
    NSNumber *_updateToken;	// 24 = 0x18
    float _currentBackgroundViewAlphaPercentage;	// 32 = 0x20
    _Bool _enabled;	// 36 = 0x24
    id <CLKMonochromeFilterProvider> _filterProvider;	// 40 = 0x28
    NSArray *_gradientColors;	// 48 = 0x30
    double _progress;	// 56 = 0x38
    long long _style;	// 64 = 0x40
    CLKGaugeProvider *_gaugeProvider;	// 72 = 0x48
    NTKRichComplicationShapeView *_backgroundView;	// 80 = 0x50
    NTKRichComplicationShapeView *_foregroundView;	// 88 = 0x58
    UIView *_ringView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001523e0
@property(readonly, nonatomic) UIView *ringView; // @synthesize ringView=_ringView;
@property(readonly, nonatomic) NTKRichComplicationShapeView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) NTKRichComplicationShapeView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;	// IMP=0x00000000001522a2
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;	// IMP=0x000000000015222c
- (id)filterForView:(id)arg1 style:(long long)arg2;	// IMP=0x00000000001521c8
- (void)_createRingView;	// IMP=0x000000000015209a
- (void)_applyStyle;	// IMP=0x0000000000151f9c
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1;	// IMP=0x0000000000151ef4
- (void)_updateUIFromGaugeProvider;	// IMP=0x0000000000151d28
- (void)updateMonochromeColor;	// IMP=0x0000000000151cca
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x0000000000151c62
- (void)animateToProgress:(float)arg1 duration:(double)arg2;	// IMP=0x0000000000151834
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;	// IMP=0x00000000001517c5
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;	// IMP=0x00000000001517af
- (void)setGradientColors:(id)arg1 locations:(id)arg2;	// IMP=0x00000000001516f0
- (void)layoutSubviews;	// IMP=0x00000000001512e5
- (void)dealloc;	// IMP=0x0000000000151276
- (id)initForFamily:(long long)arg1 device:(id)arg2 backgroundShapeView:(id)arg3 foregroundShapeView:(id)arg4;	// IMP=0x00000000001510d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
