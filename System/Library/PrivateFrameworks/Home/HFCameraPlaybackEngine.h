//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraClipPlayerDelegate-Protocol.h>
#import <Home/HFCameraLiveStreamControllerDelegate-Protocol.h>
#import <Home/HMCameraRecordingEventManagerObserver-Protocol.h>

@class AVPlayer, HFCameraAnalyticsCameraClipPlaybackSessionEvent, HFCameraPlaybackEngineCache, HFCameraPlaybackPosition, HMCameraClip, HMCameraClipManager, HMCameraProfile, HMCameraSource, HMHome, NADelegateDispatcher, NSArray, NSDate, NSError, NSMapTable, NSString, NSUUID;
@protocol HFCameraClipPlaying, HFCameraClipScrubbing, HFCameraLiveStreamControlling;

@interface HFCameraPlaybackEngine : NSObject <HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>
{
    _Bool _prefersAudioEnabled;	// 8 = 0x8
    _Bool _microphoneEnabled;	// 9 = 0x9
    _Bool _streamAudioEnabled;	// 10 = 0xa
    _Bool _userScrubbing;	// 11 = 0xb
    _Bool _pictureInPictureModeActive;	// 12 = 0xc
    _Bool _shouldBypassVideoFetchRequest;	// 13 = 0xd
    _Bool _shouldBypassHighQualityScrubbing;	// 14 = 0xe
    _Bool _wantsToPlay;	// 15 = 0xf
    _Bool _scrubbing;	// 16 = 0x10
    float _streamAudioVolume;	// 20 = 0x14
    unsigned long long _timelineState;	// 24 = 0x18
    HMCameraProfile *_cameraProfile;	// 32 = 0x20
    HMCameraSource *_liveCameraSource;	// 40 = 0x28
    unsigned long long _scrubbingSpeed;	// 48 = 0x30
    unsigned long long _timeControlStatus;	// 56 = 0x38
    NSError *_playbackError;	// 64 = 0x40
    HMHome *_home;	// 72 = 0x48
    id <HFCameraLiveStreamControlling> _liveStreamController;	// 80 = 0x50
    id <HFCameraClipScrubbing> _clipScrubber;	// 88 = 0x58
    NSMapTable *_observerStates;	// 96 = 0x60
    NADelegateDispatcher *_observerDispatcher;	// 104 = 0x68
    unsigned long long _playbackContentType;	// 112 = 0x70
    unsigned long long _engineMode;	// 120 = 0x78
    NSDate *_lastRequestedClipPlaybackDate;	// 128 = 0x80
    unsigned long long _scrubbingInProgressCount;	// 136 = 0x88
    long long _lastPlayerTimeControlStatus;	// 144 = 0x90
    HFCameraAnalyticsCameraClipPlaybackSessionEvent *_playbackSessionEvent;	// 152 = 0x98
    unsigned long long _playbackRetryAttempts;	// 160 = 0xa0
    HFCameraPlaybackEngineCache *_eventCache;	// 168 = 0xa8
    HMCameraClipManager *_clipManager;	// 176 = 0xb0
    NSUUID *_notificationCenterClipUUID;	// 184 = 0xb8
    id <HFCameraClipPlaying> _clipPlayer;	// 192 = 0xc0
}

+ (unsigned long long)hf_indexOfClipForDate:(id)arg1 inEvents:(id)arg2 enumerationOptions:(unsigned long long)arg3 searchOptions:(unsigned long long)arg4;	// IMP=0x000000000024ee08
+ (id)findClipPositionForDate:(id)arg1 inEvents:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000024ebf0
- (void).cxx_destruct;	// IMP=0x000000000024f396
@property(readonly, nonatomic) id <HFCameraClipPlaying> clipPlayer; // @synthesize clipPlayer=_clipPlayer;
@property(retain, nonatomic) NSUUID *notificationCenterClipUUID; // @synthesize notificationCenterClipUUID=_notificationCenterClipUUID;
@property(nonatomic) __weak HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain, nonatomic) HFCameraPlaybackEngineCache *eventCache; // @synthesize eventCache=_eventCache;
@property(nonatomic) unsigned long long playbackRetryAttempts; // @synthesize playbackRetryAttempts=_playbackRetryAttempts;
@property(retain, nonatomic) HFCameraAnalyticsCameraClipPlaybackSessionEvent *playbackSessionEvent; // @synthesize playbackSessionEvent=_playbackSessionEvent;
@property(nonatomic) long long lastPlayerTimeControlStatus; // @synthesize lastPlayerTimeControlStatus=_lastPlayerTimeControlStatus;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) unsigned long long scrubbingInProgressCount; // @synthesize scrubbingInProgressCount=_scrubbingInProgressCount;
@property(nonatomic) _Bool wantsToPlay; // @synthesize wantsToPlay=_wantsToPlay;
@property(copy, nonatomic) NSDate *lastRequestedClipPlaybackDate; // @synthesize lastRequestedClipPlaybackDate=_lastRequestedClipPlaybackDate;
@property(nonatomic) unsigned long long engineMode; // @synthesize engineMode=_engineMode;
@property(nonatomic) unsigned long long playbackContentType; // @synthesize playbackContentType=_playbackContentType;
@property(readonly, nonatomic) NADelegateDispatcher *observerDispatcher; // @synthesize observerDispatcher=_observerDispatcher;
@property(readonly, nonatomic) NSMapTable *observerStates; // @synthesize observerStates=_observerStates;
@property(readonly, nonatomic) id <HFCameraClipScrubbing> clipScrubber; // @synthesize clipScrubber=_clipScrubber;
@property(readonly, nonatomic) id <HFCameraLiveStreamControlling> liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property(nonatomic) unsigned long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic) unsigned long long scrubbingSpeed; // @synthesize scrubbingSpeed=_scrubbingSpeed;
@property(nonatomic) _Bool shouldBypassHighQualityScrubbing; // @synthesize shouldBypassHighQualityScrubbing=_shouldBypassHighQualityScrubbing;
@property(nonatomic) _Bool shouldBypassVideoFetchRequest; // @synthesize shouldBypassVideoFetchRequest=_shouldBypassVideoFetchRequest;
@property(nonatomic, getter=isPictureInPictureModeActive) _Bool pictureInPictureModeActive; // @synthesize pictureInPictureModeActive=_pictureInPictureModeActive;
@property(nonatomic, getter=isUserScrubbing) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) float streamAudioVolume; // @synthesize streamAudioVolume=_streamAudioVolume;
@property(nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled; // @synthesize streamAudioEnabled=_streamAudioEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(retain, nonatomic) HMCameraSource *liveCameraSource; // @synthesize liveCameraSource=_liveCameraSource;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(nonatomic) _Bool prefersAudioEnabled; // @synthesize prefersAudioEnabled=_prefersAudioEnabled;
- (void)dealloc;	// IMP=0x000000000024effd
- (id)findClipPositionForDate:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000024eb3c
- (id)findClipPositionForDate:(id)arg1;	// IMP=0x000000000024ea8a
- (id)firstOfTheDayClipForDate:(id)arg1;	// IMP=0x000000000024e79f
- (_Bool)isFirstEventOfTheDay:(id)arg1;	// IMP=0x000000000024e6da
- (id)shortDebugDescription;	// IMP=0x000000000024e614
- (id)engineModeDescription;	// IMP=0x000000000024e5f7
- (id)timeControlStatusDescription;	// IMP=0x000000000024e5c8
- (id)timelineStateDescription;	// IMP=0x000000000024e550
- (void)streamControllerStateDidUpdate:(id)arg1;	// IMP=0x000000000024e425
- (void)clipPlayerDidPlayToEndTime:(id)arg1;	// IMP=0x000000000024e0c7
- (void)clipPlayer:(id)arg1 didUpdateMuted:(_Bool)arg2;	// IMP=0x000000000024dfde
- (void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x000000000024def9
- (void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2;	// IMP=0x000000000024db3e
- (void)recordingEventManager:(id)arg1 didRemoveRecordingEventsWithUUIDs:(id)arg2;	// IMP=0x000000000024d905
- (void)recordingEventManager:(id)arg1 didUpdateRecordingEvents:(id)arg2;	// IMP=0x000000000024d2fc
- (_Bool)isLiveStreamPlaying;	// IMP=0x000000000024d28d
- (_Bool)isLiveStreaming;	// IMP=0x000000000024d21f
- (void)_setStreamAudioEnabled:(_Bool)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000024d0b6
- (void)_setPlayerVolume:(float)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000024cf05
- (void)_setMicrophoneEnabled:(_Bool)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000024cd4f
- (void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000024be39
- (void)_updatePlaybackStateNotifyingObservers:(_Bool)arg1 rebuildClipPlayerIfNeeded:(_Bool)arg2;	// IMP=0x000000000024b417
- (void)_updatePlaybackStateNotifyingObservers:(_Bool)arg1;	// IMP=0x000000000024b400
- (id)_derivedPlaybackError;	// IMP=0x000000000024b373
- (unsigned long long)_derivedTimeControlStatus;	// IMP=0x000000000024b178
- (void)startPlaybackForCurrentClip;	// IMP=0x000000000024ac7d
@property(readonly, nonatomic) _Bool isCameraPortraitMode;
@property(readonly, copy, nonatomic) NSArray *cameraClips;
@property(readonly, copy, nonatomic) NSArray *cameraEvents;
@property(readonly, nonatomic) _Bool hasRecordingEvents;
@property(nonatomic) unsigned long long timelineState; // @synthesize timelineState=_timelineState;
@property(readonly, nonatomic) _Bool shouldDisplayVolumeControls;
- (void)endScrubbing;	// IMP=0x000000000024a568
- (void)beginScrubbing;	// IMP=0x000000000024a524
@property(readonly, nonatomic) HMCameraClip *currentClip;
- (void)modifyPlaybackFromSender:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a039
@property(readonly, copy, nonatomic) NSArray *observers;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000249e9a
- (void)addObserver:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000249d23
- (void)pause;	// IMP=0x0000000000249d0f
- (void)play;	// IMP=0x0000000000249cf8
@property(retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
- (void)startPlaybackAtDate:(id)arg1 withClip:(id)arg2;	// IMP=0x0000000000249a89
- (void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2;	// IMP=0x0000000000249a24
@property(readonly, nonatomic) AVPlayer *player;
- (void)updateConfiguration:(id)arg1;	// IMP=0x0000000000249358
- (void)fetchCameraClipForNotificationUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000248b81
- (void)fetchCameraClipForUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000248647
- (void)fetchCameraEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000247dfc
- (void)_setupTimeObservationForObserver:(id)arg1;	// IMP=0x0000000000247b09
- (void)_setupClipPlayerWithClipManager:(id)arg1;	// IMP=0x00000000002475c3
- (void)_setupLiveStreamController:(id)arg1;	// IMP=0x000000000024751d
- (void)updateLiveStreamForCameraProfile:(id)arg1;	// IMP=0x0000000000247343
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000247039
- (id)init;	// IMP=0x0000000000246f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
