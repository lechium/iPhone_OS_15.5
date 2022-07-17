//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReplayKit/RPPreviewViewControllerDelegate-Protocol.h>
#import <ReplayKit/UINavigationControllerDelegate-Protocol.h>
#import <ReplayKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, NSURL, RPBroadcastController, RPPGPipViewController, RPPipViewController, UIView, UIWindow;
@protocol RPScreenRecordeScreenCapureKitDelegate, RPScreenRecorderDelegate, RPScreenRecorderPrivateDelegate;

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _recording;	// 8 = 0x8
    _Bool _microphoneEnabled;	// 9 = 0x9
    _Bool _cameraEnabled;	// 10 = 0xa
    _Bool _available;	// 11 = 0xb
    _Bool _hasUserConsentForCamera;	// 12 = 0xc
    _Bool _hasUserConsentForMicrophone;	// 13 = 0xd
    _Bool _paused;	// 14 = 0xe
    _Bool _systemRecording;	// 15 = 0xf
    int _processIDForAudioCapture;	// 16 = 0x10
    id <RPScreenRecorderDelegate> _delegate;	// 24 = 0x18
    long long _cameraPosition;	// 32 = 0x20
    UIView *_cameraPreviewView;	// 40 = 0x28
    unsigned long long _previousAudioSessionOptions;	// 48 = 0x30
    NSString *_previousAudioCategory;	// 56 = 0x38
    UIWindow *_windowToRecord;	// 64 = 0x40
    RPPipViewController *_pipViewController;	// 72 = 0x48
    RPPGPipViewController *_pgPipViewController;	// 80 = 0x50
    CDUnknownBlockType _saveVideoToCameraRollCompletionBlock;	// 88 = 0x58
    CDUnknownBlockType _captureHandler;	// 96 = 0x60
    RPBroadcastController *_activeBroadcastController;	// 104 = 0x68
    NSURL *_broadcastURL;	// 112 = 0x70
    id <RPScreenRecorderPrivateDelegate> _privateDelegate;	// 120 = 0x78
    id <RPScreenRecordeScreenCapureKitDelegate> _screenCaptureKitDelegate;	// 128 = 0x80
    id <RPScreenRecorderDelegate> _secondDelegate;	// 136 = 0x88
}

+ (id)sharedRecorder;	// IMP=0x0000000000008a8d
- (void).cxx_destruct;	// IMP=0x0000000000010bab
@property(retain, nonatomic) id <RPScreenRecorderDelegate> secondDelegate; // @synthesize secondDelegate=_secondDelegate;
@property(retain, nonatomic) id <RPScreenRecordeScreenCapureKitDelegate> screenCaptureKitDelegate; // @synthesize screenCaptureKitDelegate=_screenCaptureKitDelegate;
@property(retain, nonatomic) id <RPScreenRecorderPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic) NSURL *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
@property(nonatomic) _Bool systemRecording; // @synthesize systemRecording=_systemRecording;
@property(nonatomic, setter=updateProcessIDForAudioCapture:) int processIDForAudioCapture; // @synthesize processIDForAudioCapture=_processIDForAudioCapture;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) RPBroadcastController *activeBroadcastController; // @synthesize activeBroadcastController=_activeBroadcastController;
@property(copy, nonatomic) CDUnknownBlockType captureHandler; // @synthesize captureHandler=_captureHandler;
@property(nonatomic) _Bool hasUserConsentForMicrophone; // @synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForCamera; // @synthesize hasUserConsentForCamera=_hasUserConsentForCamera;
@property(copy, nonatomic) CDUnknownBlockType saveVideoToCameraRollCompletionBlock; // @synthesize saveVideoToCameraRollCompletionBlock=_saveVideoToCameraRollCompletionBlock;
@property(retain, nonatomic) RPPGPipViewController *pgPipViewController; // @synthesize pgPipViewController=_pgPipViewController;
@property(retain, nonatomic) RPPipViewController *pipViewController; // @synthesize pipViewController=_pipViewController;
@property(retain, nonatomic) UIWindow *windowToRecord; // @synthesize windowToRecord=_windowToRecord;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *previousAudioCategory; // @synthesize previousAudioCategory=_previousAudioCategory;
@property(nonatomic) unsigned long long previousAudioSessionOptions; // @synthesize previousAudioSessionOptions=_previousAudioSessionOptions;
@property(retain, nonatomic) UIView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic, getter=isCameraEnabled) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) __weak id <RPScreenRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)screenRecordingAllowed;	// IMP=0x000000000001097c
- (_Bool)screenRecordingSupportedOnDevice;	// IMP=0x0000000000010974
- (void)updateRecordingAvailability:(id)arg1;	// IMP=0x0000000000010840
- (void)notifyDelegateOfUpdatedState;	// IMP=0x0000000000010827
- (void)didStopRecordingWithError:(id)arg1 previewViewController:(id)arg2;	// IMP=0x000000000001061e
- (_Bool)shouldNotifyDidStop;	// IMP=0x0000000000010574
- (void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x0000000000010112
- (void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x000000000001004e
- (void)shouldResumeSessionType:(id)arg1;	// IMP=0x000000000000fd9a
- (void)recordingDidPause;	// IMP=0x000000000000fd7b
- (void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x000000000000fd09
- (void)recordingLockInterrupted:(id)arg1;	// IMP=0x000000000000fc41
- (id)processQueue;	// IMP=0x000000000000fbea
- (id)videoQueue;	// IMP=0x000000000000fb93
- (id)audioQueue;	// IMP=0x000000000000fb3c
- (void)setWindowRotationLocked:(_Bool)arg1;	// IMP=0x000000000000f8fa
- (unsigned int)currentWindowLayerContextID;	// IMP=0x000000000000f7e8
- (struct CGSize)currentWindowSize;	// IMP=0x000000000000f5c3
- (id)applicationWindow;	// IMP=0x000000000000f41c
- (id)handleUnavailableState;	// IMP=0x000000000000f353
- (void)updateStateWithActive:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000000f21d
- (void)registerAppForStateChangeSetRotationLock:(_Bool)arg1;	// IMP=0x000000000000f206
- (void)isScreenRecordingAvailable;	// IMP=0x000000000000eee4
- (void)instantiatePipView;	// IMP=0x000000000000eca8
- (void)removePipView;	// IMP=0x000000000000e781
- (void)saveVideo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e60c
- (void)saveClipToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e497
- (void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e322
- (void)resumeInAppClip;	// IMP=0x000000000000e067
- (void)exportClipToURL:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000dee8
- (void)stopClipBufferingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc5c
- (void)startClipBufferingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d6da
- (void)resumeSystemBroadcast;	// IMP=0x000000000000d57b
- (void)stopSystemBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d374
- (void)startSystemBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cb88
- (void)setupSystemBroadcastWithExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c918
- (void)resumeSystemRecording;	// IMP=0x000000000000c7b9
- (void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c57a
- (void)stopSystemRecording:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c35a
- (void)startSystemRecordingWithMicrophoneEnabled:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bba8
- (void)clientDidUpdateBroadcastServiceInfo:(id)arg1;	// IMP=0x000000000000b8ae
- (void)resumeInAppBroadcast;	// IMP=0x000000000000b57c
- (void)pauseInAppBroadcast;	// IMP=0x000000000000b498
- (void)stopInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b261
- (void)startInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000acb8
- (void)resumeInAppCapture;	// IMP=0x000000000000a9fd
- (void)pauseInAppCapture;	// IMP=0x000000000000a919
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a723
- (void)startCaptureWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a107
- (void)resumeInAppRecording;	// IMP=0x0000000000009e4c
- (void)pauseInAppRecording;	// IMP=0x0000000000009d68
- (void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009c6e
- (void)stopRecordingWithOutputURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009a04
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009572
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008fc9
- (void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008eb8
- (void)stopRecordingWithVideoURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008df1
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008d0c
- (void)dealloc;	// IMP=0x0000000000008bce
- (id)init;	// IMP=0x0000000000008510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
