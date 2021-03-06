//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUAccessorySettingsItemModuleControllerDelegate-Protocol.h>

@class HFAccessorySettingGroupItem, HFAccessorySettingItem, HUAccessorySettingsItemModuleController, NSString;

@interface HUAccessorySettingsDetailsViewController <HUAccessorySettingsItemModuleControllerDelegate, HUAccessorySettingsDetailsViewControllerProtocol>
{
    HFAccessorySettingGroupItem *_groupItem;	// 8 = 0x8
    HUAccessorySettingsItemModuleController *_accessorySettingsItemModuleController;	// 16 = 0x10
    HFAccessorySettingItem *_fileUploadItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024c0e0
@property(retain, nonatomic) HFAccessorySettingItem *fileUploadItem; // @synthesize fileUploadItem=_fileUploadItem;
@property(retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController; // @synthesize accessorySettingsItemModuleController=_accessorySettingsItemModuleController;
@property(retain, nonatomic) HFAccessorySettingGroupItem *groupItem; // @synthesize groupItem=_groupItem;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000024bf4d
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;	// IMP=0x000000000024bde2
- (id)itemModuleControllers;	// IMP=0x000000000024bcba
- (id)accessorySettingsItemManager;	// IMP=0x000000000024bc55
- (id)initWithAccessoryGroupItem:(id)arg1;	// IMP=0x000000000024bb9c
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x000000000024bae7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

