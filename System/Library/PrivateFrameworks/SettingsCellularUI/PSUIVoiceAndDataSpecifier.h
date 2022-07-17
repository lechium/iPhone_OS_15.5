//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, NSArray, PSConfirmationSpecifier, PSListController, PSUICoreTelephonyCallCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyRegistrationCache, PSUIDeviceWiFiState;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataSpecifier : PSSpecifier
{
    PSListController *_hostController;	// 184 = 0xb8
    PSSpecifier *_mobileDataGroup;	// 192 = 0xc0
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 200 = 0xc8
    CTServiceDescriptor *_serviceDescriptor;	// 208 = 0xd0
    CoreTelephonyClient *_ctClient;	// 216 = 0xd8
    PSListController *_drillDownController;	// 224 = 0xe0
    PSUICoreTelephonyCallCache *_callCache;	// 232 = 0xe8
    PSUICoreTelephonyRegistrationCache *_regCache;	// 240 = 0xf0
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 248 = 0xf8
    PSUIDeviceWiFiState *_deviceWifiState;	// 256 = 0x100
    NSArray *_supportedDataRates;	// 264 = 0x108
    _Bool _3GOverrideTo4G;	// 272 = 0x110
    _Bool _LTEOverrideTo4G;	// 273 = 0x111
    PSConfirmationSpecifier *_warningFor5G;	// 280 = 0x118
    _Bool _showLegacyRAT;	// 288 = 0x120
    Logger *_logger;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000027439
- (id)getLogger;	// IMP=0x000000000002741c
- (id)getLocalizedStringFromRATMode:(int)arg1;	// IMP=0x0000000000027128
- (id)getRATModesFromDataRate:(long long)arg1;	// IMP=0x000000000002706a
- (id)getLocalizedStringsFromDataRate:(long long)arg1;	// IMP=0x0000000000026e9a
- (void)handleMaxDataRateChanged;	// IMP=0x0000000000026dfd
- (void)setSmartDataModeState:(int)arg1;	// IMP=0x0000000000026c86
- (id)getSmartDataModeState;	// IMP=0x0000000000026ac8
- (id)suffixStringFromRATMode:(int)arg1;	// IMP=0x0000000000026a2b
- (id)localizedWarningStringForKey:(id)arg1 andRATMode:(int)arg2;	// IMP=0x0000000000026979
- (int)warningRATModeForTargetMode:(int)arg1 currentMode:(int)arg2;	// IMP=0x000000000002696c
- (id)localizedRATModeStringForPrefix:(id)arg1 targetMode:(int)arg2;	// IMP=0x0000000000026857
- (void)canceledRATSelectionDuringCall;	// IMP=0x0000000000026769
- (void)acceptedRATSelectionDuringCall:(id)arg1;	// IMP=0x000000000002668a
- (id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;	// IMP=0x0000000000026347
- (void)showCallMayEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;	// IMP=0x00000000000261e4
- (void)rejected5GWarning;	// IMP=0x00000000000260f6
- (void)accepted5GWarning:(id)arg1;	// IMP=0x000000000002601b
- (void)update5GWarningSpecifierTargetRATModeWithUserInput:(id)arg1;	// IMP=0x0000000000025ff7
- (void)setUp5GWarningSpecifier:(id)arg1;	// IMP=0x0000000000025c67
- (void)show5GUnsupportedWarning:(id)arg1;	// IMP=0x0000000000025b8d
- (_Bool)shouldShowCallEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;	// IMP=0x0000000000025b15
- (_Bool)shouldShow5GUnsupportedWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;	// IMP=0x0000000000025adc
- (void)setMaxDataRateForRATMode:(int)arg1;	// IMP=0x00000000000255de
- (void)setRATMode:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000254b4
- (id)getRATMode;	// IMP=0x000000000002523b
- (void)populateSpecifiers:(id)arg1 values:(id)arg2;	// IMP=0x0000000000024fc6
- (void)setUpRATSpecifers;	// IMP=0x0000000000024e02
- (_Bool)shouldOverrideRATModeForCBKey:(id)arg1;	// IMP=0x0000000000024d14
- (void)setUpInternalState;	// IMP=0x00000000000249fb
- (void)startObservingNotifications;	// IMP=0x0000000000024994
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;	// IMP=0x00000000000247bb
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 serviceDescriptor:(id)arg6 coreTelephonyClient:(id)arg7 callCache:(id)arg8 registrationCache:(id)arg9 carrierBundleCache:(id)arg10 deviceWifiState:(id)arg11;	// IMP=0x000000000002441c

@end
