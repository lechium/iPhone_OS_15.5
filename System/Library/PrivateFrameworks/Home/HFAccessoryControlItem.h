//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessory;

@interface HFAccessoryControlItem
{
    HMAccessory *_accessory;	// 8 = 0x8
}

+ (Class)valueClass;	// IMP=0x00000000001ed5ab
- (void).cxx_destruct;	// IMP=0x00000000001edcf3
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (_Bool)supportsItemRepresentingServices:(id)arg1;	// IMP=0x00000000001edc4d
- (id)normalizedValueForValue:(id)arg1;	// IMP=0x00000000001edc37
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x00000000001edc2a
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x00000000001edc11
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000001ed8d6
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000001ed7e5
- (id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000001ed671
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000001ed5bc

@end
