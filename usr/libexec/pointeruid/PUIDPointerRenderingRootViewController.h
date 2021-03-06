//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMapTable, NSMutableDictionary, NSString, PSMatchMoveSource, PSPointerPortalSourceCollection, PUIDPointerAccessoryContainerView, PUIDPointerSettings, PUIDPointerShapeView, PUIDPointerState, UIColor, UIImageView, UIView, UIViewFloatAnimatableProperty;

@interface PUIDPointerRenderingRootViewController : UIViewController
{
    long long _overlayEffectStyle;	// 8 = 0x8
    NSMapTable *_pointerClientToSourceContainerMap;	// 16 = 0x10
    PUIDPointerState *_pointerState;	// 24 = 0x18
    NSMutableDictionary *_matchMoveSourceToView;	// 32 = 0x20
    NSMutableDictionary *_portalSourceToView;	// 40 = 0x28
    PSMatchMoveSource *_previousContentMatchMoveSource;	// 48 = 0x30
    PSPointerPortalSourceCollection *_previousPointerPortalSourceCollection;	// 56 = 0x38
    struct CATransform3D _previousContentTransform;	// 64 = 0x40
    UIView *_pointerRootView;	// 192 = 0xc0
    PUIDPointerShapeView *_pointerShapeView;	// 200 = 0xc8
    UIView *_pointerBackgroundSamplingSourceView;	// 208 = 0xd0
    UIColor *_defaultBackgroundColor;	// 216 = 0xd8
    UIViewFloatAnimatableProperty *_rampingXProperty;	// 224 = 0xe0
    UIViewFloatAnimatableProperty *_rampingYProperty;	// 232 = 0xe8
    UIViewFloatAnimatableProperty *_pointerShapePositionXProperty;	// 240 = 0xf0
    UIViewFloatAnimatableProperty *_pointerShapePositionYProperty;	// 248 = 0xf8
    PUIDPointerSettings *_settings;	// 256 = 0x100
    UIImageView *_specularImageView;	// 264 = 0x108
    PUIDPointerShapeView *_specularEffectMaskPointerShapeView;	// 272 = 0x110
    UIView *_specularEffectRootView;	// 280 = 0x118
    long long _visibilityState;	// 288 = 0x120
    unsigned long long _positionAnimationCount;	// 296 = 0x128
    PUIDPointerAccessoryContainerView *_accessoryContainerView;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x002000000002688c
- (void)_transitionFromPointerPortalSourceView:(id)arg1 toPointerPortalSourceView:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000025d67
- (struct CGPoint)_positionForTargetWithCenter:(struct CGPoint)arg1 modelCursorPosition:(struct CGPoint)arg2 slip:(struct CGPoint)arg3;	// IMP=0x0010000000025d3d
- (id)_createPortalSourceViewWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000025cfb
- (struct CGRect)_samplingBoundsForPointerShape:(id)arg1;	// IMP=0x0010000000025c0f
- (id)_createMatchMoveSourceView;	// IMP=0x0010000000025bbb
- (void)_relativePositionAnimationParametersUsingSystemPointerPositionSettings:(id)arg1 forTextContent:(_Bool)arg2 outXDamping:(out double *)arg3 outXResponse:(out double *)arg4 outYDamping:(out double *)arg5 outYResponse:(out double *)arg6;	// IMP=0x001000000002574d
- (void)_updateRampingPropertiesForPointerSlip:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000254b1
- (CDUnknownBlockType)_positionAnimationCountIncrementingCompletionWrapper:(CDUnknownBlockType)arg1;	// IMP=0x00100000000253e5
- (struct CATransform3D)transformToLocalWindowForCoordinateSpaceTransformToDisplay:(struct CATransform3D)arg1;	// IMP=0x0010000000024ffc
- (_Bool)_updatePointerWithOptions:(unsigned long long)arg1 updateHandlerCollection:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000021055
- (_Bool)setPointerState:(id)arg1 options:(unsigned long long)arg2 updateHandlerCollection:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000020e9a
- (void)invalidateEffectSourcesForPointerClient:(id)arg1;	// IMP=0x0010000000020bdc
- (void)invalidateContentMatchMoveSource:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000020a11
- (id)createContentMatchMoveSourceForClient:(id)arg1;	// IMP=0x0010000000020808
- (_Bool)isValidPointerPortalSourceCollection:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000020765
- (void)invalidatePointerPortalSourceCollection:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000204db
- (id)createPointerPortalSourceCollectionForClient:(id)arg1;	// IMP=0x0010000000020029
- (void)pointerShapeViewExpectedSizeParametersDidChange:(id)arg1;	// IMP=0x001000000002000d
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000020005
- (void)viewDidLoad;	// IMP=0x001000000001f0b8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000001efe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

