//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUUserItemManager-Protocol.h>

@class HFItem, HFUserItem, HMHome, HMUser, NSString;

@interface HURemoteAccessItemManager : HFItemManager <HUUserItemManager>
{
    HFItem *_allowRemoteAccessItem;	// 8 = 0x8
    HFItem *_allowRemoteAccessFooterItem;	// 16 = 0x10
    HMHome *_homeForUser;	// 24 = 0x18
    HFItem *_removeItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000fe328
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HMHome *homeForUser; // @synthesize homeForUser=_homeForUser;
@property(retain, nonatomic) HFItem *allowRemoteAccessFooterItem; // @synthesize allowRemoteAccessFooterItem=_allowRemoteAccessFooterItem;
@property(retain, nonatomic) HFItem *allowRemoteAccessItem; // @synthesize allowRemoteAccessItem=_allowRemoteAccessItem;
- (_Bool)_isAllowedToEditTargetUser;	// IMP=0x00000000000fe14b
- (_Bool)_hasResidentDevice;	// IMP=0x00000000000fe0c2
- (_Bool)_isUserBeingEditedTheDeviceUser;	// IMP=0x00000000000fe027
- (_Bool)_isUserOwner:(id)arg1;	// IMP=0x00000000000fdf91
- (_Bool)_isEditingAllowedForUser:(id)arg1;	// IMP=0x00000000000fdefb
- (_Bool)_isRemoteAccessAllowedForUser:(id)arg1;	// IMP=0x00000000000fde65
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000000fdb5a
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000000fd421
- (id)_homeFuture;	// IMP=0x00000000000fd3be
@property(readonly, nonatomic) HMUser *user;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000000fd2b9
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000fd23d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HFUserItem *sourceItem; // @dynamic sourceItem;
@property(readonly) Class superclass;

@end

