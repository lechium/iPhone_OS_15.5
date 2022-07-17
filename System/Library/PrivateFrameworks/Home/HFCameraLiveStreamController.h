//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraLiveStreamControlling-Protocol.h>
#import <Home/HFCameraObserver-Protocol.h>

@class HFCameraAudioManager, HMCameraProfile, HMCameraSource, HMHome, NSError, NSString;
@protocol HFCameraLiveStreamControllerDelegate;

@interface HFCameraLiveStreamController : NSObject <HFCameraObserver, HFCameraLiveStreamControlling>
{
    _Bool _microphoneEnabled;	// 8 = 0x8
    _Bool _streamAudioEnabled;	// 9 = 0x9
    _Bool _startStreamingAfterStop;	// 10 = 0xa
    float _streamAudioVolume;	// 12 = 0xc
    id <HFCameraLiveStreamControllerDelegate> _delegate;	// 16 = 0x10
    HMCameraSource *_liveCameraSource;	// 24 = 0x18
    NSError *_streamError;	// 32 = 0x20
    HMHome *_home;	// 40 = 0x28
    HMCameraProfile *_cameraProfile;	// 48 = 0x30
    HFCameraAudioManager *_audioManager;	// 56 = 0x38
    unsigned long long _inferredStreamState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000246f31
@property(nonatomic) _Bool startStreamingAfterStop; // @synthesize startStreamingAfterStop=_startStreamingAfterStop;
@property(nonatomic) unsigned long long inferredStreamState; // @synthesize inferredStreamState=_inferredStreamState;
@property(retain, nonatomic) HFCameraAudioManager *audioManager; // @synthesize audioManager=_audioManager;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) float streamAudioVolume; // @synthesize streamAudioVolume=_streamAudioVolume;
@property(nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled; // @synthesize streamAudioEnabled=_streamAudioEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) __weak id <HFCameraLiveStreamControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraUserSettingsDidUpdate:(id)arg1;	// IMP=0x0000000000246dda
@property(readonly, copy) NSString *debugDescription;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;	// IMP=0x0000000000246af3
- (void)cameraStreamControlDidStartStream:(id)arg1;	// IMP=0x0000000000246adc
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;	// IMP=0x0000000000246a14
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;	// IMP=0x00000000002469c8
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;	// IMP=0x000000000024696f
- (unsigned long long)_derivedAudioStreamSetting;	// IMP=0x0000000000246931
- (void)_updateAudioManagerState;	// IMP=0x00000000002464a8
- (id)mostRecentSnapshot;	// IMP=0x000000000024642e
- (id)activeStream;	// IMP=0x00000000002463b4
@property(readonly, nonatomic, getter=isStreamingEnabled) _Bool streamingEnabled;
- (void)stopStreaming;	// IMP=0x0000000000246053
- (void)startStreaming;	// IMP=0x0000000000245faa
@property(readonly, nonatomic) NSError *streamError; // @synthesize streamError=_streamError;
@property(readonly, nonatomic) HMCameraSource *liveCameraSource; // @synthesize liveCameraSource=_liveCameraSource;
@property(readonly, nonatomic) unsigned long long streamState;
- (void)dealloc;	// IMP=0x0000000000245adc
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x00000000002459fb
- (id)init;	// IMP=0x0000000000245946

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
