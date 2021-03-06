//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate-Protocol.h>
#import <Preferences/KeychainSyncViewControllerDelegate-Protocol.h>
#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class KeychainSyncCountryInfo, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSArray, NSString, PSKeychainSyncManager, PSSetupController, PSSpecifier;

@interface PSAccountSecurityController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate>
{
    PSSpecifier *_recoverySwitch;	// 184 = 0xb8
    NSArray *_passcodeSpecifiers;	// 192 = 0xc0
    PSSetupController *_devicePasscodeChangeSetupController;	// 200 = 0xc8
    KeychainSyncDevicePINController *_devicePINController;	// 208 = 0xd0
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;	// 216 = 0xd8
    NSString *_SMSTarget;	// 224 = 0xe0
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;	// 232 = 0xe8
    _Bool _secureBackupEnabled;	// 240 = 0xf0
    PSKeychainSyncManager *_manager;	// 248 = 0xf8
    int _securityCodeType;	// 256 = 0x100
    NSString *_securityCode;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000000968e3
@property(retain, nonatomic) NSString *securityCode; // @synthesize securityCode=_securityCode;
@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
- (void)cancelPressed;	// IMP=0x00000000000967f9
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;	// IMP=0x00000000000966c0
- (void)_setShowsDoneButton:(_Bool)arg1;	// IMP=0x000000000009656d
- (void)navDonePressed;	// IMP=0x0000000000096534
- (void)navCancelPressed;	// IMP=0x00000000000964ea
- (void)saveSMSTargetChanges;	// IMP=0x0000000000095a95
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000009579a
- (void)handleBurnedRecord;	// IMP=0x0000000000095588
- (id)useRecoveryForSepecifier:(id)arg1;	// IMP=0x0000000000095561
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000952a4
- (void)disableRecovery;	// IMP=0x0000000000094e3c
- (void)changeSecurityCode:(id)arg1;	// IMP=0x0000000000094db2
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;	// IMP=0x0000000000094760
- (void)reloadSpecifiers;	// IMP=0x00000000000946fd
- (id)specifiers;	// IMP=0x0000000000093a80
- (id)passcodeSpecifiers;	// IMP=0x0000000000093958
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000935c6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000093573
- (id)init;	// IMP=0x0000000000093516

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

