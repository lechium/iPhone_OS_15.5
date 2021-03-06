//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, BCSLiveViewController, BCSVisualCodeDetector, NSObject, NSString, NSTimer;
@protocol NSObject, OS_dispatch_queue;

@interface BCSRootViewController : UIViewController
{
    AVCaptureDevice *_cameraDevice;	// 8 = 0x8
    AVCaptureSession *_currentSession;	// 16 = 0x10
    AVCaptureVideoPreviewLayer *_previewLayer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_captureQueue;	// 32 = 0x20
    BCSLiveViewController *_liveViewController;	// 40 = 0x28
    id <NSObject> _lastVideoSample;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    long long _statusBarOrientation;	// 64 = 0x40
    NSTimer *_resumeCapturingTimer;	// 72 = 0x48
    _Bool _shouldResumeCapturingOnNextAppActive;	// 80 = 0x50
    _Bool _applicationWasInBackground;	// 81 = 0x51
    long long _lastAvailability;	// 88 = 0x58
    BCSVisualCodeDetector *_codeDetector;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000014f16
- (void)liveViewController:(id)arg1 didTapAtDevicePoint:(struct CGPoint)arg2;	// IMP=0x0010000000014ef1
- (id)_imageFromLastVideoSample:(struct opaqueCMSampleBuffer *)arg1 rect:(struct CGRect)arg2;	// IMP=0x0010000000014d7a
- (void)liveViewController:(id)arg1 torchModeChangedTo:(_Bool)arg2;	// IMP=0x0010000000014c47
- (_Bool)liveViewControllerTorchModeSupported:(id)arg1;	// IMP=0x0010000000014c00
- (void)liveViewControllerDidResetCapture:(id)arg1;	// IMP=0x0010000000014a84
- (void)liveViewControllerWillPerformAction:(id)arg1;	// IMP=0x0010000000014948
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x0010000000014685
- (id)_bestCandidateVisualCode:(id)arg1;	// IMP=0x00100000000142f3
- (_Bool)_isCapturingSteady;	// IMP=0x00100000000142b1
- (void)focusWithMode:(long long)arg1 exposeWithMode:(long long)arg2 atDevicePoint:(struct CGPoint)arg3 monitorSubjectAreaChange:(_Bool)arg4;	// IMP=0x0010000000014124
- (unsigned int)_desiredImageOrientation;	// IMP=0x00100000000140f9
- (void)applicationDidEnterBackground;	// IMP=0x0010000000013db2
- (void)applicationWillEnterForeground;	// IMP=0x0010000000013d2d
- (void)resumeCapturing;	// IMP=0x0010000000013bde
- (void)suspendCapturing;	// IMP=0x0010000000013b3c
- (void)_clearResumeCapturingTimer;	// IMP=0x0010000000013b04
- (void)_restartSessionIfNeeded;	// IMP=0x00100000000139be
- (void)_pauseSessionIfNeeded;	// IMP=0x00100000000138dc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000136f6
- (void)setLiveZoomFactor:(double)arg1;	// IMP=0x0010000000013490
- (void);	// IMP=0x00100000000132ea
- (void)executeBlockSynchronouslyWithLockedCameraDevice:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013298
- (void)executeBlockAsynchronouslyWithLockedCameraDevice:(CDUnknownBlockType)arg1;	// IMP=0x00100000000131e9
- (void)_executeBlockWithLockedCameraDevice:(CDUnknownBlockType)arg1;	// IMP=0x001000000001314a
- (void)subjectAreaDidChange:(id)arg1;	// IMP=0x001000000001311d
- (void)_startSessionConnectingPreviewLayer:(id)arg1;	// IMP=0x0010000000012c5b
- (void)endSession;	// IMP=0x001000000001293f
- (_Bool)prefersStatusBarHidden;	// IMP=0x00100000000128d3
- (void)disconnectPreviewLayerFromSession;	// IMP=0x00100000000128b4
- (id)_bestCaptureFormatForDevice:(id)arg1;	// IMP=0x0010000000012680
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000012462
- (id)_bestCaptureDevice;	// IMP=0x0010000000011fbe
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000011fb6
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000011f35
- (void)loadView;	// IMP=0x0010000000011a85
- (id)init;	// IMP=0x00100000000118d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

