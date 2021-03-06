//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayerController, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoController : NSObject
{
    id _playerControllerCurrentTimeJumpedObserver;	// 8 = 0x8
    _Bool _nowPlayingInfoNeedsUpdate;	// 16 = 0x10
    _Bool _enabled;	// 17 = 0x11
    void *_commandHandlerIdentifier;	// 24 = 0x18
    AVObservationController *_keyValueObservationController;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 40 = 0x28
    _Bool _requiresLinearPlayback;	// 48 = 0x30
    NSString *_overrideParentApplicationDisplayIdentifier;	// 56 = 0x38
    AVPlayerController *_playerController;	// 64 = 0x40
    AVPlayerController *_playerControllerToActivateAfterDelay;	// 72 = 0x48
    NSTimer *_startNowPlayingUpdatesTimer;	// 80 = 0x50
}

+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1;	// IMP=0x00000000000267db
+ (id)_avMediaCharacteristics;	// IMP=0x00000000000267ab
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1;	// IMP=0x0000000000026563
+ (void *)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1;	// IMP=0x0000000000026411
+ (void *)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1;	// IMP=0x00000000000261ee
+ (void)sharedNowPlayingInfoControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026135
- (void).cxx_destruct;	// IMP=0x0000000000025bc2
@property(nonatomic) __weak NSTimer *startNowPlayingUpdatesTimer; // @synthesize startNowPlayingUpdatesTimer=_startNowPlayingUpdatesTimer;
@property(nonatomic) __weak AVPlayerController *playerControllerToActivateAfterDelay; // @synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
- (id)_currentLanguageOptions;	// IMP=0x0000000000025a27
- (id)_availableLanguageOptions;	// IMP=0x00000000000258d4
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;	// IMP=0x0000000000024ab7
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;	// IMP=0x0000000000024733
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;	// IMP=0x0000000000023fe4
- (id)_makeNowPlayingInfo;	// IMP=0x0000000000023858
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2;	// IMP=0x00000000000237c3
- (void)_updateNowPlayingInfoIfNeeded;	// IMP=0x00000000000235c6
- (void)_setNowPlayingInfoNeedsUpdate;	// IMP=0x000000000002359c
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;	// IMP=0x000000000002341e
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2;	// IMP=0x000000000002314c
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;	// IMP=0x0000000000022bb2
- (id)init;	// IMP=0x0000000000022931

@end

