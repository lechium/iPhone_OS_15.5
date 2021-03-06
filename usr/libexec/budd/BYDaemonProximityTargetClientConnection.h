//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BYDaemonProximityTargetClientConnection
{
}

+ (id)daemonProtocolInterface;	// IMP=0x0020000000006b3a
- (void)proximititySetupCompleted:(id)arg1;	// IMP=0x00200000000074c6
- (void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;	// IMP=0x00100000000073bc
- (void)proximityConnectionReconnected;	// IMP=0x0010000000007352
- (void)proximityConnectionTerminated;	// IMP=0x00100000000072e8
- (void)proximityConnectionInitiated;	// IMP=0x001000000000727e
- (void)proximityConnectionPreparing:(id)arg1;	// IMP=0x00100000000071ee
- (void)dismissProximityPinCode;	// IMP=0x0010000000007184
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;	// IMP=0x00100000000070ee
- (void)suspendConnectionForSoftwareUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007078
- (void)showMigrationInterfaceOnSource;	// IMP=0x0010000000007034
- (void)endDeviceToDeviceMigration;	// IMP=0x0010000000006ff0
- (void)fileTransferSessionTemplate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006f69
- (void)storeHandshake:(id)arg1;	// IMP=0x0010000000006eaf
- (void)storeInformation:(id)arg1;	// IMP=0x0010000000006df5
- (void)resumeProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006caa
- (void)hasConnection:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006c26
- (void)endPairing;	// IMP=0x0010000000006be2
- (void)endAdvertisingProximitySetup;	// IMP=0x0010000000006b9e
- (void)beginAdvertisingProximitySetup;	// IMP=0x0010000000006b5a
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000006aba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

