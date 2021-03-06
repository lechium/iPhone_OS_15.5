//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AKController, NSString, SSSCropController, SSSScreenshot, SSSScreenshotBorderView, UIActivity, UITapGestureRecognizer, UIViewController, VKImageAnalysis, VKImageAnalyzer, _SSSScreenshotImageView, _SSSScreenshotPDFView;
@protocol SSSScreenshotViewDelegate;

@interface SSSScreenshotView : UIView
{
    SSSCropController *_imageCropController;	// 8 = 0x8
    _SSSScreenshotImageView *_screenshotImageView;	// 16 = 0x10
    SSSCropController *_pdfCropController;	// 24 = 0x18
    _SSSScreenshotPDFView *_screenshotPDFView;	// 32 = 0x20
    SSSScreenshotBorderView *_borderView;	// 40 = 0x28
    UIView *_flashView;	// 48 = 0x30
    _Bool _hasPreparedForFullscreenExperience;	// 56 = 0x38
    _Bool _hasFinishedPreparingForFullscreenExperience;	// 57 = 0x39
    UITapGestureRecognizer *_tapGesture;	// 64 = 0x40
    struct CGRect _lastScreenshotImageViewFrameInScreen;	// 72 = 0x48
    _Bool _hasPositionedPDFViewToMatchImageView;	// 104 = 0x68
    _Bool _hasCroppedImageView;	// 105 = 0x69
    _Bool _hasEnteredFullPageCropBefore;	// 106 = 0x6a
    _Bool _useTrilinearMinificationFilter;	// 107 = 0x6b
    _Bool _usesOriginalImageAspectRatio;	// 108 = 0x6c
    _Bool _gesturesEnabled;	// 109 = 0x6d
    _Bool _annotationsEnabled;	// 110 = 0x6e
    _Bool _cropHandlesFadedOut;	// 111 = 0x6f
    _Bool _isBeingRemoved;	// 112 = 0x70
    _Bool _showBackgroundForOccludingView;	// 113 = 0x71
    SSSScreenshot *_screenshot;	// 120 = 0x78
    unsigned long long _state;	// 128 = 0x80
    id <SSSScreenshotViewDelegate> _delegate;	// 136 = 0x88
    long long _editMode;	// 144 = 0x90
    struct CGRect _extent;	// 152 = 0x98
}

+ (void)_zoomToRectWithinContentInsetBounds:(struct CGRect)arg1 scrollView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x002000000000712c
+ (struct CGRect)_scaledAndCenteredRect:(struct CGRect)arg1 withinRect:(struct CGRect)arg2;	// IMP=0x0010000000006fd8
+ (struct CGAffineTransform)_transformToConvertFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0010000000006e97
- (void).cxx_destruct;	// IMP=0x002000000000a10e
@property(nonatomic) _Bool showBackgroundForOccludingView; // @synthesize showBackgroundForOccludingView=_showBackgroundForOccludingView;
@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) __weak id <SSSScreenshotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect extent; // @synthesize extent=_extent;
@property(nonatomic) _Bool isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(nonatomic) _Bool cropHandlesFadedOut; // @synthesize cropHandlesFadedOut=_cropHandlesFadedOut;
@property(nonatomic) _Bool annotationsEnabled; // @synthesize annotationsEnabled=_annotationsEnabled;
@property(nonatomic) _Bool gesturesEnabled; // @synthesize gesturesEnabled=_gesturesEnabled;
@property(nonatomic) _Bool usesOriginalImageAspectRatio; // @synthesize usesOriginalImageAspectRatio=_usesOriginalImageAspectRatio;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (struct CGRect)cropOverlayViewRectInWindow;	// IMP=0x0010000000009fc2
@property(readonly, nonatomic) UIActivity *visionKitFeedbackActivity;
@property(readonly, nonatomic) VKImageAnalysis *currentImageAnalysis;
- (void)revert;	// IMP=0x0010000000009ea2
- (_Bool)canRedo;	// IMP=0x0010000000009e41
- (_Bool)canUndo;	// IMP=0x0010000000009de0
- (void)redo;	// IMP=0x0010000000009d84
- (void)undo;	// IMP=0x0010000000009d28
- (void)promoteViewValueToModelValueForKey:(unsigned long long)arg1;	// IMP=0x0010000000009cc7
- (id)modelModificationInfo;	// IMP=0x0010000000009c58
- (id)viewModificationInfo;	// IMP=0x0010000000009be9
- (id)currentCropController;	// IMP=0x0010000000009bba
- (id)currentView;	// IMP=0x0010000000009b8b
- (void)pageChanged:(id)arg1;	// IMP=0x0010000000009a67
- (CDStruct_6a6871ea);	// IMP=0x0010000000009a28
- (long long)currentPDFPage;	// IMP=0x00100000000099f9
- (id)_visualSearchCornerViewIfExists;	// IMP=0x001000000000998b
- (id)_imageAnalysisAaBarButtonItemIfExists;	// IMP=0x001000000000991d
- (id)_imageAnalysisAaButtonIfExists;	// IMP=0x001000000000981d
- (id)_internalPDFView;	// IMP=0x0010000000009800
@property(readonly, nonatomic, getter=isCropped) _Bool cropped;
- (void)cancelCrop;	// IMP=0x0010000000009764
- (void)doneCrop;	// IMP=0x001000000000970c
- (void)resetCrop;	// IMP=0x00100000000096b4
- (void)enterCrop;	// IMP=0x001000000000965c
- (void)adjustPDFPositioningToMatchImageIfNecessary;	// IMP=0x0010000000009623
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000000091d5
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000000905e
- (void)requireGestureRecognizerToFailBeforeAllOtherGestureRecognizers:(id)arg1;	// IMP=0x0010000000008fcd
- (void)requireAllOtherGestureRecognizersToFailBeforeGestureRecognizer:(id)arg1;	// IMP=0x0010000000008f58
- (void)uninstallInterstitialGesture:(id)arg1;	// IMP=0x0010000000008f46
- (void)installInterstitialGesture:(id)arg1;	// IMP=0x0010000000008f34
@property(readonly, nonatomic) UIView *contentSnapshot;
@property(readonly, nonatomic) UIViewController *viewControllerForOverlayPresentations;
@property(readonly, nonatomic) UIView *viewContainingScreenshotContents;
- (id)_currentOverlayController;	// IMP=0x0010000000008d21
- (void)_prepareGesturesForOverlayController:(id)arg1;	// IMP=0x0010000000008ad1
@property(readonly, nonatomic) struct CGRect rectToCenterAboveKeyboard;
@property(readonly, nonatomic) AKController *akController;
@property(readonly, nonatomic) _Bool screenshotEditsSnapshotted;
- (long long)_numberOfDrawingStrokesInScreenshot;	// IMP=0x00100000000085b0
- (void)_logEditsInScreenshotForAnalytics;	// IMP=0x001000000000825e
- (void)setScreenshotEditsSnapshotted:(_Bool)arg1 inTransition:(_Bool)arg2 currentScreenshot:(_Bool)arg3;	// IMP=0x00100000000080c9
- (void)_stopFlash;	// IMP=0x0010000000008075
@property(readonly, nonatomic) _Bool shouldFlash;
- (void)flash;	// IMP=0x0010000000007c74
- (void)imageView:(id)arg1 requestsUpdateToInteractionMode:(unsigned long long)arg2;	// IMP=0x0010000000007c07
- (void)imageViewDidUpdateInteraction:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0010000000007b7e
- (void)deselectAllAnnotations;	// IMP=0x0010000000007b14
- (void)finishPreparingForFullscreenExperience;	// IMP=0x0010000000007aa8
- (void)prepareForFullscreenExperience;	// IMP=0x0010000000007933
- (void)_handleTap;	// IMP=0x00100000000078e7
- (void)prepareForMiniaturization;	// IMP=0x001000000000787d
- (void)_commitCropControllerInflightEdits;	// IMP=0x001000000000780d
- (void)commitInflightEdits;	// IMP=0x00100000000077c0
@property(nonatomic) double lineGrabberAlpha;
@property(nonatomic) double lineAlpha;
@property(nonatomic) double cornerGrabberAlpha;
- (void)cropControllerCropRectDidChange:(id)arg1;	// IMP=0x0010000000007599
- (void)cropControllerDidBeginCropping:(id)arg1;	// IMP=0x001000000000757c
- (void)cropController:(id)arg1 changedToCropRect:(struct CGRect)arg2;	// IMP=0x00100000000073a3
@property(nonatomic) double geometryMultiplier;
- (void)safeAreaInsetsDidChange;	// IMP=0x0010000000006da4
- (void)setRulerHostingView:(id)arg1;	// IMP=0x0010000000006d37
- (void)_layoutPDFViewToMatchImageViewIfNeeded;	// IMP=0x0010000000006a00
- (_Bool)_layoutPDFViewVerticalContentInsetToMatchImageView;	// IMP=0x0010000000006752
- (void)updateForFrame:(struct CGRect)arg1;	// IMP=0x00100000000066b0
- (void)_updateGestures;	// IMP=0x0010000000006341
- (void)layoutSubviews;	// IMP=0x0010000000005c63
- (void)_layoutUpdateCropControllers;	// IMP=0x00100000000058fa
- (id)screenshotRepresentationAKControllerForPDF;	// IMP=0x0010000000005875
- (void)screenshotDidReceivePDFData;	// IMP=0x001000000000578a
- (void)_goToPDFPage:(unsigned long long)arg1 rect:(struct CGRect)arg2 force:(_Bool)arg3;	// IMP=0x0010000000005211
- (void)screenshotDidMakeAnnotationEditOnImage;	// IMP=0x00100000000051ef
- (void)screenshot:(id)arg1 didHaveChangeOnPage:(unsigned long long)arg2;	// IMP=0x0010000000005177
- (void)screenshotDidRevert:(id)arg1;	// IMP=0x001000000000510f
- (void)screenshotShouldJumpToPDFPageIndex:(long long)arg1;	// IMP=0x00100000000050d8
- (void)screenshotDidHaveViewModificationInfoChanged:(id)arg1;	// IMP=0x00100000000050c6
- (void)screenshotDidHaveUndoStackChanged:(id)arg1;	// IMP=0x0010000000004ed5
- (id)undoManager;	// IMP=0x0010000000004e69
@property(retain, nonatomic) VKImageAnalyzer *imageAnalyzer;
@property(nonatomic) unsigned long long interactionMode;
@property(nonatomic) long long borderStyle;
- (void)dealloc;	// IMP=0x0010000000004b5b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000004846

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

