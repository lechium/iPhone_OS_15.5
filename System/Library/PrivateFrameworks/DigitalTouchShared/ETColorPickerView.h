//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DigitalTouchShared/DTSColorWheelDelegate-Protocol.h>

@class ETColorWheelView, ETPaletteCircleView, NSString, UITapGestureRecognizer, UIView;
@protocol ETColorPickerViewDelegate;

@interface ETColorPickerView <DTSColorWheelDelegate>
{
    UIView *_contentView;	// 8 = 0x8
    ETPaletteCircleView *_collapsedSelectedCircle;	// 16 = 0x10
    UITapGestureRecognizer *_presentTapGestureRecognizer;	// 24 = 0x18
    struct CGRect _expandedFrame;	// 32 = 0x20
    struct CGRect _collapsedFrame;	// 64 = 0x40
    ETColorWheelView *_colorWheelView;	// 96 = 0x60
    _Bool _dismissingColorPicker;	// 104 = 0x68
    double _selectedCircleRotationAngle;	// 112 = 0x70
    _Bool _isExpanded;	// 120 = 0x78
    id <ETColorPickerViewDelegate> _presentationDelegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000007b23
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) __weak id <ETColorPickerViewDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)colorWheel:(id)arg1 didPickColor:(id)arg2;	// IMP=0x000000000000793b
- (void)colorWheel:(id)arg1 willPickColor:(id)arg2;	// IMP=0x00000000000078b6
- (id)paletteCircleAnimationPairs;	// IMP=0x0000000000007688
- (void)movePalettCircleToOriginalLayoutPosition:(id)arg1;	// IMP=0x0000000000007497
- (void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(double)arg2;	// IMP=0x000000000000736f
- (void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2;	// IMP=0x0000000000007213
- (void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2;	// IMP=0x000000000000707a
- (void)fadeinPaletterCirclesInPairs;	// IMP=0x0000000000006c70
- (void)fadeoutPaletterCirclesInPairs;	// IMP=0x0000000000006832
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000065bb
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006182
- (void)showColorWheel;	// IMP=0x0000000000005f51
- (void)paletteCircleTapped:(id)arg1;	// IMP=0x0000000000005e25
- (void)animateOnscreen;	// IMP=0x0000000000005d6a
- (void)animateOffscreen;	// IMP=0x0000000000005c1c
- (void)animateToSelectedColor;	// IMP=0x0000000000005b34
- (void)animateToGray;	// IMP=0x0000000000005a5c
- (void)setDimmed:(_Bool)arg1;	// IMP=0x00000000000059d6
- (_Bool)_isCenterCircle:(unsigned long long)arg1;	// IMP=0x000000000000597f
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004f95
- (void)_addRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2;	// IMP=0x0000000000004d3c
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004bd6
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000047f8
- (void)presentTapReceived:(id)arg1;	// IMP=0x000000000000470c
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000004696
- (void)layoutPaletteCircles;	// IMP=0x00000000000043a1
- (id)initWithFrame:(struct CGRect)arg1 collapsedFrame:(struct CGRect)arg2;	// IMP=0x00000000000040f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
