//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYBuddyDaemonProximityTargetProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYBuddyDaemonProximityTargetProtocol;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol>
{
    id <BYBuddyDaemonProximityTargetProtocol> _delegate;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)proximityTargetClientInterface;	// IMP=0x000000000000429e
- (void).cxx_destruct;	// IMP=0x000000000000532a
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYBuddyDaemonProximityTargetProtocol> delegate; // @synthesize delegate=_delegate;
- (void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;	// IMP=0x00000000000051fd
- (void)proximityConnectionReconnected;	// IMP=0x00000000000051c0
- (void)proximityConnectionTerminated;	// IMP=0x0000000000005183
- (void)proximityConnectionInitiated;	// IMP=0x0000000000005146
- (void)proximityConnectionPreparing:(id)arg1;	// IMP=0x00000000000050d4
- (void)dismissProximityPinCode;	// IMP=0x0000000000005097
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;	// IMP=0x000000000000501f
- (void)proximititySetupCompleted:(id)arg1;	// IMP=0x0000000000004fad
- (void)suspendConnectionForSoftwareUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f1d
- (void)showMigrationInterfaceOnSource;	// IMP=0x0000000000004eb3
- (void)endDeviceToDeviceMigration;	// IMP=0x0000000000004e49
- (id)fileTransferSessionTemplate;	// IMP=0x0000000000004c85
- (void)storeHandshake:(id)arg1;	// IMP=0x0000000000004ab4
- (void)storeInformation:(id)arg1;	// IMP=0x00000000000048e3
- (void)resumeProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x00000000000047fa
- (void)hasConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000000000470d
- (void)sendData:(id)arg1;	// IMP=0x000000000000467d
- (void)endPairing;	// IMP=0x0000000000004613
- (void)endAdvertisingProximitySetup;	// IMP=0x00000000000045a9
- (void)beginAdvertisingProximitySetup;	// IMP=0x000000000000453f
- (void)connectToDaemon;	// IMP=0x00000000000042be
- (id)init;	// IMP=0x0000000000004252

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
