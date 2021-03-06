//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModule;

@interface HUAccessorySettingsItemManager : HFItemManager
{
    HFAccessorySettingGroupItem *_groupItem;	// 8 = 0x8
    HUAccessorySettingsItemModule *_accessorySettingsSectionItemModule;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000115492
@property(retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule; // @synthesize accessorySettingsSectionItemModule=_accessorySettingsSectionItemModule;
@property(retain, nonatomic) HFAccessorySettingGroupItem *groupItem; // @synthesize groupItem=_groupItem;
- (void)_unregisterForExternalUpdates;	// IMP=0x00000000001153de
- (void)_registerForExternalUpdates;	// IMP=0x0000000000115374
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001152e0
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000115266
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;	// IMP=0x0000000000115139

@end

