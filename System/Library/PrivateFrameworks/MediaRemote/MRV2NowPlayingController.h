//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MREndpointObserver-Protocol.h>
#import <MediaRemote/MRNowPlayingControllerImpl-Protocol.h>

@class MRAVEndpointObserver, MRNowPlayingControllerConfiguration, MRNowPlayingControllerDestination, MRNowPlayingControllerHelper, MSVVariableIntervalTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRV2NowPlayingController : NSObject <MREndpointObserver, MRNowPlayingControllerImpl>
{
    _Bool _registeredForNotifications;	// 8 = 0x8
    _Bool _registeredForEndpointChanges;	// 9 = 0x9
    _Bool _registeredForEndpointInvalidations;	// 10 = 0xa
    _Bool _registeredForPlayerPathInvalidations;	// 11 = 0xb
    _Bool _updateLoadingEnabled;	// 12 = 0xc
    _Bool _endpointChanged;	// 13 = 0xd
    _Bool _endpointInvalidated;	// 14 = 0xe
    _Bool _playerPathInvalidated;	// 15 = 0xf
    _Bool _beginLoadingInvalidated;	// 16 = 0x10
    _Bool _loading;	// 17 = 0x11
    _Bool _requestingQueue;	// 18 = 0x12
    int _incrementingRequestID;	// 20 = 0x14
    MRNowPlayingControllerHelper *helper;	// 24 = 0x18
    MRNowPlayingControllerDestination *_destination;	// 32 = 0x20
    MRNowPlayingControllerConfiguration *_configuration;	// 40 = 0x28
    id _playerPathInvalidationObserver;	// 48 = 0x30
    MRAVEndpointObserver *_endpointObserver;	// 56 = 0x38
    NSMutableArray *_deferredContentItemsToMerge;	// 64 = 0x40
    MRNowPlayingControllerDestination *_pendingDestination;	// 72 = 0x48
    MSVVariableIntervalTimer *_loadRetryTimer;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000b9eb7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int incrementingRequestID; // @synthesize incrementingRequestID=_incrementingRequestID;
@property(retain, nonatomic) MSVVariableIntervalTimer *loadRetryTimer; // @synthesize loadRetryTimer=_loadRetryTimer;
@property(copy, nonatomic) MRNowPlayingControllerDestination *pendingDestination; // @synthesize pendingDestination=_pendingDestination;
@property(nonatomic) _Bool requestingQueue; // @synthesize requestingQueue=_requestingQueue;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool beginLoadingInvalidated; // @synthesize beginLoadingInvalidated=_beginLoadingInvalidated;
@property(nonatomic) _Bool playerPathInvalidated; // @synthesize playerPathInvalidated=_playerPathInvalidated;
@property(nonatomic) _Bool endpointInvalidated; // @synthesize endpointInvalidated=_endpointInvalidated;
@property(nonatomic) _Bool endpointChanged; // @synthesize endpointChanged=_endpointChanged;
@property(nonatomic) _Bool updateLoadingEnabled; // @synthesize updateLoadingEnabled=_updateLoadingEnabled;
@property(nonatomic) _Bool registeredForPlayerPathInvalidations; // @synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations;
@property(nonatomic) _Bool registeredForEndpointInvalidations; // @synthesize registeredForEndpointInvalidations=_registeredForEndpointInvalidations;
@property(nonatomic) _Bool registeredForEndpointChanges; // @synthesize registeredForEndpointChanges=_registeredForEndpointChanges;
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // @synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge;
@property(retain, nonatomic) MRAVEndpointObserver *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(retain, nonatomic) id playerPathInvalidationObserver; // @synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver;
@property(copy, nonatomic) MRNowPlayingControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) MRNowPlayingControllerDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MRNowPlayingControllerHelper *helper; // @synthesize helper;
- (id)effectivePlaybackQueueRequest;	// IMP=0x00000000000b9c7e
- (_Bool)shouldDeferArtworkRequestForConfiguration:(id)arg1;	// IMP=0x00000000000b9c00
@property(readonly, nonatomic) _Bool needsImmediateReload;
@property(readonly, nonatomic) _Bool shouldObserveInvalidations;
- (void)setIsLoading:(_Bool)arg1;	// IMP=0x00000000000b9782
@property(readonly, nonatomic) NSString *needsImmediateReloadReason;
- (void)_configureReloadTimerForError:(id)arg1;	// IMP=0x00000000000b921c
- (void)_handleRetryTimerElapsed;	// IMP=0x00000000000b90ed
- (void)_handlePlayerPathInvalidatedWithPlayerPath:(id)arg1;	// IMP=0x00000000000b8e7d
- (void)_handleEndpointInvalidated;	// IMP=0x00000000000b8c7c
- (void)_handleEndpointChangedToEndpoint:(id)arg1;	// IMP=0x00000000000b88c2
- (void)_handleEndpointChanged;	// IMP=0x00000000000b8717
- (void)_unregisterNotificationHandlers;	// IMP=0x00000000000b84ba
- (void)_registerNotificationHandlersForResolvedPlayerPath:(id)arg1;	// IMP=0x00000000000b81fb
- (void)_unregisterForPlayerPathInvalidations;	// IMP=0x00000000000b811b
- (void)_registerForPlayerPathInvalidationsForUnresolvedPlayerPath:(id)arg1;	// IMP=0x00000000000b7f6b
- (void)_unregisterForEndpointInvalidations;	// IMP=0x00000000000b7eb9
- (void)_registerForEndpointInvalidations:(id)arg1;	// IMP=0x00000000000b7e17
- (void)_unregisterForEndpointChanges;	// IMP=0x00000000000b7ce5
- (void)_registerForEndpointChangesForOutputDeviceUID:(id)arg1;	// IMP=0x00000000000b7a62
- (void)endpointDidDisconnect:(id)arg1;	// IMP=0x00000000000b7a50
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;	// IMP=0x00000000000b798f
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;	// IMP=0x00000000000b7670
- (void)_handlePlaybackStateChangedNotification:(id)arg1;	// IMP=0x00000000000b736d
- (void)_requestPlaybackQueueArtworkForIdentifiers:(id)arg1;	// IMP=0x00000000000b714f
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;	// IMP=0x00000000000b6dfe
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;	// IMP=0x00000000000b69d2
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x00000000000b6543
- (void)_notifyDelegateOfError:(id)arg1;	// IMP=0x00000000000b649f
- (void)_notifyDelegateOfInvalidation;	// IMP=0x00000000000b6408
- (void)_notifyDelegateOfPlayerPathChange:(id)arg1;	// IMP=0x00000000000b6364
- (void)_notifyDelegateOfUpdatedClientProperties:(id)arg1;	// IMP=0x00000000000b62c0
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;	// IMP=0x00000000000b621c
- (void)_notifyDelegateOfSupportedCommandsChange:(id)arg1;	// IMP=0x00000000000b6178
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;	// IMP=0x00000000000b60d4
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg1;	// IMP=0x00000000000b6030
- (void)_notifyDelegateOfPlaybackQueueChange:(id)arg1;	// IMP=0x00000000000b5f8c
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg1;	// IMP=0x00000000000b5ef2
- (void)_notifyDelegateOfNewResponse:(id)arg1;	// IMP=0x00000000000b5e4e
- (void)onQueue_setResolvedPlayerPath:(id)arg1;	// IMP=0x00000000000b5d58
- (void)_onQueue_clearStateForResolvedPlayerPath;	// IMP=0x00000000000b5c9f
- (void)_onQueue_clearStateForUnresolvedPlayerPath;	// IMP=0x00000000000b5c12
- (void)_onQueue_clearStateForEndpoint;	// IMP=0x00000000000b5b6d
- (void)_onQueue_clearStateForOutputDeviceUID;	// IMP=0x00000000000b5ae3
- (void)_onQueue_clearAllState;	// IMP=0x00000000000b5a59
- (void)_resolvePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5912
- (void)_createUnresolvedPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b54c8
- (void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5248
- (void)_requestClientPropertiesForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b5137
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b5045
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b4fad
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b4de4
- (void)_requestPlaybackQueueForPlayerPath:(id)arg1 request:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b4a8c
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b3fc0
- (void)_loadNowPlayingStateForResolvedPlayerPath:(id)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b3848
- (void)_resolveForUnresolvedPlayerPath:(id)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b31c7
- (void)_resolveForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 requestID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b2a56
- (void)_resolveForOutputDeviceUID:(id)arg1 client:(id)arg2 player:(id)arg3 requestID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b22dc
- (void)_resolveForConfiguration:(id)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b16a1
- (void)_loadNowPlayingStateForConfiguration:(id)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b0e7b
- (void)_reloadWithReason:(id)arg1;	// IMP=0x00000000000b0bb3
@property(readonly, copy) NSString *debugDescription;
- (void)destinationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b06e7
- (void)endLoadingUpdates;	// IMP=0x00000000000b05ac
- (void)beginLoadingUpdates;	// IMP=0x00000000000b0406
- (void)dealloc;	// IMP=0x00000000000b0334
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000b01c1

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

