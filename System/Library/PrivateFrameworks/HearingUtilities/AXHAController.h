//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, HCXPCMessage, NSDictionary, NSString;
@protocol OS_os_transaction;

@interface AXHAController : NSObject
{
    _Bool _isListening;	// 8 = 0x8
    AXDispatchTimer *_liveListenLevelsTimer;	// 16 = 0x10
    NSString *_pairedDeviceUUID;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
    NSDictionary *_availableDevicesDescription;	// 40 = 0x28
    HCXPCMessage *_liveListenMessage;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x000000000002ae56
- (void).cxx_destruct;	// IMP=0x000000000002f105
@property(retain, nonatomic) HCXPCMessage *liveListenMessage; // @synthesize liveListenMessage=_liveListenMessage;
@property(retain, nonatomic) NSDictionary *availableDevicesDescription; // @synthesize availableDevicesDescription=_availableDevicesDescription;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSString *pairedDeviceUUID; // @synthesize pairedDeviceUUID=_pairedDeviceUUID;
- (id)disconnectAndForceSlave:(id)arg1;	// IMP=0x000000000002f087
- (id)disconnectAndForceClient:(id)arg1;	// IMP=0x000000000002f072
- (id)connectToControllerWithID:(id)arg1;	// IMP=0x000000000002ee28
- (id)readAvailableControllers:(id)arg1;	// IMP=0x000000000002ee13
- (id)readAvailableDevices:(id)arg1;	// IMP=0x000000000002ed63
- (void)updateNearbyDeviceAvailability;	// IMP=0x000000000002e7dc
- (id)registerForControlMessageUpdates:(id)arg1;	// IMP=0x000000000002e705
- (id)writeDeviceProperty:(id)arg1;	// IMP=0x000000000002dfc4
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;	// IMP=0x000000000002dd9b
- (id)readDeviceProperty:(id)arg1;	// IMP=0x000000000002dba8
- (id)registerForDeviceUpdates:(id)arg1;	// IMP=0x000000000002da50
- (id)registerForAvailableDevicesUpdates:(id)arg1;	// IMP=0x000000000002d2a7
- (void)availableRemoteControllersDidChange;	// IMP=0x000000000002d22a
- (void)transitionToPeer;	// IMP=0x000000000002cfad
- (void)connectToPairedDevice;	// IMP=0x000000000002cd80
- (void)setPairedHearingAid:(id)arg1;	// IMP=0x000000000002c1e9
- (void)setListenForAvailableDeviceUpdates:(_Bool)arg1;	// IMP=0x000000000002b950
- (_Bool)hearingAidsPaired;	// IMP=0x000000000002b77c
- (id)currentDeviceController;	// IMP=0x000000000002b23c
- (void)willSwitchUser;	// IMP=0x000000000002b236
- (void)dealloc;	// IMP=0x000000000002b1a6
- (id)init;	// IMP=0x000000000002aeab

@end

