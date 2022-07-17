//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsEndpointControllerConnectionDelegate-Protocol.h>
#import <MediaControls/MediaControlsEndpointObserverDelegate-Protocol.h>

@class MPCFuture, MSVPersistentTimer, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsActiveEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate>
{
    _Bool _isDeferred;	// 8 = 0x8
    long long _routeType;	// 16 = 0x10
    NSString *_activeRouteUID;	// 24 = 0x18
    MPCFuture *_deferredPlayerPathFuture;	// 32 = 0x20
    id _deferredPlayerPathInvalidationToken;	// 40 = 0x28
    MSVPersistentTimer *_deferredPlayerPathTimer;	// 48 = 0x30
    NSString *_activeEndpointUID;	// 56 = 0x38
}

+ (double)mediaRecentlyPlayedTimeout;	// IMP=0x0000000000066662
- (void).cxx_destruct;	// IMP=0x00000000000659ef
@property(nonatomic) _Bool isDeferred; // @synthesize isDeferred=_isDeferred;
@property(retain, nonatomic) NSString *activeEndpointUID; // @synthesize activeEndpointUID=_activeEndpointUID;
@property(retain, nonatomic) MSVPersistentTimer *deferredPlayerPathTimer; // @synthesize deferredPlayerPathTimer=_deferredPlayerPathTimer;
@property(retain, nonatomic) id deferredPlayerPathInvalidationToken; // @synthesize deferredPlayerPathInvalidationToken=_deferredPlayerPathInvalidationToken;
@property(retain, nonatomic) MPCFuture *deferredPlayerPathFuture; // @synthesize deferredPlayerPathFuture=_deferredPlayerPathFuture;
@property(readonly, nonatomic) NSString *activeRouteUID; // @synthesize activeRouteUID=_activeRouteUID;
@property(nonatomic) long long routeType; // @synthesize routeType=_routeType;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1;	// IMP=0x0000000000065757
- (void)_fetchActiveSystemRoute:(CDUnknownBlockType)arg1;	// IMP=0x00000000000655c6
- (void)_maybeUpdateActiveSystemRoute;	// IMP=0x0000000000065508
- (void)_updateActiveSystemRoute;	// IMP=0x00000000000653e9
- (void)_maybeRestoreDeferredPlayerPath;	// IMP=0x000000000006501c
- (void)_restoreDeferredPlayerPath;	// IMP=0x0000000000064fee
- (void)_resetDeferredPlayerPath;	// IMP=0x0000000000064f8f
- (id)_routeForEndpoint:(void *)arg1;	// IMP=0x0000000000064f00
- (void)activeSystemRouteDidChangeNotification:(id)arg1;	// IMP=0x0000000000064d48
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;	// IMP=0x0000000000064cf5
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x0000000000064c1c
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000064c0a
- (void)setDeviceUnlocked:(_Bool)arg1;	// IMP=0x0000000000064b17
- (void)setOnScreen:(_Bool)arg1;	// IMP=0x0000000000064a72
- (id)initWithActiveRouteType:(long long)arg1;	// IMP=0x0000000000064983

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
