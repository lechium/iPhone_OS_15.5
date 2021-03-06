//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>
#import <ChatKit/UIDynamicAnimatorDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, CALayer, CKAnimatedImage, CKElasticFunction, NSArray, NSMutableDictionary, NSString, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol CKBrowserDragViewControllerDelegate;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver>
{
    _Bool _canScale;	// 8 = 0x8
    _Bool _canRotate;	// 9 = 0x9
    _Bool _canPeel;	// 10 = 0xa
    _Bool _pressed;	// 11 = 0xb
    _Bool _scaledDown;	// 12 = 0xc
    _Bool _hasMovedToWindow;	// 13 = 0xd
    id <CKBrowserDragViewControllerDelegate> _delegate;	// 16 = 0x10
    double _dragViewScale;	// 24 = 0x18
    UILongPressGestureRecognizer *_gestureRecognizer;	// 32 = 0x20
    UIPanGestureRecognizer *_panGestureRecognizer;	// 40 = 0x28
    CKAnimatedImage *_dragImage;	// 48 = 0x30
    NSMutableDictionary *_peelMaskImageCache;	// 56 = 0x38
    UIImage *_currentFrameImage;	// 64 = 0x40
    NSArray *_dragImageFrames;	// 72 = 0x48
    UIView *_dragView;	// 80 = 0x50
    UIView *_plusImageView;	// 88 = 0x58
    UIView *_whiteBackground;	// 96 = 0x60
    CALayer *_peelImageLayer;	// 104 = 0x68
    CALayer *_peelMaskLayer;	// 112 = 0x70
    double _initialScale;	// 120 = 0x78
    double _rotationAngle;	// 128 = 0x80
    CALayer *_shineLayer;	// 136 = 0x88
    CALayer *_shadowLayer;	// 144 = 0x90
    CALayer *_dropShadowLayer;	// 152 = 0x98
    CALayer *_peelLayer;	// 160 = 0xa0
    CALayer *_meshLayer;	// 168 = 0xa8
    CALayer *_perspectiveLayer;	// 176 = 0xb0
    CADisplayLink *_displayLink;	// 184 = 0xb8
    double _elasticLastTime;	// 192 = 0xc0
    double _elasticRemainingTime;	// 200 = 0xc8
    CKElasticFunction *_elasticFunctionPositionX;	// 208 = 0xd0
    CKElasticFunction *_elasticFunctionPositionY;	// 216 = 0xd8
    CKElasticFunction *_elasticFunctionRotation;	// 224 = 0xe0
    double _elasticRotationAngle;	// 232 = 0xe8
    CKElasticFunction *_elasticFunctionScaleX;	// 240 = 0xf0
    CKElasticFunction *_elasticFunctionScaleY;	// 248 = 0xf8
    double _elasticScaleX;	// 256 = 0x100
    double _elasticScaleY;	// 264 = 0x108
    struct CGPoint _anchorOffset;	// 272 = 0x110
    struct CGSize _initialSize;	// 288 = 0x120
    struct CGPoint _initialDragStartPosition;	// 304 = 0x130
    struct CGSize _rasterizedImageSize;	// 320 = 0x140
    struct CGPoint _previousPanLocationInView;	// 336 = 0x150
    struct CGPoint _meshLayerStartPosition;	// 352 = 0x160
    struct CGPoint _peelLayerStartPosition;	// 368 = 0x170
    struct CGPoint _shineLayerStartPosition;	// 384 = 0x180
    struct CGPoint _shadowLayerStartPosition;	// 400 = 0x190
    struct CGPoint _dropShadowLayerStartPosition;	// 416 = 0x1a0
    struct CGRect _sourceRect;	// 432 = 0x1b0
}

+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;	// IMP=0x00000000003efa67
+ (id)meshTransform;	// IMP=0x00000000003ef975
+ (_Bool)supportsForceTouch;	// IMP=0x00000000003ef6f8
- (void).cxx_destruct;	// IMP=0x00000000003f2cbe
@property(nonatomic) _Bool hasMovedToWindow; // @synthesize hasMovedToWindow=_hasMovedToWindow;
@property(nonatomic, getter=isScaledDown) _Bool scaledDown; // @synthesize scaledDown=_scaledDown;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) double elasticScaleY; // @synthesize elasticScaleY=_elasticScaleY;
@property(nonatomic) double elasticScaleX; // @synthesize elasticScaleX=_elasticScaleX;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionScaleY; // @synthesize elasticFunctionScaleY=_elasticFunctionScaleY;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionScaleX; // @synthesize elasticFunctionScaleX=_elasticFunctionScaleX;
@property(nonatomic) double elasticRotationAngle; // @synthesize elasticRotationAngle=_elasticRotationAngle;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionRotation; // @synthesize elasticFunctionRotation=_elasticFunctionRotation;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionPositionY; // @synthesize elasticFunctionPositionY=_elasticFunctionPositionY;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionPositionX; // @synthesize elasticFunctionPositionX=_elasticFunctionPositionX;
@property(nonatomic) double elasticRemainingTime; // @synthesize elasticRemainingTime=_elasticRemainingTime;
@property(nonatomic) double elasticLastTime; // @synthesize elasticLastTime=_elasticLastTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGPoint dropShadowLayerStartPosition; // @synthesize dropShadowLayerStartPosition=_dropShadowLayerStartPosition;
@property(nonatomic) struct CGPoint shadowLayerStartPosition; // @synthesize shadowLayerStartPosition=_shadowLayerStartPosition;
@property(nonatomic) struct CGPoint shineLayerStartPosition; // @synthesize shineLayerStartPosition=_shineLayerStartPosition;
@property(nonatomic) struct CGPoint peelLayerStartPosition; // @synthesize peelLayerStartPosition=_peelLayerStartPosition;
@property(nonatomic) struct CGPoint meshLayerStartPosition; // @synthesize meshLayerStartPosition=_meshLayerStartPosition;
@property(retain, nonatomic) CALayer *perspectiveLayer; // @synthesize perspectiveLayer=_perspectiveLayer;
@property(retain, nonatomic) CALayer *meshLayer; // @synthesize meshLayer=_meshLayer;
@property(retain, nonatomic) CALayer *peelLayer; // @synthesize peelLayer=_peelLayer;
@property(retain, nonatomic) CALayer *dropShadowLayer; // @synthesize dropShadowLayer=_dropShadowLayer;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
@property(nonatomic) struct CGPoint previousPanLocationInView; // @synthesize previousPanLocationInView=_previousPanLocationInView;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) struct CGSize rasterizedImageSize; // @synthesize rasterizedImageSize=_rasterizedImageSize;
@property(nonatomic) struct CGPoint initialDragStartPosition; // @synthesize initialDragStartPosition=_initialDragStartPosition;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
@property(nonatomic) struct CGPoint anchorOffset; // @synthesize anchorOffset=_anchorOffset;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) CALayer *peelMaskLayer; // @synthesize peelMaskLayer=_peelMaskLayer;
@property(retain, nonatomic) CALayer *peelImageLayer; // @synthesize peelImageLayer=_peelImageLayer;
@property(retain, nonatomic) UIView *whiteBackground; // @synthesize whiteBackground=_whiteBackground;
@property(retain, nonatomic) UIView *plusImageView; // @synthesize plusImageView=_plusImageView;
@property(retain, nonatomic) UIView *dragView; // @synthesize dragView=_dragView;
@property(retain, nonatomic) NSArray *dragImageFrames; // @synthesize dragImageFrames=_dragImageFrames;
@property(retain, nonatomic) UIImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property(retain, nonatomic) NSMutableDictionary *peelMaskImageCache; // @synthesize peelMaskImageCache=_peelMaskImageCache;
@property(retain, nonatomic) CKAnimatedImage *dragImage; // @synthesize dragImage=_dragImage;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) double dragViewScale; // @synthesize dragViewScale=_dragViewScale;
@property(nonatomic) _Bool canPeel; // @synthesize canPeel=_canPeel;
@property(nonatomic) _Bool canRotate; // @synthesize canRotate=_canRotate;
@property(nonatomic) _Bool canScale; // @synthesize canScale=_canScale;
@property(nonatomic) __weak id <CKBrowserDragViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reversePeelAnimationToPoint:(struct CGPoint)arg1 forPlacement:(_Bool)arg2 shouldShrink:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000003f1541
- (void)animateScaleDown;	// IMP=0x00000000003f12c8
- (void)animatePeelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003f0bd4
- (void)setUpPeelLayers;	// IMP=0x00000000003efb8c
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x00000000003ef87d
- (id)peelMaskImageFromImage:(id)arg1;	// IMP=0x00000000003ef73b
- (void)animationTimerFired:(unsigned long long)arg1;	// IMP=0x00000000003ef491
- (void)updateAnimationTimerObserving;	// IMP=0x00000000003ef395
- (void)applyTransforms;	// IMP=0x00000000003ef19a
- (double)dragViewScaleUp;	// IMP=0x00000000003ef09a
- (void)commitDrag;	// IMP=0x00000000003eef1d
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000003eeecf
- (void)_displayLinkCallback:(id)arg1;	// IMP=0x00000000003eeb13
- (void)_detachElasticEffects;	// IMP=0x00000000003eea73
- (void)_updateElasticEffectsForLocation:(struct CGPoint)arg1;	// IMP=0x00000000003ee959
- (void)_attachElasticEffectsForLocation:(struct CGPoint)arg1;	// IMP=0x00000000003ee69e
- (_Bool)_orbScalingEnabled;	// IMP=0x00000000003ee696
- (void)panGestureRecognized:(id)arg1;	// IMP=0x00000000003ee3cf
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint)arg1;	// IMP=0x00000000003ee3bd
- (void)manuallyInitializeDragAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000003ee36e
- (void)gestureRecognized:(id)arg1;	// IMP=0x00000000003ee06b
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000003ee025
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003edfd7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003edf96
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003ede6f
- (void)viewDidLoad;	// IMP=0x00000000003ed823
- (void)setPlusImageViewHidden:(_Bool)arg1;	// IMP=0x00000000003ed274
- (void)animatePlacementAtPoint:(struct CGPoint)arg1 shouldShrink:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ed1b0
- (void)animateBackToSourceCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ecfa2
@property(readonly, nonatomic) double absoluteScale;
@property(readonly, nonatomic) double dragViewRotation;
@property(readonly, nonatomic) struct CGPoint dragViewCenter;
- (id)initWithDragImage:(id)arg1 inSourceRect:(struct CGRect)arg2 withSourcePoint:(struct CGPoint)arg3 withGestureRecognizer:(id)arg4;	// IMP=0x00000000003ecaf6
- (void)dealloc;	// IMP=0x00000000003eca32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

