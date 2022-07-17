//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUGarageDoorStateTransition, HUShapeLayerView, HUVisualEffectContainerView, UIView, UIVisualEffectView;

@interface HUGarageDoorIconContentView
{
    _Bool _open;	// 8 = 0x8
    _Bool _clipBottomPanelShapesToBounds;	// 9 = 0x9
    HUShapeLayerView *_buildingView;	// 16 = 0x10
    HUVisualEffectContainerView *_buildingContainerView;	// 24 = 0x18
    HUShapeLayerView *_carView;	// 32 = 0x20
    UIVisualEffectView *_carContainerView;	// 40 = 0x28
    UIView *_doorContainerView;	// 48 = 0x30
    UIView *_doorHingeView;	// 56 = 0x38
    UIView *_doorView;	// 64 = 0x40
    UIVisualEffectView *_topPanelHingeView;	// 72 = 0x48
    HUShapeLayerView *_topPanelView;	// 80 = 0x50
    UIVisualEffectView *_middlePanelHingeView;	// 88 = 0x58
    HUShapeLayerView *_middlePanelView;	// 96 = 0x60
    UIVisualEffectView *_bottomPanelHingeView;	// 104 = 0x68
    HUShapeLayerView *_bottomPanelViewWithoutHandle;	// 112 = 0x70
    HUShapeLayerView *_bottomPanelViewWithHandle;	// 120 = 0x78
    HUGarageDoorStateTransition *_activeTransition;	// 128 = 0x80
}

+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect)arg1;	// IMP=0x00000000002030fc
+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect)arg1;	// IMP=0x0000000000202e1a
+ (id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(struct CGRect)arg2 showHandle:(_Bool)arg3;	// IMP=0x0000000000202db3
+ (id)carPathForBounds:(struct CGRect)arg1;	// IMP=0x00000000002023d4
+ (id)buildingPathForBounds:(struct CGRect)arg1;	// IMP=0x00000000002021b3
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;	// IMP=0x0000000000201f01
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;	// IMP=0x0000000000201e88
+ (double)_scaleFactorForBounds:(struct CGRect)arg1 referenceSize:(struct CGSize)arg2;	// IMP=0x0000000000201c00
- (void).cxx_destruct;	// IMP=0x00000000002035fc
@property(retain, nonatomic) HUGarageDoorStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(nonatomic) _Bool clipBottomPanelShapesToBounds; // @synthesize clipBottomPanelShapesToBounds=_clipBottomPanelShapesToBounds;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle; // @synthesize bottomPanelViewWithHandle=_bottomPanelViewWithHandle;
@property(retain, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle; // @synthesize bottomPanelViewWithoutHandle=_bottomPanelViewWithoutHandle;
@property(retain, nonatomic) UIVisualEffectView *bottomPanelHingeView; // @synthesize bottomPanelHingeView=_bottomPanelHingeView;
@property(retain, nonatomic) HUShapeLayerView *middlePanelView; // @synthesize middlePanelView=_middlePanelView;
@property(retain, nonatomic) UIVisualEffectView *middlePanelHingeView; // @synthesize middlePanelHingeView=_middlePanelHingeView;
@property(retain, nonatomic) HUShapeLayerView *topPanelView; // @synthesize topPanelView=_topPanelView;
@property(retain, nonatomic) UIVisualEffectView *topPanelHingeView; // @synthesize topPanelHingeView=_topPanelHingeView;
@property(retain, nonatomic) UIView *doorView; // @synthesize doorView=_doorView;
@property(retain, nonatomic) UIView *doorHingeView; // @synthesize doorHingeView=_doorHingeView;
@property(retain, nonatomic) UIView *doorContainerView; // @synthesize doorContainerView=_doorContainerView;
@property(retain, nonatomic) UIVisualEffectView *carContainerView; // @synthesize carContainerView=_carContainerView;
@property(retain, nonatomic) HUShapeLayerView *carView; // @synthesize carView=_carView;
@property(retain, nonatomic) HUVisualEffectContainerView *buildingContainerView; // @synthesize buildingContainerView=_buildingContainerView;
@property(retain, nonatomic) HUShapeLayerView *buildingView; // @synthesize buildingView=_buildingView;
- (struct CATransform3D)_panelHingeSublayerTransformWithOpenState:(_Bool)arg1;	// IMP=0x0000000000202123
- (struct CATransform3D)_doorHingeSublayerTransformForOpenState:(_Bool)arg1;	// IMP=0x0000000000201f33
- (struct CGRect)_frameForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2 relativeToHinge:(_Bool)arg3;	// IMP=0x0000000000201d6c
- (struct CGRect)_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;	// IMP=0x0000000000201d0a
- (struct CGAffineTransform)_referenceScaleTransform;	// IMP=0x0000000000201cb0
- (double)_referenceScaleFactor;	// IMP=0x0000000000201c45
- (void)layoutSubviews;	// IMP=0x000000000020189a
- (void)_updatePanelLayoutForOpenState:(_Bool)arg1;	// IMP=0x00000000002015d3
- (void)_updateCarLayoutForOpenState:(_Bool)arg1;	// IMP=0x0000000000201428
- (void)_updateLayoutForOpenState:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000200d2f
- (id)managedVisualEffectViews;	// IMP=0x0000000000200c26
- (_Bool)wantsManagedVibrancyEffect;	// IMP=0x0000000000200c1e
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000200b7b
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;	// IMP=0x000000000020090c
- (void)_enumeratePanelViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002006f0
- (id)_panelViewsForPosition:(unsigned long long)arg1;	// IMP=0x00000000002005a5
- (id)panelHingeViews;	// IMP=0x00000000002004c0
- (id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(_Bool)arg2;	// IMP=0x000000000020032c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ffc5d

@end
