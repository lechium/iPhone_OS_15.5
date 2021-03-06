//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVRoutingSessionManager, MPAVEndpointRoute, MPMRAVOutputContextWrapper, MRAVEndpoint, MRAVOutputDevice, MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;	// 16 = 0x10
    _Bool _attemptedToInitializeAppOutputContext;	// 24 = 0x18
    id _companionCallbackToken;	// 32 = 0x20
    _Bool _didFindCompanion;	// 40 = 0x28
    id _callbackToken;	// 48 = 0x30
    _Bool _supportsMultipleSelection;	// 56 = 0x38
    _Bool _devicePresenceDetected;	// 57 = 0x39
    NSArray *_outputDeviceRoutes;	// 64 = 0x40
    _Bool _shouldSourceOutputDevicesFromAVODDS;	// 72 = 0x48
    AVRoutingSessionManager *_routingSessionManager;	// 80 = 0x50
    _Bool _didFinishLoading;	// 88 = 0x58
    _Bool _detachesRoutesToGroup;	// 89 = 0x59
    _Bool _supportsQueueHandoff;	// 90 = 0x5a
    _Bool _supportsRoutePrediction;	// 91 = 0x5b
    unsigned int _targetSessionID;	// 92 = 0x5c
    MPMRAVOutputContextWrapper *_applicationOutputContext;	// 96 = 0x60
    long long _discoveryMode;	// 104 = 0x68
    MRAVOutputDevice *_predictedDevice;	// 112 = 0x70
    MPAVEndpointRoute *_endpointRoute;	// 120 = 0x78
    NSString *_presentingAppBundleID;	// 128 = 0x80
    NSString *_initiator;	// 136 = 0x88
    MRAVRoutingDiscoverySession *_companionDiscoverySession;	// 144 = 0x90
    MRAVRoutingDiscoverySession *_discoverySession;	// 152 = 0x98
}

+ (id)_globalAudioSessionLock;	// IMP=0x00000000002bddde
- (void).cxx_destruct;	// IMP=0x00000000002bb530
@property(retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession; // @synthesize companionDiscoverySession=_companionDiscoverySession;
@property(nonatomic) _Bool supportsRoutePrediction; // @synthesize supportsRoutePrediction=_supportsRoutePrediction;
@property(retain, nonatomic) NSString *initiator; // @synthesize initiator=_initiator;
@property(copy, nonatomic) NSString *presentingAppBundleID; // @synthesize presentingAppBundleID=_presentingAppBundleID;
@property(nonatomic) _Bool supportsQueueHandoff; // @synthesize supportsQueueHandoff=_supportsQueueHandoff;
@property(nonatomic) _Bool detachesRoutesToGroup; // @synthesize detachesRoutesToGroup=_detachesRoutesToGroup;
- (unsigned int)targetSessionID;	// IMP=0x00000000002bb457
- (long long)discoveryMode;	// IMP=0x00000000002bb446
- (_Bool)devicePresenceDetected;	// IMP=0x00000000002bb436
@property(nonatomic) _Bool supportsMultipleSelection; // @synthesize supportsMultipleSelection=_supportsMultipleSelection;
@property(retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext; // @synthesize applicationOutputContext=_applicationOutputContext;
- (id)_stateDumpObject;	// IMP=0x00000000002bb23c
- (void)_resetPredictedOutputDevice;	// IMP=0x00000000002bb151
- (void)_generateDiscoverySession;	// IMP=0x00000000002bb00e
- (void)_setShouldSourceOutputDevicesFromAVODDS:(_Bool)arg1;	// IMP=0x00000000002baf78
- (id)_outputDeviceRouteWithUID:(id)arg1;	// IMP=0x00000000002bae76
- (void)_outputDevicesDidChange:(id)arg1;	// IMP=0x00000000002bae1c
- (void)_personalRoutesDidChange;	// IMP=0x00000000002badc2
- (void)_unregisterNotifications;	// IMP=0x00000000002bad47
- (void)_registerNotifications;	// IMP=0x00000000002bacbe
- (_Bool)_isRemovingPredictedDevice:(id)arg1;	// IMP=0x00000000002bac0e
- (_Bool)_shouldAddPredictedDeviceToOuputDevices:(id)arg1;	// IMP=0x00000000002baac0
- (_Bool)_shouldDetachOutputDevicesToGroup:(id)arg1;	// IMP=0x00000000002ba880
- (id)_detachableDevicesInOutputDevices:(id)arg1;	// IMP=0x00000000002ba813
- (id)outputDevicesForRoutes:(id)arg1;	// IMP=0x00000000002ba645
- (void)_routeStatusDidChangeNotification:(id)arg1;	// IMP=0x00000000002ba42c
- (void)_outputDevicesDidChangeNotification:(id)arg1;	// IMP=0x00000000002ba3d2
- (void)_endpointsDidChangeNotification:(id)arg1;	// IMP=0x00000000002ba336
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;	// IMP=0x00000000002ba158
- (void)removeRoutesFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b9ced
- (void)removeRouteFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b9b83
- (void)addRoutesToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b994f
- (void)addRouteToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b97e5
- (void)createGroupFromOutputDevices:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b9592
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b8c4b
- (id)getRoutesForCategory:(id)arg1;	// IMP=0x00000000002b72e2
- (void)setDiscoveryMode:(long long)arg1;	// IMP=0x00000000002b728c
@property(readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property(nonatomic) _Bool didFinishLoading;
@property(retain, nonatomic) MRAVOutputDevice *predictedDevice; // @synthesize predictedDevice=_predictedDevice;
- (id)routingSessionManager;	// IMP=0x00000000002b6c7f
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(readonly, nonatomic) MRAVEndpoint *endpoint;
- (void)setTargetSessionID:(unsigned int)arg1;	// IMP=0x00000000002b6a51
@property(copy, nonatomic) NSString *routingContextUID;
- (void)dealloc;	// IMP=0x00000000002b64e6
- (id)_initWithEndpointRoute:(id)arg1;	// IMP=0x00000000002b6305
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x00000000002b62f3
- (id)init;	// IMP=0x00000000002b62df

@end

