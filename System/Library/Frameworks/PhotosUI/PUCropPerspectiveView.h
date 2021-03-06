//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NUMediaViewDelegate-Protocol.h>
#import <PhotosUI/PUCropGestureHandlerDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSString, NUCropModel, PHLivePhotoView, PLImageGeometry, PUCropGestureHandler, PXImageLayerModulator, PXImageModulationManager;

__attribute__((visibility("hidden")))
@interface PUCropPerspectiveView <NUMediaViewDelegate, UIGestureRecognizerDelegate, PUCropGestureHandlerDelegate>
{
    PLImageGeometry *_imageGeometry;	// 8 = 0x8
    PHLivePhotoView *_livePhotoView;	// 16 = 0x10
    PXImageModulationManager *_imageModulationManager;	// 24 = 0x18
    PXImageLayerModulator *_imageLayerModulator;	// 32 = 0x20
    CDStruct_1b6d18a9 _cachedVideoSeekTime;	// 40 = 0x28
    PUCropGestureHandler *_gestureHandler;	// 64 = 0x40
    _Bool _muted;	// 72 = 0x48
    _Bool _needsLayerTransformUpdate;	// 73 = 0x49
    _Bool _layerTransformUpdateAnimated;	// 74 = 0x4a
    _Bool _needsUpdateLayerTransforms;	// 75 = 0x4b
    _Bool _needsUpdateLayerTransformsAnimated;	// 76 = 0x4c
    _Bool _isDebugging;	// 77 = 0x4d
    CALayer *_imageLayer;	// 80 = 0x50
    CALayer *_mediaSuperlayer;	// 88 = 0x58
    CALayer *_mediaLayer;	// 96 = 0x60
    CALayer *_debugLayer;	// 104 = 0x68
    CAShapeLayer *_debugViewRectLayer;	// 112 = 0x70
    CAShapeLayer *_debugCropRectLayer;	// 120 = 0x78
    CAShapeLayer *_debugQuadLayer;	// 128 = 0x80
    NUCropModel *_cropModel;	// 136 = 0x88
    double _lastPitchRadians;	// 144 = 0x90
    double _lastYawRadians;	// 152 = 0x98
    double _lastRollRadians;	// 160 = 0xa0
    double _lastImageZoomScale;	// 168 = 0xa8
    struct CGVector _lastPanRubberBandOffset;	// 176 = 0xb0
    struct CGPoint _lastModelCropCenter;	// 192 = 0xc0
    struct CGPoint _lastViewCropCenter;	// 208 = 0xd0
    double _lastUICroppingRectToImageScale;	// 224 = 0xe0
    float _gainMapValue;	// 232 = 0xe8
    struct CGImage *_gainMapImage;	// 240 = 0xf0
    struct CGRect _imageCropRect;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000123bd9
@property(nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(retain, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(readonly, nonatomic) struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
- (void)handlePinchGesture:(id)arg1;	// IMP=0x0000000000123aa5
- (void)handlePanGesture:(id)arg1;	// IMP=0x000000000012341b
- (void)didEndTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x0000000000123407
- (void)didTrackWithCropGestureHandler:(id)arg1;	// IMP=0x000000000012339a
- (void)didBeginTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x0000000000123383
- (void)willBeginTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x000000000012336c
- (struct CGRect)_modelCropRectUnorientedInUICoords;	// IMP=0x00000000001232eb
- (struct CGRect)_croppingRect;	// IMP=0x0000000000123249
- (void)setImageCropRectFromViewCropRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000122860
- (struct CGRect)validateViewCropRectAgainstModelCropRect:(struct CGRect)arg1;	// IMP=0x000000000012228c
- (struct CGPoint)imagePointForViewPoint:(struct CGPoint)arg1;	// IMP=0x0000000000122191
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;	// IMP=0x0000000000121f72
- (struct CGRect)viewCropRectForImageRect:(struct CGRect)arg1;	// IMP=0x0000000000121d64
- (struct CGRect)imageOrientedViewCropRect:(struct CGRect)arg1;	// IMP=0x0000000000121cf0
- (struct CGRect)viewOrientedViewCropRect:(struct CGRect)arg1;	// IMP=0x0000000000121c50
- (struct CGAffineTransform)imageOrientedViewCropTransform;	// IMP=0x000000000012159c
- (struct CGAffineTransform)_modelSpaceToViewSpaceTransformWithModelCropRect:(struct CGRect)arg1 currentViewCropRect:(struct CGRect)arg2;	// IMP=0x000000000012113e
- (double)_viewScaleWithModelCropRect:(struct CGRect)arg1;	// IMP=0x00000000001210e4
- (double)_zoomScaleForCurrentCropRectAndModelRect;	// IMP=0x0000000000121083
- (double)_zoomScaleForModelCropRect:(struct CGRect)arg1;	// IMP=0x000000000012104f
- (struct CGRect)_fullCropRect;	// IMP=0x0000000000120f81
- (void)_updateImageModulation;	// IMP=0x0000000000120dcf
- (void)_invalidateImageLayerModulator;	// IMP=0x0000000000120d4a
- (void)_invalidateImageModulationManager;	// IMP=0x0000000000120d15
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;	// IMP=0x0000000000120ccb
- (void)mediaViewDidFinishRendering:(id)arg1;	// IMP=0x0000000000120bae
- (void)setImageModulationOptions:(CDStruct_910f5d27)arg1;	// IMP=0x0000000000120b2c
- (void)_setupMediaWithComposition:(id)arg1;	// IMP=0x0000000000120869
- (void)tearDownMediaViewAndLayers;	// IMP=0x0000000000120771
- (void)setVideoComposition:(id)arg1 withSeekTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001206d9
- (void)setAutoloopComposition:(id)arg1;	// IMP=0x0000000000120633
- (void)setLivePhoto:(id)arg1;	// IMP=0x00000000001205b9
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x000000000012047d
- (void)setImage:(id)arg1;	// IMP=0x00000000001202b8
- (id)cropModel;	// IMP=0x00000000001202a3
- (void)_setCropModel:(id)arg1;	// IMP=0x0000000000120150
- (void)setOrientation:(long long)arg1;	// IMP=0x000000000011fe69
- (void)setNeedsLayerTransformsUpdateAnimated:(_Bool)arg1;	// IMP=0x000000000011fe42
- (void)setStraightenAngle:(double)arg1;	// IMP=0x000000000011fdcb
- (void)setYawAngle:(double)arg1;	// IMP=0x000000000011fd51
- (void)setPitchAngle:(double)arg1;	// IMP=0x000000000011fcd7
- (void)layoutSubviews;	// IMP=0x000000000011fc7a
- (void)setCanvasFrame:(struct CGRect)arg1;	// IMP=0x000000000011fbe9
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000011fbd9
- (_Bool)isMuted;	// IMP=0x000000000011fbc9
- (void)setModelCropRect:(struct CGRect)arg1 viewCropRect:(struct CGRect)arg2;	// IMP=0x000000000011fa81
- (void)_resetCropRect;	// IMP=0x000000000011f9a2
- (void)updateLayerTransformsAnimated:(_Bool)arg1 viewCropRect:(struct CGRect)arg2 modelCropRect:(struct CGRect)arg3;	// IMP=0x000000000011ecfc
- (void)updateLayerTransformsAnimated:(_Bool)arg1;	// IMP=0x000000000011ec7c
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000011eaef
- (struct CGSize)masterImageSize;	// IMP=0x000000000011ea9c
- (struct CATransform3D)_imageOrientationTransform;	// IMP=0x000000000011ea35
- (struct CATransform3D)_imageOrientationTransformWithoutTranslation;	// IMP=0x000000000011e9bd
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000011e9b5
- (void)dealloc;	// IMP=0x000000000011e974
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011e20a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

