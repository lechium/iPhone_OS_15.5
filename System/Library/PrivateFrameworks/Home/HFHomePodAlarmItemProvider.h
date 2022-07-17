//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemProvider
{
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 8 = 0x8
    HFAccessorySettingMobileTimerAdapter *_mobileTimerAdapter;	// 16 = 0x10
    NSMutableDictionary *_alarmIDToItemMap;	// 24 = 0x18
    NSMutableSet *_alarmItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000021703a
@property(readonly, nonatomic) NSMutableSet *alarmItems; // @synthesize alarmItems=_alarmItems;
@property(readonly, nonatomic) NSMutableDictionary *alarmIDToItemMap; // @synthesize alarmIDToItemMap=_alarmIDToItemMap;
@property(readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (id)reloadItems;	// IMP=0x0000000000216b22
- (id)items;	// IMP=0x0000000000216ada
- (id)initWithMediaProfileContainer:(id)arg1;	// IMP=0x00000000002169cb

@end
