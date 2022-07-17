//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    NSMutableSet *_programmableSwitchAccessoryItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000207271
@property(retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems; // @synthesize programmableSwitchAccessoryItems=_programmableSwitchAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;	// IMP=0x00000000002071a4
- (id)items;	// IMP=0x000000000020715c
- (id)reloadItems;	// IMP=0x0000000000206dfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000206d98
- (id)init;	// IMP=0x0000000000206ce3
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000206c54

@end
