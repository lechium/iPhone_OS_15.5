//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFItem, HMAccessory, HUConnectedEcosystemsItemProvider;

@interface HUConnectedEcosystemsItemManager : HFItemManager
{
    HMAccessory *_accessory;	// 8 = 0x8
    HUConnectedEcosystemsItemProvider *_connectedEcosystemsItemProvider;	// 16 = 0x10
    HFItem *_instructionsItem;	// 24 = 0x18
}

+ (CDUnknownBlockType)connectedEcosystemsItemComparator;	// IMP=0x000000000027f571
- (void).cxx_destruct;	// IMP=0x000000000027fa27
@property(retain, nonatomic) HFItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property(retain, nonatomic) HUConnectedEcosystemsItemProvider *connectedEcosystemsItemProvider; // @synthesize connectedEcosystemsItemProvider=_connectedEcosystemsItemProvider;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000027f321
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000027f106
- (id)initWithAccessory:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000027f08c
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x000000000027efd7

@end
