//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUUserItemManager-Protocol.h>

@class HFItem, HFUserItem, HMHome, HMUser, NSArray, NSString;

@interface HUUserCamerasAccessLevelItemManager : HFItemManager <HUUserItemManager>
{
    NSArray *_accessLevelItems;	// 8 = 0x8
    HMHome *_homeForUser;	// 16 = 0x10
    HFItem *_removeItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000175dc1
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HMHome *homeForUser; // @synthesize homeForUser=_homeForUser;
@property(retain, nonatomic) NSArray *accessLevelItems; // @synthesize accessLevelItems=_accessLevelItems;
- (_Bool)_isAllowedToEditTargetUser;	// IMP=0x0000000000175c09
- (_Bool)_isUserBeingEditedTheDeviceUser;	// IMP=0x0000000000175b6e
- (_Bool)_isUserOwner:(id)arg1;	// IMP=0x0000000000175ad8
- (_Bool)_isEditingAllowedForUser:(id)arg1;	// IMP=0x0000000000175a42
- (unsigned long long)_accessLevelForUser:(id)arg1;	// IMP=0x00000000001759ac
- (id)_cameraAccessLevels;	// IMP=0x000000000017599f
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000175563
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000001750f5
- (id)_homeFuture;	// IMP=0x0000000000175092
@property(readonly, nonatomic) HMUser *user;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x0000000000174f8d
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000174f11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HFUserItem *sourceItem; // @dynamic sourceItem;
@property(readonly) Class superclass;

@end
