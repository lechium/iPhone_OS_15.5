//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUCoalescer, IDSDevice, IDSService, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, RPCompanionLinkClient, SFBLEPipe, SFPowerSource, SFPowerSourceMonitor;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDPairedDeviceAgent
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    NSDate *_animationDateReceived;	// 16 = 0x10
    NSDate *_animationDateForIDS;	// 24 = 0x18
    NSDate *_animationDateToSend;	// 32 = 0x20
    _Bool _animationDateSupported;	// 40 = 0x28
    NSNumber *_animationMessageID;	// 48 = 0x30
    SFBLEPipe *_blePipe;	// 56 = 0x38
    RPCompanionLinkClient *_companionLinkClient;	// 64 = 0x40
    CDUnknownBlockType _chargingUIHandler;	// 72 = 0x48
    CUCoalescer *_idsConnectionCoalescer;	// 80 = 0x50
    IDSDevice *_idsConnectedDevice;	// 88 = 0x58
    IDSService *_idsService;	// 96 = 0x60
    CUCoalescer *_idsSyncCoalescer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_idsInfoTimer;	// 112 = 0x70
    _Bool _infoRequestForced;	// 120 = 0x78
    int _lockStatePairedDevice;	// 124 = 0x7c
    NSMutableArray *_messageIDs;	// 128 = 0x80
    NSMutableDictionary *_nrRegisteredDevices;	// 136 = 0x88
    SFPowerSource *_powerSourceLocal;	// 144 = 0x90
    NSDictionary *_powerSourceMessage;	// 152 = 0x98
    SFPowerSourceMonitor *_powerSourceMonitor;	// 160 = 0xa0
    SFPowerSource *_powerSourcePairedDevice;	// 168 = 0xa8
    _Bool _powerSourceWasCharging;	// 176 = 0xb0
    int _testingChargingToken;	// 180 = 0xb4
    _Bool _uiShowing;	// 184 = 0xb8
    long long _wristStateLocal;	// 192 = 0xc0
    long long _wristStatePairedDevice;	// 200 = 0xc8
    _Bool _hasLongPasscode;	// 208 = 0xd0
    SFPowerSource *_powerSource;	// 216 = 0xd8
}

+ (id)sharedAgent;	// IMP=0x002000000002da1f
- (void).cxx_destruct;	// IMP=0x0020000000033c02
@property(retain, nonatomic) SFPowerSource *powerSource; // @synthesize powerSource=_powerSource;
@property(readonly, nonatomic) _Bool hasLongPasscode; // @synthesize hasLongPasscode=_hasLongPasscode;
- (void)_postPowerStatusNotificationForPowerSource:(id)arg1;	// IMP=0x0010000000033aff
- (void)sendDashboardEntryWithName:(id)arg1 dict:(id)arg2;	// IMP=0x00100000000339bf
- (void)sendDismissUIWithReason:(long long)arg1;	// IMP=0x001000000003398a
- (void)triggerChargingUIWithDismissHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003377e
- (void)sendAnimationDate:(id)arg1;	// IMP=0x0010000000033749
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003372e
- (void)initialViewControllerDidDisappear;	// IMP=0x0010000000033693
- (void)initialViewControllerDidAppear;	// IMP=0x00100000000335f8
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000003352f
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000033466
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000003345e
- (id)remoteObjectInterface;	// IMP=0x001000000003343e
- (id)exportedInterface;	// IMP=0x001000000003341e
- (id)machServiceName;	// IMP=0x0010000000033411
- (void)_wristStateUpdate:(long long)arg1;	// IMP=0x0010000000033378
- (void)_wristStateHandleMessage:(id)arg1;	// IMP=0x0010000000033269
- (void)_wristStateChanged;	// IMP=0x001000000003318d
- (void)wristStateChanged:(id)arg1;	// IMP=0x00100000000330af
@property(readonly, nonatomic) long long wristState;
- (void)_testingOnCharger;	// IMP=0x001000000003300a
- (void)_testingUnregisterNotifications;	// IMP=0x0010000000032fe3
- (void)_testingRegisterNotifications;	// IMP=0x0010000000032fae
- (void)_disablePowerStateMonitor;	// IMP=0x0010000000032f41
- (void)_setupWristStateMonitor;	// IMP=0x0010000000032eb2
- (void)_setupPowerSourceMonitor;	// IMP=0x00100000000328e7
- (void)_setupLockStateMonitor;	// IMP=0x0010000000032858
- (void)_systemStateUnregisterObservers;	// IMP=0x00100000000327d0
- (void)_systemStateRegisterObservers;	// IMP=0x001000000003277d
- (void)_powerSourceUpdatePairedDeviceInfo:(id)arg1;	// IMP=0x0010000000031f5e
- (void)_powerSourceLost:(id)arg1;	// IMP=0x0010000000031e3d
- (void)_powerSourceChanged:(id)arg1;	// IMP=0x0010000000031a71
- (void)_nanoRegistryUnregisterChanges;	// IMP=0x0010000000031873
- (void)_nanoRegistryRegisterChangesForDevice:(id)arg1;	// IMP=0x0010000000031381
- (void)_messageIDRemove:(id)arg1;	// IMP=0x0010000000031231
- (void)_messageIDAdd:(id)arg1;	// IMP=0x00100000000310be
- (id)_messageFromPowerSource:(id)arg1;	// IMP=0x0010000000030e10
- (void)_messageHandleDashboardEntry:(id)arg1;	// IMP=0x0010000000030bf2
- (void)_messageHandlePowerSourceUpdate:(id)arg1;	// IMP=0x0010000000030af8
- (void)_messageHandleAllUpdate:(id)arg1;	// IMP=0x0010000000030876
- (void)_messageHandleIncomingData:(id)arg1;	// IMP=0x001000000003066b
- (void)_lockStateUpdate:(int)arg1;	// IMP=0x00100000000305d2
- (void)_lockStateHandleMessage:(id)arg1;	// IMP=0x00100000000304c5
- (void)_lockStateChanged:(id)arg1;	// IMP=0x0010000000030402
@property(readonly, nonatomic) int lockState;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000003032e
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000003026a
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00100000000301a6
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000002ffc7
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x001000000002fe43
- (void)_idsUpdateConnectedState;	// IMP=0x001000000002f6ba
- (void)_idsTriggerSyncForAnimation:(_Bool)arg1;	// IMP=0x001000000002f615
- (void)_idsTriggerSync;	// IMP=0x001000000002f601
- (void)_idsTimerInfoInvalidate;	// IMP=0x001000000002f546
- (void)_idsTimerInfoFired;	// IMP=0x001000000002f481
- (void)_idsTimerInfoRestart;	// IMP=0x001000000002f2f5
- (void)_idsSendDashboardEntryToCompanion:(id)arg1;	// IMP=0x001000000002f2ef
- (void)_idsSendStateUpdate:(id)arg1 asWaking:(_Bool)arg2;	// IMP=0x001000000002ee35
- (_Bool)_idsHasDefaultDevice;	// IMP=0x001000000002ece3
- (void)_idsEnsureSynced;	// IMP=0x001000000002eba3
- (void)_idsEnsureCoalescersStopped;	// IMP=0x001000000002eb31
- (void)_idsEnsureCoalescersStarted;	// IMP=0x001000000002e847
- (id)_idsActiveDevice;	// IMP=0x001000000002e6e9
- (void)_companionLinkRegisterEvents;	// IMP=0x001000000002e6e3
- (void)_companionLinkDevicesChanged;	// IMP=0x001000000002e603
- (_Bool)_companionLinkConnected;	// IMP=0x001000000002e43b
- (void)_companionLinkDisable;	// IMP=0x001000000002e403
- (void)_companionLinkEnable;	// IMP=0x001000000002e0d5
- (id)_queueWithFallbackQOS;	// IMP=0x001000000002e080
- (void)_invalidate;	// IMP=0x001000000002dee8
- (void)invalidate;	// IMP=0x001000000002de61
- (void)_activate;	// IMP=0x001000000002dc0c
- (void)activate;	// IMP=0x001000000002db85
- (id)init;	// IMP=0x001000000002da74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

