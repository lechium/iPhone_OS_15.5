//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFAccessoryItem, HMAccessory, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryControlItemProvider
{
    HMAccessory *_accessory;	// 8 = 0x8
    HFAccessoryItem *_accessoryItem;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    NSSet *_previousControlItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000027f5a4
@property(retain, nonatomic) NSSet *previousControlItems; // @synthesize previousControlItems=_previousControlItems;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) HFAccessoryItem *accessoryItem; // @synthesize accessoryItem=_accessoryItem;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)items;	// IMP=0x000000000027f4fe
- (id)invalidationReasons;	// IMP=0x000000000027f417
- (id)reloadItems;	// IMP=0x000000000027efdf
- (id)initWithAccessoryItem:(id)arg1;	// IMP=0x000000000027ef40

@end
