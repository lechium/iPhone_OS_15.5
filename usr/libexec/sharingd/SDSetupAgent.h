//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, MISSING_TYPE, NEVPNConnection, NSData, NSMutableDictionary, NSString, NSURL, NSUUID, SBSRemoteAlertHandle, SDStatusMonitor, SFBLEScanner, SFDeviceDiscovery, SFDeviceRepairService, SFDeviceRepairSession, SFPINPairSession, SFService, SFWiFiHealthMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDSetupAgent : NSObject
{
    NSData *_bleAuthTagFilter;	// 8 = 0x8
    _Bool _clientEnabled;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _hsa2Enabled;	// 40 = 0x28
    SFService *_pinPairService;	// 48 = 0x30
    SFPINPairSession *_pinPairSession;	// 56 = 0x38
    NSUUID *_pinPairUUID;	// 64 = 0x40
    int _profilesNotifyToken;	// 72 = 0x48
    _Bool _pwsAutoGrantingEnabled;	// 76 = 0x4c
    _Bool _pwsGrantingEnabled;	// 77 = 0x4d
    SBSRemoteAlertHandle *_remoteAlertHandle;	// 80 = 0x50
    _Bool _scanEligible;	// 88 = 0x58
    int _scanSeconds;	// 92 = 0x5c
    NSObject<OS_dispatch_source> *_scanTimer;	// 96 = 0x60
    _Bool _serverEnabled;	// 104 = 0x68
    NSURL *_setupURL;	// 112 = 0x70
    _Bool _shouldScan;	// 120 = 0x78
    SDStatusMonitor *_statusMonitor;	// 128 = 0x80
    CUSystemMonitor *_systemMonitor;	// 136 = 0x88
    NSMutableDictionary *_triggeredDevices;	// 144 = 0x90
    _Bool _triggeredUIAppleTVPair;	// 152 = 0x98
    _Bool _triggeredUIAppleTVSetup;	// 153 = 0x99
    _Bool _renableB238SetupAfterWiFi;	// 154 = 0x9a
    _Bool _triggeredUIB238Setup;	// 155 = 0x9b
    _Bool _triggeredUIiOSSetup;	// 156 = 0x9c
    _Bool _triggeredUIRepair;	// 157 = 0x9d
    _Bool _triggeredUIWatchSetup;	// 158 = 0x9e
    _Bool _triggeredUIWHASetup;	// 159 = 0x9f
    _Bool _triggeredUIAuthenticateAccounts;	// 160 = 0xa0
    NEVPNConnection *_vpnCnx;	// 168 = 0xa8
    unsigned long long _watchFastScanLastEndTicks;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_watchFastScanTimer;	// 184 = 0xb8
    NSMutableDictionary *_watchSetupDevices;	// 192 = 0xc0
    _Bool _watchMigrationEnabled;	// 200 = 0xc8
    unsigned long long _watchMigrationLastTicks;	// 208 = 0xd0
    _Bool _watchSetupEnabled;	// 216 = 0xd8
    SFBLEScanner *_watchSetupScanner;	// 224 = 0xe0
    _Bool _cdpEnabled;	// 232 = 0xe8
    int _iTunesNotifyToken;	// 236 = 0xec
    CUSystemMonitor *_manateeMonitor;	// 240 = 0xf0
    _Bool _manateeProblem;	// 248 = 0xf8
    unsigned long long _problemFlags;	// 256 = 0x100
    int _problemNotifyToken;	// 264 = 0x108
    _Bool _repairEnabled;	// 268 = 0x10c
    SFDeviceRepairService *_repairService;	// 272 = 0x110
    SFDeviceRepairSession *_repairSession;	// 280 = 0x118
    _Bool _repairSilent;	// 288 = 0x120
    NSObject<OS_dispatch_source> *_repairTimer;	// 296 = 0x128
    SFWiFiHealthMonitor *_wifiHealthMonitor;	// 304 = 0x130
    _Bool _wifiBad;	// 312 = 0x138
    _Bool _wifiBad8021x;	// 313 = 0x139
    _Bool _prefRepairAccounts;	// 314 = 0x13a
    _Bool _prefRepairHomeKit;	// 315 = 0x13b
    _Bool _prefRepairVPN;	// 316 = 0x13c
    _Bool _prefRepairWiFi;	// 317 = 0x13d
    _Bool _preventRepair;	// 318 = 0x13e
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 320 = 0x140
}

+ (id)sharedSetupAgent;	// IMP=0x0020000000049030
- (void).cxx_destruct;	// IMP=0x00200000000562a8
@property(nonatomic) _Bool preventRepair; // @synthesize preventRepair=_preventRepair;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testProxCardKit:(id)arg1;	// IMP=0x001000000005615e
- (void)testUIShareAudio:(id)arg1;	// IMP=0x0010000000055e75
- (void)testUIAppleTVSetup:(id)arg1;	// IMP=0x0010000000055c4c
- (void)testSetupUIWHA:(id)arg1;	// IMP=0x001000000005596e
- (void)testSetupUIWatch:(id)arg1;	// IMP=0x0010000000055816
- (void)testSetupUIPasswordSharing:(id)arg1;	// IMP=0x00100000000555c9
- (void)testSetupUIiOS:(id)arg1;	// IMP=0x0010000000055395
- (long long)extractParameter:(id)arg1 inString:(id)arg2;	// IMP=0x00100000000551b0
- (void)testSetupUIB238:(id)arg1;	// IMP=0x0010000000054c01
- (void)testRepairUI:(id)arg1;	// IMP=0x0010000000054a02
- (void)testPINHide;	// IMP=0x00100000000549fc
- (void)testPINShow:(id)arg1;	// IMP=0x00100000000549f6
- (void)testPairUI:(id)arg1;	// IMP=0x00100000000547cd
- (void)testNFCUI:(id)arg1;	// IMP=0x0010000000054677
- (void)testHomeKitDeviceDetected:(id)arg1;	// IMP=0x001000000005456d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005445c
- (void)_repairVPNError:(id)arg1;	// IMP=0x001000000005438f
- (void)_repairUpdateIDSCache;	// IMP=0x00100000000542e0
- (void)_repairSilentProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0010000000054076
- (void)_repairSilentStart:(id)arg1;	// IMP=0x0010000000053da7
- (void)_repairProblemFlagsChanged;	// IMP=0x0010000000053ce7
- (void)_repairProblemCheck;	// IMP=0x0010000000053c58
- (void)_repairHandleManateeChanged;	// IMP=0x0010000000053bcb
- (void)_repairHandleCompletion;	// IMP=0x0010000000053b1f
- (void)_repairEnsuredStopped;	// IMP=0x0010000000053926
- (void)_repairEnsuredStarted;	// IMP=0x0010000000052af8
- (void)_pwsHandleProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0010000000052903
- (void)_pwsHandleUserResponse:(int)arg1 device:(id)arg2 info:(id)arg3;	// IMP=0x0010000000052877
- (void)_pinPairHandleHidePIN;	// IMP=0x0010000000052871
- (void)_pinPairHandleShowPIN:(id)arg1;	// IMP=0x001000000005286b
- (void)_pinPairHandleRequest:(id)arg1;	// IMP=0x0010000000052401
- (void)_ensureServerStopped;	// IMP=0x00100000000522fc
- (void)_ensureServerStarted;	// IMP=0x0010000000051f3e
- (void)_wifiStateChanged;	// IMP=0x0010000000051ea5
- (void)_watchFound:(id)arg1;	// IMP=0x0010000000051a75
- (void)_watchFastScanStop;	// IMP=0x0010000000051997
- (void)_watchFastScanStartIfAllowed:(id)arg1;	// IMP=0x001000000005180f
- (void)_uiStopIfNeededWithDevice:(id)arg1;	// IMP=0x00100000000517a6
- (void)_uiStartForMacWithDevice:(id)arg1 label:(id)arg2 extraInfo:(id)arg3;	// IMP=0x00100000000516fe
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 extraInfo:(id)arg5;	// IMP=0x0010000000050e1d
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 unlessApps:(id)arg5 extraInfo:(id)arg6;	// IMP=0x0010000000050693
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 label:(id)arg3 unlessApps:(id)arg4 extraInfo:(id)arg5;	// IMP=0x001000000005066f
- (void)_uiStartWiFiPasswordSharing:(id)arg1;	// IMP=0x0010000000050375
- (void)_uiStartAuthenticateAccounts:(id)arg1;	// IMP=0x00100000000502fe
- (void)_uiStartProxCardKitTest:(id)arg1 extraInfo:(id)arg2;	// IMP=0x00100000000502ce
- (void)_uiStartSetupWHA:(id)arg1;	// IMP=0x001000000005029a
- (void)_uiStartSetupWatch:(id)arg1;	// IMP=0x00100000000501a2
- (void)_uiStartSetupiOS:(id)arg1 autoStart:(_Bool)arg2;	// IMP=0x001000000004ffe4
- (void)_uiStartSetupB238:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000004fe6c
- (void)_uiStartRepair:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x001000000004fd70
- (void)_uiStartPair:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000004fd3c
- (void)_uiStartHomeKitDeviceDetectedWithURL:(id)arg1;	// IMP=0x001000000004fc0d
- (void)_uiStartAppleTVSetup:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000004fbdd
- (_Bool)_uiShowing;	// IMP=0x001000000004fbcf
- (void)_uiLockStatusChanged;	// IMP=0x001000000004fad3
- (_Bool)_shouldOfferPassword:(id)arg1;	// IMP=0x001000000004f539
- (void)_screenStateChanged;	// IMP=0x001000000004f43d
- (_Bool)_screenLocked;	// IMP=0x001000000004f40e
- (void)_scanTimerFired;	// IMP=0x001000000004f359
- (MISSING_TYPE *)_resetTriggers;	// IMP=0x001000000004f303
- (void)_iTunesAccountsChanged;	// IMP=0x001000000004f283
- (void)_hsa2Changed;	// IMP=0x001000000004f1f9
- (void)_appleAccountSignIn:(id)arg1;	// IMP=0x001000000004f12e
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000004ef6d
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x001000000004ee47
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x001000000004ed21
- (void)_postDeviceSetupNotificationForDevice:(id)arg1 present:(_Bool)arg2;	// IMP=0x001000000004eb59
- (void)_launchAppWithMachServiceName:(id)arg1;	// IMP=0x001000000004e904
- (void)_deviceLost:(id)arg1;	// IMP=0x001000000004e7d8
- (void)_deviceFound:(id)arg1;	// IMP=0x001000000004d15c
- (void)_ensureClientStopped;	// IMP=0x001000000004ce49
- (void)_ensureClientStarted;	// IMP=0x001000000004c072
- (void)_update;	// IMP=0x001000000004bfe5
@property(readonly, nonatomic) _Bool uiShowing;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bce9
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ba92
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b9a5
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b656
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b560
- (_Bool)reenableProxCardType:(unsigned char)arg1;	// IMP=0x001000000004b1b3
- (void)prefsChanged;	// IMP=0x001000000004a988
- (void)_openSetupURL:(id)arg1;	// IMP=0x001000000004a7d6
- (void)openSetupURL:(id)arg1;	// IMP=0x001000000004a725
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a461
- (void)_invalidate;	// IMP=0x001000000004a3c8
- (void)invalidate;	// IMP=0x001000000004a364
- (void)_activate;	// IMP=0x001000000004a226
- (void)activate;	// IMP=0x001000000004a1c0
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000049219
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000490f8
- (id)init;	// IMP=0x0010000000049087

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
