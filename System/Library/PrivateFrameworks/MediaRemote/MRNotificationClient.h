//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableArray, NSOrderedSet;
@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject <MRNowPlayingClientState>
{
    unsigned long long _registeredNowPlayingObservers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    NSOrderedSet *_nowPlayingNotifications;	// 40 = 0x28
    NSOrderedSet *_routesChangedNotifications;	// 48 = 0x30
    NSOrderedSet *_volumeControlNotifications;	// 56 = 0x38
    NSOrderedSet *_externalScreenNotifications;	// 64 = 0x40
    NSOrderedSet *_originNotifications;	// 72 = 0x48
    NSOrderedSet *_supportedCommandsNotifications;	// 80 = 0x50
    NSOrderedSet *_voiceInputNotifications;	// 88 = 0x58
    NSOrderedSet *_errorNotifications;	// 96 = 0x60
    NSMutableArray *_subscribedWakingPlayerPaths;	// 104 = 0x68
    _Bool _receivesExternalScreenTypeChangedNotifications;	// 112 = 0x70
    _Bool _receivesSupportedCommandsNotifications;	// 113 = 0x71
    _Bool _receivesRoutesChangedNotifications;	// 114 = 0x72
    _Bool _receivesVolumeControlNotifications;	// 115 = 0x73
    _Bool _receivesOriginChangedNotifications;	// 116 = 0x74
    _Bool _receivesPlaybackErrorNotifications;	// 117 = 0x75
    _Bool _receivesVoiceInputRecordingStateNotifications;	// 118 = 0x76
}

+ (id)nowPlayingNotifications;	// IMP=0x0000000000149c3e
- (void).cxx_destruct;	// IMP=0x0000000000149df3
@property(nonatomic) _Bool receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property(nonatomic) _Bool receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) _Bool receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) _Bool receivesVolumeControlNotifications; // @synthesize receivesVolumeControlNotifications=_receivesVolumeControlNotifications;
@property(nonatomic) _Bool receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) _Bool receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) _Bool receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
- (_Bool)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001497a2
- (_Bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;	// IMP=0x000000000014969b
- (void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;	// IMP=0x000000000014957f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
- (void)restoreNowPlayingClientState;	// IMP=0x00000000001493ea
- (void)_syncWakingPlayerPathsWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000149340
- (void)unregisterForWakingNowPlayingNotificationsForPlayerPath:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000148dd9
- (void)registerForWakingNowPlayingNotificationsForPlayerPath:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000148876
- (_Bool)_processAlwaysNeedsNowPlayingNotifications;	// IMP=0x00000000001487a9
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
- (void)unregisterForNowPlayingNotifications;	// IMP=0x00000000001485d0
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000148417
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;	// IMP=0x0000000000148403
- (id)debugDescription;	// IMP=0x0000000000148206
- (id)init;	// IMP=0x0000000000147a35

@end
