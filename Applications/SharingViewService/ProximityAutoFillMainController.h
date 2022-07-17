//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAContext, NSArray, NSMutableDictionary, NSObject, NSString, NSUUID, ProximityAutoFillAuthViewController, ProximityAutoFillDoneViewController, ProximityAutoFillStartViewController, SFDevice, SFDeviceDiscovery, SFRemoteAutoFillSession, SVSCommonNavController, UIStoryboard, UIViewController, VPScannerViewController, _SFAppAutoFillPasswordViewController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ProximityAutoFillMainController
{
    SFRemoteAutoFillSession *_autoFillSession;	// 24 = 0x18
    LAContext *_authContext;	// 32 = 0x20
    int _authState;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    CDUnknownBlockType _credentialsHandler;	// 56 = 0x38
    SFDeviceDiscovery *_deviceDiscovery;	// 64 = 0x40
    NSMutableDictionary *_devices;	// 72 = 0x48
    SFDevice *_device;	// 80 = 0x50
    _Bool _dismissed;	// 88 = 0x58
    NSString *_localizedAppName;	// 96 = 0x60
    NSString *_peerContactID;	// 104 = 0x68
    NSString *_pickedUsername;	// 112 = 0x70
    NSString *_pickedPassword;	// 120 = 0x78
    int _pickerState;	// 128 = 0x80
    NSString *_pin;	// 136 = 0x88
    ProximityAutoFillAuthViewController *_vcAuth;	// 144 = 0x90
    ProximityAutoFillDoneViewController *_vcDone;	// 152 = 0x98
    SVSCommonNavController *_vcNav;	// 160 = 0xa0
    _SFAppAutoFillPasswordViewController *_vcPicker;	// 168 = 0xa8
    ProximityAutoFillStartViewController *_vcStart;	// 176 = 0xb0
    VPScannerViewController *_vcVisualAuth;	// 184 = 0xb8
    UIViewController *_vcVisualAuthParent;	// 192 = 0xc0
    _Bool _visualAuthTryingCode;	// 200 = 0xc8
    unsigned long long _visualAuthNextTicks;	// 208 = 0xd0
    NSString *_unlocalizedAppName;	// 216 = 0xd8
    NSArray *_associatedDomains;	// 224 = 0xe0
    NSString *_url;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_workQueue;	// 240 = 0xf0
    _Bool _prefAutoPayload;	// 248 = 0xf8
    _Bool _prefHideTTR;	// 249 = 0xf9
    _Bool _prefSkipAuth;	// 250 = 0xfa
    unsigned long long _badPINCount;	// 256 = 0x100
    NSString *_deviceAddress;	// 264 = 0x108
    NSUUID *_deviceIdentifier;	// 272 = 0x110
    UIStoryboard *_mainStoryboard;	// 280 = 0x118
    long long _testMode;	// 288 = 0x120
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000001af0d8
- (void).cxx_destruct;	// IMP=0x00200000001ae556
@property(nonatomic) long long testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool prefSkipAuth; // @synthesize prefSkipAuth=_prefSkipAuth;
@property(readonly, nonatomic) _Bool prefHideTTR; // @synthesize prefHideTTR=_prefHideTTR;
@property(retain, nonatomic) UIStoryboard *mainStoryboard; // @synthesize mainStoryboard=_mainStoryboard;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) unsigned long long badPINCount; // @synthesize badPINCount=_badPINCount;
- (void)_tryPIN:(id)arg1;	// IMP=0x00100000001ae3de
- (void)_handlePromptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00100000001ae2e7
- (void)_handlePairingFinished;	// IMP=0x00100000001ae27a
- (void)sessionStop;	// IMP=0x00100000001ae1ee
- (void)sessionStart;	// IMP=0x00100000001adf9e
- (void)passwordViewController:(id)arg1 selectedCredential:(id)arg2;	// IMP=0x00100000001addd7
- (void)passwordViewControllerDidFinish:(id)arg1;	// IMP=0x00100000001add6e
- (id)deviceForSession;	// IMP=0x00100000001adcd0
- (void)_deviceLost:(id)arg1;	// IMP=0x00100000001adcca
- (void)_deviceFound:(id)arg1;	// IMP=0x00100000001adaa3
- (void)_deviceChanged:(id)arg1;	// IMP=0x00100000001ada9d
- (void)deviceDiscoveryStop;	// IMP=0x00100000001ada65
- (void)deviceDiscoveryStart;	// IMP=0x00100000001ad8a0
- (void)showPasswordPickerUI;	// IMP=0x00100000001ad605
- (void)_handleVisualAuthScannedCode:(id)arg1;	// IMP=0x00100000001ad4a3
- (void)_handleVisualAuthEvent:(long long)arg1;	// IMP=0x00100000001ad290
- (void)showPairingUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00100000001acf87
- (void)showDoneUI:(id)arg1;	// IMP=0x00100000001acdf0
- (void)showAuthenticateUI;	// IMP=0x00100000001aca87
- (void)handlePasswordPicked:(id)arg1;	// IMP=0x00100000001ac895
- (void)handleButtonActions:(id)arg1;	// IMP=0x00000000001ac6ec
- (void)fileRadar:(id)arg1;	// IMP=0x00100000001ac29f
- (void)ensureStoppedWithDismiss:(_Bool)arg1 reason:(int)arg2;	// IMP=0x00100000001ac0f6
- (void)ensureStoppedWithDismiss:(_Bool)arg1;	// IMP=0x00100000001ac0df
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001abfee
- (void)dismiss:(int)arg1;	// IMP=0x00100000001abfda
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001abe1e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001abc1c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001abbdb
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ab734
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001ab66c
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x00100000001ab664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
