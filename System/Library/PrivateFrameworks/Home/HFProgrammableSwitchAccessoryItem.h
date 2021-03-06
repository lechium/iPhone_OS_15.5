//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryRepresentableItem-Protocol.h>
#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMHome, NSSet, NSString;
@protocol HFAccessoryRepresentable, HFCharacteristicValueSource, HFHomeKitObject;

@interface HFProgrammableSwitchAccessoryItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFServiceLikeBuilderCreating, HFActionBuilderFactory>
{
    HMAccessory *_accessory;	// 8 = 0x8
    id <HFCharacteristicValueSource> _valueSource;	// 16 = 0x10
}

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;	// IMP=0x000000000017b6a2
- (void).cxx_destruct;	// IMP=0x0000000000052098
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)namingComponentForHomeKitObject;	// IMP=0x0000000000051feb
- (id)currentStateActionBuildersForHome:(id)arg1;	// IMP=0x0000000000051f81
- (_Bool)actionsMayRequireDeviceUnlock;	// IMP=0x0000000000051f79
- (_Bool)containsActions;	// IMP=0x0000000000051f71
- (id)serviceLikeBuilderInHome:(id)arg1;	// IMP=0x0000000000051ee4
- (_Bool)shouldReduceOptionItemsForNotifyingCharacteristics;	// IMP=0x0000000000051edc
@property(readonly, nonatomic) NSSet *services;
- (id)accessories;	// IMP=0x0000000000051db2
@property(readonly, nonatomic) HMHome *home;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithValueSource:(id)arg1;	// IMP=0x0000000000051cb4
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000050f1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050ecc
- (id)init;	// IMP=0x0000000000050e17
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;	// IMP=0x0000000000050d75
@property(readonly, nonatomic) id <HFAccessoryRepresentable> accessoryRepresentableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

