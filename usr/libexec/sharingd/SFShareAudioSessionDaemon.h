//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, MISSING_TYPE, NSString, SDStatusMonitor, SFBluetoothPairingSession, SFClient, SFDevice, SFDeviceDiscovery, SFService, SFSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFShareAudioSessionDaemon : NSObject
{
    SFService *_bleNearbyActionAdvertiser;	// 8 = 0x8
    SFDeviceDiscovery *_bleNearbyInfoScanner;	// 16 = 0x10
    SFDeviceDiscovery *_bleProxPairingScanner;	// 24 = 0x18
    int _confirmState;	// 32 = 0x20
    NSString *_guestHeadphonesAddress;	// 40 = 0x28
    unsigned int _guestHeadphonesColorCode;	// 48 = 0x30
    int _guestHeadphonesConnectState;	// 52 = 0x34
    SFBluetoothPairingSession *_guestHeadphonesPairingSession;	// 56 = 0x38
    unsigned int _guestHeadphonesProductID;	// 64 = 0x40
    NSString *_guestHeadphonesRouteUID;	// 72 = 0x48
    int _guestHeadphonesInstructionsState;	// 80 = 0x50
    int _guestiOSConnectState;	// 84 = 0x54
    CNContact *_guestiOSContact;	// 88 = 0x58
    NSString *_guestiOSDeviceAddress;	// 96 = 0x60
    int _guestiOSPairSetupPublicState;	// 104 = 0x68
    SFSession *_guestiOSSession;	// 112 = 0x70
    int _guestiOSShareAudioState;	// 120 = 0x78
    int _guestiOSWaitForRouteState;	// 124 = 0x7c
    _Bool _initialized;	// 128 = 0x80
    _Bool _invalidateCalled;	// 129 = 0x81
    _Bool _invalidateDone;	// 130 = 0x82
    _Bool _observingPickableRoutes;	// 131 = 0x83
    SFClient *_preventProxCardsClient;	// 136 = 0x88
    SFDevice *_triggeredDevice;	// 144 = 0x90
    SFDevice *_triggeredNeedsSetupDevice;	// 152 = 0x98
    _Bool _triggerediOS;	// 160 = 0xa0
    _Bool _prefHeadphoneTrigger;	// 161 = 0xa1
    MISSING_TYPE *_prefiOSTrigger;	// 162 = 0xa2
    int _prefOverrideColorCode;	// 164 = 0xa4
    int _prefOverrideProductID;	// 168 = 0xa8
    _Bool _prefRespectDeviceSupport;	// 172 = 0xac
    int _prefRSSIThreshold;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 184 = 0xb8
    CDUnknownBlockType _progressHandler;	// 192 = 0xc0
    SDStatusMonitor *_statusMonitor;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00200000000b2d4c
@property(retain, nonatomic) SDStatusMonitor *statusMonitor; // @synthesize statusMonitor=_statusMonitor;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)userConfirmed;	// IMP=0x00100000000b2c20
- (void)_reportProgressTriggeredDevice:(int)arg1;	// IMP=0x00100000000b29e3
- (void)_reportProgress:(int)arg1 info:(id)arg2;	// IMP=0x00100000000b27f3
- (void)_reportProgress:(int)arg1;	// IMP=0x00100000000b261e
- (void)_reportError:(id)arg1;	// IMP=0x00100000000b2510
- (void)_pickableRoutesChanged;	// IMP=0x00100000000b2208
- (void)_pickableRoutesChanged:(id)arg1;	// IMP=0x00100000000b2152
- (void)_bleScannerProxPairingDeviceFound:(id)arg1;	// IMP=0x00100000000b1807
- (void)_bleScannerNearbyInfoDeviceFound:(id)arg1;	// IMP=0x00100000000b15c7
- (void)_cleanup;	// IMP=0x00100000000b144d
- (int)_runFinish;	// IMP=0x00100000000b125b
- (int)_runWaitForGuestHeadphones;	// IMP=0x00100000000b1006
- (int)_runConnectGuestHeadphones;	// IMP=0x00100000000b0cdf
- (int)_runWaitForGuestHeadphonesPairingMode;	// IMP=0x00100000000b0cc7
- (int)_runShowHeadphonesPairingInstructions;	// IMP=0x00100000000b0c36
- (void)_runGuestiOSShareAudioProcessResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b07eb
- (void)_runGuestiOSShareAudioSendRequest;	// IMP=0x00100000000b046d
- (int)_runGuestiOSShareAudio;	// IMP=0x00100000000b03e0
- (int)_runGuestiOSPairSetupPublic;	// IMP=0x00100000000b0147
- (int)_runGuestiOSConnect;	// IMP=0x00100000000afac9
- (int)_runConfirm;	// IMP=0x00100000000af9db
- (int)_runWaitForProxTrigger;	// IMP=0x00100000000af9c3
- (int)_runAdvertiser;	// IMP=0x00100000000af6c2
- (int)_runScannerNearbyInfo;	// IMP=0x00100000000af315
- (int)_runScannerProxPairing;	// IMP=0x00100000000aef5a
- (int)_runInit;	// IMP=0x00100000000aed49
- (void)_run;	// IMP=0x00100000000aeb81
- (void)_invalidate;	// IMP=0x00100000000aeaf5
- (void)invalidate;	// IMP=0x00100000000aea20
- (void)activate;	// IMP=0x00100000000ae953
- (id)init;	// IMP=0x00100000000ae8e4

@end
