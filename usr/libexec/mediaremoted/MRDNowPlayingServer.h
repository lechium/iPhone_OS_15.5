//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDElectedPlayerController, MRDLockScreenController, MRDNowPlayingClient, MRDNowPlayingOriginClient, MRDNowPlayingPlaybackQueueServer, MRDNowPlayingPlayerClient, MRDProximityController, MRPlayerPath, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface MRDNowPlayingServer : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_originClients;	// 16 = 0x10
    NSMutableDictionary *_nowPlayingApplicationIsPlayingStates;	// 24 = 0x18
    MRDNowPlayingPlaybackQueueServer *_playbackQueueServer;	// 32 = 0x20
    NSHashTable *_originForwarders;	// 40 = 0x28
    MRDElectedPlayerController *_electedPlayerController;	// 48 = 0x30
    MRDLockScreenController *_lockScreenController;	// 56 = 0x38
    MRDProximityController *_proximityController;	// 64 = 0x40
    MRDNowPlayingOriginClient *_activeOriginClient;	// 72 = 0x48
    MRDNowPlayingOriginClient *_localOriginClient;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000090a6c
@property(retain, nonatomic) MRDNowPlayingOriginClient *localOriginClient; // @synthesize localOriginClient=_localOriginClient;
@property(retain, nonatomic) MRDNowPlayingOriginClient *activeOriginClient; // @synthesize activeOriginClient=_activeOriginClient;
@property(readonly, nonatomic) MRDProximityController *proximityController; // @synthesize proximityController=_proximityController;
@property(readonly, nonatomic) MRDLockScreenController *lockScreenController; // @synthesize lockScreenController=_lockScreenController;
@property(readonly, nonatomic) MRDElectedPlayerController *electedPlayerController; // @synthesize electedPlayerController=_electedPlayerController;
- (id)_clientsWithRegisteredOrigin:(id)arg1;	// IMP=0x0010000000090846
- (id)_onQueue_originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x00100000000904a2
- (id)_onQueue_originClientForDeviceUID:(id)arg1;	// IMP=0x00100000000901b5
- (id)_onQueue_originClientForOrigin:(id)arg1;	// IMP=0x001000000008ffa5
- (id)_onQueue_restoredActiveOrigin;	// IMP=0x001000000008ff0f
- (void)_onQueue_savePersistentActiveOrigin:(id)arg1;	// IMP=0x001000000008fde0
- (void)_onQueue_setActiveOrigin:(id)arg1 saveState:(_Bool)arg2;	// IMP=0x001000000008fc2b
- (void)setActiveOrigin:(id)arg1;	// IMP=0x001000000008fb7c
- (id)overrideClient;	// IMP=0x001000000008fb2c
- (void)setOverrideClient:(id)arg1;	// IMP=0x001000000008faba
- (void)_removeNowPlayingClient:(id)arg1 forOrigin:(id)arg2;	// IMP=0x001000000008fa42
- (void)_removeOrigin:(id)arg1;	// IMP=0x001000000008f658
- (_Bool)_addOrigin:(id)arg1 withDeviceInfo:(id)arg2 emitNotification:(_Bool)arg3;	// IMP=0x001000000008f2be
- (_Bool)_hasForwarderForOrigin:(id)arg1;	// IMP=0x001000000008f117
- (void)unregisterOriginForwarder:(id)arg1;	// IMP=0x001000000008f06c
- (void)registerOriginForwarder:(id)arg1;	// IMP=0x001000000008ef7e
- (id)augmentedUserInfoForPlayerPath:(id)arg1;	// IMP=0x001000000008ed4e
- (void)maybePostDistributedNotifications;	// IMP=0x001000000008e767
- (void)postLockScreenPlayerPathDidChange:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e66a
- (void)postLockScreenActiveDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e58b
- (void)postLockScreenVisibleDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e4ac
- (void)postElectedPlayerDidChange:(id)arg1 change:(long long)arg2 event:(long long)arg3 reason:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008e2d8
- (void)postPlayerDidUnregisterWithPlaybackState:(unsigned int)arg1 canBeNowPlaying:(_Bool)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e160
- (void)postPlayerDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e093
- (void)postPlaybackQueueCapabilitiesDidChange:(unsigned long long)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008df77
- (void)postPlaybackQueueContentItemsArtworkDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008dbae
- (void)postPlaybackQueueContentItemsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d745
- (void)postPlaybackQueueDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d2e7
- (void)postSupportedCommandsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d14a
- (void)postNowPlayingPlayerStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d07d
- (void)postPlaybackStateDidChange:(unsigned int)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cf32
- (void)postAudioFormatContentInfoDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ce1b
- (void)postActivePlayerPathsDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008cd04
- (void)postPictureInPictureDidChange:(_Bool)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cbea
- (void)postIsPlayingDidChange:(_Bool)arg1 lastPlayingTimestamp:(double)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008ca8a
- (void)postActivePlayerDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c970
- (void)postNowPlayingClientStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c8a3
- (void)postClientDidUnregisterForPlayerPath:(id)arg1 hasDefaultSupportedCommands:(_Bool)arg2 canBeNowPlaying:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008c747
- (void)postClientDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c67a
- (void)postPlayerDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c5ad
- (void)postPlayerDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c4e0
- (void)postClientDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c413
- (void)postClientDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c316
- (void)postNowPlayingApplicationDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c178
- (void)postVolumeCapabilitiesDidChange:(id)arg1 capabilities:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c01c
- (void)postVolumeDidChange:(id)arg1 volume:(float)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008bf05
- (void)postDeviceInfoDidChange:(id)arg1 previousDeviceInfo:(id)arg2 forOrigin:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008bda7
- (void)postOriginDidUnRegister:(id)arg1 deviceInfo:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008bc72
- (void)postOriginDidRegister:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bb62
- (void)postActiveOriginDidChange:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ba48
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000008b59d
@property(readonly, nonatomic) _Bool lockScreenPlatterActive;
- (void)lockScreenController:(id)arg1 playerPathDidChange:(id)arg2;	// IMP=0x001000000008b542
- (void)lockScreenController:(id)arg1 lockScreenWidgetVisibleDidChange:(_Bool)arg2;	// IMP=0x001000000008b52c
- (void)lockScreenController:(id)arg1 lockScreenWidgetActiveDidChange:(_Bool)arg2;	// IMP=0x001000000008b516
- (void)electedPlayerController:(id)arg1 electedPlayerDidChange:(id)arg2 change:(long long)arg3 event:(long long)arg4 reason:(id)arg5;	// IMP=0x001000000008b4e3
- (void)nowPlayingServer:(id)arg1 activeOriginDidChangeFromOriginClient:(id)arg2 toOriginClient:(id)arg3;	// IMP=0x001000000008b411
- (void)nowPlayingOriginClientDidChangeAudioFormatContentInfo:(id)arg1;	// IMP=0x001000000008b3c0
- (void)nowPlayingOriginClientPlaybackDidTimeout:(id)arg1;	// IMP=0x001000000008b2a1
- (void)nowPlayingOriginClient:(id)arg1 activePlayerClientsDidChange:(id)arg2;	// IMP=0x001000000008b250
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeDidChange:(float)arg2;	// IMP=0x001000000008b1f5
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeControlCapabilitiesDidChange:(unsigned int)arg2;	// IMP=0x001000000008b19e
- (void)nowPlayingOriginClient:(id)arg1 clientDidUnregister:(id)arg2;	// IMP=0x001000000008b006
- (void)nowPlayingOriginClient:(id)arg1 clientDidRegister:(id)arg2;	// IMP=0x001000000008afb5
- (void)nowPlayingOriginClient:(id)arg1 deviceInfoDidChange:(id)arg2 previousDeviceInfo:(id)arg3;	// IMP=0x001000000008af24
- (MISSING_TYPE *)nowPlayingOriginClient:applicationActivityStatusDidChange: /* Error: Ran out of types for this method. */;	// IMP=0x001000000008ae3c
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidEnd:(id)arg2;	// IMP=0x001000000008ad54
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidBegin:(id)arg2;	// IMP=0x001000000008ac6c
- (void)nowPlayingOriginClient:(id)arg1 activePlayerPathDidChange:(id)arg2 withPlaybackState:(unsigned int)arg3;	// IMP=0x001000000008ac35
- (void)nowPlayingClient:(id)arg1 applicationDidForeground:(_Bool)arg2;	// IMP=0x001000000008aad4
- (void)nowPlayingPlayerClient:(id)arg1 clientCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000008aa70
- (void)nowPlayingClient:(id)arg1 playerDidUnregister:(id)arg2;	// IMP=0x001000000008a9d2
- (void)nowPlayingClient:(id)arg1 playerDidRegister:(id)arg2;	// IMP=0x001000000008a981
- (void)nowPlayingClient:(id)arg1 clientStateDidChange:(id)arg2;	// IMP=0x001000000008a906
- (void)nowPlayingClient:(id)arg1 activePlayerDidChangeFromPlayerClient:(id)arg2 toPlayerClient:(id)arg3;	// IMP=0x001000000008a840
- (void)nowPlayingPlayerClient:(id)arg1 playerCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000008a7dc
- (void)nowPlayingPlayerClient:(id)arg1 pictureInPictureEnabledDidChange:(_Bool)arg2;	// IMP=0x001000000008a776
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueArtworkContentItemsDidChange:(id)arg2;	// IMP=0x001000000008a6fb
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueContentItemsDidChange:(id)arg2;	// IMP=0x001000000008a680
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueCapabilitiesDidChange:(unsigned long long)arg2;	// IMP=0x001000000008a629
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueDidChange:(id)arg2;	// IMP=0x001000000008a5ae
- (void)nowPlayingPlayerClient:(id)arg1 supportedCommandsDidChange:(id)arg2;	// IMP=0x001000000008a533
- (void)nowPlayingPlayerClient:(id)arg1 playbackStateDidChange:(unsigned int)arg2;	// IMP=0x001000000008a4dc
- (void)nowPlayingPlayerClient:(id)arg1 isPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000008a401
- (void)nowPlayingPlayerClient:(id)arg1 playerStateDidChange:(id)arg2;	// IMP=0x001000000008a386
- (void)_handleGetAudioFormatContentInfoForOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008a204
- (void)_handleRegisterForWakingNowPlayingNotifications:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008a0ca
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000089f50
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000089d99
- (void)_handleGetLastPlayingDateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000089ab4
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008972d
- (void)_handleSetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000089575
- (void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000887ec
- (void)_handlePlaybackSessionRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000088672
- (void)_handleGetElectedPlayerPathMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000885c6
- (void)_handleUpdateDeviceInfo:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000088471
- (void)_handleGetDeviceInfo:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000882d9
- (void)_handleContentItemArtworkChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000881e9
- (void)_handleContentItemChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000880ba
- (void)_handleSetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087ff7
- (void)_handleGetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087ea8
- (void)_handleGetActivePlayerPathsForLocalOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087d66
- (void)_handleRemoveNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087c71
- (void)_handleGetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087b38
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008797a
- (void)_handleGetNowPlayingPlayersMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087657
- (void)_handleRemoveNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008755f
- (void)_handleGetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087426
- (void)_handleSetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000087121
- (void)_handleGetNowPlayingClientsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000086bd6
- (void)_handleResolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000869c0
- (void)_handleSendLyricsEvent:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008672a
- (void)_handleRequestAudioAmplitudeSamplesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000086491
- (void)_handleRequestVideoThumbnailsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000861f8
- (void)_handleGetAnyAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000086144
- (void)_handleSetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085f4c
- (void)_handleGetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085df6
- (void)_handleUpdatePlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085c3f
- (void)_handleSetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085aac
- (void)_handleGetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008594c
- (void)_handleUpdateClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085799
- (void)_handleSetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000855e5
- (void)_handleGetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085485
- (void)_handleResetPlaybackQueueRequests:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008535e
- (void)_handleSetHardwareRemoteBehaviorMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008524b
- (void)_handleSetPlaybackQueueCapabilties:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085190
- (void)_handleRequestPlaybackQueueCapabilties:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085044
- (void)_handleSetPlaybackQueue:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084dd6
- (void)_handleEndApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084d51
- (void)_handleGetApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084c6b
- (void)_handleBeginApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084b68
- (void)_handleSetCanBeNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084958
- (void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000084798
- (void)_handleSetOverriddenNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000008438f
- (void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000083ffb
- (void)_handleRemoveCustomOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000083dee
- (void)_handleReRegisterCustomOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000839ad
- (void)_handleRegisterCustomOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000837b3
- (void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000836cd
- (void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000835e1
- (void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000083377
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000818c5
- (void)restoreDeviceInfoToClient:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000816cb
- (void)clearNowPlayingClientForXPCClient:(id)arg1;	// IMP=0x0010000000081109
- (id)originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x0010000000080fcc
- (id)originClientForDeviceUID:(id)arg1;	// IMP=0x0010000000080e8f
- (id)originClientForOrigin:(id)arg1;	// IMP=0x0010000000080d3c
- (id)localPlayersForXpcClient:(id)arg1;	// IMP=0x0010000000080c5b
- (id)xpcClientForPlayerPath:(id)arg1;	// IMP=0x0010000000080a15
- (id)_onQueue_queryPlayerPath:(id)arg1;	// IMP=0x0010000000080607
- (id)queryPlayerPath:(id)arg1;	// IMP=0x00100000000804b4
- (id)resolveExistingPlayerPath:(id)arg1;	// IMP=0x0010000000080032
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2 useDefaultPlayerIfNoneSpecified:(_Bool)arg3;	// IMP=0x001000000007f8e8
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000007f8d0
- (id)queryExistingPlayerPathForXPCMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000007f74c
- (id)queryPlayerPathForXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000007f6a5
@property(readonly, nonatomic) NSArray *originClients;
- (id)_onQueue_allNowPlayingInfoClientsForOrigin:(id)arg1;	// IMP=0x001000000007f3d3
@property(readonly, nonatomic) NSSet *allLocalNowPlayingInfoClients;
- (id)_onQueue_allNowPlayingInfoClients;	// IMP=0x001000000007f01d
@property(readonly, nonatomic) NSSet *allNowPlayingInfoClients;
@property(readonly, nonatomic) MRPlayerPath *localActivePlayerPath;
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
- (id)_onQueue_companionOriginClient;	// IMP=0x001000000007ecbe
- (id)_onQueue_activeOriginClient;	// IMP=0x001000000007ec74
@property(readonly, nonatomic) MRDNowPlayingOriginClient *companionOriginClient;
@property(readonly, nonatomic) MRDNowPlayingClient *localActiveNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *localActivePlayerClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *activePlayerClient;
@property(readonly, nonatomic) unsigned int localActivePlayerPlaybackState;
@property(readonly, nonatomic) unsigned int activePlayerPlaybackState;
@property(readonly, nonatomic) _Bool localActivePlayerIsPlaying;
@property(readonly, nonatomic) _Bool activePlayerIsPlaying;
@property(readonly, nonatomic) NSString *localActiveClientBundleIdentifier;
@property(readonly, nonatomic) NSString *activeClientBundleIdentifier;
@property(readonly, nonatomic) int localActiveClientPID;
@property(readonly, nonatomic) int activeClientPID;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000007ddd8
- (void)dealloc;	// IMP=0x001000000007dd63
- (id)init;	// IMP=0x001000000007db80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
