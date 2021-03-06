//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristic.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString, NSUUID;

@interface HMCharacteristic (HFDebugging) <HFStateDumpBuildable, HFHomeKitObject>
+ (id)hf_descriptionForProperties:(id)arg1;	// IMP=0x0000000000076f04
+ (id)_hf_visibleLightLevelTriggerValues;	// IMP=0x0000000000200147
+ (long long)_hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2 top:(unsigned long long)arg3 bottom:(unsigned long long)arg4;	// IMP=0x00000000001ff59e
+ (long long)hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2;	// IMP=0x00000000001ff4ff
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;	// IMP=0x00000000001fd860
+ (CDUnknownBlockType)hf_characteristicSortComparator;	// IMP=0x00000000001fd50b
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;	// IMP=0x00000000001fc97b
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;	// IMP=0x00000000001fc79d
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;	// IMP=0x00000000001fc5bf
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;	// IMP=0x00000000001fc54a
+ (id)hf_descriptionForCharacteristicType:(id)arg1;	// IMP=0x00000000001fc315
+ (id)_hf_valueRangeCharacteristicTypeToVisibleTriggerValueStepMap;	// IMP=0x00000000001fc1e4
+ (id)_hf_valueRangeCharacteristicTypeToAbnormalValueMap;	// IMP=0x00000000001fc02b
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;	// IMP=0x00000000001fbe93
+ (id)hf_abnormalValueForSensorCharacteristicType:(id)arg1;	// IMP=0x00000000001fbe0a
+ (id)hf_defaultAbnormalValueForValueRangeSensorCharacteristicType:(id)arg1;	// IMP=0x00000000001fbd87
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;	// IMP=0x00000000001fbd04
+ (id)hf_sensingCharacteristicTypes;	// IMP=0x00000000001fbb86
+ (id)hf_alarmCharacteristicTypes;	// IMP=0x00000000001fba39
+ (id)hf_continuousValueRangeCharacteristicTypes;	// IMP=0x00000000001fb8e4
+ (id)hf_valueRangeCharacteristicTypes;	// IMP=0x00000000001fb797
+ (id)hf_powerStateCharacteristicTypes;	// IMP=0x00000000001fb708
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;	// IMP=0x00000000002001a8
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00000000000771b9
- (id)_hf_stepValue;	// IMP=0x00000000001fff59
- (id)_hf_triggerValuesWithMinStepValue:(id)arg1;	// IMP=0x00000000001ffbba
- (id)_hf_lightLevelVisibleTriggerValues;	// IMP=0x00000000001ff85e
- (id)hf_visibleTriggerValues;	// IMP=0x00000000001ff3c9
- (id)hf_triggerValues;	// IMP=0x00000000001ff11f
- (id)hf_maximumTriggerValue;	// IMP=0x00000000001ff0cf
- (id)hf_minimumTriggerValue;	// IMP=0x00000000001ff02b
- (id)hf_thresholdValueForRange:(id)arg1;	// IMP=0x00000000001fed91
- (id)hf_valueAfterTriggerValue:(id)arg1;	// IMP=0x00000000001fecc9
- (id)hf_valueBeforeTriggerValue:(id)arg1;	// IMP=0x00000000001fec19
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;	// IMP=0x00000000001fe866
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;	// IMP=0x00000000001fe72c
- (id)hf_eventTriggersForTriggerValue:(id)arg1;	// IMP=0x00000000001fe26d
- (id)hf_eventTriggers;	// IMP=0x00000000001fdee3
- (id)hf_home;	// IMP=0x00000000001fde69
- (id)hf_programmableSwitchValidValueSet;	// IMP=0x00000000001fda4b
- (_Bool)hf_shouldCaptureInActionSets;	// IMP=0x00000000001fd9c1
- (long long)hf_sortPriority;	// IMP=0x00000000001fd4ad
- (id)hf_associatedCharacteristicType;	// IMP=0x00000000001fc4e0
- (id)hf_defaultValue;	// IMP=0x00000000001fc402
- (_Bool)hf_isReadable;	// IMP=0x00000000001fc3b4
- (_Bool)hf_isWritable;	// IMP=0x00000000001fc366
- (id)hf_characteristicTypeDescription;	// IMP=0x00000000001fc2ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

