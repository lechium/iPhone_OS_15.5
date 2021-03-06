//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKInkOverlayViewDelegate-Protocol.h>
#import <AnnotationKit/AKShapeDetectionControllerDelegate-Protocol.h>

@class AKInkOverlayView, AKPageController, AKShapeDetectionController, NSString;
@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>
{
    _Bool _ignoreAnnotationAndSelectionKVO;	// 8 = 0x8
    _Bool _onlyPencilDraws;	// 9 = 0x9
    AKInkOverlayView *_inkOverlayView;	// 16 = 0x10
    AKPageController *_pageController;	// 24 = 0x18
    AKShapeDetectionController *_shapeDetectionController;	// 32 = 0x20
    id <PKRulerHostingDelegate> _rulerHostingDelegate;	// 40 = 0x28
    CDUnknownBlockType _delayedShapeDetectionBlock;	// 48 = 0x30
    double _lastStrokeEndTime;	// 56 = 0x38
}

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;	// IMP=0x0000000000062a0e
- (void).cxx_destruct;	// IMP=0x00000000000653cc
@property double lastStrokeEndTime; // @synthesize lastStrokeEndTime=_lastStrokeEndTime;
@property(copy) CDUnknownBlockType delayedShapeDetectionBlock; // @synthesize delayedShapeDetectionBlock=_delayedShapeDetectionBlock;
@property _Bool onlyPencilDraws; // @synthesize onlyPencilDraws=_onlyPencilDraws;
@property _Bool ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property(retain) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;	// IMP=0x00000000000650b4
- (struct CGRect)_convertRect:(struct CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;	// IMP=0x0000000000064f40
- (struct CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2;	// IMP=0x0000000000064ee7
- (void)_tearDownGestureDependencies;	// IMP=0x0000000000064db7
- (void)_updateGestureDependencyPriority;	// IMP=0x00000000000647ab
- (void)_setupGestureDependencies;	// IMP=0x0000000000064572
- (void)_updateAllowedTouchTypesAllEnabled:(_Bool)arg1 pencilEnabled:(_Bool)arg2;	// IMP=0x0000000000064380
- (void)_controllerWillSave:(id)arg1;	// IMP=0x0000000000064314
- (void)_toolStatusUpdated:(id)arg1;	// IMP=0x00000000000640fa
- (void)_inkCanvasAnnotationUpdated:(id)arg1;	// IMP=0x0000000000063fc9
- (void)_enclosingScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000063f1e
- (void)didToggleRuler;	// IMP=0x0000000000063e54
- (void)_inkDidChangeNotification:(id)arg1;	// IMP=0x0000000000063ceb
- (_Bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;	// IMP=0x0000000000063c3b
- (_Bool)isWaitingToCoalesceStrokes;	// IMP=0x0000000000063c33
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;	// IMP=0x0000000000063c21
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000063c0d
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000063bf6
- (id)overlayView:(id)arg1;	// IMP=0x0000000000063be4
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;	// IMP=0x0000000000063bc6
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(_Bool)arg2;	// IMP=0x0000000000063b28
- (void)_performDelayedShapeDetection;	// IMP=0x0000000000063ab1
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;	// IMP=0x000000000006303c
- (void)inputViewDidBeginStroke:(id)arg1;	// IMP=0x0000000000062ecd
- (_Bool)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;	// IMP=0x0000000000062a27
@property(retain) AKInkOverlayView *inkOverlayView; // @synthesize inkOverlayView=_inkOverlayView;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062850
- (void)_partialTeardown;	// IMP=0x000000000006271f
- (void)teardown;	// IMP=0x000000000006269f
- (void)_fullSetup;	// IMP=0x0000000000061e74
- (void)setup;	// IMP=0x0000000000061bb9
- (id)initWithPageController:(id)arg1;	// IMP=0x0000000000061b51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

