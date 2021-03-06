//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitSettingItemProtocol-Protocol.h>
#import <Home/HFHomeKitSettingsVendorProvider-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessorySelectionSetting, HMSettingGroup, NSDictionary, NSString;
@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingGroupItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider>
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;	// 8 = 0x8
    HFAccessorySettingsEntity *_entity;	// 16 = 0x10
    NSDictionary *_usageOptions;	// 24 = 0x18
    HMSettingGroup *_settingGroup;	// 32 = 0x20
    HMAccessorySelectionSetting *_selectionSetting;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000dda3a
@property(readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // @synthesize selectionSetting=_selectionSetting;
@property(readonly, nonatomic) HMSettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
- (_Bool)_useManagedConfigurationForProfiles;	// IMP=0x00000000000dd7e4
- (void)_decorateHiddenOrDisabled:(id)arg1;	// IMP=0x00000000000dd155
- (_Bool)_validateKeyPathDependencies;	// IMP=0x00000000000dccee
- (id)_displayTitle;	// IMP=0x00000000000dcb3b
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000dc220
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) NSString *settingKeyPath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbf57
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 selectionSetting:(id)arg3;	// IMP=0x00000000000dbd15
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;	// IMP=0x00000000000dbad3
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 entity:(id)arg3;	// IMP=0x00000000000db98e
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2;	// IMP=0x00000000000db8d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

