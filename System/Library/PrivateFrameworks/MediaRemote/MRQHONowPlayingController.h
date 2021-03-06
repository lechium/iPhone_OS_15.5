//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVEndpointObserver, MRArtwork, MRClient, MRNowPlayingPlayerResponse, MRPlayer, MRPlayerPath, NSMutableArray, NSString;
@protocol MRQHONowPlayingControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRQHONowPlayingController : NSObject
{
    _Bool _registeredForNotifications;	// 8 = 0x8
    _Bool _registeredForEndpointChanges;	// 9 = 0x9
    _Bool _registeredForPlayerPathInvalidations;	// 10 = 0xa
    _Bool _updateLoadingEnabled;	// 11 = 0xb
    _Bool _requestingQueue;	// 12 = 0xc
    NSString *_uid;	// 16 = 0x10
    MRClient *_client;	// 24 = 0x18
    MRPlayer *_player;	// 32 = 0x20
    id <MRQHONowPlayingControllerDelegate> _delegate;	// 40 = 0x28
    MRPlayerPath *_unresolvedPlayerPath;	// 48 = 0x30
    MRPlayerPath *_resolvedPlayerPath;	// 56 = 0x38
    MRAVEndpoint *_endpoint;	// 64 = 0x40
    MRNowPlayingPlayerResponse *_response;	// 72 = 0x48
    id _playerPathInvalidationObserver;	// 80 = 0x50
    MRAVEndpointObserver *_endpointObserver;	// 88 = 0x58
    NSString *_endpointObserverGroupUID;	// 96 = 0x60
    NSMutableArray *_deferredContentItemsToMerge;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 120 = 0x78
    NSString *_cachedNowPlayingArtworkIdentifier;	// 128 = 0x80
    MRArtwork *_cachedNowPlayingArtwork;	// 136 = 0x88
}

+ (id)proactiveEndpointController;	// IMP=0x0000000000063fa8
+ (id)localRouteController;	// IMP=0x0000000000063f5f
- (void).cxx_destruct;	// IMP=0x000000000006c8c0
@property(retain, nonatomic) MRArtwork *cachedNowPlayingArtwork; // @synthesize cachedNowPlayingArtwork=_cachedNowPlayingArtwork;
@property(retain, nonatomic) NSString *cachedNowPlayingArtworkIdentifier; // @synthesize cachedNowPlayingArtworkIdentifier=_cachedNowPlayingArtworkIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool requestingQueue; // @synthesize requestingQueue=_requestingQueue;
@property(nonatomic) _Bool updateLoadingEnabled; // @synthesize updateLoadingEnabled=_updateLoadingEnabled;
@property(nonatomic) _Bool registeredForPlayerPathInvalidations; // @synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations;
@property(nonatomic) _Bool registeredForEndpointChanges; // @synthesize registeredForEndpointChanges=_registeredForEndpointChanges;
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // @synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge;
@property(retain, nonatomic) NSString *endpointObserverGroupUID; // @synthesize endpointObserverGroupUID=_endpointObserverGroupUID;
@property(retain, nonatomic) MRAVEndpointObserver *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(retain, nonatomic) id playerPathInvalidationObserver; // @synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver;
@property(copy, nonatomic) MRNowPlayingPlayerResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
@property(nonatomic) __weak id <MRQHONowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) MRClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)_unregisterForEndpointChanges;	// IMP=0x000000000006c361
- (void)_registerForEndpointChangesIfNeeded;	// IMP=0x000000000006bf3e
- (void)_unregisterForPlayerPathInvalidations;	// IMP=0x000000000006beb2
- (void)_registerForPlayerPathInvalidationsIfNeeded;	// IMP=0x000000000006bc7e
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;	// IMP=0x000000000006baea
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;	// IMP=0x000000000006b799
- (void)_handlePlaybackStateChangedNotification:(id)arg1;	// IMP=0x000000000006b37e
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;	// IMP=0x000000000006b00a
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;	// IMP=0x000000000006abc5
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x000000000006a777
- (void)_unregisterNotificationHandlers;	// IMP=0x000000000006a6f0
- (void)_registerNotificationHandlersIfNeeded;	// IMP=0x000000000006a535
- (void)_notifyDelegateOfInvalidation;	// IMP=0x000000000006a433
- (void)_notifyDelegateOfError:(id)arg1;	// IMP=0x000000000006a2f6
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;	// IMP=0x000000000006a09c
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1;	// IMP=0x0000000000069e42
- (void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2;	// IMP=0x0000000000069bba
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;	// IMP=0x0000000000069960
- (void)_notifyDelegateOfUpdatedContentItems:(id)arg1;	// IMP=0x0000000000069706
- (void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2;	// IMP=0x000000000006947e
- (void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)arg1 toNewState:(unsigned int)arg2;	// IMP=0x000000000006924c
- (void)_notifyDelegateOfNewResponse:(id)arg1;	// IMP=0x000000000006910f
- (void)_onQueue_clearState;	// IMP=0x0000000000069054
- (void)_resolvePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068f80
- (void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000068bf4
- (void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068860
- (id)_onQueue_updateByMergingContentItemChanges:(id)arg1;	// IMP=0x0000000000068117
- (void)_onQueue_updateWithNewPlaybackQueue:(id)arg1;	// IMP=0x000000000006809b
- (void)_onQueue_updateWithNewSupportedCommands:(id)arg1;	// IMP=0x000000000006801f
- (void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg1;	// IMP=0x0000000000067fa3
- (void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg1;	// IMP=0x0000000000067f27
- (void)_onQueue_updateWithNewPlaybackState:(unsigned int)arg1;	// IMP=0x0000000000067ece
- (void)_onQueue_updateByReplacingWithNewResponse:(id)arg1;	// IMP=0x0000000000067e6f
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067cd9
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067c41
- (void)_downloadContentItemArtwork:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000677f4
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000676ba
- (void)_onQueue_requestAndUpdateArtworkForContentItems:(id)arg1 forPlayerPath:(id)arg2 withReason:(id)arg3;	// IMP=0x00000000000661b0
- (void)_onQueue_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000065e42
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006551e
- (void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064de5
- (void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064960
- (void)_reloadForPlayerPathInvalidation;	// IMP=0x00000000000647fd
- (void)_reloadForCompleteInvalidation;	// IMP=0x00000000000646a7
- (void)endLoadingUpdates;	// IMP=0x000000000006450d
- (void)beginLoadingUpdates;	// IMP=0x00000000000642eb
- (void)dealloc;	// IMP=0x0000000000064202
- (id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3;	// IMP=0x0000000000063fef
- (id)initWithUID:(id)arg1;	// IMP=0x0000000000063fd8

@end

