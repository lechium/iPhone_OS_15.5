//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController
{
    UIButton *_footerButton;	// 184 = 0xb8
    UILabel *_footerLabel;	// 192 = 0xc0
    NSString *_generatedCode;	// 200 = 0xc8
    double _keyboardHeight;	// 208 = 0xd0
    _Bool _showsAdvancedSettings;	// 216 = 0xd8
    int _mode;	// 220 = 0xdc
    int _securityCodeType;	// 224 = 0xe0
    NSString *_firstPasscodeEntry;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000028ba2
@property(retain, nonatomic) NSString *firstPasscodeEntry; // @synthesize firstPasscodeEntry=_firstPasscodeEntry;
@property(nonatomic) _Bool showsAdvancedSettings; // @synthesize showsAdvancedSettings=_showsAdvancedSettings;
@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)dismissAlerts;	// IMP=0x0000000000028ada
- (void)forgotSecurityCode;	// IMP=0x000000000002838a
- (void)showAdvancedOptions;	// IMP=0x0000000000028325
- (void)textEntryViewDidChange:(id)arg1;	// IMP=0x00000000000282e4
- (void)generateRandomCode;	// IMP=0x00000000000281e9
- (void)updateNextButton;	// IMP=0x0000000000027ea5
- (void)didFinishEnteringText:(id)arg1;	// IMP=0x00000000000277c4
- (void)animatePasscodeFieldLeft:(_Bool)arg1;	// IMP=0x000000000002733d
- (id)placeholderText;	// IMP=0x0000000000027288
- (id)specifiers;	// IMP=0x00000000000268dc
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002613d
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000026059
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000026018
- (void)viewDidLoad;	// IMP=0x0000000000025e2b
- (id)textEntryCell;	// IMP=0x0000000000025e19
- (id)_configureTextEntryCell;	// IMP=0x0000000000025ba6
- (Class)textEntryCellClass;	// IMP=0x0000000000025b4e
- (void)dealloc;	// IMP=0x0000000000025ad9
- (id)init;	// IMP=0x00000000000259f9

@end

