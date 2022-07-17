//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUUserItemManager-Protocol.h>

@class HFItem, HFUserItem, HMHome, HMUser, HUAccessorySettingsItemModule, HULocationDeviceManager, NSArray, NSString;

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager>
{
    HFItem *_localAccessItem;	// 8 = 0x8
    HFItem *_remoteAccessItem;	// 16 = 0x10
    HFItem *_allowEditingItem;	// 24 = 0x18
    HFItem *_camerasItem;	// 32 = 0x20
    HFItem *_locksItem;	// 40 = 0x28
    HFItem *_pendingAccessoriesItem;	// 48 = 0x30
    HFItem *_personalRequestsItem;	// 56 = 0x38
    HFItem *_personalRequestsFooterItem;	// 64 = 0x40
    HFItem *_tvViewingProfilesItem;	// 72 = 0x48
    HUAccessorySettingsItemModule *_userSettingsItemModule;	// 80 = 0x50
    NSArray *_supportedMULanguageCodes;	// 88 = 0x58
    HMHome *_homeForUser;	// 96 = 0x60
    HFItem *_removeItem;	// 104 = 0x68
    NSArray *_sectionOrderArrayWhenViewingSelf;	// 112 = 0x70
    NSArray *_sectionOrderArrayWhenViewingOther;	// 120 = 0x78
    HULocationDeviceManager *_locationDeviceManager;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000088850
@property(retain, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(retain, nonatomic) NSArray *sectionOrderArrayWhenViewingOther; // @synthesize sectionOrderArrayWhenViewingOther=_sectionOrderArrayWhenViewingOther;
@property(retain, nonatomic) NSArray *sectionOrderArrayWhenViewingSelf; // @synthesize sectionOrderArrayWhenViewingSelf=_sectionOrderArrayWhenViewingSelf;
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HMHome *homeForUser; // @synthesize homeForUser=_homeForUser;
@property(retain, nonatomic) NSArray *supportedMULanguageCodes; // @synthesize supportedMULanguageCodes=_supportedMULanguageCodes;
@property(retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule; // @synthesize userSettingsItemModule=_userSettingsItemModule;
@property(retain, nonatomic) HFItem *tvViewingProfilesItem; // @synthesize tvViewingProfilesItem=_tvViewingProfilesItem;
@property(readonly, nonatomic) HFItem *personalRequestsFooterItem; // @synthesize personalRequestsFooterItem=_personalRequestsFooterItem;
@property(retain, nonatomic) HFItem *personalRequestsItem; // @synthesize personalRequestsItem=_personalRequestsItem;
@property(retain, nonatomic) HFItem *pendingAccessoriesItem; // @synthesize pendingAccessoriesItem=_pendingAccessoriesItem;
@property(retain, nonatomic) HFItem *locksItem; // @synthesize locksItem=_locksItem;
@property(retain, nonatomic) HFItem *camerasItem; // @synthesize camerasItem=_camerasItem;
@property(retain, nonatomic) HFItem *allowEditingItem; // @synthesize allowEditingItem=_allowEditingItem;
@property(retain, nonatomic) HFItem *remoteAccessItem; // @synthesize remoteAccessItem=_remoteAccessItem;
@property(retain, nonatomic) HFItem *localAccessItem; // @synthesize localAccessItem=_localAccessItem;
- (void)_updateSiriSectionFooterForSection:(id)arg1;	// IMP=0x00000000000882fb
- (_Bool)_isVoiceIDEnabled:(id)arg1;	// IMP=0x0000000000087f66
- (_Bool)_isTVViewingProfilesEnabledForUser;	// IMP=0x0000000000087ea9
- (_Bool)_isPersonalRequestsEnabledForUser;	// IMP=0x0000000000087d92
- (_Bool)_canModifyUserBeingEditedPermissions;	// IMP=0x0000000000087c49
- (_Bool)_hasPendingAccessories;	// IMP=0x0000000000087bb9
- (_Bool)_hasTVViewingProfilesDevice;	// IMP=0x0000000000087b28
- (_Bool)_hasPersonalRequestsDevice;	// IMP=0x0000000000087a97
- (_Bool)_hasResidentDevice;	// IMP=0x0000000000087a0e
- (_Bool)_isUserBeingEditedTheDeviceUser;	// IMP=0x0000000000087973
- (_Bool)_isUserOwner:(id)arg1;	// IMP=0x00000000000878dd
- (_Bool)_isEditingAllowedForUser:(id)arg1;	// IMP=0x0000000000087847
- (_Bool)_isRemoteAccessAllowedForUser:(id)arg1;	// IMP=0x00000000000877b1
- (void)_unregisterForExternalUpdates;	// IMP=0x0000000000087782
- (void)_registerForExternalUpdates;	// IMP=0x0000000000087753
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x00000000000874a2
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000000859c8
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000000836e5
- (id)_homeFuture;	// IMP=0x0000000000083682
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1;	// IMP=0x00000000000835d9
@property(readonly, nonatomic) HMUser *userBeingEdited;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000000834d4
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000832bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HFUserItem *sourceItem; // @dynamic sourceItem;
@property(readonly) Class superclass;

@end
