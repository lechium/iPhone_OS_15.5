//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFAccessoryInfoItem, HFAccessoryNetworkInfoItem, HMAccessory, HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryInfoDetailsItemProvider
{
    HMHome *_home;	// 8 = 0x8
    id <HFCharacteristicValueSource> _valueSource;	// 16 = 0x10
    NSMutableSet *_accessoryInfoDetailItems;	// 24 = 0x18
    HMAccessory *_accessory;	// 32 = 0x20
    HFAccessoryInfoItem *_firmwareItem;	// 40 = 0x28
    HFAccessoryInfoItem *_softwareItem;	// 48 = 0x30
    HFAccessoryNetworkInfoItem *_networkItem;	// 56 = 0x38
}

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;	// IMP=0x000000000010893d
+ (CDUnknownBlockType)accessoryInfoServiceDetailComparator;	// IMP=0x0000000000107b51
+ (id)preferredCharacteristicOrderArray;	// IMP=0x00000000001074bc
- (void).cxx_destruct;	// IMP=0x0000000000108b49
@property(readonly, nonatomic) HFAccessoryNetworkInfoItem *networkItem; // @synthesize networkItem=_networkItem;
@property(readonly, nonatomic) HFAccessoryInfoItem *softwareItem; // @synthesize softwareItem=_softwareItem;
@property(readonly, nonatomic) HFAccessoryInfoItem *firmwareItem; // @synthesize firmwareItem=_firmwareItem;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSMutableSet *accessoryInfoDetailItems; // @synthesize accessoryInfoDetailItems=_accessoryInfoDetailItems;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)invalidationReasons;	// IMP=0x0000000000107a5c
- (id)items;	// IMP=0x0000000000107a4a
- (id)reloadItems;	// IMP=0x0000000000107969
- (void)toggleAccessoryInfoItem:(id)arg1;	// IMP=0x0000000000107833
- (_Bool)canToggleAccessoryInfoItem:(id)arg1;	// IMP=0x000000000010779a
- (_Bool)supportsWiFiStrengthDisplay:(id)arg1;	// IMP=0x00000000001076fd
- (id)initWithHome:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000010765b
- (id)init;	// IMP=0x00000000001075a6

@end

