//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HULocationConnectedEcosystemsItemProvider : HFItemProvider
{
    HMHome *_home;	// 8 = 0x8
    NSMutableSet *_connectedEcosystemsItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026cc7f
@property(retain, nonatomic) NSMutableSet *connectedEcosystemsItems; // @synthesize connectedEcosystemsItems=_connectedEcosystemsItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)items;	// IMP=0x000000000026cc37
- (id)reloadItems;	// IMP=0x000000000026c859
- (id)initWithHome:(id)arg1;	// IMP=0x000000000026c7ba
- (id)init;	// IMP=0x000000000026c705

@end

