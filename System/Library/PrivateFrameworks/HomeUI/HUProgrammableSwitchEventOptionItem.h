//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCharacteristic;
@protocol HFCharacteristicValueSource;

@interface HUProgrammableSwitchEventOptionItem
{
    id <HFCharacteristicValueSource> _valueSource;	// 8 = 0x8
}

+ (id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg1 triggerValue:(id)arg2 latestResults:(id)arg3;	// IMP=0x0000000000301c31
+ (id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;	// IMP=0x0000000000301a96
+ (id)_sectionTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;	// IMP=0x0000000000301954
+ (id)_longformTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;	// IMP=0x000000000030177f
+ (id)_shortformTitleForLatestResults:(id)arg1;	// IMP=0x0000000000301760
- (void).cxx_destruct;	// IMP=0x0000000000302026
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000002ffc04
@property(readonly, nonatomic) HMCharacteristic *characteristic;
- (id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2;	// IMP=0x00000000002ffaff
- (id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2;	// IMP=0x00000000002ffa4a
- (id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2;	// IMP=0x00000000002ff995
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 valueSource:(id)arg3;	// IMP=0x00000000002ff75b

@end
