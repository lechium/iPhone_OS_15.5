//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INRadioTypeResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x000000000025e4a3
+ (id)confirmationRequiredWithRadioTypeToConfirm:(long long)arg1;	// IMP=0x000000000025e3f8
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x000000000025e3e6
+ (id)successWithResolvedRadioType:(long long)arg1;	// IMP=0x000000000025e350
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000025e6c8
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000025e5a0
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000025e4b5

@end

