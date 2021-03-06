//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSMutableSet, NSString, PSPointerShape, PUIDPointerSettings, PUIDPointerShapeBackdropView, PUIDPointerShapeMorphingView, UIColor, UIViewFloatAnimatableProperty;
@protocol PUIDPointerShapeViewDelegate;

@interface PUIDPointerShapeView : UIView
{
    UIView *_pointerMaterialContainerView;	// 8 = 0x8
    PUIDPointerShapeBackdropView *_pointerView;	// 16 = 0x10
    UIView *_shapeMorphingBackdropContainer;	// 24 = 0x18
    PUIDPointerShapeBackdropView *_shapeMorphingBackdropView;	// 32 = 0x20
    PUIDPointerShapeMorphingView *_shapeMorphingView;	// 40 = 0x28
    UIView *_axCenterDot;	// 48 = 0x30
    CAShapeLayer *_axCenterDotShapeLayer;	// 56 = 0x38
    UIView *_axColorStroke;	// 64 = 0x40
    NSString *_zoomRegistrationIdentifier;	// 72 = 0x48
    double _lastZoomLevel;	// 80 = 0x50
    _Bool _inDockedZoomMode;	// 88 = 0x58
    _Bool _axVisualSettingsDidChange;	// 89 = 0x59
    NSMutableSet *_shapeMorphingViewRequiringReasons;	// 96 = 0x60
    PUIDPointerSettings *_settings;	// 104 = 0x68
    unsigned long long _pointerViewAnimationCount;	// 112 = 0x70
    NSString *_previousPointerShapeCornerCurve;	// 120 = 0x78
    UIViewFloatAnimatableProperty *_cornerCurveAnimatableProperty;	// 128 = 0x80
    id <PUIDPointerShapeViewDelegate> _delegate;	// 136 = 0x88
    unsigned long long _materialStyle;	// 144 = 0x90
    UIColor *_shapeMaterialReplacementColor;	// 152 = 0x98
    double _intensity;	// 160 = 0xa0
    double _blurRadius;	// 168 = 0xa8
    PSPointerShape *_pointerShape;	// 176 = 0xb0
}

+ (Class)layerClass;	// IMP=0x0020000000003303
- (void).cxx_destruct;	// IMP=0x00200000000056b7
@property(retain, nonatomic) PSPointerShape *pointerShape; // @synthesize pointerShape=_pointerShape;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(copy, nonatomic) UIColor *shapeMaterialReplacementColor; // @synthesize shapeMaterialReplacementColor=_shapeMaterialReplacementColor;
@property(nonatomic) unsigned long long materialStyle; // @synthesize materialStyle=_materialStyle;
@property(nonatomic) __weak id <PUIDPointerShapeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_axRegisterForZoomUpdatesIfNecessary;	// IMP=0x0010000000005204
- (void)_accessibilityInvertColorsStatusDidChange:(id)arg1;	// IMP=0x00100000000051f2
- (void)_axUpdateInvertColorsFilters;	// IMP=0x00100000000051a6
- (void)_axUpdateDoubleInvertFilterOnView:(id)arg1;	// IMP=0x0010000000004f32
- (struct CGRect)_colorStrokeShapeBoundsForPointerShape:(id)arg1;	// IMP=0x0010000000004e8a
- (_Bool)_shouldShowAxCenterPointForPointerShape:(id)arg1;	// IMP=0x0010000000004e40
- (_Bool)_shouldShowAxColorStrokeForPointerShape:(id)arg1 color:(id *)arg2;	// IMP=0x0010000000004d9c
- (double)_axColorStrokeWidthForPointerShape:(id)arg1;	// IMP=0x0010000000004d24
- (void)_applyAXPointerStyleForPointerShape:(id)arg1;	// IMP=0x00100000000046c2
- (double)_axPointerZoomScaleFactor;	// IMP=0x00100000000045dc
- (void)_updatePointerViewCornerCurve;	// IMP=0x00100000000043c4
- (id)_cornerCurveForPointerShape:(id)arg1;	// IMP=0x0010000000004342
- (double)_cornerRadiusForPointerShape:(id)arg1;	// IMP=0x0010000000004265
- (id)_currentPointerViewBezierPath;	// IMP=0x0010000000004105
- (id)_bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;	// IMP=0x00100000000040ec
- (struct CGRect)_shapeMorphingBackdropFrameForShape:(id)arg1;	// IMP=0x001000000000409a
- (void)_handleAccessibilityPointerPreferencesDidChange;	// IMP=0x0010000000003ffb
- (void)_updatePointerMaterial;	// IMP=0x0010000000003ec9
- (id)_colorMatrixForTraitCollection:(id)arg1;	// IMP=0x0010000000003d52
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;	// IMP=0x0010000000003d31
- (void)_setShapeMorphingViewPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003a8f
- (void)_endRequiringShapeMorphingViewForReason:(id)arg1;	// IMP=0x0010000000003853
- (void)_beginRequiringShapeMorphingViewForReason:(id)arg1;	// IMP=0x0010000000003314
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000003242
- (void)setPointerShape:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002b45
- (id)_debug_Material_descForStyle:(unsigned long long)arg1 intensity:(double)arg2;	// IMP=0x00100000000028b5
- (id)_debug_Material_nameForMaterialStyle:(unsigned long long)arg1;	// IMP=0x001000000000287c
@property(readonly, nonatomic) double presentationIntensity;
- (struct CGRect)expectedShapeBoundsForPointerShape:(id)arg1;	// IMP=0x00100000000026e3
- (void)dealloc;	// IMP=0x001000000000258c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000001f97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

