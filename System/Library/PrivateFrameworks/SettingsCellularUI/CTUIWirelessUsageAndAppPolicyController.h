//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSString, PSSpecifier, PSUIAppDataUsageGroup;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    _Bool _shouldCalculateUsage;	// 192 = 0xc0
    PSSpecifier *_groupSpecifier;	// 200 = 0xc8
    PSUIAppDataUsageGroup *_appDataUsageGroup;	// 208 = 0xd0
    CoreTelephonyClient *_coreTelephonyClient;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000042a1b
@property _Bool shouldCalculateUsage; // @synthesize shouldCalculateUsage=_shouldCalculateUsage;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup; // @synthesize appDataUsageGroup=_appDataUsageGroup;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (id)selectSpecifier:(id)arg1;	// IMP=0x00000000000428fd
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x00000000000428f5
- (void)managedConfigurationProfileListDidChange;	// IMP=0x0000000000042823
- (void)managedConfigurationSettingsDidChange;	// IMP=0x0000000000042751
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;	// IMP=0x000000000004267f
- (void)_handleCellularPlanChangedNotification:(id)arg1;	// IMP=0x00000000000425ff
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x00000000000425b0
- (void)_handleNewCarrierNotification:(id)arg1;	// IMP=0x0000000000042593
- (id)specifiers;	// IMP=0x0000000000042417
- (void)dealloc;	// IMP=0x00000000000423a2
- (id)init;	// IMP=0x0000000000042099

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

