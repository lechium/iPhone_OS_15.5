//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>
#import <PencilKit/PKShapeDrawingControllerDelegate-Protocol.h>

@class CADisplayLink, NSMutableArray, NSMutableSet, NSString, PKAlternativeStrokesAnimation, PKController, PKDrawing, PKDrawingPowerSavingController, PKInk, PKInterpolateColorAnimation, PKMetalFramebuffer, PKMetalRendererController, PKMetalView, PKRulerController, PKSelectionController, PKShapeDrawingController, PKUndoCommand, UIColor, UIGestureRecognizer, UIImage, UITouch;
@protocol PKDrawingGestureRecognizerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget>
{
    unsigned long long _numSkippedDoubleBufferedFrames;	// 8 = 0x8
    struct {
        unsigned int delegateSupportsDrawingDidChange:1;
        unsigned int delegateSupportsWillBeginNewStroke:1;
        unsigned int delegateSupportsBeganStroke:1;
        unsigned int delegateSupportsCancelledStroke:1;
        unsigned int delegateSupportsEndedStroke:1;
        unsigned int delegateSupportsWillBeginDrawing:1;
        unsigned int delegateSupportsDidBeginDrawing:1;
        unsigned int delegateSupportsDrawingMovedWithTouch:1;
        unsigned int delegateSupportsDidEndDrawing:1;
        unsigned int delegateSupportsDidFinishRenderingNewStrokes:1;
        unsigned int delegateSupportsShouldBeginDrawingWithTouch:1;
        unsigned int delegateSupportsDidEraseStrokes:1;
        unsigned int delegateSupportsRegisterUndoCommands:1;
        unsigned long long delegateSupportsTouchView;
        unsigned int delegateSupportsDidPresentWithCanvasOffset:1;
        unsigned int delegateSupportsInvalidateTiles:1;
        unsigned int delegateSupportsHasVisibleStrokesChanged:1;
        unsigned int delegateSupportsShouldDisableShapeRecognition:1;
        unsigned int delegateSupportsInkForStroke:1;
        unsigned int delegateSupportsTransformForStroke:1;
    } _canvasViewFlags;	// 16 = 0x10
    NSMutableArray *_finishedStrokes;	// 40 = 0x28
    long long _liveInteractionCount;	// 48 = 0x30
    UITouch *_currentStrokeTouch;	// 56 = 0x38
    UIColor *_canvasBackgroundColor;	// 64 = 0x40
    PKDrawing *_liveDrawing;	// 72 = 0x48
    PKUndoCommand *_liveDrawingUndoCommand;	// 80 = 0x50
    PKMetalFramebuffer *_snapshotFramebuffer;	// 88 = 0x58
    _Bool _isDrawing;	// 96 = 0x60
    _Bool _hasVisibleStrokes;	// 97 = 0x61
    _Bool _sixChannelBlending;	// 98 = 0x62
    _Bool _isErasingObjects;	// 99 = 0x63
    _Bool _predictionDisabled;	// 100 = 0x64
    _Bool _enableCanvasOffsetSupport;	// 101 = 0x65
    _Bool _allowLiveInteraction;	// 102 = 0x66
    _Bool _liveStrokeMode;	// 103 = 0x67
    _Bool _disableAXDrawingAnnouncements;	// 104 = 0x68
    _Bool _shouldPause;	// 105 = 0x69
    _Bool _usePrivateResourceHandler;	// 106 = 0x6a
    _Bool _singleComponent;	// 107 = 0x6b
    PKController *_drawingController;	// 112 = 0x70
    id <PKTiledCanvasViewDelegate> _delegate;	// 120 = 0x78
    UIImage *_paperTexture;	// 128 = 0x80
    PKDrawing *_drawing;	// 136 = 0x88
    PKInk *_ink;	// 144 = 0x90
    UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *_drawingGestureRecognizer;	// 152 = 0x98
    UIColor *_liveRenderingOverrideColor;	// 160 = 0xa0
    PKSelectionController *_selectionController;	// 168 = 0xa8
    PKRulerController *_rulerController;	// 176 = 0xb0
    double _metalLayerContentsScaleOverride;	// 184 = 0xb8
    PKDrawing *_currentDrawingBeingCopiedToCanvas;	// 192 = 0xc0
    double __fixedDrawingScale;	// 200 = 0xc8
    PKMetalView *_metalView;	// 208 = 0xd0
    CADisplayLink *_displayLink;	// 216 = 0xd8
    long long _maxNumPredictionPoints;	// 224 = 0xe0
    double _drawingStartTimestamp;	// 232 = 0xe8
    PKDrawingPowerSavingController *_powerSavingController;	// 240 = 0xf0
    CDUnknownBlockType _purgeResourcesBlock;	// 248 = 0xf8
    NSMutableArray *_strokesToErase;	// 256 = 0x100
    NSMutableSet *_strokeIDsToErase;	// 264 = 0x108
    NSMutableArray *_particlesToDestinationAnimations;	// 272 = 0x110
    NSMutableArray *_transformStrokesAnimations;	// 280 = 0x118
    double _liveAnimationStartTime;	// 288 = 0x120
    NSMutableArray *_fadeOutStrokeAnimations;	// 296 = 0x128
    PKAlternativeStrokesAnimation *_alternativeStrokesAnimation;	// 304 = 0x130
    NSMutableSet *_strokeUUIDsAboutToBeRemoved;	// 312 = 0x138
    NSMutableArray *_strokeRenderCachesToPurge;	// 320 = 0x140
    PKInterpolateColorAnimation *_liveRenderingOverrideColorAnimation;	// 328 = 0x148
    PKShapeDrawingController *_shapeDrawingController;	// 336 = 0x150
    PKInk *_sixChannelInk;	// 344 = 0x158
    struct CGPoint _canvasOffset;	// 352 = 0x160
    struct CGSize _liveStrokeMaxSize;	// 368 = 0x170
    struct CGSize __fixedPixelSize;	// 384 = 0x180
    struct CGPoint __oldEraseLocation;	// 400 = 0x190
    struct CGRect _viewScissor;	// 416 = 0x1a0
    struct CGAffineTransform _strokeTransform;	// 448 = 0x1c0
    struct CGAffineTransform _paperTransform;	// 496 = 0x1f0
}

+ (void)prewarmFutureCanvasesIfNecessarySecureRendering:(_Bool)arg1;	// IMP=0x00000000000503e9
+ (void)setupDefaults;	// IMP=0x00000000000502ae
+ (void)initialize;	// IMP=0x000000000004fbbe
- (void).cxx_destruct;	// IMP=0x000000000005e8f4
@property(retain, nonatomic) PKInk *sixChannelInk; // @synthesize sixChannelInk=_sixChannelInk;
@property(retain, nonatomic) PKShapeDrawingController *shapeDrawingController; // @synthesize shapeDrawingController=_shapeDrawingController;
@property(retain, nonatomic) PKInterpolateColorAnimation *liveRenderingOverrideColorAnimation; // @synthesize liveRenderingOverrideColorAnimation=_liveRenderingOverrideColorAnimation;
@property(retain, nonatomic) NSMutableArray *strokeRenderCachesToPurge; // @synthesize strokeRenderCachesToPurge=_strokeRenderCachesToPurge;
@property(retain, nonatomic) NSMutableSet *strokeUUIDsAboutToBeRemoved; // @synthesize strokeUUIDsAboutToBeRemoved=_strokeUUIDsAboutToBeRemoved;
@property(retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation; // @synthesize alternativeStrokesAnimation=_alternativeStrokesAnimation;
@property(retain, nonatomic) NSMutableArray *fadeOutStrokeAnimations; // @synthesize fadeOutStrokeAnimations=_fadeOutStrokeAnimations;
@property(nonatomic) double liveAnimationStartTime; // @synthesize liveAnimationStartTime=_liveAnimationStartTime;
@property(retain, nonatomic) NSMutableArray *transformStrokesAnimations; // @synthesize transformStrokesAnimations=_transformStrokesAnimations;
@property(retain, nonatomic) NSMutableArray *particlesToDestinationAnimations; // @synthesize particlesToDestinationAnimations=_particlesToDestinationAnimations;
@property(retain, nonatomic) NSMutableSet *strokeIDsToErase; // @synthesize strokeIDsToErase=_strokeIDsToErase;
@property(retain, nonatomic) NSMutableArray *strokesToErase; // @synthesize strokesToErase=_strokesToErase;
@property(nonatomic) struct CGPoint _oldEraseLocation; // @synthesize _oldEraseLocation=__oldEraseLocation;
@property(copy, nonatomic) CDUnknownBlockType purgeResourcesBlock; // @synthesize purgeResourcesBlock=_purgeResourcesBlock;
@property(retain, nonatomic) PKDrawingPowerSavingController *powerSavingController; // @synthesize powerSavingController=_powerSavingController;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) long long maxNumPredictionPoints; // @synthesize maxNumPredictionPoints=_maxNumPredictionPoints;
@property(retain, nonatomic) PKMetalFramebuffer *snapshotFramebuffer; // @synthesize snapshotFramebuffer=_snapshotFramebuffer;
@property(nonatomic) _Bool singleComponent; // @synthesize singleComponent=_singleComponent;
@property(nonatomic) _Bool usePrivateResourceHandler; // @synthesize usePrivateResourceHandler=_usePrivateResourceHandler;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) PKMetalView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) double _fixedDrawingScale; // @synthesize _fixedDrawingScale=__fixedDrawingScale;
@property(nonatomic) struct CGSize _fixedPixelSize; // @synthesize _fixedPixelSize=__fixedPixelSize;
@property(nonatomic) __weak PKDrawing *currentDrawingBeingCopiedToCanvas; // @synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas;
@property(nonatomic) _Bool disableAXDrawingAnnouncements; // @synthesize disableAXDrawingAnnouncements=_disableAXDrawingAnnouncements;
@property(nonatomic) struct CGSize liveStrokeMaxSize; // @synthesize liveStrokeMaxSize=_liveStrokeMaxSize;
@property(nonatomic) _Bool liveStrokeMode; // @synthesize liveStrokeMode=_liveStrokeMode;
@property _Bool allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) struct CGPoint canvasOffset; // @synthesize canvasOffset=_canvasOffset;
@property(nonatomic) _Bool enableCanvasOffsetSupport; // @synthesize enableCanvasOffsetSupport=_enableCanvasOffsetSupport;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) double metalLayerContentsScaleOverride; // @synthesize metalLayerContentsScaleOverride=_metalLayerContentsScaleOverride;
@property(nonatomic) _Bool predictionDisabled; // @synthesize predictionDisabled=_predictionDisabled;
@property(nonatomic) _Bool isErasingObjects; // @synthesize isErasingObjects=_isErasingObjects;
@property(nonatomic) __weak PKRulerController *rulerController; // @synthesize rulerController=_rulerController;
@property(nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) UIColor *liveRenderingOverrideColor; // @synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor;
@property(nonatomic) _Bool sixChannelBlending; // @synthesize sixChannelBlending=_sixChannelBlending;
@property(readonly, nonatomic) _Bool hasVisibleStrokes; // @synthesize hasVisibleStrokes=_hasVisibleStrokes;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer; // @synthesize drawingGestureRecognizer=_drawingGestureRecognizer;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) UIImage *paperTexture; // @synthesize paperTexture=_paperTexture;
@property(nonatomic) __weak id <PKTiledCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKController *_drawingController; // @synthesize _drawingController;
- (void)_postEndedSketchingAXAnnouncement;	// IMP=0x000000000005e1dc
- (void)_postBeganSketchingAXAnnouncement;	// IMP=0x000000000005e124
- (void)_postEndedErasingAXAnnouncement;	// IMP=0x000000000005e06c
- (void)_postBeganErasingAXAnnouncement;	// IMP=0x000000000005dfb4
- (void)_postAXAnnouncement:(id)arg1;	// IMP=0x000000000005dfa2
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)arg1;	// IMP=0x000000000005df3c
- (void)shapeDrawingControllerShapeGestureDetected:(id)arg1;	// IMP=0x000000000005daf1
- (id)shapeDrawingControllerRendererController:(id)arg1;	// IMP=0x000000000005dacf
- (struct CGSize)_rendererControllerPixelSize;	// IMP=0x000000000005da10
- (struct CGSize)_metalViewDrawableSize;	// IMP=0x000000000005d9fb
- (void)removeStuckStrokesAndSimulateCrashIfNecessary;	// IMP=0x000000000005d6e0
- (void)fadeOutAndHideStrokes:(id)arg1 duration:(double)arg2;	// IMP=0x000000000005d218
- (void)testHideOldestStroke;	// IMP=0x000000000005d0ae
- (void)checkAnimationsDidEndAtTime:(double)arg1;	// IMP=0x000000000005c89a
- (void)animateStrokes:(id)arg1 destinationFrame:(struct CGRect)arg2 duration:(double)arg3 particles:(_Bool)arg4;	// IMP=0x000000000005c361
- (void)liveStrokeParticlesToDestinationFrame:(struct CGRect)arg1;	// IMP=0x000000000005c272
- (id)_strokeUUIDsForStrokes:(id)arg1;	// IMP=0x000000000005c034
- (void)eraserCancelled;	// IMP=0x000000000005bf58
- (void)eraserEnded:(id)arg1;	// IMP=0x000000000005bdaa
- (void)eraserMoved:(id)arg1;	// IMP=0x000000000005bca8
- (_Bool)eraserBegan:(id)arg1;	// IMP=0x000000000005b9e7
- (void)_didFinishErasingStrokes:(_Bool)arg1;	// IMP=0x000000000005b6c0
- (void)eraseStrokesForPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;	// IMP=0x000000000005aecb
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;	// IMP=0x000000000005ae4b
- (void)drawingCancelled;	// IMP=0x000000000005a663
- (void)_endAlternativeStrokeIfNecessaryAccepted:(_Bool)arg1;	// IMP=0x000000000005a625
- (void)drawingEnded:(id)arg1;	// IMP=0x0000000000058d60
- (void)drawingGestureRecognizer:(id)arg1 touchesEndedWithDrawingTouch:(id)arg2;	// IMP=0x0000000000058d34
- (void)_handleEndOfStroke:(id)arg1 groupedUndoCommands:(id)arg2 invalidateTiles:(_Bool)arg3;	// IMP=0x0000000000058af6
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;	// IMP=0x00000000000586d7
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000057871
- (void)drawingBegan:(id)arg1;	// IMP=0x0000000000056826
- (id)_inkForNewStroke;	// IMP=0x000000000005671d
- (_Bool)drawingGestureRecognizer:(id)arg1 shouldBeginDrawingWithTouches:(id)arg2 event:(id)arg3;	// IMP=0x0000000000056628
- (void)didEndLiveInteractionWithStrokes:(id)arg1 drawing:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x0000000000056121
@property(readonly, nonatomic) _Bool wantsCanvasVisible;
- (void)willBeginLiveInteractionWithTouch:(id)arg1;	// IMP=0x0000000000056064
- (double)_inputScale;	// IMP=0x0000000000055f4f
- (id)liveDrawing;	// IMP=0x0000000000055dc3
- (void)cancelCurrentStroke;	// IMP=0x0000000000055d72
- (id)currentStrokeWithStrokeDataCopy;	// IMP=0x0000000000055ce4
- (id)currentStroke;	// IMP=0x0000000000055c56
- (id)_touchView;	// IMP=0x0000000000055b8d
- (void)cancelPurgeResourcesBlock;	// IMP=0x0000000000055b08
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000055a98
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000559f9
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000055932
- (void)drawingChanged:(id)arg1;	// IMP=0x000000000005552c
@property(readonly, nonatomic) PKDrawing *activeDrawing;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 snapshotTexture:(id)arg4 snapshotTextureTransform:(struct CGAffineTransform)arg5 setupComplete:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000054d56
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 image:(struct CGImage *)arg3 tileTransform:(struct CGAffineTransform)arg4 setupComplete:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000054b1f
- (void)delayCompletionBlockUntilPresentation:(CDUnknownBlockType)arg1;	// IMP=0x00000000000549dc
- (void)setOpaque:(_Bool)arg1;	// IMP=0x000000000005499b
- (void)_updateMetalLayerOpacityIsDoingBitmapErase:(_Bool)arg1;	// IMP=0x00000000000547a3
- (void)_updateMetalLayerOpacity;	// IMP=0x000000000005478f
- (void)layoutSubviews;	// IMP=0x0000000000054544
- (void)_drawingDisplay:(double)arg1;	// IMP=0x0000000000052dd2
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000052d58
- (void)schedulePurgeResourcesBlock;	// IMP=0x0000000000052a0d
- (void)handleDrawingShouldPause:(_Bool)arg1;	// IMP=0x000000000005291e
- (_Bool)_isLiveAnimating;	// IMP=0x0000000000052857
- (void)setNeedsDrawingDisplay;	// IMP=0x00000000000527a3
- (_Bool)_isShapeRecognitionEnabled;	// IMP=0x00000000000526e9
@property(readonly, nonatomic) PKMetalRendererController *_rendererController;
- (void)_stopDisplayLink;	// IMP=0x0000000000052652
- (void)_startDisplayLink;	// IMP=0x000000000005260c
- (void)setupDisplayLink;	// IMP=0x00000000000524b1
- (void)resizeBackingBuffersForPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;	// IMP=0x0000000000052336
- (void)_setFixedPointSize:(struct CGSize)arg1 drawingScale:(double)arg2;	// IMP=0x00000000000521d4
- (void)setupMetalViewForPixelFormat:(unsigned long long)arg1 withPixelSize:(struct CGSize)arg2;	// IMP=0x0000000000052084
- (void)setupViewWithPixelSize:(struct CGSize)arg1 drawingSize:(struct CGSize)arg2;	// IMP=0x0000000000051dd1
- (void)adjustedPixelSize:(struct CGSize *)arg1 drawingSize:(struct CGSize *)arg2;	// IMP=0x0000000000051cce
- (double)layerContentsScale;	// IMP=0x0000000000051c55
- (void)setResourceCacheSize:(unsigned long long)arg1;	// IMP=0x0000000000051c1b
- (void)setCanvasBackgroundColor:(id)arg1;	// IMP=0x0000000000051b57
@property(readonly, nonatomic) struct CGRect visibleStrokesBounds;
@property(readonly, nonatomic) struct CGRect renderedStrokesBounds;
- (void)enumerateRenderedStrokesBounds:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051207
- (void)setupGestures;	// IMP=0x0000000000051045
- (void)updateHasVisibleStrokes;	// IMP=0x0000000000050e2c
@property(nonatomic) _Bool useLuminanceColorFilter;
- (void)setLiveRenderingOverrideColor:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005090c
- (void)setupDrawing;	// IMP=0x000000000005070d
- (id)snapshotFramebufferWithSize:(struct CGSize)arg1;	// IMP=0x00000000000504d9
- (void)dealloc;	// IMP=0x000000000004fe71
- (id)initWithFrame:(struct CGRect)arg1 usePrivateResourceHandler:(_Bool)arg2 singleComponent:(_Bool)arg3 sixChannelBlending:(_Bool)arg4;	// IMP=0x000000000004fc2d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004fc14
- (void)_replayDrawingCancelled;	// IMP=0x000000000005fbd0
- (void)_replayDrawingEnded;	// IMP=0x000000000005f38e
- (void)_replayDrawingMoved:(CDStruct_6422aa5d)arg1;	// IMP=0x000000000005f239
- (void)_replayDrawingBegan:(CDStruct_6422aa5d)arg1;	// IMP=0x000000000005eb0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
