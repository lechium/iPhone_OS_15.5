//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CLCircularRegion, MKCircle, MKMapView, NSMeasurementFormatter, UIColor, UIImageView;
@protocol TTRIReminderLocationPickerMapDragRadiusViewDelegate;

@interface TTRIReminderLocationPickerMapDragRadiusView : UIView
{
    _Bool _isMinimum;	// 8 = 0x8
    _Bool _isMaximum;	// 9 = 0x9
    _Bool _isDragging;	// 10 = 0xa
    MKMapView *_mapView;	// 16 = 0x10
    id <TTRIReminderLocationPickerMapDragRadiusViewDelegate> _delegate;	// 24 = 0x18
    NSMeasurementFormatter *_measurementFormatter;	// 32 = 0x20
    double _minimumRadius;	// 40 = 0x28
    double _maximumRadius;	// 48 = 0x30
    double _radiusPaddingMultiplier;	// 56 = 0x38
    UIColor *_circleColor;	// 64 = 0x40
    UIColor *_handleColor;	// 72 = 0x48
    UIImageView *_handleImageView;	// 80 = 0x50
    CAShapeLayer *_shapeLayer;	// 88 = 0x58
    CLCircularRegion *_region;	// 96 = 0x60
    MKCircle *_overlay;	// 104 = 0x68
    struct CGPoint _initialHandleCenterForDraggin;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000000c92f
@property(nonatomic) struct CGPoint initialHandleCenterForDraggin; // @synthesize initialHandleCenterForDraggin=_initialHandleCenterForDraggin;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) MKCircle *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(nonatomic) _Bool isMaximum; // @synthesize isMaximum=_isMaximum;
@property(nonatomic) _Bool isMinimum; // @synthesize isMinimum=_isMinimum;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIImageView *handleImageView; // @synthesize handleImageView=_handleImageView;
@property(retain, nonatomic) UIColor *handleColor; // @synthesize handleColor=_handleColor;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) double radiusPaddingMultiplier; // @synthesize radiusPaddingMultiplier=_radiusPaddingMultiplier;
@property(nonatomic) double maximumRadius; // @synthesize maximumRadius=_maximumRadius;
@property(nonatomic) double minimumRadius; // @synthesize minimumRadius=_minimumRadius;
@property(retain, nonatomic) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
@property(nonatomic) __weak id <TTRIReminderLocationPickerMapDragRadiusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)_ttriAccessibilityUpdateWithRadius:(double)arg1;	// IMP=0x001000000000c6f1
- (double)_ttriAccessibilityRadiusIncrement;	// IMP=0x001000000000c61c
- (double)_ttriAccessibilityRadiusByAdding:(double)arg1;	// IMP=0x001000000000c5f7
- (void)accessibilityDecrement;	// IMP=0x001000000000c5aa
- (void)accessibilityIncrement;	// IMP=0x001000000000c55d
- (unsigned long long)accessibilityTraits;	// IMP=0x001000000000c54d
- (id)accessibilityValue;	// IMP=0x001000000000c4cd
- (id)accessibilityLabel;	// IMP=0x001000000000c475
- (struct CGRect)accessibilityFrame;	// IMP=0x001000000000c3fd
- (_Bool)isAccessibilityElement;	// IMP=0x001000000000c3f5
- (void)_centerAndZoomToFitRegion:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000c26e
- (_Bool)_usesMetric;	// IMP=0x001000000000c1cf
- (id)_measurementFor:(double)arg1 fromUnit:(id)arg2 toUnit:(id)arg3 normalized:(_Bool)arg4;	// IMP=0x001000000000c07f
- (id)_currentHandleDistanceMeasurement;	// IMP=0x001000000000bfb8
- (double)_radiusForPoint:(struct CGPoint)arg1;	// IMP=0x000000000000be97
- (double)_currentHandleDistance;	// IMP=0x001000000000be28
- (struct CGPoint)_maxPoint;	// IMP=0x001000000000bdfa
- (struct CGPoint)_minPoint;	// IMP=0x001000000000bdcc
- (struct CGPoint)_pointForRadius:(double)arg1;	// IMP=0x001000000000bcb2
- (void)_hideCircleAfterDelay;	// IMP=0x001000000000bc0c
- (void)_removeHandle;	// IMP=0x001000000000bb76
- (void)_animateHandleIn:(_Bool)arg1;	// IMP=0x001000000000b5a1
- (id)_shapeLayerWithEndPoint:(struct CGPoint)arg1;	// IMP=0x001000000000b4be
- (id)_bezierPathWithEndPoint:(struct CGPoint)arg1;	// IMP=0x001000000000b2fa
- (void)_popAnimateHandle;	// IMP=0x001000000000aa6a
- (void)_updateRegionWithRadius:(double)arg1;	// IMP=0x001000000000a7c4
- (void)_updateRegionWithPoint:(struct CGPoint)arg1;	// IMP=0x001000000000a6d8
- (void)_updateHandleImageViewWithPoint:(struct CGPoint)arg1;	// IMP=0x001000000000a508
- (void)_updateHandleImageView;	// IMP=0x001000000000a39d
@property(nonatomic) double radius;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000000a167
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x001000000000a155
- (void)stopEditing;	// IMP=0x001000000000a0bf
- (void)startEditingRegion:(id)arg1;	// IMP=0x0010000000009f46
- (void)handlePanGesture:(id)arg1;	// IMP=0x0010000000009d10
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009bed
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000095eb
- (_Bool)isOpaque;	// IMP=0x00100000000095e3
- (id)initWithFrame:(struct CGRect)arg1 mapView:(id)arg2;	// IMP=0x0010000000009363
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000009355

@end

