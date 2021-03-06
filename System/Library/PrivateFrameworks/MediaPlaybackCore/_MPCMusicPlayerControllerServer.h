//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPMusicPlayerControllerApplicationServer-Protocol.h>
#import <MediaPlaybackCore/MPMusicPlayerControllerSystemServer-Protocol.h>
#import <MediaPlaybackCore/NSXPCListenerDelegate-Protocol.h>

@class MPCPlaybackEngine, MPMusicPlayerControllerSystemCache, MPMusicPlayerQueueDescriptor, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _MPCMusicPlayerControllerServer : NSObject <MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving>
{
    MPMusicPlayerQueueDescriptor *_queueDescriptor;	// 8 = 0x8
    MPMusicPlayerQueueDescriptor *_preparingDescriptor;	// 16 = 0x10
    CDUnknownBlockType _prepareCompletionHandler;	// 24 = 0x18
    _Bool _skipWaitingForLikelyToKeepUp;	// 32 = 0x20
    _Bool _resumed;	// 33 = 0x21
    MPCPlaybackEngine *_playbackEngine;	// 40 = 0x28
    MPMusicPlayerControllerSystemCache *_systemCache;	// 48 = 0x30
    NSXPCListener *_listener;	// 56 = 0x38
    NSMutableArray *_activeConnections;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000066e6c
@property(readonly, nonatomic) NSMutableArray *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) MPMusicPlayerControllerSystemCache *systemCache; // @synthesize systemCache=_systemCache;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_applyServerStateUpdateRecord:(id)arg1;	// IMP=0x0000000000066ca5
- (void)_addContentItemIDsToUpdateRecord:(id)arg1;	// IMP=0x0000000000066b89
- (void)_registerForCommandHandlersRegisteredNotification;	// IMP=0x0000000000066ab2
- (void)_handleCommandHandlersRegistered:(id)arg1;	// IMP=0x0000000000066a6b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000006643f
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;	// IMP=0x0000000000066394
- (void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;	// IMP=0x000000000006633c
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;	// IMP=0x00000000000662e4
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x0000000000066250
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x0000000000066126
- (void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;	// IMP=0x0000000000065f6e
- (void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;	// IMP=0x0000000000065ecc
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x0000000000065bd4
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x0000000000065a66
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x00000000000659c2
- (void)setDisableAutomaticCanBeNowPlaying:(_Bool)arg1;	// IMP=0x000000000006592c
- (void)setRelativeVolume:(float)arg1;	// IMP=0x000000000006587b
- (void)beginPlaybackAtHostTime:(id)arg1;	// IMP=0x0000000000065819
- (void)prerollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065790
- (void)performQueueModifications:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065621
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;	// IMP=0x00000000000654c5
- (void)getUserQueueModificationsDisabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000006533e
- (void)setPlaybackRate:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065201
- (void)setElapsedTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000650c4
- (void)getShuffleModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064f3d
- (void)setShuffleMode:(long long)arg1;	// IMP=0x0000000000064de1
- (void)getRepeatModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064c5a
- (void)setRepeatMode:(long long)arg1;	// IMP=0x0000000000064afe
- (void)endSeek;	// IMP=0x00000000000649ad
- (void)beginSeekWithDirection:(long long)arg1;	// IMP=0x0000000000064851
- (void)reshuffle;	// IMP=0x0000000000064700
- (void)skipWithBehavior:(long long)arg1;	// IMP=0x00000000000645a4
- (void)stop;	// IMP=0x0000000000064590
- (void)pauseWithFadeDuration:(long long)arg1;	// IMP=0x0000000000064434
- (void)play;	// IMP=0x00000000000642e3
- (void)appendDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000641b7
- (void)prependDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006408b
- (void)getDescriptorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063fec
- (void)setDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063deb
- (void)getTimeSnapshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063c64
- (id)_timeSnapshotWithElapsedTime:(double)arg1 rate:(float)arg2;	// IMP=0x0000000000063a0a
- (void)getImageForArtworkIdentifier:(id)arg1 itemIdentifier:(id)arg2 atSize:(struct CGSize)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000638f7
- (void)setNowPlayingItem:(id)arg1 itemIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006370e
- (void)getNowPlayingAtIndex:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000006357b
- (id)_nowPlayingWithItem:(id)arg1;	// IMP=0x000000000006307e
- (void)getNowPlayingsForContentItemIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062ec6
- (void)getNowPlayingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062d3f
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (void)stopServer;	// IMP=0x0000000000062ca7
- (void)resumeIfNeeded;	// IMP=0x0000000000062af0
- (void)startServer;	// IMP=0x00000000000629d8
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000006293e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

