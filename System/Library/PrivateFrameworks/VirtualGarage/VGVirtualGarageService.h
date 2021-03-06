//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/VGVirtualGarageActions-Protocol.h>
#import <VirtualGarage/VGVirtualGarageObserver-Protocol.h>

@class GEOObserverHashTable, NSHashTable, NSString, NSXPCConnection, geo_isolater;
@protocol OS_dispatch_queue;

@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions>
{
    NSHashTable *_clients;	// 8 = 0x8
    geo_isolater *_clientsIsolater;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSString *_activeVehicleIdentifier;	// 48 = 0x30
    NSXPCConnection *_connection;	// 56 = 0x38
}

+ (id)sharedService;	// IMP=0x000000000002c1f8
+ (_Bool)canUseVirtualGarageXPCService;	// IMP=0x000000000002b1dc
- (void).cxx_destruct;	// IMP=0x000000000002dffe
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy) NSString *activeVehicleIdentifier; // @synthesize activeVehicleIdentifier=_activeVehicleIdentifier;
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;	// IMP=0x000000000002db00
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x000000000002d9cf
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d774
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d566
- (void)virtualGarageSetAssumesFullCharge:(_Bool)arg1;	// IMP=0x000000000002d504
- (void)virtualGarageEndContinuousUpdates;	// IMP=0x000000000002d39a
- (void)virtualGarageStartContinuousUpdatesIfNeeded;	// IMP=0x000000000002d230
- (void)virtualGarageSaveVehicle:(id)arg1;	// IMP=0x000000000002d07c
- (void)virtualGarageOnboardVehicle:(id)arg1;	// IMP=0x000000000002cec8
- (void)virtualGarageSelectVehicle:(id)arg1;	// IMP=0x000000000002cd14
- (void)virtualGarageGetGarageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cb06
- (void)virtualGarageRemoveVehicle:(id)arg1;	// IMP=0x000000000002c952
- (void)virtualGarageAddVehicle:(id)arg1;	// IMP=0x000000000002c79e
- (id)messageTargetWithErrorReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c48f
- (void)_clearActiveVehicleIdentifierIfNeeded:(id)arg1;	// IMP=0x000000000002c3d9
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000002c313
- (void)registerObserver:(id)arg1;	// IMP=0x000000000002c24d
- (void)_closeConnection;	// IMP=0x000000000002c035
- (void)_openConnection;	// IMP=0x000000000002ba4b
- (void)closeForClient:(id)arg1;	// IMP=0x000000000002b61e
- (void)openForClient:(id)arg1;	// IMP=0x000000000002b215
- (id)init;	// IMP=0x000000000002af6d

@end

