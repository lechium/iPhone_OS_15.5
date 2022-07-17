//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMUser, NSMutableSet;

@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider
{
    NSMutableSet *_items;	// 8 = 0x8
    HMUser *_user;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000acd44
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
- (id)invalidationReasons;	// IMP=0x00000000000acc9c
- (id)reloadItems;	// IMP=0x00000000000ac7d2
- (id)init;	// IMP=0x00000000000ac71d
- (id)initWithUser:(id)arg1 home:(id)arg2;	// IMP=0x00000000000ac65a

@end
