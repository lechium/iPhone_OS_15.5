//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome;
@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;

@interface HUQuickControlViewControllerConfiguration : NSObject
{
    _Bool _copyItems;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    id <HUQuickControlItemUpdating> _itemUpdater;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004322f0
@property(nonatomic) _Bool copyItems; // @synthesize copyItems=_copyItems;
@property(retain, nonatomic) id <HUQuickControlItemUpdating> itemUpdater; // @synthesize itemUpdater=_itemUpdater;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)initWithMediaRoutingIdentifier:(id)arg1;	// IMP=0x0000000000432244
- (id)initWithHome:(id)arg1;	// IMP=0x00000000004321c2

@end

