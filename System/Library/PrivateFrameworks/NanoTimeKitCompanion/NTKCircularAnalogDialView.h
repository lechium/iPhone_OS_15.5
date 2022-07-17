//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKWhistlerAnalogColorPalette;

@interface NTKCircularAnalogDialView : UIView
{
    CLKDevice *_device;	// 8 = 0x8
    unsigned long long _numberOfTicks;	// 16 = 0x10
    CALayer *_dialBackgroundLayer;	// 24 = 0x18
    CALayer *_ticksLayer;	// 32 = 0x20
    NSArray *_allSmallTicks;	// 40 = 0x28
    NSArray *_allHourTicks;	// 48 = 0x30
    NSArray *_smallMatchingHourTicks;	// 56 = 0x38
    double _tickPadding;	// 64 = 0x40
    NTKWhistlerAnalogColorPalette *_colorPalette;	// 72 = 0x48
    CDStruct_cba134e1 _options;	// 80 = 0x50
}

+ (id)_disabledLayerActions;	// IMP=0x000000000016e235
- (void).cxx_destruct;	// IMP=0x000000000016e4e0
- (void)_toggleRasterization:(_Bool)arg1;	// IMP=0x000000000016e45d
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3 visibleTicksAlpha:(double)arg4;	// IMP=0x000000000016e3ac
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3;	// IMP=0x000000000016e392
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2;	// IMP=0x000000000016e096
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3;	// IMP=0x000000000016deb5
- (void)showAllTicksInDial;	// IMP=0x000000000016de95
- (void)fillDialTransitionWithFraction:(double)arg1 bezelTextWidthRadians:(double)arg2;	// IMP=0x000000000016dcb0
- (void)setHourTicksOpacity:(double)arg1 bezelTextWidthRadians:(double)arg2;	// IMP=0x000000000016da9b
- (void)setHideHourTicks:(_Bool)arg1;	// IMP=0x000000000016d9a1
- (void)cleanupAfterEdit;	// IMP=0x000000000016d98a
- (void)prepareForEdit;	// IMP=0x000000000016d976
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000000016d8b5
- (void)applyColorTransitionFraction:(double)arg1 fromFaceColorPalette:(id)arg2 toFaceColorPalette:(id)arg3;	// IMP=0x000000000016d316
- (void)applyColorTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;	// IMP=0x000000000016ca79
- (void)setDialBackgroundColor:(id)arg1;	// IMP=0x000000000016ca35
- (void)layoutLayerTicks:(id)arg1 rotationAngleInDegree:(double)arg2 smallTicks:(_Bool)arg3;	// IMP=0x000000000016c79c
- (_Bool)isTickIndexForHour:(unsigned long long)arg1;	// IMP=0x000000000016c769
- (void)layoutSubviews;	// IMP=0x000000000016c5d9
- (id)initWithFrame:(struct CGRect)arg1 options:(CDStruct_cba134e1)arg2 device:(id)arg3;	// IMP=0x000000000016bf1b
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 hideHourTicks:(_Bool)arg3;	// IMP=0x000000000016be61
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 smallTicksMatchingMinutes:(_Bool)arg3;	// IMP=0x000000000016bda7
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;	// IMP=0x000000000016bca9

@end
