//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject, NSString, NSURL;
@protocol CKVideoRecorderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate>
{
    long long _currentDevice;	// 8 = 0x8
    _Bool _previousStatusBarHidden;	// 16 = 0x10
    AVCaptureDevice *_frontFacingCamera;	// 24 = 0x18
    AVCaptureDevice *_rearFacingCamera;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;	// 40 = 0x28
    _Bool _canceled;	// 48 = 0x30
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;	// 56 = 0x38
    id <CKVideoRecorderDelegate> _delegate;	// 64 = 0x40
    NSURL *_outputFileURL;	// 72 = 0x48
    AVCaptureSession *_session;	// 80 = 0x50
    AVCaptureDeviceInput *_rearVideoInput;	// 88 = 0x58
    AVCaptureDeviceInput *_frontVideoInput;	// 96 = 0x60
    AVCaptureDeviceInput *_audioInput;	// 104 = 0x68
    AVCaptureMovieFileOutput *_videoOutput;	// 112 = 0x70
    AVCaptureStillImageOutput *_stillImageOutput;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001d222d
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureMovieFileOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVCaptureDeviceInput *frontVideoInput; // @synthesize frontVideoInput=_frontVideoInput;
@property(retain, nonatomic) AVCaptureDeviceInput *rearVideoInput; // @synthesize rearVideoInput=_rearVideoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) __weak id <CKVideoRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;	// IMP=0x00000000001d1fde
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;	// IMP=0x00000000001d1fd8
- (void)setupCamera:(id)arg1;	// IMP=0x00000000001d1e93
@property(nonatomic) long long cameraDevice;
- (id)_configureRearVideoInput;	// IMP=0x00000000001d1b25
- (id)_configureFrontVideoInput;	// IMP=0x00000000001d1aa2
- (id)rearFacingCamera;	// IMP=0x00000000001d1a21
- (id)frontFacingCamera;	// IMP=0x00000000001d19b1
- (id)audioDevice;	// IMP=0x00000000001d1934
- (id)_cameraWithPosition:(long long)arg1;	// IMP=0x00000000001d17ad
- (void)dealloc;	// IMP=0x00000000001d16ec
- (void)takePicture;	// IMP=0x00000000001d14f5
- (_Bool)startVideoCapture;	// IMP=0x00000000001d1308
- (void)stopVideoCapture;	// IMP=0x00000000001d12cb
- (void)cancel;	// IMP=0x00000000001d11a3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001d100c
- (void)loadView;	// IMP=0x00000000001d0ede
- (id)init;	// IMP=0x00000000001d0a5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
