//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSystemPolicyForAppDelegate-Protocol.h>

@class NSString, PSSystemPolicyForApp;

@interface PSThirdPartyAppController <PSSystemPolicyForAppDelegate>
{
    PSSystemPolicyForApp *_systemPolicy;	// 8 = 0x8
    PSSystemPolicyForApp *_appPolicy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e3221
@property(retain, nonatomic) PSSystemPolicyForApp *appPolicy; // @synthesize appPolicy=_appPolicy;
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
- (id)bundle;	// IMP=0x00000000000e2fa0
- (id)loadSpecifiers;	// IMP=0x00000000000e2398
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e2357
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000e22df
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;	// IMP=0x00000000000e2251
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000e21d6
- (void)showPrivacyControllerForBundleName:(id)arg1;	// IMP=0x00000000000e2008
- (void)showPrivacyControllerForBundleID:(id)arg1;	// IMP=0x00000000000e1e2a
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000e1d40
- (id)_readToggleSwitchSpecifierValue:(id)arg1;	// IMP=0x00000000000e1b8b
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000e1a96
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000e19e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
