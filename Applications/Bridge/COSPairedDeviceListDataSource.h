//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifierDataSource.h>

@class NRDevice, NSArray, NSString, PSSpecifier;

@interface COSPairedDeviceListDataSource : PSSpecifierDataSource
{
    NRDevice *_loadingDevice;	// 8 = 0x8
    PSSpecifier *_pairedDevicesGroupSpecifier;	// 16 = 0x10
    NSArray *_pairedDeviceSpecifiers;	// 24 = 0x18
    PSSpecifier *_tinkerDevicesGroupSpecifier;	// 32 = 0x20
    NSArray *_tinkerDeviceSpecifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d4edf
@property(retain, nonatomic) NSArray *tinkerDeviceSpecifiers; // @synthesize tinkerDeviceSpecifiers=_tinkerDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *tinkerDevicesGroupSpecifier; // @synthesize tinkerDevicesGroupSpecifier=_tinkerDevicesGroupSpecifier;
@property(retain, nonatomic) NSArray *pairedDeviceSpecifiers; // @synthesize pairedDeviceSpecifiers=_pairedDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *pairedDevicesGroupSpecifier; // @synthesize pairedDevicesGroupSpecifier=_pairedDevicesGroupSpecifier;
@property(retain, nonatomic) NRDevice *loadingDevice; // @synthesize loadingDevice=_loadingDevice;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000d4c96
- (void)presentInternalFlow;	// IMP=0x00100000000d4c52
- (void)presentNewPairingFlowIfPossible;	// IMP=0x00100000000d4bf8
- (void)tappedMigrate:(id)arg1;	// IMP=0x00100000000d4b0b
- (void)deviceBecameActive;	// IMP=0x00100000000d4a76
- (void)_updateSelectedWatchInGroupSpecifier:(id)arg1 deviceSpecifiers:(id)arg2;	// IMP=0x00100000000d45f0
- (void)updateSelectedWatch;	// IMP=0x00100000000d44c8
- (void)loadSpecifiers;	// IMP=0x00100000000d2e77
- (id)newDeviceSpecifierForNRDevice:(id)arg1 enableCell:(_Bool)arg2 deviceState:(id)arg3;	// IMP=0x00100000000d2c21
- (id)_fakeList;	// IMP=0x00100000000d282b
- (id)_fakeWatchName:(unsigned long long)arg1;	// IMP=0x00100000000d2799
- (void)_reloadForDeviceStateChange:(id)arg1;	// IMP=0x00100000000d2787
- (void)magicSwitchStateChanged;	// IMP=0x00100000000d2775
- (void)dealloc;	// IMP=0x00100000000d26e4
- (id)init;	// IMP=0x00100000000d253b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
