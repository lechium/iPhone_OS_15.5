//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INWorkoutGoalUnitTypeResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x0000000000169a7a
+ (id)confirmationRequiredWithWorkoutGoalUnitTypeToConfirm:(long long)arg1;	// IMP=0x00000000001699cf
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x00000000001699bd
+ (id)successWithResolvedWorkoutGoalUnitType:(long long)arg1;	// IMP=0x0000000000169927
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000169cdc
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000169b72
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000169a8c

@end

