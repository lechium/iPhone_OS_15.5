//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEONavigationServerPushStateXPCInterface-Protocol.h>

@class GEOComposedRoute, GEOLocation, GEONavdPeer, NSData, NSMutableSet, NSString;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface>
{
    GEONavdPeer *_pushStatePeer;	// 8 = 0x8
    NSMutableSet *_listenerPeers;	// 16 = 0x10
    NSMutableSet *_unEntitledPeers;	// 24 = 0x18
    _Bool _isListenerConnectionOpen;	// 32 = 0x20
    int _listenerConnectionOpenToken;	// 36 = 0x24
    unsigned long long _state;	// 40 = 0x28
    int _transportType;	// 48 = 0x30
    GEOLocation *_lastLocation;	// 56 = 0x38
    GEOComposedRoute *_route;	// 64 = 0x40
    NSData *_routeSummaryData;	// 72 = 0x48
    NSData *_transitSummaryData;	// 80 = 0x50
    NSData *_guidanceStateData;	// 88 = 0x58
    NSData *_activeRouteDetailsData;	// 96 = 0x60
    NSData *_stepIndexData;	// 104 = 0x68
    NSData *_stepNameInfoData;	// 112 = 0x70
    NSData *_rideSelectionsData;	// 120 = 0x78
    NSData *_positionFromSignData;	// 128 = 0x80
    NSData *_positionFromManeuverData;	// 136 = 0x88
    NSData *_positionFromDestinationData;	// 144 = 0x90
    NSData *_navigationVoiceVolumeData;	// 152 = 0x98
}

+ (id)identifier;	// IMP=0x00000000012b2755
- (void).cxx_destruct;	// IMP=0x00000000012b5a7d
- (void)_notifyListenersOpenConnection;	// IMP=0x00000000012b59e6
- (void)_closePushStatePeerConnection;	// IMP=0x00000000012b5923
- (void)_openPushStatePeerConnection:(id)arg1;	// IMP=0x00000000012b5600
- (void)clearAllData;	// IMP=0x00000000012b554c
- (void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3;	// IMP=0x00000000012b50a7
- (void)_forEachValidPeerOnMainQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b4e99
- (void)_forEachValidPeer:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b4de1
- (void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2;	// IMP=0x00000000012b4bff
- (void)_requestNavigationVoiceVolumeWithPeer:(id)arg1;	// IMP=0x00000000012b4bde
- (void)_requestPositionFromDestinationWithPeer:(id)arg1;	// IMP=0x00000000012b4bbd
- (void)_requestPositionFromManeuverWithPeer:(id)arg1;	// IMP=0x00000000012b4b9c
- (void)_requestPositionFromSignWithPeer:(id)arg1;	// IMP=0x00000000012b4b7b
- (void)_requestRideSelectionsWithPeer:(id)arg1;	// IMP=0x00000000012b4b5d
- (void)_requestStepNameInfoWithPeer:(id)arg1;	// IMP=0x00000000012b4b3f
- (void)_requestStepIndexWithPeer:(id)arg1;	// IMP=0x00000000012b4b21
- (void)_requestActiveRouteDetailsDataWithPeer:(id)arg1;	// IMP=0x00000000012b4b03
- (void)_requestGuidanceStateWithPeer:(id)arg1;	// IMP=0x00000000012b4ae5
- (void)_requestTransitSummaryWithPeer:(id)arg1;	// IMP=0x00000000012b4ac7
- (void)_requestRouteSummaryWithPeer:(id)arg1;	// IMP=0x00000000012b4aac
- (void)_requestRouteWithPeer:(id)arg1;	// IMP=0x00000000012b498a
- (void)setCurrentRoadName:(id)arg1;	// IMP=0x00000000012b4850
- (void)setNavigationVoiceVolumeWithData:(id)arg1;	// IMP=0x00000000012b478a
- (void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;	// IMP=0x00000000012b46c4
- (void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;	// IMP=0x00000000012b45fe
- (void)setRouteSummaryWithPositionFromSignData:(id)arg1;	// IMP=0x00000000012b4538
- (void)setRouteSummaryWithRideSelectionsData:(id)arg1;	// IMP=0x00000000012b4478
- (void)setRouteSummaryWithStepNameInfoData:(id)arg1;	// IMP=0x00000000012b43b8
- (void)setRouteSummaryWithStepIndexData:(id)arg1;	// IMP=0x00000000012b42f8
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;	// IMP=0x00000000012b4238
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;	// IMP=0x00000000012b3f73
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;	// IMP=0x00000000012b3f28
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;	// IMP=0x00000000012b3aef
- (void)setArrivedAtWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;	// IMP=0x00000000012b399f
- (void)updateTrafficForCurrentRoute:(id)arg1;	// IMP=0x00000000012b3764
- (void)setRoute:(id)arg1;	// IMP=0x00000000012b353b
- (void)setLocation:(id)arg1;	// IMP=0x00000000012b33fa
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2;	// IMP=0x00000000012b30d1
- (_Bool)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(_Bool)arg2;	// IMP=0x00000000012b282a
- (id)init;	// IMP=0x00000000012b2762

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

