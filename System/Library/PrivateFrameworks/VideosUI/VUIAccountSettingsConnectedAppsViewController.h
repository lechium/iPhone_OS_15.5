//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsConnectedAppsViewController : PSListController
{
    PSSpecifier *_appGroup;	// 192 = 0xc0
    NSArray *_appSpecifiers;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000247a69
- (long long)_alertStyle;	// IMP=0x00000000002479e5
- (void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2;	// IMP=0x0000000000246ad8
- (void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2;	// IMP=0x0000000000246071
- (void)_showVppaExpiredPrompt:(id)arg1;	// IMP=0x0000000000245e02
- (void)_showPrivacySheet:(id)arg1;	// IMP=0x0000000000245cc2
- (id)_accessStatusForSpecifier:(id)arg1;	// IMP=0x0000000000245bc9
- (void)_toggleSpecifier:(id)arg1 sender:(id)arg2;	// IMP=0x000000000024578b
- (void)_stopAppSpinner;	// IMP=0x0000000000245739
- (void)_startAppSpinner;	// IMP=0x00000000002456e7
- (void)_loadAppGroup;	// IMP=0x0000000000244cae
- (void)_addPrivacyFooterToGroup:(id)arg1;	// IMP=0x0000000000244a50
- (id)_appGroupSpecifier;	// IMP=0x00000000002448c7
- (id)specifiers;	// IMP=0x0000000000244819
- (void)viewDidLoad;	// IMP=0x00000000002446fa

@end
