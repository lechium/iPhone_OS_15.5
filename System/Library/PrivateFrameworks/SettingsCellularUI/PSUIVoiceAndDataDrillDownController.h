//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

#import <SettingsCellularUI/CoreTelephonyClientCapabilitiesDelegate-Protocol.h>
#import <SettingsCellularUI/UIAlertViewDelegate-Protocol.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, NSString, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate>
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 216 = 0xd8
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;	// 224 = 0xe0
    int _currentRATMode;	// 232 = 0xe8
    CoreTelephonyClient *_ctClient;	// 240 = 0xf0
    CTServiceDescriptor *_serviceDescriptor;	// 248 = 0xf8
    Logger *_logger;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000002f391
- (id)getLogger;	// IMP=0x000000000002f331
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;	// IMP=0x000000000002f2bc
- (void)airplaneModeChanged;	// IMP=0x000000000002f20f
- (void)handleMaxDataRateChanged;	// IMP=0x000000000002f19a
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x000000000002f125
- (void)listItemSelected:(id)arg1;	// IMP=0x000000000002f072
- (id)identifierForRATMode:(int)arg1;	// IMP=0x000000000002f02d
- (int)RATModeForSpecifier:(id)arg1;	// IMP=0x000000000002efbc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002ef21
- (_Bool)shouldShow5GSASwitch:(id)arg1;	// IMP=0x000000000002eefb
- (_Bool)shouldShowFooterTextWithVoiceExplanation;	// IMP=0x000000000002eed4
- (_Bool)shouldShowVoLTESwitch;	// IMP=0x000000000002eea3
- (id)getSwitchSpecifiers;	// IMP=0x000000000002ec59
- (void)updateCurrentRATModeFromSpecifier:(id)arg1;	// IMP=0x000000000002ec02
- (void)set5GRATModeSpecifierEnabledState:(id)arg1;	// IMP=0x000000000002eb65
- (void)configure5GRATModeSpecifiersEnabledState;	// IMP=0x000000000002ea8c
- (_Bool)shouldEnable5GRATModeSpecifiers;	// IMP=0x000000000002e8c8
- (void)setRATGroupFooterText;	// IMP=0x000000000002e689
- (void)configureSpecifiers;	// IMP=0x000000000002e65b
- (void)setUpRATModeSpecifierIdentifiers:(id)arg1;	// IMP=0x000000000002e43c
- (void)prepareSpecifiers:(id)arg1;	// IMP=0x000000000002e3c3
- (void)reloadSpecifier:(id)arg1;	// IMP=0x000000000002e2b0
- (id)specifiers;	// IMP=0x000000000002e198
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000002e0c6
- (void)startObservingNotifications;	// IMP=0x000000000002e00f
- (id)init;	// IMP=0x000000000002df39
- (id)initWithCTClient:(id)arg1 switchFactory:(id)arg2;	// IMP=0x000000000002de6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
