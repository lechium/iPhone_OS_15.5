//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/MPAVRoutingControllerDelegate-Protocol.h>

@class MPAVRoutingController, NSArray, NSMutableArray, NSString, WFBluetoothSettingsClient;
@protocol OS_dispatch_queue;

@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate>
{
    long long _routeType;	// 8 = 0x8
    MPAVRoutingController *_routingController;	// 16 = 0x10
    WFBluetoothSettingsClient *_bluetoothClient;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000030fdbc
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient; // @synthesize bluetoothClient=_bluetoothClient;
@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) long long routeType; // @synthesize routeType=_routeType;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x000000000030fc37
- (void)findHandoffRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000030fb04
- (void)findHandoffRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000030f9d1
- (void)handOffFromSourceUID:(id)arg1 toDestinationUID:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000030f732
- (void)selectRoute:(id)arg1 operation:(long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000030f2b8
- (void)findRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000030f261
- (void)findRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000030f155
@property(readonly, nonatomic) NSArray *availableRoutes;
- (void)removeAvailableRoutesObserver:(id)arg1;	// IMP=0x000000000030efee
- (void)addAvailableRoutesObserver:(id)arg1;	// IMP=0x000000000030ef3d
- (void)stopDiscoveringRoutes;	// IMP=0x000000000030ee48
- (void)startDiscoveringRoutes;	// IMP=0x000000000030ecc6
- (void)getPairedAudioDevicesMatchingRouteDescriptor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030e9b2
- (id)initWithRouteType:(long long)arg1;	// IMP=0x000000000030e715
- (id)init;	// IMP=0x000000000030e701

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

